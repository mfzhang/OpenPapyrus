   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*               CLIPS Version 6.24  07/01/05          */
   /*                                                     */
   /*                                                     */
   /*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Brian L. Donnell                                     */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*      6.23: Corrected compilation errors for files         */
/*            generated by constructs-to-c. DR0861           */
/*                                                           */                                      
/*      6.24: The DescribeClass macros were incorrectly      */
/*            defined. DR0862                                */
/*                                                           */
/*            Added allowed-classes slot facet.              */
/*                                                           */
/*            Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*************************************************************/

#ifndef _H_classexm
#define _H_classexm

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _CLASSEXM_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#if ENVIRONMENT_API_ONLY
#define BrowseClasses(theEnv,a,b) EnvBrowseClasses(theEnv,a,b)
#define DescribeClass(theEnv,a,b) EnvDescribeClass(theEnv,a,b)
#define SlotDirectAccessP(theEnv,a,b) EnvSlotDirectAccessP(theEnv,a,b)
#define SlotExistP(theEnv,a,b,c) EnvSlotExistP(theEnv,a,b,c)
#define SlotInitableP(theEnv,a,b) EnvSlotInitableP(theEnv,a,b)
#define SlotPublicP(theEnv,a,b) EnvSlotPublicP(theEnv,a,b)
#define SlotWritableP(theEnv,a,b) EnvSlotWritableP(theEnv,a,b)
#define SubclassP(theEnv,a,b) EnvSubclassP(theEnv,a,b)
#define SuperclassP(theEnv,a,b) EnvSuperclassP(theEnv,a,b)
#define SlotDefaultValue(theEnv,a,b,c) EnvSlotDefaultValue(theEnv,a,b,c)
#else
#define BrowseClasses(a,b) EnvBrowseClasses(GetCurrentEnvironment(),a,b)
#define DescribeClass(a,b) EnvDescribeClass(GetCurrentEnvironment(),a,b)
#define SlotDirectAccessP(a,b) EnvSlotDirectAccessP(GetCurrentEnvironment(),a,b)
#define SlotExistP(a,b,c) EnvSlotExistP(GetCurrentEnvironment(),a,b,c)
#define SlotInitableP(a,b) EnvSlotInitableP(GetCurrentEnvironment(),a,b)
#define SlotPublicP(a,b) EnvSlotPublicP(GetCurrentEnvironment(),a,b)
#define SlotWritableP(a,b) EnvSlotWritableP(GetCurrentEnvironment(),a,b)
#define SubclassP(a,b) EnvSubclassP(GetCurrentEnvironment(),a,b)
#define SuperclassP(a,b) EnvSuperclassP(GetCurrentEnvironment(),a,b)
#define SlotDefaultValue(a,b,c) EnvSlotDefaultValue(GetCurrentEnvironment(),a,b,c)
#endif

#if DEBUGGING_FUNCTIONS
LOCALE void BrowseClassesCommand(void *);
LOCALE void EnvBrowseClasses(void *,char *,void *);
LOCALE void DescribeClassCommand(void *);
LOCALE void EnvDescribeClass(void *,char *,void *);
#endif

LOCALE char *GetCreateAccessorString(void *);

LOCALE void *GetDefclassModuleCommand(void *);
LOCALE intBool SuperclassPCommand(void *);
LOCALE intBool EnvSuperclassP(void *,void *,void *);
LOCALE intBool SubclassPCommand(void *);
LOCALE intBool EnvSubclassP(void *,void *,void *);
LOCALE int SlotExistPCommand(void *);
LOCALE intBool EnvSlotExistP(void *,void *,char *,intBool);
LOCALE int MessageHandlerExistPCommand(void *);
LOCALE intBool SlotWritablePCommand(void *);
LOCALE intBool EnvSlotWritableP(void *,void *,char *);
LOCALE intBool SlotInitablePCommand(void *);
LOCALE intBool EnvSlotInitableP(void *,void *,char *);
LOCALE intBool SlotPublicPCommand(void *);
LOCALE intBool EnvSlotPublicP(void *,void *,char *);
LOCALE intBool SlotDirectAccessPCommand(void *);
LOCALE intBool EnvSlotDirectAccessP(void *,void *,char *);
LOCALE void SlotDefaultValueCommand(void *,DATA_OBJECT_PTR);
LOCALE intBool EnvSlotDefaultValue(void *,void *,char *,DATA_OBJECT_PTR);
LOCALE int ClassExistPCommand(void *);

#ifndef _CLASSEXM_SOURCE_
#endif

#endif
