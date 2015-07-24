// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FAZIAanalysis

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
#include "KVFAZIAReconDataAnalyser.h"
#include "KVFAZIARawDataReader.h"
#include "KVFAZIARawDataReconstructor.h"
#include "KVFAZIARawDataAnalyser.h"
#include "KVFAZIASelector.h"
#include "KVFAZIAReader.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVFAZIARawDataReader(void *p = 0);
   static void *newArray_KVFAZIARawDataReader(Long_t size, void *p);
   static void delete_KVFAZIARawDataReader(void *p);
   static void deleteArray_KVFAZIARawDataReader(void *p);
   static void destruct_KVFAZIARawDataReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIARawDataReader*)
   {
      ::KVFAZIARawDataReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIARawDataReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIARawDataReader", ::KVFAZIARawDataReader::Class_Version(), "KVFAZIARawDataReader.h", 18,
                  typeid(::KVFAZIARawDataReader), DefineBehavior(ptr, ptr),
                  &::KVFAZIARawDataReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIARawDataReader) );
      instance.SetNew(&new_KVFAZIARawDataReader);
      instance.SetNewArray(&newArray_KVFAZIARawDataReader);
      instance.SetDelete(&delete_KVFAZIARawDataReader);
      instance.SetDeleteArray(&deleteArray_KVFAZIARawDataReader);
      instance.SetDestructor(&destruct_KVFAZIARawDataReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIARawDataReader*)
   {
      return GenerateInitInstanceLocal((::KVFAZIARawDataReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIARawDataReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIAReader(void *p = 0);
   static void *newArray_KVFAZIAReader(Long_t size, void *p);
   static void delete_KVFAZIAReader(void *p);
   static void deleteArray_KVFAZIAReader(void *p);
   static void destruct_KVFAZIAReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAReader*)
   {
      ::KVFAZIAReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAReader", ::KVFAZIAReader::Class_Version(), "KVFAZIAReader.h", 20,
                  typeid(::KVFAZIAReader), DefineBehavior(ptr, ptr),
                  &::KVFAZIAReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAReader) );
      instance.SetNew(&new_KVFAZIAReader);
      instance.SetNewArray(&newArray_KVFAZIAReader);
      instance.SetDelete(&delete_KVFAZIAReader);
      instance.SetDeleteArray(&deleteArray_KVFAZIAReader);
      instance.SetDestructor(&destruct_KVFAZIAReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAReader*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIARawDataAnalyser(void *p = 0);
   static void *newArray_KVFAZIARawDataAnalyser(Long_t size, void *p);
   static void delete_KVFAZIARawDataAnalyser(void *p);
   static void deleteArray_KVFAZIARawDataAnalyser(void *p);
   static void destruct_KVFAZIARawDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIARawDataAnalyser*)
   {
      ::KVFAZIARawDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIARawDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIARawDataAnalyser", ::KVFAZIARawDataAnalyser::Class_Version(), "KVFAZIARawDataAnalyser.h", 18,
                  typeid(::KVFAZIARawDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVFAZIARawDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIARawDataAnalyser) );
      instance.SetNew(&new_KVFAZIARawDataAnalyser);
      instance.SetNewArray(&newArray_KVFAZIARawDataAnalyser);
      instance.SetDelete(&delete_KVFAZIARawDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVFAZIARawDataAnalyser);
      instance.SetDestructor(&destruct_KVFAZIARawDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIARawDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVFAZIARawDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIARawDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIARawDataReconstructor(void *p = 0);
   static void *newArray_KVFAZIARawDataReconstructor(Long_t size, void *p);
   static void delete_KVFAZIARawDataReconstructor(void *p);
   static void deleteArray_KVFAZIARawDataReconstructor(void *p);
   static void destruct_KVFAZIARawDataReconstructor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIARawDataReconstructor*)
   {
      ::KVFAZIARawDataReconstructor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIARawDataReconstructor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIARawDataReconstructor", ::KVFAZIARawDataReconstructor::Class_Version(), "KVFAZIARawDataReconstructor.h", 13,
                  typeid(::KVFAZIARawDataReconstructor), DefineBehavior(ptr, ptr),
                  &::KVFAZIARawDataReconstructor::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIARawDataReconstructor) );
      instance.SetNew(&new_KVFAZIARawDataReconstructor);
      instance.SetNewArray(&newArray_KVFAZIARawDataReconstructor);
      instance.SetDelete(&delete_KVFAZIARawDataReconstructor);
      instance.SetDeleteArray(&deleteArray_KVFAZIARawDataReconstructor);
      instance.SetDestructor(&destruct_KVFAZIARawDataReconstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIARawDataReconstructor*)
   {
      return GenerateInitInstanceLocal((::KVFAZIARawDataReconstructor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIARawDataReconstructor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIAReconDataAnalyser(void *p = 0);
   static void *newArray_KVFAZIAReconDataAnalyser(Long_t size, void *p);
   static void delete_KVFAZIAReconDataAnalyser(void *p);
   static void deleteArray_KVFAZIAReconDataAnalyser(void *p);
   static void destruct_KVFAZIAReconDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAReconDataAnalyser*)
   {
      ::KVFAZIAReconDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAReconDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAReconDataAnalyser", ::KVFAZIAReconDataAnalyser::Class_Version(), "KVFAZIAReconDataAnalyser.h", 18,
                  typeid(::KVFAZIAReconDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVFAZIAReconDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAReconDataAnalyser) );
      instance.SetNew(&new_KVFAZIAReconDataAnalyser);
      instance.SetNewArray(&newArray_KVFAZIAReconDataAnalyser);
      instance.SetDelete(&delete_KVFAZIAReconDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVFAZIAReconDataAnalyser);
      instance.SetDestructor(&destruct_KVFAZIAReconDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAReconDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAReconDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAReconDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIASelector(void *p = 0);
   static void *newArray_KVFAZIASelector(Long_t size, void *p);
   static void delete_KVFAZIASelector(void *p);
   static void deleteArray_KVFAZIASelector(void *p);
   static void destruct_KVFAZIASelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIASelector*)
   {
      ::KVFAZIASelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIASelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIASelector", ::KVFAZIASelector::Class_Version(), "KVFAZIASelector.h", 10,
                  typeid(::KVFAZIASelector), DefineBehavior(ptr, ptr),
                  &::KVFAZIASelector::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIASelector) );
      instance.SetNew(&new_KVFAZIASelector);
      instance.SetNewArray(&newArray_KVFAZIASelector);
      instance.SetDelete(&delete_KVFAZIASelector);
      instance.SetDeleteArray(&deleteArray_KVFAZIASelector);
      instance.SetDestructor(&destruct_KVFAZIASelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIASelector*)
   {
      return GenerateInitInstanceLocal((::KVFAZIASelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIASelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIARawDataReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIARawDataReader::Class_Name()
{
   return "KVFAZIARawDataReader";
}

//______________________________________________________________________________
const char *KVFAZIARawDataReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIARawDataReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIARawDataReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIARawDataReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAReader::Class_Name()
{
   return "KVFAZIAReader";
}

//______________________________________________________________________________
const char *KVFAZIAReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIARawDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIARawDataAnalyser::Class_Name()
{
   return "KVFAZIARawDataAnalyser";
}

//______________________________________________________________________________
const char *KVFAZIARawDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIARawDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIARawDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIARawDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIARawDataReconstructor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIARawDataReconstructor::Class_Name()
{
   return "KVFAZIARawDataReconstructor";
}

//______________________________________________________________________________
const char *KVFAZIARawDataReconstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReconstructor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIARawDataReconstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReconstructor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIARawDataReconstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReconstructor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIARawDataReconstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIARawDataReconstructor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAReconDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAReconDataAnalyser::Class_Name()
{
   return "KVFAZIAReconDataAnalyser";
}

//______________________________________________________________________________
const char *KVFAZIAReconDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAReconDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAReconDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAReconDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIASelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIASelector::Class_Name()
{
   return "KVFAZIASelector";
}

//______________________________________________________________________________
const char *KVFAZIASelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIASelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIASelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIASelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIASelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVFAZIARawDataReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIARawDataReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIARawDataReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIARawDataReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIARawDataReader(void *p) {
      return  p ? new(p) ::KVFAZIARawDataReader : new ::KVFAZIARawDataReader;
   }
   static void *newArray_KVFAZIARawDataReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIARawDataReader[nElements] : new ::KVFAZIARawDataReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIARawDataReader(void *p) {
      delete ((::KVFAZIARawDataReader*)p);
   }
   static void deleteArray_KVFAZIARawDataReader(void *p) {
      delete [] ((::KVFAZIARawDataReader*)p);
   }
   static void destruct_KVFAZIARawDataReader(void *p) {
      typedef ::KVFAZIARawDataReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIARawDataReader

//______________________________________________________________________________
void KVFAZIAReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAReader(void *p) {
      return  p ? new(p) ::KVFAZIAReader : new ::KVFAZIAReader;
   }
   static void *newArray_KVFAZIAReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAReader[nElements] : new ::KVFAZIAReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAReader(void *p) {
      delete ((::KVFAZIAReader*)p);
   }
   static void deleteArray_KVFAZIAReader(void *p) {
      delete [] ((::KVFAZIAReader*)p);
   }
   static void destruct_KVFAZIAReader(void *p) {
      typedef ::KVFAZIAReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAReader

//______________________________________________________________________________
void KVFAZIARawDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIARawDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIARawDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIARawDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIARawDataAnalyser(void *p) {
      return  p ? new(p) ::KVFAZIARawDataAnalyser : new ::KVFAZIARawDataAnalyser;
   }
   static void *newArray_KVFAZIARawDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIARawDataAnalyser[nElements] : new ::KVFAZIARawDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIARawDataAnalyser(void *p) {
      delete ((::KVFAZIARawDataAnalyser*)p);
   }
   static void deleteArray_KVFAZIARawDataAnalyser(void *p) {
      delete [] ((::KVFAZIARawDataAnalyser*)p);
   }
   static void destruct_KVFAZIARawDataAnalyser(void *p) {
      typedef ::KVFAZIARawDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIARawDataAnalyser

//______________________________________________________________________________
void KVFAZIARawDataReconstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIARawDataReconstructor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIARawDataReconstructor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIARawDataReconstructor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIARawDataReconstructor(void *p) {
      return  p ? new(p) ::KVFAZIARawDataReconstructor : new ::KVFAZIARawDataReconstructor;
   }
   static void *newArray_KVFAZIARawDataReconstructor(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIARawDataReconstructor[nElements] : new ::KVFAZIARawDataReconstructor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIARawDataReconstructor(void *p) {
      delete ((::KVFAZIARawDataReconstructor*)p);
   }
   static void deleteArray_KVFAZIARawDataReconstructor(void *p) {
      delete [] ((::KVFAZIARawDataReconstructor*)p);
   }
   static void destruct_KVFAZIARawDataReconstructor(void *p) {
      typedef ::KVFAZIARawDataReconstructor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIARawDataReconstructor

//______________________________________________________________________________
void KVFAZIAReconDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAReconDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAReconDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAReconDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAReconDataAnalyser(void *p) {
      return  p ? new(p) ::KVFAZIAReconDataAnalyser : new ::KVFAZIAReconDataAnalyser;
   }
   static void *newArray_KVFAZIAReconDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAReconDataAnalyser[nElements] : new ::KVFAZIAReconDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAReconDataAnalyser(void *p) {
      delete ((::KVFAZIAReconDataAnalyser*)p);
   }
   static void deleteArray_KVFAZIAReconDataAnalyser(void *p) {
      delete [] ((::KVFAZIAReconDataAnalyser*)p);
   }
   static void destruct_KVFAZIAReconDataAnalyser(void *p) {
      typedef ::KVFAZIAReconDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAReconDataAnalyser

//______________________________________________________________________________
void KVFAZIASelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIASelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIASelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIASelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIASelector(void *p) {
      return  p ? new(p) ::KVFAZIASelector : new ::KVFAZIASelector;
   }
   static void *newArray_KVFAZIASelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIASelector[nElements] : new ::KVFAZIASelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIASelector(void *p) {
      delete ((::KVFAZIASelector*)p);
   }
   static void deleteArray_KVFAZIASelector(void *p) {
      delete [] ((::KVFAZIASelector*)p);
   }
   static void destruct_KVFAZIASelector(void *p) {
      typedef ::KVFAZIASelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIASelector

namespace {
  void TriggerDictionaryInitialization_libFAZIAanalysis_Impl() {
    static const char* headers[] = {
"KVFAZIAReconDataAnalyser.h",
"KVFAZIARawDataReader.h",
"KVFAZIARawDataReconstructor.h",
"KVFAZIARawDataAnalyser.h",
"KVFAZIASelector.h",
"KVFAZIAReader.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/FAZIA/analysis/inc",
"/home/john/software/sources/kaliveda.git/FAZIA/geometry",
"/home/john/software/sources/kaliveda.git/FAZIA/db",
"/home/john/software/sources/kaliveda.git/FAZIA/analysis",
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
"/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/analysis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$KVFAZIARawDataReader.h")))  KVFAZIARawDataReader;
class __attribute__((annotate("$clingAutoload$KVFAZIARawDataReader.h")))  KVFAZIAReader;
class __attribute__((annotate(R"ATTRDUMP(For analysing reconstructed INDRA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIARawDataAnalyser.h")))  KVFAZIARawDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Handle reconstruction of FAZIA events)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIARawDataReconstructor.h")))  KVFAZIARawDataReconstructor;
class __attribute__((annotate(R"ATTRDUMP(For analysing reconstructed FAZIA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIAReconDataAnalyser.h")))  KVFAZIAReconDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(selector to analyze FAZIA reconstructed data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIASelector.h")))  KVFAZIASelector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVFAZIAReconDataAnalyser.h"
#include "KVFAZIARawDataReader.h"
#include "KVFAZIARawDataReconstructor.h"
#include "KVFAZIARawDataAnalyser.h"
#include "KVFAZIASelector.h"
#include "KVFAZIAReader.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVFAZIARawDataAnalyser", payloadCode, "@",
"KVFAZIARawDataReader", payloadCode, "@",
"KVFAZIARawDataReconstructor", payloadCode, "@",
"KVFAZIAReader", payloadCode, "@",
"KVFAZIAReconDataAnalyser", payloadCode, "@",
"KVFAZIASelector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFAZIAanalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFAZIAanalysis_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFAZIAanalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFAZIAanalysis() {
  TriggerDictionaryInitialization_libFAZIAanalysis_Impl();
}
