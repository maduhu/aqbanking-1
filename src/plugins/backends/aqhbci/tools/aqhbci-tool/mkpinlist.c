/***************************************************************************
 $RCSfile$
 -------------------
 cvs         : $Id$
 begin       : Tue May 03 2005
 copyright   : (C) 2005 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif


#include "globals.h"

#include <gwenhywfar/text.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>


int mkPinList(AB_BANKING *ab,
              GWEN_DB_NODE *dbArgs,
              int argc,
              char **argv) {
  GWEN_DB_NODE *db;
  AB_PROVIDER *pro;
  AH_HBCI *hbci;
  int fd;
  int rv;
  const char *outFile;
  const GWEN_ARGS args[]={
  {
    GWEN_ARGS_FLAGS_HAS_ARGUMENT, /* flags */
    GWEN_ArgsTypeChar,            /* type */
    "outFile",                    /* name */
    0,                            /* minnum */
    1,                            /* maxnum */
    "o",                          /* short option */
    "outfile",                    /* long option */
    "Specify the name of the output file", /* short description */
    "Specify the name of the output file"  /* long description */
  },
  {
    GWEN_ARGS_FLAGS_HELP | GWEN_ARGS_FLAGS_LAST, /* flags */
    GWEN_ArgsTypeInt,             /* type */
    "help",                       /* name */
    0,                            /* minnum */
    0,                            /* maxnum */
    "h",                          /* short option */
    "help",                       /* long option */
    "Show this help screen",      /* short description */
    "Show this help screen"       /* long description */
  }
  };

  db=GWEN_DB_GetGroup(dbArgs, GWEN_DB_FLAGS_DEFAULT, "local");
  rv=GWEN_Args_Check(argc, argv, 1,
                     0 /*GWEN_ARGS_MODE_ALLOW_FREEPARAM*/,
                     args,
                     db);
  if (rv==GWEN_ARGS_RESULT_ERROR) {
    fprintf(stderr, "ERROR: Could not parse arguments\n");
    return 1;
  }
  else if (rv==GWEN_ARGS_RESULT_HELP) {
    GWEN_BUFFER *ubuf;

    ubuf=GWEN_Buffer_new(0, 1024, 0, 1);
    if (GWEN_Args_Usage(args, ubuf, GWEN_ArgsOutTypeTXT)) {
      fprintf(stderr, "ERROR: Could not create help string\n");
      return 1;
    }
    fprintf(stderr, "%s\n", GWEN_Buffer_GetStart(ubuf));
    GWEN_Buffer_free(ubuf);
    return 0;
  }

  outFile=GWEN_DB_GetCharValue(db, "outfile", 0, 0);

  rv=AB_Banking_Init(ab);
  if (rv) {
    DBG_ERROR(0, "Error on init (%d)", rv);
    return 2;
  }

  pro=AB_Banking_GetProvider(ab, "aqhbci");
  assert(pro);
  hbci=AH_Provider_GetHbci(pro);
  assert(hbci);

  if (outFile==0)
    fd=fileno(stdout);
  else
    fd=open(outFile, O_RDWR | O_CREAT | O_EXCL,
            S_IRUSR | S_IWUSR);
  if (fd<0) {
    DBG_ERROR(0, "Error selecting output file: %s",
              strerror(errno));
    return 4;
  }
  else {
    GWEN_BUFFEREDIO *bio;
    GWEN_ERRORCODE err;
    AH_USER_LIST2 *ul;

    bio=GWEN_BufferedIO_File_new(fd);
    if (!outFile)
      GWEN_BufferedIO_SubFlags(bio, GWEN_BUFFEREDIO_FLAGS_CLOSE);
    GWEN_BufferedIO_SetWriteBuffer(bio, 0, 1024);

    GWEN_BufferedIO_WriteLine(bio,
                              "# This is a PIN file to be used "
                              "with AqBanking");
    GWEN_BufferedIO_WriteLine(bio,
                              "# Please insert the PINs/passwords "
                              "for the users below");

    ul=AH_HBCI_GetUsers(hbci, 0, "*", "*");
    if (ul) {
      AH_USER_LIST2_ITERATOR *uit;
  
      uit=AH_User_List2_First(ul);
      if (uit) {
        AH_USER *u;
  
        u=AH_User_List2Iterator_Data(uit);
        assert(u);
  
        while(u) {
          AH_MEDIUM *m;
          AH_BANK *b;
          const char *s;
          const char *name;

          b=AH_User_GetBank(u);
          assert(b);

          GWEN_BufferedIO_WriteLine(bio, "");
          GWEN_BufferedIO_Write(bio, "# User \"");
          s=AH_User_GetUserId(u);
          assert(s);
          GWEN_BufferedIO_Write(bio, s);
          GWEN_BufferedIO_Write(bio, "\" at \"");
          s=AH_Bank_GetBankName(b);
          if (!s || !*s)
            s=AH_Bank_GetBankId(b);
          GWEN_BufferedIO_Write(bio, s);
          GWEN_BufferedIO_WriteLine(bio, "\"");

          m=AH_User_GetMedium(u);
          assert(m);

          name=AH_Medium_GetMediumName(m);
          if (name) {
            GWEN_BUFFER *nbuf;
            GWEN_BUFFER *obuf;

            nbuf=GWEN_Buffer_new(0, 256 ,0 ,1);
            GWEN_Buffer_AppendString(nbuf, "PASSWORD::");
            GWEN_Buffer_AppendString(nbuf, name);
            obuf=GWEN_Buffer_new(0, 256 ,0 ,1);
            if (GWEN_Text_EscapeToBuffer(GWEN_Buffer_GetStart(nbuf),
                                         obuf)) {
              DBG_ERROR(0, "Error escaping name to buffer");
              return 3;
            }
            GWEN_BufferedIO_Write(bio, "\"");
            GWEN_BufferedIO_Write(bio, GWEN_Buffer_GetStart(obuf));
            GWEN_BufferedIO_WriteLine(bio, "\" = \"\"");

            GWEN_Buffer_free(obuf);
            GWEN_Buffer_free(nbuf);
          }

          u=AH_User_List2Iterator_Next(uit);
        }
        AH_User_List2Iterator_free(uit);
      }
    }

    err=GWEN_BufferedIO_Close(bio);
    if (!GWEN_Error_IsOk(err)) {
      DBG_ERROR_ERR(0, err);
      GWEN_BufferedIO_Abandon(bio);
      GWEN_BufferedIO_free(bio);
      return 4;
    }
    GWEN_BufferedIO_free(bio);
  }


  rv=AB_Banking_Fini(ab);
  if (rv) {
    fprintf(stderr, "ERROR: Error on deinit (%d)\n", rv);
    return 5;
  }

  return 0;
}



