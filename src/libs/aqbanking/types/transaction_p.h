/* This file is auto-generated from "transaction.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef TRANSACTION_P_H
#define TRANSACTION_P_H

#include "transaction_l.h"

struct AB_TRANSACTION {
  GWEN_INHERIT_ELEMENT(AB_TRANSACTION)
  GWEN_LIST_ELEMENT(AB_TRANSACTION)
  int _usage;
  int _modified;

  char *localCountry;
  char *localBankCode;
  char *localBranchId;
  char *localAccountNumber;
  char *localSuffix;
  char *localName;
  char *remoteCountry;
  char *remoteBankCode;
  char *remoteBranchId;
  char *remoteAccountNumber;
  char *remoteSuffix;
  GWEN_STRINGLIST *remoteName;
  GWEN_TYPE_UINT32 uniqueId;
  GWEN_TIME *valutaDate;
  GWEN_TIME *date;
  AB_VALUE *value;
  AB_SPLIT_LIST *splits;
  int textKey;
  char *transactionKey;
  char *customerReference;
  char *bankReference;
  int transactionCode;
  char *transactionText;
  char *primanota;
  char *fiId;
  GWEN_STRINGLIST *purpose;
  GWEN_STRINGLIST *category;
};



/** @name Local Account Info
 *
This group contains information about the local account. Functions of this group are also available in AB_SPLIT, please make your application check for splits first and use the values here as a fallback.
*/
/*@{*/







/*@}*/

/** @name Remote Account Info
 *
This group contains information about the remote account. Functions of this group are also available in AB_SPLIT, please make your application check for splits first and use the values here as a fallback.
*/
/*@{*/







/*@}*/


/** @name Dates
*/
/*@{*/


/*@}*/

/** @name Value
 *
Functions of this group are also available in AB_SPLIT, please make your application check for splits first and use the values here as a fallback.
*/
/*@{*/


/*@}*/


/** @name Info Which Is Not Supported by All Backends
 *
<p>
This group contains information which differ between backends.

</p>

<p>
Some of this information might not even be

<b>
supported

</b>

by every backends.

</p>
*/
/*@{*/











/*@}*/


#endif /* TRANSACTION_P_H */
