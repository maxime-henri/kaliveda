// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDettrieur

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
#include "KVTrieurTranche.h"
#include "KVTrieurLin.h"
#include "KVTrieur.h"
#include "KVTrieurBloc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_KVTrieur(void *p);
   static void deleteArray_KVTrieur(void *p);
   static void destruct_KVTrieur(void *p);
   static void streamer_KVTrieur(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTrieur*)
   {
      ::KVTrieur *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTrieur >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTrieur", ::KVTrieur::Class_Version(), "KVTrieur.h", 20,
                  typeid(::KVTrieur), DefineBehavior(ptr, ptr),
                  &::KVTrieur::Dictionary, isa_proxy, 16,
                  sizeof(::KVTrieur) );
      instance.SetDelete(&delete_KVTrieur);
      instance.SetDeleteArray(&deleteArray_KVTrieur);
      instance.SetDestructor(&destruct_KVTrieur);
      instance.SetStreamerFunc(&streamer_KVTrieur);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTrieur*)
   {
      return GenerateInitInstanceLocal((::KVTrieur*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTrieur*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTrieurLin(void *p = 0);
   static void *newArray_KVTrieurLin(Long_t size, void *p);
   static void delete_KVTrieurLin(void *p);
   static void deleteArray_KVTrieurLin(void *p);
   static void destruct_KVTrieurLin(void *p);
   static void streamer_KVTrieurLin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTrieurLin*)
   {
      ::KVTrieurLin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTrieurLin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTrieurLin", ::KVTrieurLin::Class_Version(), "KVTrieurLin.h", 15,
                  typeid(::KVTrieurLin), DefineBehavior(ptr, ptr),
                  &::KVTrieurLin::Dictionary, isa_proxy, 16,
                  sizeof(::KVTrieurLin) );
      instance.SetNew(&new_KVTrieurLin);
      instance.SetNewArray(&newArray_KVTrieurLin);
      instance.SetDelete(&delete_KVTrieurLin);
      instance.SetDeleteArray(&deleteArray_KVTrieurLin);
      instance.SetDestructor(&destruct_KVTrieurLin);
      instance.SetStreamerFunc(&streamer_KVTrieurLin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTrieurLin*)
   {
      return GenerateInitInstanceLocal((::KVTrieurLin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTrieurLin*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTrieurTranche(void *p = 0);
   static void *newArray_KVTrieurTranche(Long_t size, void *p);
   static void delete_KVTrieurTranche(void *p);
   static void deleteArray_KVTrieurTranche(void *p);
   static void destruct_KVTrieurTranche(void *p);
   static void streamer_KVTrieurTranche(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTrieurTranche*)
   {
      ::KVTrieurTranche *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTrieurTranche >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTrieurTranche", ::KVTrieurTranche::Class_Version(), "KVTrieurTranche.h", 16,
                  typeid(::KVTrieurTranche), DefineBehavior(ptr, ptr),
                  &::KVTrieurTranche::Dictionary, isa_proxy, 16,
                  sizeof(::KVTrieurTranche) );
      instance.SetNew(&new_KVTrieurTranche);
      instance.SetNewArray(&newArray_KVTrieurTranche);
      instance.SetDelete(&delete_KVTrieurTranche);
      instance.SetDeleteArray(&deleteArray_KVTrieurTranche);
      instance.SetDestructor(&destruct_KVTrieurTranche);
      instance.SetStreamerFunc(&streamer_KVTrieurTranche);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTrieurTranche*)
   {
      return GenerateInitInstanceLocal((::KVTrieurTranche*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTrieurTranche*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTrieurBloc(void *p = 0);
   static void *newArray_KVTrieurBloc(Long_t size, void *p);
   static void delete_KVTrieurBloc(void *p);
   static void deleteArray_KVTrieurBloc(void *p);
   static void destruct_KVTrieurBloc(void *p);
   static void streamer_KVTrieurBloc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTrieurBloc*)
   {
      ::KVTrieurBloc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTrieurBloc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTrieurBloc", ::KVTrieurBloc::Class_Version(), "KVTrieurBloc.h", 16,
                  typeid(::KVTrieurBloc), DefineBehavior(ptr, ptr),
                  &::KVTrieurBloc::Dictionary, isa_proxy, 16,
                  sizeof(::KVTrieurBloc) );
      instance.SetNew(&new_KVTrieurBloc);
      instance.SetNewArray(&newArray_KVTrieurBloc);
      instance.SetDelete(&delete_KVTrieurBloc);
      instance.SetDeleteArray(&deleteArray_KVTrieurBloc);
      instance.SetDestructor(&destruct_KVTrieurBloc);
      instance.SetStreamerFunc(&streamer_KVTrieurBloc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTrieurBloc*)
   {
      return GenerateInitInstanceLocal((::KVTrieurBloc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTrieurBloc*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVTrieur::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTrieur::Class_Name()
{
   return "KVTrieur";
}

//______________________________________________________________________________
const char *KVTrieur::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieur*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTrieur::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieur*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTrieur::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieur*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTrieur::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieur*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTrieurLin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTrieurLin::Class_Name()
{
   return "KVTrieurLin";
}

//______________________________________________________________________________
const char *KVTrieurLin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurLin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTrieurLin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurLin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTrieurLin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurLin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTrieurLin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurLin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTrieurTranche::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTrieurTranche::Class_Name()
{
   return "KVTrieurTranche";
}

//______________________________________________________________________________
const char *KVTrieurTranche::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurTranche*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTrieurTranche::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurTranche*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTrieurTranche::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurTranche*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTrieurTranche::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurTranche*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTrieurBloc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTrieurBloc::Class_Name()
{
   return "KVTrieurBloc";
}

//______________________________________________________________________________
const char *KVTrieurBloc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurBloc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTrieurBloc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurBloc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTrieurBloc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurBloc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTrieurBloc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTrieurBloc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVTrieur::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTrieur.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> nb_cases;
      noms_cases->Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVTrieur::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTrieur::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << nb_cases;
      noms_cases->Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVTrieur(void *p) {
      delete ((::KVTrieur*)p);
   }
   static void deleteArray_KVTrieur(void *p) {
      delete [] ((::KVTrieur*)p);
   }
   static void destruct_KVTrieur(void *p) {
      typedef ::KVTrieur current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTrieur(TBuffer &buf, void *obj) {
      ((::KVTrieur*)obj)->::KVTrieur::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTrieur

//______________________________________________________________________________
void KVTrieurLin::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTrieurLin.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVTrieur::Streamer(R__b);
      R__b >> xmin;
      R__b >> xmax;
      R__b.ReadStaticArray((char*)nom_var);
      R__b.CheckByteCount(R__s, R__c, KVTrieurLin::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTrieurLin::IsA(), kTRUE);
      KVTrieur::Streamer(R__b);
      R__b << xmin;
      R__b << xmax;
      R__b.WriteArray(nom_var, 80);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTrieurLin(void *p) {
      return  p ? new(p) ::KVTrieurLin : new ::KVTrieurLin;
   }
   static void *newArray_KVTrieurLin(Long_t nElements, void *p) {
      return p ? new(p) ::KVTrieurLin[nElements] : new ::KVTrieurLin[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTrieurLin(void *p) {
      delete ((::KVTrieurLin*)p);
   }
   static void deleteArray_KVTrieurLin(void *p) {
      delete [] ((::KVTrieurLin*)p);
   }
   static void destruct_KVTrieurLin(void *p) {
      typedef ::KVTrieurLin current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTrieurLin(TBuffer &buf, void *obj) {
      ((::KVTrieurLin*)obj)->::KVTrieurLin::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTrieurLin

//______________________________________________________________________________
void KVTrieurTranche::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTrieurTranche.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVTrieur::Streamer(R__b);
      xtranches.Streamer(R__b);
      R__b.ReadStaticArray((char*)nomVar);
      R__b.CheckByteCount(R__s, R__c, KVTrieurTranche::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTrieurTranche::IsA(), kTRUE);
      KVTrieur::Streamer(R__b);
      xtranches.Streamer(R__b);
      R__b.WriteArray(nomVar, 80);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTrieurTranche(void *p) {
      return  p ? new(p) ::KVTrieurTranche : new ::KVTrieurTranche;
   }
   static void *newArray_KVTrieurTranche(Long_t nElements, void *p) {
      return p ? new(p) ::KVTrieurTranche[nElements] : new ::KVTrieurTranche[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTrieurTranche(void *p) {
      delete ((::KVTrieurTranche*)p);
   }
   static void deleteArray_KVTrieurTranche(void *p) {
      delete [] ((::KVTrieurTranche*)p);
   }
   static void destruct_KVTrieurTranche(void *p) {
      typedef ::KVTrieurTranche current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTrieurTranche(TBuffer &buf, void *obj) {
      ((::KVTrieurTranche*)obj)->::KVTrieurTranche::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTrieurTranche

//______________________________________________________________________________
void KVTrieurBloc::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTrieurBloc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVTrieur::Streamer(R__b);
      xmin.Streamer(R__b);
      xmax.Streamer(R__b);
      R__b.ReadStaticArray((char*)nomVar);
      R__b.CheckByteCount(R__s, R__c, KVTrieurBloc::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTrieurBloc::IsA(), kTRUE);
      KVTrieur::Streamer(R__b);
      xmin.Streamer(R__b);
      xmax.Streamer(R__b);
      R__b.WriteArray(nomVar, 80);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTrieurBloc(void *p) {
      return  p ? new(p) ::KVTrieurBloc : new ::KVTrieurBloc;
   }
   static void *newArray_KVTrieurBloc(Long_t nElements, void *p) {
      return p ? new(p) ::KVTrieurBloc[nElements] : new ::KVTrieurBloc[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTrieurBloc(void *p) {
      delete ((::KVTrieurBloc*)p);
   }
   static void deleteArray_KVTrieurBloc(void *p) {
      delete [] ((::KVTrieurBloc*)p);
   }
   static void destruct_KVTrieurBloc(void *p) {
      typedef ::KVTrieurBloc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTrieurBloc(TBuffer &buf, void *obj) {
      ((::KVTrieurBloc*)obj)->::KVTrieurBloc::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTrieurBloc

namespace {
  void TriggerDictionaryInitialization_libKVMultiDettrieur_Impl() {
    static const char* headers[] = {
"KVTrieurTranche.h",
"KVTrieurLin.h",
"KVTrieur.h",
"KVTrieurBloc.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/trieur/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/trieur",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/trieur/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base class for sortings)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTrieurTranche.h")))  KVTrieur;
class __attribute__((annotate(R"ATTRDUMP(Class for linear sorting)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTrieurLin.h")))  KVTrieurLin;
class __attribute__((annotate(R"ATTRDUMP(Class for sorting with attached cells)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTrieurTranche.h")))  KVTrieurTranche;
class __attribute__((annotate(R"ATTRDUMP(Class for sorting with detached cells)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTrieurBloc.h")))  KVTrieurBloc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVTrieurTranche.h"
#include "KVTrieurLin.h"
#include "KVTrieur.h"
#include "KVTrieurBloc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVTrieur", payloadCode, "@",
"KVTrieurBloc", payloadCode, "@",
"KVTrieurLin", payloadCode, "@",
"KVTrieurTranche", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDettrieur",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDettrieur_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDettrieur_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDettrieur() {
  TriggerDictionaryInitialization_libKVMultiDettrieur_Impl();
}
