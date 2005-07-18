/***************************************************************************
 $RCSfile$
 -------------------
 cvs         : $Id$
 begin       : Mon Mar 01 2004
 copyright   : (C) 2004 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/


#ifndef AQBANKING_JOBGETDATEDTRANSFERS_L_H
#define AQBANKING_JOBGETDATEDTRANSFERS_L_H


#include <aqbanking/job.h>
#include <aqbanking/jobgetdatedtransfers.h>

#ifdef __cplusplus
extern "C" {
#endif

AB_JOB *AB_JobGetDatedTransfers_fromDb(AB_ACCOUNT *a, GWEN_DB_NODE *db);
int AB_JobGetDatedTransfers_toDb(const AB_JOB *j, GWEN_DB_NODE *db);

#ifdef __cplusplus
}
#endif


#endif /* AQBANKING_JOBGETDATEDTRANSFERS_L_H */
