/***************************************************************************
 begin       : Mon Mar 01 2004
 copyright   : (C) 2004-2013 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 * This file is part of the project "AqBanking".                           *
 * Please see toplevel file COPYING of that project for license details.   *
 ***************************************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif


#include "jobinternaltransfer.h"
#include "jobinternaltransfer_be.h"
#include "job_l.h"

#include <stdlib.h>
#include <assert.h>
#include <string.h>




AB_JOB *AB_JobInternalTransfer_new(AB_ACCOUNT *a){
  return AB_Job_new(AB_Job_TypeInternalTransfer, a);
}



void AB_JobInternalTransfer_SetFieldLimits(AB_JOB *j,
					 AB_TRANSACTION_LIMITS *limits){
  AB_Job_SetFieldLimits(j, limits);
}



const AB_TRANSACTION_LIMITS *AB_JobInternalTransfer_GetFieldLimits(AB_JOB *j) {
  return AB_Job_GetFieldLimits(j);
}



int AB_JobInternalTransfer_SetTransaction(AB_JOB *j, const AB_TRANSACTION *t){
  return AB_Job_SetTransaction(j, t);
}



const AB_TRANSACTION *AB_JobInternalTransfer_GetTransaction(const AB_JOB *j){
  return AB_Job_GetTransaction(j);
}



