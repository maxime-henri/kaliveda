// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSanalysis

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
#include "KVIVReconIdent.h"
#include "Analysisv_e494s.h"
#include "KVIVRawDataReconstructor.h"
#include "Analysisv.h"
#include "KVIVReconDataAnalyser.h"
#include "Analysisv_e503.h"
#include "KVIVRawDataAnalyser.h"
#include "KVIVSelector.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_KVIVRawDataAnalyser(void *p);
   static void deleteArray_KVIVRawDataAnalyser(void *p);
   static void destruct_KVIVRawDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVRawDataAnalyser*)
   {
      ::KVIVRawDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVRawDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVRawDataAnalyser", ::KVIVRawDataAnalyser::Class_Version(), "KVIVRawDataAnalyser.h", 16,
                  typeid(::KVIVRawDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVIVRawDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVRawDataAnalyser) );
      instance.SetDelete(&delete_KVIVRawDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVIVRawDataAnalyser);
      instance.SetDestructor(&destruct_KVIVRawDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVRawDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVIVRawDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVRawDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVRawDataReconstructor(void *p = 0);
   static void *newArray_KVIVRawDataReconstructor(Long_t size, void *p);
   static void delete_KVIVRawDataReconstructor(void *p);
   static void deleteArray_KVIVRawDataReconstructor(void *p);
   static void destruct_KVIVRawDataReconstructor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVRawDataReconstructor*)
   {
      ::KVIVRawDataReconstructor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVRawDataReconstructor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVRawDataReconstructor", ::KVIVRawDataReconstructor::Class_Version(), "KVIVRawDataReconstructor.h", 18,
                  typeid(::KVIVRawDataReconstructor), DefineBehavior(ptr, ptr),
                  &::KVIVRawDataReconstructor::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVRawDataReconstructor) );
      instance.SetNew(&new_KVIVRawDataReconstructor);
      instance.SetNewArray(&newArray_KVIVRawDataReconstructor);
      instance.SetDelete(&delete_KVIVRawDataReconstructor);
      instance.SetDeleteArray(&deleteArray_KVIVRawDataReconstructor);
      instance.SetDestructor(&destruct_KVIVRawDataReconstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVRawDataReconstructor*)
   {
      return GenerateInitInstanceLocal((::KVIVRawDataReconstructor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVRawDataReconstructor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVReconDataAnalyser(void *p = 0);
   static void *newArray_KVIVReconDataAnalyser(Long_t size, void *p);
   static void delete_KVIVReconDataAnalyser(void *p);
   static void deleteArray_KVIVReconDataAnalyser(void *p);
   static void destruct_KVIVReconDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVReconDataAnalyser*)
   {
      ::KVIVReconDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVReconDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVReconDataAnalyser", ::KVIVReconDataAnalyser::Class_Version(), "KVIVReconDataAnalyser.h", 9,
                  typeid(::KVIVReconDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVIVReconDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVReconDataAnalyser) );
      instance.SetNew(&new_KVIVReconDataAnalyser);
      instance.SetNewArray(&newArray_KVIVReconDataAnalyser);
      instance.SetDelete(&delete_KVIVReconDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVIVReconDataAnalyser);
      instance.SetDestructor(&destruct_KVIVReconDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVReconDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVIVReconDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVReconDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVReconIdent(void *p = 0);
   static void *newArray_KVIVReconIdent(Long_t size, void *p);
   static void delete_KVIVReconIdent(void *p);
   static void deleteArray_KVIVReconIdent(void *p);
   static void destruct_KVIVReconIdent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVReconIdent*)
   {
      ::KVIVReconIdent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVReconIdent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVReconIdent", ::KVIVReconIdent::Class_Version(), "KVIVReconIdent.h", 6,
                  typeid(::KVIVReconIdent), DefineBehavior(ptr, ptr),
                  &::KVIVReconIdent::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVReconIdent) );
      instance.SetNew(&new_KVIVReconIdent);
      instance.SetNewArray(&newArray_KVIVReconIdent);
      instance.SetDelete(&delete_KVIVReconIdent);
      instance.SetDeleteArray(&deleteArray_KVIVReconIdent);
      instance.SetDestructor(&destruct_KVIVReconIdent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVReconIdent*)
   {
      return GenerateInitInstanceLocal((::KVIVReconIdent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVReconIdent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Analysisv(void *p);
   static void deleteArray_Analysisv(void *p);
   static void destruct_Analysisv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Analysisv*)
   {
      ::Analysisv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Analysisv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Analysisv", ::Analysisv::Class_Version(), "Analysisv.h", 20,
                  typeid(::Analysisv), DefineBehavior(ptr, ptr),
                  &::Analysisv::Dictionary, isa_proxy, 4,
                  sizeof(::Analysisv) );
      instance.SetDelete(&delete_Analysisv);
      instance.SetDeleteArray(&deleteArray_Analysisv);
      instance.SetDestructor(&destruct_Analysisv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Analysisv*)
   {
      return GenerateInitInstanceLocal((::Analysisv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Analysisv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Analysisv_e494s(void *p);
   static void deleteArray_Analysisv_e494s(void *p);
   static void destruct_Analysisv_e494s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Analysisv_e494s*)
   {
      ::Analysisv_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Analysisv_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Analysisv_e494s", ::Analysisv_e494s::Class_Version(), "Analysisv_e494s.h", 36,
                  typeid(::Analysisv_e494s), DefineBehavior(ptr, ptr),
                  &::Analysisv_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::Analysisv_e494s) );
      instance.SetDelete(&delete_Analysisv_e494s);
      instance.SetDeleteArray(&deleteArray_Analysisv_e494s);
      instance.SetDestructor(&destruct_Analysisv_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Analysisv_e494s*)
   {
      return GenerateInitInstanceLocal((::Analysisv_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Analysisv_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Analysisv_e503(void *p);
   static void deleteArray_Analysisv_e503(void *p);
   static void destruct_Analysisv_e503(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Analysisv_e503*)
   {
      ::Analysisv_e503 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Analysisv_e503 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Analysisv_e503", ::Analysisv_e503::Class_Version(), "Analysisv_e503.h", 42,
                  typeid(::Analysisv_e503), DefineBehavior(ptr, ptr),
                  &::Analysisv_e503::Dictionary, isa_proxy, 4,
                  sizeof(::Analysisv_e503) );
      instance.SetDelete(&delete_Analysisv_e503);
      instance.SetDeleteArray(&deleteArray_Analysisv_e503);
      instance.SetDestructor(&destruct_Analysisv_e503);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Analysisv_e503*)
   {
      return GenerateInitInstanceLocal((::Analysisv_e503*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Analysisv_e503*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVSelector(void *p = 0);
   static void *newArray_KVIVSelector(Long_t size, void *p);
   static void delete_KVIVSelector(void *p);
   static void deleteArray_KVIVSelector(void *p);
   static void destruct_KVIVSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVSelector*)
   {
      ::KVIVSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVSelector", ::KVIVSelector::Class_Version(), "KVIVSelector.h", 14,
                  typeid(::KVIVSelector), DefineBehavior(ptr, ptr),
                  &::KVIVSelector::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVSelector) );
      instance.SetNew(&new_KVIVSelector);
      instance.SetNewArray(&newArray_KVIVSelector);
      instance.SetDelete(&delete_KVIVSelector);
      instance.SetDeleteArray(&deleteArray_KVIVSelector);
      instance.SetDestructor(&destruct_KVIVSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVSelector*)
   {
      return GenerateInitInstanceLocal((::KVIVSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVIVRawDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVRawDataAnalyser::Class_Name()
{
   return "KVIVRawDataAnalyser";
}

//______________________________________________________________________________
const char *KVIVRawDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVRawDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVRawDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVRawDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVRawDataReconstructor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVRawDataReconstructor::Class_Name()
{
   return "KVIVRawDataReconstructor";
}

//______________________________________________________________________________
const char *KVIVRawDataReconstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataReconstructor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVRawDataReconstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataReconstructor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVRawDataReconstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataReconstructor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVRawDataReconstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVRawDataReconstructor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVReconDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVReconDataAnalyser::Class_Name()
{
   return "KVIVReconDataAnalyser";
}

//______________________________________________________________________________
const char *KVIVReconDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVReconDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVReconDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVReconDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVReconIdent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVReconIdent::Class_Name()
{
   return "KVIVReconIdent";
}

//______________________________________________________________________________
const char *KVIVReconIdent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconIdent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVReconIdent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconIdent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVReconIdent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconIdent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVReconIdent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconIdent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Analysisv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Analysisv::Class_Name()
{
   return "Analysisv";
}

//______________________________________________________________________________
const char *Analysisv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Analysisv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Analysisv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Analysisv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Analysisv_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Analysisv_e494s::Class_Name()
{
   return "Analysisv_e494s";
}

//______________________________________________________________________________
const char *Analysisv_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Analysisv_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Analysisv_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Analysisv_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Analysisv_e503::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Analysisv_e503::Class_Name()
{
   return "Analysisv_e503";
}

//______________________________________________________________________________
const char *Analysisv_e503::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e503*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Analysisv_e503::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e503*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Analysisv_e503::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e503*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Analysisv_e503::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Analysisv_e503*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVSelector::Class_Name()
{
   return "KVIVSelector";
}

//______________________________________________________________________________
const char *KVIVSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVIVRawDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVRawDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVRawDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVRawDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIVRawDataAnalyser(void *p) {
      delete ((::KVIVRawDataAnalyser*)p);
   }
   static void deleteArray_KVIVRawDataAnalyser(void *p) {
      delete [] ((::KVIVRawDataAnalyser*)p);
   }
   static void destruct_KVIVRawDataAnalyser(void *p) {
      typedef ::KVIVRawDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVRawDataAnalyser

//______________________________________________________________________________
void KVIVRawDataReconstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVRawDataReconstructor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVRawDataReconstructor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVRawDataReconstructor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVRawDataReconstructor(void *p) {
      return  p ? new(p) ::KVIVRawDataReconstructor : new ::KVIVRawDataReconstructor;
   }
   static void *newArray_KVIVRawDataReconstructor(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVRawDataReconstructor[nElements] : new ::KVIVRawDataReconstructor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVRawDataReconstructor(void *p) {
      delete ((::KVIVRawDataReconstructor*)p);
   }
   static void deleteArray_KVIVRawDataReconstructor(void *p) {
      delete [] ((::KVIVRawDataReconstructor*)p);
   }
   static void destruct_KVIVRawDataReconstructor(void *p) {
      typedef ::KVIVRawDataReconstructor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVRawDataReconstructor

//______________________________________________________________________________
void KVIVReconDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVReconDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVReconDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVReconDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVReconDataAnalyser(void *p) {
      return  p ? new(p) ::KVIVReconDataAnalyser : new ::KVIVReconDataAnalyser;
   }
   static void *newArray_KVIVReconDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVReconDataAnalyser[nElements] : new ::KVIVReconDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVReconDataAnalyser(void *p) {
      delete ((::KVIVReconDataAnalyser*)p);
   }
   static void deleteArray_KVIVReconDataAnalyser(void *p) {
      delete [] ((::KVIVReconDataAnalyser*)p);
   }
   static void destruct_KVIVReconDataAnalyser(void *p) {
      typedef ::KVIVReconDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVReconDataAnalyser

//______________________________________________________________________________
void KVIVReconIdent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVReconIdent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVReconIdent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVReconIdent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVReconIdent(void *p) {
      return  p ? new(p) ::KVIVReconIdent : new ::KVIVReconIdent;
   }
   static void *newArray_KVIVReconIdent(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVReconIdent[nElements] : new ::KVIVReconIdent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVReconIdent(void *p) {
      delete ((::KVIVReconIdent*)p);
   }
   static void deleteArray_KVIVReconIdent(void *p) {
      delete [] ((::KVIVReconIdent*)p);
   }
   static void destruct_KVIVReconIdent(void *p) {
      typedef ::KVIVReconIdent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVReconIdent

//______________________________________________________________________________
void Analysisv::Streamer(TBuffer &R__b)
{
   // Stream an object of class Analysisv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Analysisv::Class(),this);
   } else {
      R__b.WriteClassBuffer(Analysisv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Analysisv(void *p) {
      delete ((::Analysisv*)p);
   }
   static void deleteArray_Analysisv(void *p) {
      delete [] ((::Analysisv*)p);
   }
   static void destruct_Analysisv(void *p) {
      typedef ::Analysisv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Analysisv

//______________________________________________________________________________
void Analysisv_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class Analysisv_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Analysisv_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(Analysisv_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Analysisv_e494s(void *p) {
      delete ((::Analysisv_e494s*)p);
   }
   static void deleteArray_Analysisv_e494s(void *p) {
      delete [] ((::Analysisv_e494s*)p);
   }
   static void destruct_Analysisv_e494s(void *p) {
      typedef ::Analysisv_e494s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Analysisv_e494s

//______________________________________________________________________________
void Analysisv_e503::Streamer(TBuffer &R__b)
{
   // Stream an object of class Analysisv_e503.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Analysisv_e503::Class(),this);
   } else {
      R__b.WriteClassBuffer(Analysisv_e503::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Analysisv_e503(void *p) {
      delete ((::Analysisv_e503*)p);
   }
   static void deleteArray_Analysisv_e503(void *p) {
      delete [] ((::Analysisv_e503*)p);
   }
   static void destruct_Analysisv_e503(void *p) {
      typedef ::Analysisv_e503 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Analysisv_e503

//______________________________________________________________________________
void KVIVSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVSelector(void *p) {
      return  p ? new(p) ::KVIVSelector : new ::KVIVSelector;
   }
   static void *newArray_KVIVSelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVSelector[nElements] : new ::KVIVSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVSelector(void *p) {
      delete ((::KVIVSelector*)p);
   }
   static void deleteArray_KVIVSelector(void *p) {
      delete [] ((::KVIVSelector*)p);
   }
   static void destruct_KVIVSelector(void *p) {
      typedef ::KVIVSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVSelector

namespace {
  void TriggerDictionaryInitialization_libVAMOSanalysis_Impl() {
    static const char* headers[] = {
"KVIVReconIdent.h",
"Analysisv_e494s.h",
"KVIVRawDataReconstructor.h",
"Analysisv.h",
"KVIVReconDataAnalyser.h",
"Analysisv_e503.h",
"KVIVRawDataAnalyser.h",
"KVIVSelector.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/analysis/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/identification",
"/home/john/software/sources/kaliveda.git/VAMOS/reconstruction",
"/home/john/software/sources/kaliveda.git/VAMOS/geometry",
"/home/john/software/sources/kaliveda.git/VAMOS/exp_events",
"/home/john/software/sources/kaliveda.git/VAMOS/base",
"/home/john/software/sources/kaliveda.git/VAMOS/calibration",
"/home/john/software/sources/kaliveda.git/VAMOS/analysis",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/analysis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Analysis of raw INDRA-VAMOS data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVRawDataAnalyser.h")))  KVIVRawDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Reconstructs raw data from INDRA-VAMOS experiments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVRawDataReconstructor.h")))  KVIVRawDataReconstructor;
class __attribute__((annotate(R"ATTRDUMP(For analysing reconstructed INDRA+VAMOS data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVReconDataAnalyser.h")))  KVIVReconDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Identification and reconstruction of VAMOS and INDRA events from recon data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVReconIdent.h")))  KVIVReconIdent;
class __attribute__((annotate("$clingAutoload$Analysisv_e494s.h")))  Analysisv;
class __attribute__((annotate(R"ATTRDUMP(VAMOS calibration for E494S)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Analysisv_e494s.h")))  Analysisv_e494s;
class __attribute__((annotate(R"ATTRDUMP(VAMOS calibration for e503)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Analysisv_e503.h")))  Analysisv_e503;
class __attribute__((annotate("$clingAutoload$KVIVSelector.h")))  KVIVSelector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVIVReconIdent.h"
#include "Analysisv_e494s.h"
#include "KVIVRawDataReconstructor.h"
#include "Analysisv.h"
#include "KVIVReconDataAnalyser.h"
#include "Analysisv_e503.h"
#include "KVIVRawDataAnalyser.h"
#include "KVIVSelector.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Analysisv", payloadCode, "@",
"Analysisv_e494s", payloadCode, "@",
"Analysisv_e503", payloadCode, "@",
"KVIVRawDataAnalyser", payloadCode, "@",
"KVIVRawDataReconstructor", payloadCode, "@",
"KVIVReconDataAnalyser", payloadCode, "@",
"KVIVReconIdent", payloadCode, "@",
"KVIVSelector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSanalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSanalysis_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSanalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSanalysis() {
  TriggerDictionaryInitialization_libVAMOSanalysis_Impl();
}
