/* This file is auto-generated from "transactionlimits.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef TRANSACTIONLIMITS_H
#define TRANSACTIONLIMITS_H

/** @page P_AB_TRANSACTION_LIMITS_PUBLIC AB_TransactionLimits (public)
This page describes the properties of AB_TRANSACTION_LIMITS
This type describes the limits for fields of an @ref AB_TRANSACTION. The limits have the following meanings:
<ul>
  <li>maxLenSOMETHING: if 0 then this limit is unknown, if -1 then the described element is not allowed to be set in the transaction. All other values represent the maximum lenght of the described field.</li>
  <li>minLenSOMETHING: if 0 then this limit is unknown. All other values represent the minimum lenght of the described field.</li>
  <li>maxLinesSOMETHING: if 0 then this limit is unknown All other values represent the maximum number of lines for the described field.</li>
  <li>minLinesSOMETHING: if 0 then this limit is unknown. All other values represent the minimum number of lines for the described field.</li>
  <li>valuesSOMETHING: A list of allowed values (as string). If this list is empty then there all values are allowed (those lists @b exist in any case, so the appropriate getter function will never return NULL).</li>
</ul>
So if you want to check whether an given field is at all allowed you must check whether &quot;maxLenSOMETHING&quot; has a value of &quot;-1&quot;.<h3>Issuer Name</h3>
<p>
Limits for the issuer name.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenLocalName
<h4>MaxLenLocalName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenLocalName, 
get it with @ref AB_TransactionLimits_GetMaxLenLocalName
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenLocalName
<h4>MinLenLocalName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenLocalName, 
get it with @ref AB_TransactionLimits_GetMinLenLocalName
</p>

<h3>Payee Name</h3>
<p>
Limits for the payee name.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenRemoteName
<h4>MaxLenRemoteName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenRemoteName, 
get it with @ref AB_TransactionLimits_GetMaxLenRemoteName
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenRemoteName
<h4>MinLenRemoteName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenRemoteName, 
get it with @ref AB_TransactionLimits_GetMinLenRemoteName
</p>

@anchor AB_TRANSACTION_LIMITS_MaxLinesRemoteName
<h4>MaxLinesRemoteName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLinesRemoteName, 
get it with @ref AB_TransactionLimits_GetMaxLinesRemoteName
</p>

@anchor AB_TRANSACTION_LIMITS_MinLinesRemoteName
<h4>MinLinesRemoteName</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLinesRemoteName, 
get it with @ref AB_TransactionLimits_GetMinLinesRemoteName
</p>

<h3>Local Bank Code</h3>
<p>
Limits for local bank code.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenLocalBankCode
<h4>MaxLenLocalBankCode</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenLocalBankCode, 
get it with @ref AB_TransactionLimits_GetMaxLenLocalBankCode
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenLocalBankCode
<h4>MinLenLocalBankCode</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenLocalBankCode, 
get it with @ref AB_TransactionLimits_GetMinLenLocalBankCode
</p>

<h3>Local Account Id</h3>
<p>
Limits for local account id.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenLocalAccountNumber
<h4>MaxLenLocalAccountNumber</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenLocalAccountNumber, 
get it with @ref AB_TransactionLimits_GetMaxLenLocalAccountNumber
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenLocalAccountNumber
<h4>MinLenLocalAccountNumber</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenLocalAccountNumber, 
get it with @ref AB_TransactionLimits_GetMinLenLocalAccountNumber
</p>

<h3>Local Account Number</h3>
<p>
Limits for local account id suffix.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenLocalSuffix
<h4>MaxLenLocalSuffix</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenLocalSuffix, 
get it with @ref AB_TransactionLimits_GetMaxLenLocalSuffix
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenLocalSuffix
<h4>MinLenLocalSuffix</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenLocalSuffix, 
get it with @ref AB_TransactionLimits_GetMinLenLocalSuffix
</p>

<h3>Remote Bank Code</h3>
<p>
Limits for remote bank code.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenRemoteBankCode
<h4>MaxLenRemoteBankCode</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenRemoteBankCode, 
get it with @ref AB_TransactionLimits_GetMaxLenRemoteBankCode
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenRemoteBankCode
<h4>MinLenRemoteBankCode</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenRemoteBankCode, 
get it with @ref AB_TransactionLimits_GetMinLenRemoteBankCode
</p>

<h3>Remote Account Number</h3>
<p>
Limits for remote account number.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenRemoteAccountNumber
<h4>MaxLenRemoteAccountNumber</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenRemoteAccountNumber, 
get it with @ref AB_TransactionLimits_GetMaxLenRemoteAccountNumber
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenRemoteAccountNumber
<h4>MinLenRemoteAccountNumber</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenRemoteAccountNumber, 
get it with @ref AB_TransactionLimits_GetMinLenRemoteAccountNumber
</p>

<h3>Remote Account Number Suffix</h3>
<p>
Limits for remote account id suffix.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenRemoteSuffix
<h4>MaxLenRemoteSuffix</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenRemoteSuffix, 
get it with @ref AB_TransactionLimits_GetMaxLenRemoteSuffix
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenRemoteSuffix
<h4>MinLenRemoteSuffix</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenRemoteSuffix, 
get it with @ref AB_TransactionLimits_GetMinLenRemoteSuffix
</p>

<h3>Remote IBAN</h3>
<p>
Limits for remote IAN.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenRemoteIban
<h4>MaxLenRemoteIban</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenRemoteIban, 
get it with @ref AB_TransactionLimits_GetMaxLenRemoteIban
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenRemoteIban
<h4>MinLenRemoteIban</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenRemoteIban, 
get it with @ref AB_TransactionLimits_GetMinLenRemoteIban
</p>

<h3>Text Key</h3>
<p>
Limits for textKey.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenTextKey
<h4>MaxLenTextKey</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenTextKey, 
get it with @ref AB_TransactionLimits_GetMaxLenTextKey
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenTextKey
<h4>MinLenTextKey</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenTextKey, 
get it with @ref AB_TransactionLimits_GetMinLenTextKey
</p>

@anchor AB_TRANSACTION_LIMITS_ValuesTextKey
<h4>ValuesTextKey</h4>
<p>
This string list contains one entry for every supported text key. The values must be positive integers in decimal form (no leading zero, no comma or decimal point).</p>
<p>
Set this property with @ref AB_TransactionLimits_SetValuesTextKey, 
get it with @ref AB_TransactionLimits_GetValuesTextKey
</p>

<h3>Customer Reference</h3>
<p>
Limits for customer reference.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenCustomerReference
<h4>MaxLenCustomerReference</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenCustomerReference, 
get it with @ref AB_TransactionLimits_GetMaxLenCustomerReference
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenCustomerReference
<h4>MinLenCustomerReference</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenCustomerReference, 
get it with @ref AB_TransactionLimits_GetMinLenCustomerReference
</p>

<h3>Bank Reference</h3>
<p>
Limits for bank reference.</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenBankReference
<h4>MaxLenBankReference</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenBankReference, 
get it with @ref AB_TransactionLimits_GetMaxLenBankReference
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenBankReference
<h4>MinLenBankReference</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenBankReference, 
get it with @ref AB_TransactionLimits_GetMinLenBankReference
</p>

<h3>Purpose</h3>
<p>
Limits for purpose (called
<i>memo</i>
in some apps).</p>
@anchor AB_TRANSACTION_LIMITS_MaxLenPurpose
<h4>MaxLenPurpose</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLenPurpose, 
get it with @ref AB_TransactionLimits_GetMaxLenPurpose
</p>

@anchor AB_TRANSACTION_LIMITS_MinLenPurpose
<h4>MinLenPurpose</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLenPurpose, 
get it with @ref AB_TransactionLimits_GetMinLenPurpose
</p>

@anchor AB_TRANSACTION_LIMITS_MaxLinesPurpose
<h4>MaxLinesPurpose</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMaxLinesPurpose, 
get it with @ref AB_TransactionLimits_GetMaxLinesPurpose
</p>

@anchor AB_TRANSACTION_LIMITS_MinLinesPurpose
<h4>MinLinesPurpose</h4>
<p>
</p>
<p>
Set this property with @ref AB_TransactionLimits_SetMinLinesPurpose, 
get it with @ref AB_TransactionLimits_GetMinLinesPurpose
</p>

*/
#include <gwenhywfar/db.h>
#include <gwenhywfar/misc.h>
#include <gwenhywfar/list2.h>
#include <gwenhywfar/types.h>
#include <gwenhywfar/stringlist.h>
#include <aqbanking/error.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AB_TRANSACTION_LIMITS AB_TRANSACTION_LIMITS;

