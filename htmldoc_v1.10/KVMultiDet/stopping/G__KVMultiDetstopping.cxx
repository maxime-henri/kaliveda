// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetstopping

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
#include "KVedaLoss.h"
#include "KVMaterial.h"
#include "KVIonRangeTableMaterial.h"
#include "KVIonRangeTable.h"
#include "KVedaLossRangeFitter.h"
#include "KVedaLossMaterial.h"
#include "KVTarget.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVMaterial(void *p = 0);
   static void *newArray_KVMaterial(Long_t size, void *p);
   static void delete_KVMaterial(void *p);
   static void deleteArray_KVMaterial(void *p);
   static void destruct_KVMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMaterial*)
   {
      ::KVMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMaterial", ::KVMaterial::Class_Version(), "KVMaterial.h", 35,
                  typeid(::KVMaterial), DefineBehavior(ptr, ptr),
                  &::KVMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::KVMaterial) );
      instance.SetNew(&new_KVMaterial);
      instance.SetNewArray(&newArray_KVMaterial);
      instance.SetDelete(&delete_KVMaterial);
      instance.SetDeleteArray(&deleteArray_KVMaterial);
      instance.SetDestructor(&destruct_KVMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMaterial*)
   {
      return GenerateInitInstanceLocal((::KVMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMaterial*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTarget(void *p = 0);
   static void *newArray_KVTarget(Long_t size, void *p);
   static void delete_KVTarget(void *p);
   static void deleteArray_KVTarget(void *p);
   static void destruct_KVTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTarget*)
   {
      ::KVTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTarget", ::KVTarget::Class_Version(), "KVTarget.h", 18,
                  typeid(::KVTarget), DefineBehavior(ptr, ptr),
                  &::KVTarget::Dictionary, isa_proxy, 4,
                  sizeof(::KVTarget) );
      instance.SetNew(&new_KVTarget);
      instance.SetNewArray(&newArray_KVTarget);
      instance.SetDelete(&delete_KVTarget);
      instance.SetDeleteArray(&deleteArray_KVTarget);
      instance.SetDestructor(&destruct_KVTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTarget*)
   {
      return GenerateInitInstanceLocal((::KVTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTarget*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIonRangeTable(void *p);
   static void deleteArray_KVIonRangeTable(void *p);
   static void destruct_KVIonRangeTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIonRangeTable*)
   {
      ::KVIonRangeTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIonRangeTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIonRangeTable", ::KVIonRangeTable::Class_Version(), "KVIonRangeTable.h", 15,
                  typeid(::KVIonRangeTable), DefineBehavior(ptr, ptr),
                  &::KVIonRangeTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVIonRangeTable) );
      instance.SetDelete(&delete_KVIonRangeTable);
      instance.SetDeleteArray(&deleteArray_KVIonRangeTable);
      instance.SetDestructor(&destruct_KVIonRangeTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIonRangeTable*)
   {
      return GenerateInitInstanceLocal((::KVIonRangeTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIonRangeTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIonRangeTableMaterial(void *p);
   static void deleteArray_KVIonRangeTableMaterial(void *p);
   static void destruct_KVIonRangeTableMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIonRangeTableMaterial*)
   {
      ::KVIonRangeTableMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIonRangeTableMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIonRangeTableMaterial", ::KVIonRangeTableMaterial::Class_Version(), "KVIonRangeTableMaterial.h", 18,
                  typeid(::KVIonRangeTableMaterial), DefineBehavior(ptr, ptr),
                  &::KVIonRangeTableMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::KVIonRangeTableMaterial) );
      instance.SetDelete(&delete_KVIonRangeTableMaterial);
      instance.SetDeleteArray(&deleteArray_KVIonRangeTableMaterial);
      instance.SetDestructor(&destruct_KVIonRangeTableMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIonRangeTableMaterial*)
   {
      return GenerateInitInstanceLocal((::KVIonRangeTableMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIonRangeTableMaterial*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVedaLossMaterial(void *p = 0);
   static void *newArray_KVedaLossMaterial(Long_t size, void *p);
   static void delete_KVedaLossMaterial(void *p);
   static void deleteArray_KVedaLossMaterial(void *p);
   static void destruct_KVedaLossMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVedaLossMaterial*)
   {
      ::KVedaLossMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVedaLossMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVedaLossMaterial", ::KVedaLossMaterial::Class_Version(), "KVedaLossMaterial.h", 16,
                  typeid(::KVedaLossMaterial), DefineBehavior(ptr, ptr),
                  &::KVedaLossMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::KVedaLossMaterial) );
      instance.SetNew(&new_KVedaLossMaterial);
      instance.SetNewArray(&newArray_KVedaLossMaterial);
      instance.SetDelete(&delete_KVedaLossMaterial);
      instance.SetDeleteArray(&deleteArray_KVedaLossMaterial);
      instance.SetDestructor(&destruct_KVedaLossMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVedaLossMaterial*)
   {
      return GenerateInitInstanceLocal((::KVedaLossMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVedaLossMaterial*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVedaLoss(void *p = 0);
   static void *newArray_KVedaLoss(Long_t size, void *p);
   static void delete_KVedaLoss(void *p);
   static void deleteArray_KVedaLoss(void *p);
   static void destruct_KVedaLoss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVedaLoss*)
   {
      ::KVedaLoss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVedaLoss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVedaLoss", ::KVedaLoss::Class_Version(), "KVedaLoss.h", 13,
                  typeid(::KVedaLoss), DefineBehavior(ptr, ptr),
                  &::KVedaLoss::Dictionary, isa_proxy, 4,
                  sizeof(::KVedaLoss) );
      instance.SetNew(&new_KVedaLoss);
      instance.SetNewArray(&newArray_KVedaLoss);
      instance.SetDelete(&delete_KVedaLoss);
      instance.SetDeleteArray(&deleteArray_KVedaLoss);
      instance.SetDestructor(&destruct_KVedaLoss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVedaLoss*)
   {
      return GenerateInitInstanceLocal((::KVedaLoss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVedaLoss*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVedaLossRangeFitter(void *p = 0);
   static void *newArray_KVedaLossRangeFitter(Long_t size, void *p);
   static void delete_KVedaLossRangeFitter(void *p);
   static void deleteArray_KVedaLossRangeFitter(void *p);
   static void destruct_KVedaLossRangeFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVedaLossRangeFitter*)
   {
      ::KVedaLossRangeFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVedaLossRangeFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVedaLossRangeFitter", ::KVedaLossRangeFitter::Class_Version(), "KVedaLossRangeFitter.h", 15,
                  typeid(::KVedaLossRangeFitter), DefineBehavior(ptr, ptr),
                  &::KVedaLossRangeFitter::Dictionary, isa_proxy, 4,
                  sizeof(::KVedaLossRangeFitter) );
      instance.SetNew(&new_KVedaLossRangeFitter);
      instance.SetNewArray(&newArray_KVedaLossRangeFitter);
      instance.SetDelete(&delete_KVedaLossRangeFitter);
      instance.SetDeleteArray(&deleteArray_KVedaLossRangeFitter);
      instance.SetDestructor(&destruct_KVedaLossRangeFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVedaLossRangeFitter*)
   {
      return GenerateInitInstanceLocal((::KVedaLossRangeFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVedaLossRangeFitter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMaterial::Class_Name()
{
   return "KVMaterial";
}

//______________________________________________________________________________
const char *KVMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTarget::Class_Name()
{
   return "KVTarget";
}

//______________________________________________________________________________
const char *KVTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTarget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIonRangeTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIonRangeTable::Class_Name()
{
   return "KVIonRangeTable";
}

//______________________________________________________________________________
const char *KVIonRangeTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIonRangeTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIonRangeTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIonRangeTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIonRangeTableMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIonRangeTableMaterial::Class_Name()
{
   return "KVIonRangeTableMaterial";
}

//______________________________________________________________________________
const char *KVIonRangeTableMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTableMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIonRangeTableMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTableMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIonRangeTableMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTableMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIonRangeTableMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIonRangeTableMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVedaLossMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVedaLossMaterial::Class_Name()
{
   return "KVedaLossMaterial";
}

//______________________________________________________________________________
const char *KVedaLossMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVedaLossMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVedaLossMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVedaLossMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVedaLoss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVedaLoss::Class_Name()
{
   return "KVedaLoss";
}

//______________________________________________________________________________
const char *KVedaLoss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLoss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVedaLoss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLoss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVedaLoss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLoss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVedaLoss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLoss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVedaLossRangeFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVedaLossRangeFitter::Class_Name()
{
   return "KVedaLossRangeFitter";
}

//______________________________________________________________________________
const char *KVedaLossRangeFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossRangeFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVedaLossRangeFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossRangeFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVedaLossRangeFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossRangeFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVedaLossRangeFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVedaLossRangeFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMaterial(void *p) {
      return  p ? new(p) ::KVMaterial : new ::KVMaterial;
   }
   static void *newArray_KVMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::KVMaterial[nElements] : new ::KVMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMaterial(void *p) {
      delete ((::KVMaterial*)p);
   }
   static void deleteArray_KVMaterial(void *p) {
      delete [] ((::KVMaterial*)p);
   }
   static void destruct_KVMaterial(void *p) {
      typedef ::KVMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMaterial

//______________________________________________________________________________
void KVTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTarget(void *p) {
      return  p ? new(p) ::KVTarget : new ::KVTarget;
   }
   static void *newArray_KVTarget(Long_t nElements, void *p) {
      return p ? new(p) ::KVTarget[nElements] : new ::KVTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTarget(void *p) {
      delete ((::KVTarget*)p);
   }
   static void deleteArray_KVTarget(void *p) {
      delete [] ((::KVTarget*)p);
   }
   static void destruct_KVTarget(void *p) {
      typedef ::KVTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTarget

//______________________________________________________________________________
void KVIonRangeTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIonRangeTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIonRangeTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIonRangeTable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIonRangeTable(void *p) {
      delete ((::KVIonRangeTable*)p);
   }
   static void deleteArray_KVIonRangeTable(void *p) {
      delete [] ((::KVIonRangeTable*)p);
   }
   static void destruct_KVIonRangeTable(void *p) {
      typedef ::KVIonRangeTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIonRangeTable

//______________________________________________________________________________
void KVIonRangeTableMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIonRangeTableMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIonRangeTableMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIonRangeTableMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIonRangeTableMaterial(void *p) {
      delete ((::KVIonRangeTableMaterial*)p);
   }
   static void deleteArray_KVIonRangeTableMaterial(void *p) {
      delete [] ((::KVIonRangeTableMaterial*)p);
   }
   static void destruct_KVIonRangeTableMaterial(void *p) {
      typedef ::KVIonRangeTableMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIonRangeTableMaterial

//______________________________________________________________________________
void KVedaLossMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVedaLossMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVedaLossMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVedaLossMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVedaLossMaterial(void *p) {
      return  p ? new(p) ::KVedaLossMaterial : new ::KVedaLossMaterial;
   }
   static void *newArray_KVedaLossMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::KVedaLossMaterial[nElements] : new ::KVedaLossMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVedaLossMaterial(void *p) {
      delete ((::KVedaLossMaterial*)p);
   }
   static void deleteArray_KVedaLossMaterial(void *p) {
      delete [] ((::KVedaLossMaterial*)p);
   }
   static void destruct_KVedaLossMaterial(void *p) {
      typedef ::KVedaLossMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVedaLossMaterial

//______________________________________________________________________________
void KVedaLoss::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVedaLoss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVedaLoss::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVedaLoss::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVedaLoss(void *p) {
      return  p ? new(p) ::KVedaLoss : new ::KVedaLoss;
   }
   static void *newArray_KVedaLoss(Long_t nElements, void *p) {
      return p ? new(p) ::KVedaLoss[nElements] : new ::KVedaLoss[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVedaLoss(void *p) {
      delete ((::KVedaLoss*)p);
   }
   static void deleteArray_KVedaLoss(void *p) {
      delete [] ((::KVedaLoss*)p);
   }
   static void destruct_KVedaLoss(void *p) {
      typedef ::KVedaLoss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVedaLoss

//______________________________________________________________________________
void KVedaLossRangeFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVedaLossRangeFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVedaLossRangeFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVedaLossRangeFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVedaLossRangeFitter(void *p) {
      return  p ? new(p) ::KVedaLossRangeFitter : new ::KVedaLossRangeFitter;
   }
   static void *newArray_KVedaLossRangeFitter(Long_t nElements, void *p) {
      return p ? new(p) ::KVedaLossRangeFitter[nElements] : new ::KVedaLossRangeFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVedaLossRangeFitter(void *p) {
      delete ((::KVedaLossRangeFitter*)p);
   }
   static void deleteArray_KVedaLossRangeFitter(void *p) {
      delete [] ((::KVedaLossRangeFitter*)p);
   }
   static void destruct_KVedaLossRangeFitter(void *p) {
      typedef ::KVedaLossRangeFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVedaLossRangeFitter

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetstopping_Impl() {
    static const char* headers[] = {
"KVedaLoss.h",
"KVMaterial.h",
"KVIonRangeTableMaterial.h",
"KVIonRangeTable.h",
"KVedaLossRangeFitter.h",
"KVedaLossMaterial.h",
"KVTarget.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/stopping/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class describing physical materials used to construct detectors & targets)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMaterial.h")))  KVMaterial;
class __attribute__((annotate(R"ATTRDUMP(Simulate targets for experiments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTarget.h")))  KVTarget;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for calculation of range & energy loss of charged particles in matter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVedaLoss.h")))  KVIonRangeTable;
class __attribute__((annotate(R"ATTRDUMP(Material for use in energy loss & range calculations)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIonRangeTableMaterial.h")))  KVIonRangeTableMaterial;
class __attribute__((annotate(R"ATTRDUMP(Description of material properties used by KVedaLoss range calculation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVedaLossRangeFitter.h")))  KVedaLossMaterial;
class __attribute__((annotate(R"ATTRDUMP(C++ implementation of VEDALOSS stopping power calculation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVedaLoss.h")))  KVedaLoss;
class __attribute__((annotate(R"ATTRDUMP(Fit a range table using the VEDALOSS functional)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVedaLossRangeFitter.h")))  KVedaLossRangeFitter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVedaLoss.h"
#include "KVMaterial.h"
#include "KVIonRangeTableMaterial.h"
#include "KVIonRangeTable.h"
#include "KVedaLossRangeFitter.h"
#include "KVedaLossMaterial.h"
#include "KVTarget.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVIonRangeTable", payloadCode, "@",
"KVIonRangeTableMaterial", payloadCode, "@",
"KVMaterial", payloadCode, "@",
"KVTarget", payloadCode, "@",
"KVedaLoss", payloadCode, "@",
"KVedaLossMaterial", payloadCode, "@",
"KVedaLossRangeFitter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetstopping",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetstopping_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetstopping_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetstopping() {
  TriggerDictionaryInitialization_libKVMultiDetstopping_Impl();
}
