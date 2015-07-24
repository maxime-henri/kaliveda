// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FAZIAgeometry

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "KVISOFAZIA.h"
#include "KVSignal.h"
#include "KVFAZIABlock.h"
#include "KVPSAResult.h"
#include "KVCurrentSignal.h"
#include "KVDigitalFilter.h"
#include "KVChargeSignal.h"
#include "KVFAZIARawEvent.h"
#include "KVINDRAFAZIA.h"
#include "KVFAZIADetector.h"
#include "KVFAZIA.h"
#include "KVFAZIA_2B.h"
#include "KVFAZIASYM.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVFAZIABlock(void *p = 0);
   static void *newArray_KVFAZIABlock(Long_t size, void *p);
   static void delete_KVFAZIABlock(void *p);
   static void deleteArray_KVFAZIABlock(void *p);
   static void destruct_KVFAZIABlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIABlock*)
   {
      ::KVFAZIABlock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIABlock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIABlock", ::KVFAZIABlock::Class_Version(), "KVFAZIABlock.h", 9,
                  typeid(::KVFAZIABlock), DefineBehavior(ptr, ptr),
                  &::KVFAZIABlock::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIABlock) );
      instance.SetNew(&new_KVFAZIABlock);
      instance.SetNewArray(&newArray_KVFAZIABlock);
      instance.SetDelete(&delete_KVFAZIABlock);
      instance.SetDeleteArray(&deleteArray_KVFAZIABlock);
      instance.SetDestructor(&destruct_KVFAZIABlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIABlock*)
   {
      return GenerateInitInstanceLocal((::KVFAZIABlock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIABlock*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAFAZIA(void *p = 0);
   static void *newArray_KVINDRAFAZIA(Long_t size, void *p);
   static void delete_KVINDRAFAZIA(void *p);
   static void deleteArray_KVINDRAFAZIA(void *p);
   static void destruct_KVINDRAFAZIA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAFAZIA*)
   {
      ::KVINDRAFAZIA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAFAZIA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAFAZIA", ::KVINDRAFAZIA::Class_Version(), "KVINDRAFAZIA.h", 9,
                  typeid(::KVINDRAFAZIA), DefineBehavior(ptr, ptr),
                  &::KVINDRAFAZIA::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAFAZIA) );
      instance.SetNew(&new_KVINDRAFAZIA);
      instance.SetNewArray(&newArray_KVINDRAFAZIA);
      instance.SetDelete(&delete_KVINDRAFAZIA);
      instance.SetDeleteArray(&deleteArray_KVINDRAFAZIA);
      instance.SetDestructor(&destruct_KVINDRAFAZIA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAFAZIA*)
   {
      return GenerateInitInstanceLocal((::KVINDRAFAZIA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAFAZIA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIA_2B(void *p = 0);
   static void *newArray_KVFAZIA_2B(Long_t size, void *p);
   static void delete_KVFAZIA_2B(void *p);
   static void deleteArray_KVFAZIA_2B(void *p);
   static void destruct_KVFAZIA_2B(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIA_2B*)
   {
      ::KVFAZIA_2B *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIA_2B >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIA_2B", ::KVFAZIA_2B::Class_Version(), "KVFAZIA_2B.h", 9,
                  typeid(::KVFAZIA_2B), DefineBehavior(ptr, ptr),
                  &::KVFAZIA_2B::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIA_2B) );
      instance.SetNew(&new_KVFAZIA_2B);
      instance.SetNewArray(&newArray_KVFAZIA_2B);
      instance.SetDelete(&delete_KVFAZIA_2B);
      instance.SetDeleteArray(&deleteArray_KVFAZIA_2B);
      instance.SetDestructor(&destruct_KVFAZIA_2B);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIA_2B*)
   {
      return GenerateInitInstanceLocal((::KVFAZIA_2B*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIA_2B*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIA(void *p = 0);
   static void *newArray_KVFAZIA(Long_t size, void *p);
   static void delete_KVFAZIA(void *p);
   static void deleteArray_KVFAZIA(void *p);
   static void destruct_KVFAZIA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIA*)
   {
      ::KVFAZIA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIA", ::KVFAZIA::Class_Version(), "KVFAZIA.h", 11,
                  typeid(::KVFAZIA), DefineBehavior(ptr, ptr),
                  &::KVFAZIA::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIA) );
      instance.SetNew(&new_KVFAZIA);
      instance.SetNewArray(&newArray_KVFAZIA);
      instance.SetDelete(&delete_KVFAZIA);
      instance.SetDeleteArray(&deleteArray_KVFAZIA);
      instance.SetDestructor(&destruct_KVFAZIA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIA*)
   {
      return GenerateInitInstanceLocal((::KVFAZIA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIASYM(void *p = 0);
   static void *newArray_KVFAZIASYM(Long_t size, void *p);
   static void delete_KVFAZIASYM(void *p);
   static void deleteArray_KVFAZIASYM(void *p);
   static void destruct_KVFAZIASYM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIASYM*)
   {
      ::KVFAZIASYM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIASYM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIASYM", ::KVFAZIASYM::Class_Version(), "KVFAZIASYM.h", 9,
                  typeid(::KVFAZIASYM), DefineBehavior(ptr, ptr),
                  &::KVFAZIASYM::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIASYM) );
      instance.SetNew(&new_KVFAZIASYM);
      instance.SetNewArray(&newArray_KVFAZIASYM);
      instance.SetDelete(&delete_KVFAZIASYM);
      instance.SetDeleteArray(&deleteArray_KVFAZIASYM);
      instance.SetDestructor(&destruct_KVFAZIASYM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIASYM*)
   {
      return GenerateInitInstanceLocal((::KVFAZIASYM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIASYM*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVISOFAZIA(void *p = 0);
   static void *newArray_KVISOFAZIA(Long_t size, void *p);
   static void delete_KVISOFAZIA(void *p);
   static void deleteArray_KVISOFAZIA(void *p);
   static void destruct_KVISOFAZIA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVISOFAZIA*)
   {
      ::KVISOFAZIA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVISOFAZIA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVISOFAZIA", ::KVISOFAZIA::Class_Version(), "KVISOFAZIA.h", 9,
                  typeid(::KVISOFAZIA), DefineBehavior(ptr, ptr),
                  &::KVISOFAZIA::Dictionary, isa_proxy, 4,
                  sizeof(::KVISOFAZIA) );
      instance.SetNew(&new_KVISOFAZIA);
      instance.SetNewArray(&newArray_KVISOFAZIA);
      instance.SetDelete(&delete_KVISOFAZIA);
      instance.SetDeleteArray(&deleteArray_KVISOFAZIA);
      instance.SetDestructor(&destruct_KVISOFAZIA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVISOFAZIA*)
   {
      return GenerateInitInstanceLocal((::KVISOFAZIA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVISOFAZIA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIADetector(void *p = 0);
   static void *newArray_KVFAZIADetector(Long_t size, void *p);
   static void delete_KVFAZIADetector(void *p);
   static void deleteArray_KVFAZIADetector(void *p);
   static void destruct_KVFAZIADetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIADetector*)
   {
      ::KVFAZIADetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIADetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIADetector", ::KVFAZIADetector::Class_Version(), "KVFAZIADetector.h", 11,
                  typeid(::KVFAZIADetector), DefineBehavior(ptr, ptr),
                  &::KVFAZIADetector::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIADetector) );
      instance.SetNew(&new_KVFAZIADetector);
      instance.SetNewArray(&newArray_KVFAZIADetector);
      instance.SetDelete(&delete_KVFAZIADetector);
      instance.SetDeleteArray(&deleteArray_KVFAZIADetector);
      instance.SetDestructor(&destruct_KVFAZIADetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIADetector*)
   {
      return GenerateInitInstanceLocal((::KVFAZIADetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIADetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSignal(void *p = 0);
   static void *newArray_KVSignal(Long_t size, void *p);
   static void delete_KVSignal(void *p);
   static void deleteArray_KVSignal(void *p);
   static void destruct_KVSignal(void *p);
   static Long64_t merge_KVSignal(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSignal*)
   {
      ::KVSignal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSignal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSignal", ::KVSignal::Class_Version(), "KVSignal.h", 13,
                  typeid(::KVSignal), DefineBehavior(ptr, ptr),
                  &::KVSignal::Dictionary, isa_proxy, 4,
                  sizeof(::KVSignal) );
      instance.SetNew(&new_KVSignal);
      instance.SetNewArray(&newArray_KVSignal);
      instance.SetDelete(&delete_KVSignal);
      instance.SetDeleteArray(&deleteArray_KVSignal);
      instance.SetDestructor(&destruct_KVSignal);
      instance.SetMerge(&merge_KVSignal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSignal*)
   {
      return GenerateInitInstanceLocal((::KVSignal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSignal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChargeSignal(void *p = 0);
   static void *newArray_KVChargeSignal(Long_t size, void *p);
   static void delete_KVChargeSignal(void *p);
   static void deleteArray_KVChargeSignal(void *p);
   static void destruct_KVChargeSignal(void *p);
   static Long64_t merge_KVChargeSignal(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChargeSignal*)
   {
      ::KVChargeSignal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChargeSignal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChargeSignal", ::KVChargeSignal::Class_Version(), "KVChargeSignal.h", 12,
                  typeid(::KVChargeSignal), DefineBehavior(ptr, ptr),
                  &::KVChargeSignal::Dictionary, isa_proxy, 4,
                  sizeof(::KVChargeSignal) );
      instance.SetNew(&new_KVChargeSignal);
      instance.SetNewArray(&newArray_KVChargeSignal);
      instance.SetDelete(&delete_KVChargeSignal);
      instance.SetDeleteArray(&deleteArray_KVChargeSignal);
      instance.SetDestructor(&destruct_KVChargeSignal);
      instance.SetMerge(&merge_KVChargeSignal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChargeSignal*)
   {
      return GenerateInitInstanceLocal((::KVChargeSignal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChargeSignal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCurrentSignal(void *p = 0);
   static void *newArray_KVCurrentSignal(Long_t size, void *p);
   static void delete_KVCurrentSignal(void *p);
   static void deleteArray_KVCurrentSignal(void *p);
   static void destruct_KVCurrentSignal(void *p);
   static Long64_t merge_KVCurrentSignal(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCurrentSignal*)
   {
      ::KVCurrentSignal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCurrentSignal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCurrentSignal", ::KVCurrentSignal::Class_Version(), "KVCurrentSignal.h", 10,
                  typeid(::KVCurrentSignal), DefineBehavior(ptr, ptr),
                  &::KVCurrentSignal::Dictionary, isa_proxy, 4,
                  sizeof(::KVCurrentSignal) );
      instance.SetNew(&new_KVCurrentSignal);
      instance.SetNewArray(&newArray_KVCurrentSignal);
      instance.SetDelete(&delete_KVCurrentSignal);
      instance.SetDeleteArray(&deleteArray_KVCurrentSignal);
      instance.SetDestructor(&destruct_KVCurrentSignal);
      instance.SetMerge(&merge_KVCurrentSignal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCurrentSignal*)
   {
      return GenerateInitInstanceLocal((::KVCurrentSignal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCurrentSignal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPSAResult(void *p = 0);
   static void *newArray_KVPSAResult(Long_t size, void *p);
   static void delete_KVPSAResult(void *p);
   static void deleteArray_KVPSAResult(void *p);
   static void destruct_KVPSAResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPSAResult*)
   {
      ::KVPSAResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPSAResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPSAResult", ::KVPSAResult::Class_Version(), "KVPSAResult.h", 9,
                  typeid(::KVPSAResult), DefineBehavior(ptr, ptr),
                  &::KVPSAResult::Dictionary, isa_proxy, 4,
                  sizeof(::KVPSAResult) );
      instance.SetNew(&new_KVPSAResult);
      instance.SetNewArray(&newArray_KVPSAResult);
      instance.SetDelete(&delete_KVPSAResult);
      instance.SetDeleteArray(&deleteArray_KVPSAResult);
      instance.SetDestructor(&destruct_KVPSAResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPSAResult*)
   {
      return GenerateInitInstanceLocal((::KVPSAResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPSAResult*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDigitalFilter(void *p = 0);
   static void *newArray_KVDigitalFilter(Long_t size, void *p);
   static void delete_KVDigitalFilter(void *p);
   static void deleteArray_KVDigitalFilter(void *p);
   static void destruct_KVDigitalFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDigitalFilter*)
   {
      ::KVDigitalFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDigitalFilter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDigitalFilter", ::KVDigitalFilter::Class_Version(), "KVDigitalFilter.h", 15,
                  typeid(::KVDigitalFilter), DefineBehavior(ptr, ptr),
                  &::KVDigitalFilter::Dictionary, isa_proxy, 4,
                  sizeof(::KVDigitalFilter) );
      instance.SetNew(&new_KVDigitalFilter);
      instance.SetNewArray(&newArray_KVDigitalFilter);
      instance.SetDelete(&delete_KVDigitalFilter);
      instance.SetDeleteArray(&deleteArray_KVDigitalFilter);
      instance.SetDestructor(&destruct_KVDigitalFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDigitalFilter*)
   {
      return GenerateInitInstanceLocal((::KVDigitalFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDigitalFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIARawEvent(void *p = 0);
   static void *newArray_KVFAZIARawEvent(Long_t size, void *p);
   static void delete_KVFAZIARawEvent(void *p);
   static void deleteArray_KVFAZIARawEvent(void *p);
   static void destruct_KVFAZIARawEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIARawEvent*)
   {
      ::KVFAZIARawEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIARawEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIARawEvent", ::KVFAZIARawEvent::Class_Version(), "KVFAZIARawEvent.h", 14,
                  typeid(::KVFAZIARawEvent), DefineBehavior(ptr, ptr),
                  &::KVFAZIARawEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIARawEvent) );
      instance.SetNew(&new_KVFAZIARawEvent);
      instance.SetNewArray(&newArray_KVFAZIARawEvent);
      instance.SetDelete(&delete_KVFAZIARawEvent);
      instance.SetDeleteArray(&deleteArray_KVFAZIARawEvent);
      instance.SetDestructor(&destruct_KVFAZIARawEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIARawEvent*)
   {
      return GenerateInitInstanceLocal((::KVFAZIARawEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIARawEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIABlock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIABlock::Class_Name()
{
   return "KVFAZIABlock";
}

//______________________________________________________________________________
const char *KVFAZIABlock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIABlock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIABlock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIABlock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIABlock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIABlock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIABlock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIABlock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAFAZIA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAFAZIA::Class_Name()
{
   return "KVINDRAFAZIA";
}

//______________________________________________________________________________
const char *KVINDRAFAZIA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAFAZIA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAFAZIA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAFAZIA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAFAZIA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAFAZIA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAFAZIA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAFAZIA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIA_2B::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIA_2B::Class_Name()
{
   return "KVFAZIA_2B";
}

//______________________________________________________________________________
const char *KVFAZIA_2B::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA_2B*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIA_2B::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA_2B*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIA_2B::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA_2B*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIA_2B::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA_2B*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIA::Class_Name()
{
   return "KVFAZIA";
}

//______________________________________________________________________________
const char *KVFAZIA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIASYM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIASYM::Class_Name()
{
   return "KVFAZIASYM";
}

//______________________________________________________________________________
const char *KVFAZIASYM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASYM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIASYM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASYM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIASYM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASYM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIASYM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASYM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVISOFAZIA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVISOFAZIA::Class_Name()
{
   return "KVISOFAZIA";
}

//______________________________________________________________________________
const char *KVISOFAZIA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVISOFAZIA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVISOFAZIA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVISOFAZIA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVISOFAZIA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVISOFAZIA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVISOFAZIA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVISOFAZIA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIADetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIADetector::Class_Name()
{
   return "KVFAZIADetector";
}

//______________________________________________________________________________
const char *KVFAZIADetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIADetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIADetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIADetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSignal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSignal::Class_Name()
{
   return "KVSignal";
}

//______________________________________________________________________________
const char *KVSignal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSignal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSignal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSignal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSignal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSignal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSignal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSignal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChargeSignal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChargeSignal::Class_Name()
{
   return "KVChargeSignal";
}

//______________________________________________________________________________
const char *KVChargeSignal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeSignal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChargeSignal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeSignal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChargeSignal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeSignal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChargeSignal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeSignal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCurrentSignal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCurrentSignal::Class_Name()
{
   return "KVCurrentSignal";
}

//______________________________________________________________________________
const char *KVCurrentSignal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCurrentSignal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCurrentSignal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCurrentSignal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCurrentSignal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCurrentSignal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCurrentSignal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCurrentSignal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPSAResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPSAResult::Class_Name()
{
   return "KVPSAResult";
}

//______________________________________________________________________________
const char *KVPSAResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPSAResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPSAResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPSAResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPSAResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPSAResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPSAResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPSAResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDigitalFilter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDigitalFilter::Class_Name()
{
   return "KVDigitalFilter";
}

//______________________________________________________________________________
const char *KVDigitalFilter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDigitalFilter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDigitalFilter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDigitalFilter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDigitalFilter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDigitalFilter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDigitalFilter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDigitalFilter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIARawEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIARawEvent::Class_Name()
{
   return "KVFAZIARawEvent";
}

//______________________________________________________________________________
const char *KVFAZIARawEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIARawEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIARawEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIARawEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVFAZIABlock::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIABlock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIABlock::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIABlock::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIABlock(void *p) {
      return  p ? new(p) ::KVFAZIABlock : new ::KVFAZIABlock;
   }
   static void *newArray_KVFAZIABlock(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIABlock[nElements] : new ::KVFAZIABlock[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIABlock(void *p) {
      delete ((::KVFAZIABlock*)p);
   }
   static void deleteArray_KVFAZIABlock(void *p) {
      delete [] ((::KVFAZIABlock*)p);
   }
   static void destruct_KVFAZIABlock(void *p) {
      typedef ::KVFAZIABlock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIABlock

//______________________________________________________________________________
void KVINDRAFAZIA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAFAZIA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAFAZIA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAFAZIA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAFAZIA(void *p) {
      return  p ? new(p) ::KVINDRAFAZIA : new ::KVINDRAFAZIA;
   }
   static void *newArray_KVINDRAFAZIA(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAFAZIA[nElements] : new ::KVINDRAFAZIA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAFAZIA(void *p) {
      delete ((::KVINDRAFAZIA*)p);
   }
   static void deleteArray_KVINDRAFAZIA(void *p) {
      delete [] ((::KVINDRAFAZIA*)p);
   }
   static void destruct_KVINDRAFAZIA(void *p) {
      typedef ::KVINDRAFAZIA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAFAZIA

//______________________________________________________________________________
void KVFAZIA_2B::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIA_2B.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIA_2B::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIA_2B::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIA_2B(void *p) {
      return  p ? new(p) ::KVFAZIA_2B : new ::KVFAZIA_2B;
   }
   static void *newArray_KVFAZIA_2B(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIA_2B[nElements] : new ::KVFAZIA_2B[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIA_2B(void *p) {
      delete ((::KVFAZIA_2B*)p);
   }
   static void deleteArray_KVFAZIA_2B(void *p) {
      delete [] ((::KVFAZIA_2B*)p);
   }
   static void destruct_KVFAZIA_2B(void *p) {
      typedef ::KVFAZIA_2B current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIA_2B

//______________________________________________________________________________
void KVFAZIA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIA(void *p) {
      return  p ? new(p) ::KVFAZIA : new ::KVFAZIA;
   }
   static void *newArray_KVFAZIA(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIA[nElements] : new ::KVFAZIA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIA(void *p) {
      delete ((::KVFAZIA*)p);
   }
   static void deleteArray_KVFAZIA(void *p) {
      delete [] ((::KVFAZIA*)p);
   }
   static void destruct_KVFAZIA(void *p) {
      typedef ::KVFAZIA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIA

//______________________________________________________________________________
void KVFAZIASYM::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIASYM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIASYM::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIASYM::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIASYM(void *p) {
      return  p ? new(p) ::KVFAZIASYM : new ::KVFAZIASYM;
   }
   static void *newArray_KVFAZIASYM(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIASYM[nElements] : new ::KVFAZIASYM[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIASYM(void *p) {
      delete ((::KVFAZIASYM*)p);
   }
   static void deleteArray_KVFAZIASYM(void *p) {
      delete [] ((::KVFAZIASYM*)p);
   }
   static void destruct_KVFAZIASYM(void *p) {
      typedef ::KVFAZIASYM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIASYM

//______________________________________________________________________________
void KVISOFAZIA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVISOFAZIA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVISOFAZIA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVISOFAZIA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVISOFAZIA(void *p) {
      return  p ? new(p) ::KVISOFAZIA : new ::KVISOFAZIA;
   }
   static void *newArray_KVISOFAZIA(Long_t nElements, void *p) {
      return p ? new(p) ::KVISOFAZIA[nElements] : new ::KVISOFAZIA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVISOFAZIA(void *p) {
      delete ((::KVISOFAZIA*)p);
   }
   static void deleteArray_KVISOFAZIA(void *p) {
      delete [] ((::KVISOFAZIA*)p);
   }
   static void destruct_KVISOFAZIA(void *p) {
      typedef ::KVISOFAZIA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVISOFAZIA

//______________________________________________________________________________
void KVFAZIADetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIADetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIADetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIADetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIADetector(void *p) {
      return  p ? new(p) ::KVFAZIADetector : new ::KVFAZIADetector;
   }
   static void *newArray_KVFAZIADetector(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIADetector[nElements] : new ::KVFAZIADetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIADetector(void *p) {
      delete ((::KVFAZIADetector*)p);
   }
   static void deleteArray_KVFAZIADetector(void *p) {
      delete [] ((::KVFAZIADetector*)p);
   }
   static void destruct_KVFAZIADetector(void *p) {
      typedef ::KVFAZIADetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIADetector

//______________________________________________________________________________
void KVSignal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSignal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSignal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSignal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSignal(void *p) {
      return  p ? new(p) ::KVSignal : new ::KVSignal;
   }
   static void *newArray_KVSignal(Long_t nElements, void *p) {
      return p ? new(p) ::KVSignal[nElements] : new ::KVSignal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSignal(void *p) {
      delete ((::KVSignal*)p);
   }
   static void deleteArray_KVSignal(void *p) {
      delete [] ((::KVSignal*)p);
   }
   static void destruct_KVSignal(void *p) {
      typedef ::KVSignal current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVSignal(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVSignal*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVSignal

//______________________________________________________________________________
void KVChargeSignal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChargeSignal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChargeSignal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChargeSignal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChargeSignal(void *p) {
      return  p ? new(p) ::KVChargeSignal : new ::KVChargeSignal;
   }
   static void *newArray_KVChargeSignal(Long_t nElements, void *p) {
      return p ? new(p) ::KVChargeSignal[nElements] : new ::KVChargeSignal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChargeSignal(void *p) {
      delete ((::KVChargeSignal*)p);
   }
   static void deleteArray_KVChargeSignal(void *p) {
      delete [] ((::KVChargeSignal*)p);
   }
   static void destruct_KVChargeSignal(void *p) {
      typedef ::KVChargeSignal current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVChargeSignal(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVChargeSignal*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVChargeSignal

//______________________________________________________________________________
void KVCurrentSignal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCurrentSignal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVCurrentSignal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVCurrentSignal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCurrentSignal(void *p) {
      return  p ? new(p) ::KVCurrentSignal : new ::KVCurrentSignal;
   }
   static void *newArray_KVCurrentSignal(Long_t nElements, void *p) {
      return p ? new(p) ::KVCurrentSignal[nElements] : new ::KVCurrentSignal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCurrentSignal(void *p) {
      delete ((::KVCurrentSignal*)p);
   }
   static void deleteArray_KVCurrentSignal(void *p) {
      delete [] ((::KVCurrentSignal*)p);
   }
   static void destruct_KVCurrentSignal(void *p) {
      typedef ::KVCurrentSignal current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVCurrentSignal(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVCurrentSignal*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVCurrentSignal

//______________________________________________________________________________
void KVPSAResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPSAResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPSAResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPSAResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPSAResult(void *p) {
      return  p ? new(p) ::KVPSAResult : new ::KVPSAResult;
   }
   static void *newArray_KVPSAResult(Long_t nElements, void *p) {
      return p ? new(p) ::KVPSAResult[nElements] : new ::KVPSAResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPSAResult(void *p) {
      delete ((::KVPSAResult*)p);
   }
   static void deleteArray_KVPSAResult(void *p) {
      delete [] ((::KVPSAResult*)p);
   }
   static void destruct_KVPSAResult(void *p) {
      typedef ::KVPSAResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPSAResult

//______________________________________________________________________________
void KVDigitalFilter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDigitalFilter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDigitalFilter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDigitalFilter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDigitalFilter(void *p) {
      return  p ? new(p) ::KVDigitalFilter : new ::KVDigitalFilter;
   }
   static void *newArray_KVDigitalFilter(Long_t nElements, void *p) {
      return p ? new(p) ::KVDigitalFilter[nElements] : new ::KVDigitalFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDigitalFilter(void *p) {
      delete ((::KVDigitalFilter*)p);
   }
   static void deleteArray_KVDigitalFilter(void *p) {
      delete [] ((::KVDigitalFilter*)p);
   }
   static void destruct_KVDigitalFilter(void *p) {
      typedef ::KVDigitalFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDigitalFilter

//______________________________________________________________________________
void KVFAZIARawEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIARawEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIARawEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIARawEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIARawEvent(void *p) {
      return  p ? new(p) ::KVFAZIARawEvent : new ::KVFAZIARawEvent;
   }
   static void *newArray_KVFAZIARawEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIARawEvent[nElements] : new ::KVFAZIARawEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIARawEvent(void *p) {
      delete ((::KVFAZIARawEvent*)p);
   }
   static void deleteArray_KVFAZIARawEvent(void *p) {
      delete [] ((::KVFAZIARawEvent*)p);
   }
   static void destruct_KVFAZIARawEvent(void *p) {
      typedef ::KVFAZIARawEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIARawEvent

namespace {
  void TriggerDictionaryInitialization_libFAZIAgeometry_Impl() {
    static const char* headers[] = {
"KVISOFAZIA.h",
"KVSignal.h",
"KVFAZIABlock.h",
"KVPSAResult.h",
"KVCurrentSignal.h",
"KVDigitalFilter.h",
"KVChargeSignal.h",
"KVFAZIARawEvent.h",
"KVINDRAFAZIA.h",
"KVFAZIADetector.h",
"KVFAZIA.h",
"KVFAZIA_2B.h",
"KVFAZIASYM.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/FAZIA/geometry/inc",
"/home/john/software/sources/kaliveda.git/FAZIA/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/gui",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
"/home/john/software/sources/kaliveda.git/KVIndra/analysis",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/KVMultiDet/gui",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis",
"/home/john/software/sources/kaliveda.git/KVMultiDet/trieur",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/exp_events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/daq_cec",
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/calibration",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/geometry/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Block of 16 telescopes FAZIA)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIABlock.h")))  KVFAZIABlock;
class __attribute__((annotate(R"ATTRDUMP(INDRA-FAZIA setups)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAFAZIA.h")))  KVINDRAFAZIA;
class __attribute__((annotate(R"ATTRDUMP(FAZIA set-up with two blocks used in LNS 2014 commissioning)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIA_2B.h")))  KVFAZIA_2B;
class __attribute__((annotate(R"ATTRDUMP(Base class for description of the FAZIA set up)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVISOFAZIA.h")))  KVFAZIA;
class __attribute__((annotate(R"ATTRDUMP(Description of the FAZIA set up)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIASYM.h")))  KVFAZIASYM;
class __attribute__((annotate(R"ATTRDUMP(FAZIA set-up with two blocks used in LNS 2014 commissioning)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVISOFAZIA.h")))  KVISOFAZIA;
class __attribute__((annotate(R"ATTRDUMP(Base class for FAZIA detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIADetector.h")))  KVFAZIADetector;
class __attribute__((annotate(R"ATTRDUMP(simple class to store TArray in a list)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSignal.h")))  KVSignal;
class __attribute__((annotate(R"ATTRDUMP(digitized charge signal)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChargeSignal.h")))  KVChargeSignal;
class __attribute__((annotate(R"ATTRDUMP(digitized intensity signal)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCurrentSignal.h")))  KVCurrentSignal;
class __attribute__((annotate(R"ATTRDUMP(class to store PSA parameters and results)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPSAResult.h")))  KVPSAResult;
class __attribute__((annotate(R"ATTRDUMP(FIASCO: Class for digital filtering)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDigitalFilter.h")))  KVDigitalFilter;
class __attribute__((annotate(R"ATTRDUMP(Handle list of signals and additional information coming from acquisition file)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIARawEvent.h")))  KVFAZIARawEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVISOFAZIA.h"
#include "KVSignal.h"
#include "KVFAZIABlock.h"
#include "KVPSAResult.h"
#include "KVCurrentSignal.h"
#include "KVDigitalFilter.h"
#include "KVChargeSignal.h"
#include "KVFAZIARawEvent.h"
#include "KVINDRAFAZIA.h"
#include "KVFAZIADetector.h"
#include "KVFAZIA.h"
#include "KVFAZIA_2B.h"
#include "KVFAZIASYM.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVChargeSignal", payloadCode, "@",
"KVCurrentSignal", payloadCode, "@",
"KVDigitalFilter", payloadCode, "@",
"KVFAZIA", payloadCode, "@",
"KVFAZIABlock", payloadCode, "@",
"KVFAZIADetector", payloadCode, "@",
"KVFAZIARawEvent", payloadCode, "@",
"KVFAZIASYM", payloadCode, "@",
"KVFAZIA_2B", payloadCode, "@",
"KVINDRAFAZIA", payloadCode, "@",
"KVISOFAZIA", payloadCode, "@",
"KVPSAResult", payloadCode, "@",
"KVSignal", payloadCode, "@",
"gFazia", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFAZIAgeometry",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFAZIAgeometry_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFAZIAgeometry_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFAZIAgeometry() {
  TriggerDictionaryInitialization_libFAZIAgeometry_Impl();
}