GWEN_LIST_FUNCTION_LIB_DEFS(AB_TRANSACTION_LIMITS, AB_TransactionLimits, AQBANKING_API)
AB_TRANSACTION_LIMITS_LIST *AB_TransactionLimits_List_dup(const AB_TRANSACTION_LIMITS_LIST *stl);

GWEN_LIST2_FUNCTION_LIB_DEFS(AB_TRANSACTION_LIMITS, AB_TransactionLimits, AQBANKING_API)

/** Destroys all objects stored in the given LIST2 and the list itself
*/
AQBANKING_API void AB_TransactionLimits_List2_freeAll(AB_TRANSACTION_LIMITS_LIST2 *stl);
/** Creates a deep copy of the given LIST2.
*/
AQBANKING_API AB_TRANSACTION_LIMITS_LIST2 *AB_TransactionLimits_List2_dup(const AB_TRANSACTION_LIMITS_LIST2 *stl);

/** Creates a new object.
*/
AQBANKING_API AB_TRANSACTION_LIMITS *AB_TransactionLimits_new();
/** Destroys the given object.
*/
AQBANKING_API void AB_TransactionLimits_free(AB_TRANSACTION_LIMITS *st);
/** Increments the usage counter of the given object, so an additional free() is needed to destroy the object.
*/
AQBANKING_API void AB_TransactionLimits_Attach(AB_TRANSACTION_LIMITS *st);
/** Creates and returns a deep copy of thegiven object.
*/
AQBANKING_API AB_TRANSACTION_LIMITS *AB_TransactionLimits_dup(const AB_TRANSACTION_LIMITS*st);
/** Creates an object from the data in the given GWEN_DB_NODE
*/
AQBANKING_API AB_TRANSACTION_LIMITS *AB_TransactionLimits_fromDb(GWEN_DB_NODE *db);
/** Stores an object in the given GWEN_DB_NODE
*/
AQBANKING_API int AB_TransactionLimits_toDb(const AB_TRANSACTION_LIMITS*st, GWEN_DB_NODE *db);
/** Returns 0 if this object has not been modified, !=0 otherwise
*/
AQBANKING_API int AB_TransactionLimits_IsModified(const AB_TRANSACTION_LIMITS *st);
/** Sets the modified state of the given object
*/
AQBANKING_API void AB_TransactionLimits_SetModified(AB_TRANSACTION_LIMITS *st, int i);


/** @name Issuer Name
 *
Limits for the issuer name.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalName
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenLocalName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalName
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenLocalName(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenLocalName
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenLocalName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenLocalName
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenLocalName(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Payee Name
 *
Limits for the payee name.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteName
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenRemoteName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteName
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenRemoteName(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteName
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenRemoteName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteName
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenRemoteName(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLinesRemoteName
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLinesRemoteName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLinesRemoteName
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLinesRemoteName(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLinesRemoteName
*/
AQBANKING_API int AB_TransactionLimits_GetMinLinesRemoteName(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLinesRemoteName
*/
AQBANKING_API void AB_TransactionLimits_SetMinLinesRemoteName(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Local Bank Code
 *
Limits for local bank code.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalBankCode
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenLocalBankCode(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalBankCode
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenLocalBankCode(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenLocalBankCode
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenLocalBankCode(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenLocalBankCode
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenLocalBankCode(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Local Account Id
 *
Limits for local account id.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalAccountNumber
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenLocalAccountNumber(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalAccountNumber
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenLocalAccountNumber(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenLocalAccountNumber
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenLocalAccountNumber(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenLocalAccountNumber
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenLocalAccountNumber(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Local Account Number
 *
Limits for local account id suffix.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalSuffix
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenLocalSuffix(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenLocalSuffix
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenLocalSuffix(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenLocalSuffix
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenLocalSuffix(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenLocalSuffix
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenLocalSuffix(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Remote Bank Code
 *
Limits for remote bank code.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteBankCode
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenRemoteBankCode(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteBankCode
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenRemoteBankCode(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteBankCode
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenRemoteBankCode(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteBankCode
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenRemoteBankCode(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Remote Account Number
 *
Limits for remote account number.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteAccountNumber
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenRemoteAccountNumber(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteAccountNumber
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenRemoteAccountNumber(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteAccountNumber
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenRemoteAccountNumber(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteAccountNumber
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenRemoteAccountNumber(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Remote Account Number Suffix
 *
Limits for remote account id suffix.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteSuffix
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenRemoteSuffix(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteSuffix
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenRemoteSuffix(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteSuffix
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenRemoteSuffix(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteSuffix
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenRemoteSuffix(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Remote IBAN
 *
Limits for remote IAN.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteIban
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenRemoteIban(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenRemoteIban
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenRemoteIban(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteIban
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenRemoteIban(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenRemoteIban
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenRemoteIban(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Text Key
 *
Limits for textKey.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenTextKey
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenTextKey(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenTextKey
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenTextKey(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenTextKey
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenTextKey(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenTextKey
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenTextKey(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_ValuesTextKey
*/
AQBANKING_API const GWEN_STRINGLIST *AB_TransactionLimits_GetValuesTextKey(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_ValuesTextKey
*/
AQBANKING_API void AB_TransactionLimits_SetValuesTextKey(AB_TRANSACTION_LIMITS *el, const GWEN_STRINGLIST *d);
AQBANKING_API void AB_TransactionLimits_AddValuesTextKey(AB_TRANSACTION_LIMITS *st, const char *d, int chk);
AQBANKING_API void AB_TransactionLimits_RemoveValuesTextKey(AB_TRANSACTION_LIMITS *st, const char *d);
AQBANKING_API void AB_TransactionLimits_ClearValuesTextKey(AB_TRANSACTION_LIMITS *st);
AQBANKING_API int AB_TransactionLimits_HasValuesTextKey(const AB_TRANSACTION_LIMITS *st, const char *d);

/*@}*/

/** @name Customer Reference
 *
Limits for customer reference.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenCustomerReference
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenCustomerReference(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenCustomerReference
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenCustomerReference(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenCustomerReference
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenCustomerReference(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenCustomerReference
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenCustomerReference(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Bank Reference
 *
Limits for bank reference.*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenBankReference
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenBankReference(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenBankReference
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenBankReference(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenBankReference
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenBankReference(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenBankReference
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenBankReference(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/

/** @name Purpose
 *
Limits for purpose (called
<i>memo</i>
in some apps).*/
/*@{*/

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLenPurpose
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLenPurpose(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLenPurpose
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLenPurpose(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLenPurpose
*/
AQBANKING_API int AB_TransactionLimits_GetMinLenPurpose(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLenPurpose
*/
AQBANKING_API void AB_TransactionLimits_SetMinLenPurpose(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MaxLinesPurpose
*/
AQBANKING_API int AB_TransactionLimits_GetMaxLinesPurpose(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MaxLinesPurpose
*/
AQBANKING_API void AB_TransactionLimits_SetMaxLinesPurpose(AB_TRANSACTION_LIMITS *el, int d);

/**
* Returns the property @ref AB_TRANSACTION_LIMITS_MinLinesPurpose
*/
AQBANKING_API int AB_TransactionLimits_GetMinLinesPurpose(const AB_TRANSACTION_LIMITS *el);
/**
* Set the property @ref AB_TRANSACTION_LIMITS_MinLinesPurpose
*/
AQBANKING_API void AB_TransactionLimits_SetMinLinesPurpose(AB_TRANSACTION_LIMITS *el, int d);

/*@}*/


#ifdef __cplusplus
} /* __cplusplus */
#endif


#endif /* TRANSACTIONLIMITS_H */
