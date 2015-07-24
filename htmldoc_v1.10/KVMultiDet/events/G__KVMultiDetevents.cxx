// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetevents

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
#include "KVEvent.h"
#include "KVSimEvent.h"
#include "KVWilckeReactionParameters.h"
#include "KVGenPhaseSpace.h"
#include "KVEventViewer.h"
#include "KVTestEvent.h"
#include "KVBreakUp.h"
#include "KV2Body.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVSimEvent(void *p = 0);
   static void *newArray_KVSimEvent(Long_t size, void *p);
   static void delete_KVSimEvent(void *p);
   static void deleteArray_KVSimEvent(void *p);
   static void destruct_KVSimEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimEvent*)
   {
      ::KVSimEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimEvent", ::KVSimEvent::Class_Version(), "KVSimEvent.h", 9,
                  typeid(::KVSimEvent), DefineBehavior(ptr, ptr),
                  &::KVSimEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVSimEvent) );
      instance.SetNew(&new_KVSimEvent);
      instance.SetNewArray(&newArray_KVSimEvent);
      instance.SetDelete(&delete_KVSimEvent);
      instance.SetDeleteArray(&deleteArray_KVSimEvent);
      instance.SetDestructor(&destruct_KVSimEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimEvent*)
   {
      return GenerateInitInstanceLocal((::KVSimEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEvent(void *p = 0);
   static void *newArray_KVEvent(Long_t size, void *p);
   static void delete_KVEvent(void *p);
   static void deleteArray_KVEvent(void *p);
   static void destruct_KVEvent(void *p);
   static void streamer_KVEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEvent*)
   {
      ::KVEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEvent", ::KVEvent::Class_Version(), "KVEvent.h", 37,
                  typeid(::KVEvent), DefineBehavior(ptr, ptr),
                  &::KVEvent::Dictionary, isa_proxy, 17,
                  sizeof(::KVEvent) );
      instance.SetNew(&new_KVEvent);
      instance.SetNewArray(&newArray_KVEvent);
      instance.SetDelete(&delete_KVEvent);
      instance.SetDeleteArray(&deleteArray_KVEvent);
      instance.SetDestructor(&destruct_KVEvent);
      instance.SetStreamerFunc(&streamer_KVEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEvent*)
   {
      return GenerateInitInstanceLocal((::KVEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEventViewer(void *p = 0);
   static void *newArray_KVEventViewer(Long_t size, void *p);
   static void delete_KVEventViewer(void *p);
   static void deleteArray_KVEventViewer(void *p);
   static void destruct_KVEventViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEventViewer*)
   {
      ::KVEventViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEventViewer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEventViewer", ::KVEventViewer::Class_Version(), "KVEventViewer.h", 19,
                  typeid(::KVEventViewer), DefineBehavior(ptr, ptr),
                  &::KVEventViewer::Dictionary, isa_proxy, 4,
                  sizeof(::KVEventViewer) );
      instance.SetNew(&new_KVEventViewer);
      instance.SetNewArray(&newArray_KVEventViewer);
      instance.SetDelete(&delete_KVEventViewer);
      instance.SetDeleteArray(&deleteArray_KVEventViewer);
      instance.SetDestructor(&destruct_KVEventViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEventViewer*)
   {
      return GenerateInitInstanceLocal((::KVEventViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEventViewer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTestEvent(void *p = 0);
   static void *newArray_KVTestEvent(Long_t size, void *p);
   static void delete_KVTestEvent(void *p);
   static void deleteArray_KVTestEvent(void *p);
   static void destruct_KVTestEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTestEvent*)
   {
      ::KVTestEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTestEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTestEvent", ::KVTestEvent::Class_Version(), "KVTestEvent.h", 28,
                  typeid(::KVTestEvent), DefineBehavior(ptr, ptr),
                  &::KVTestEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVTestEvent) );
      instance.SetNew(&new_KVTestEvent);
      instance.SetNewArray(&newArray_KVTestEvent);
      instance.SetDelete(&delete_KVTestEvent);
      instance.SetDeleteArray(&deleteArray_KVTestEvent);
      instance.SetDestructor(&destruct_KVTestEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTestEvent*)
   {
      return GenerateInitInstanceLocal((::KVTestEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTestEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KV2Body(void *p = 0);
   static void *newArray_KV2Body(Long_t size, void *p);
   static void delete_KV2Body(void *p);
   static void deleteArray_KV2Body(void *p);
   static void destruct_KV2Body(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KV2Body*)
   {
      ::KV2Body *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KV2Body >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KV2Body", ::KV2Body::Class_Version(), "KV2Body.h", 29,
                  typeid(::KV2Body), DefineBehavior(ptr, ptr),
                  &::KV2Body::Dictionary, isa_proxy, 4,
                  sizeof(::KV2Body) );
      instance.SetNew(&new_KV2Body);
      instance.SetNewArray(&newArray_KV2Body);
      instance.SetDelete(&delete_KV2Body);
      instance.SetDeleteArray(&deleteArray_KV2Body);
      instance.SetDestructor(&destruct_KV2Body);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KV2Body*)
   {
      return GenerateInitInstanceLocal((::KV2Body*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KV2Body*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBreakUp(void *p = 0);
   static void *newArray_KVBreakUp(Long_t size, void *p);
   static void delete_KVBreakUp(void *p);
   static void deleteArray_KVBreakUp(void *p);
   static void destruct_KVBreakUp(void *p);
   static void streamer_KVBreakUp(TBuffer &buf, void *obj);
   static Long64_t merge_KVBreakUp(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBreakUp*)
   {
      ::KVBreakUp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBreakUp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBreakUp", ::KVBreakUp::Class_Version(), "KVBreakUp.h", 26,
                  typeid(::KVBreakUp), DefineBehavior(ptr, ptr),
                  &::KVBreakUp::Dictionary, isa_proxy, 16,
                  sizeof(::KVBreakUp) );
      instance.SetNew(&new_KVBreakUp);
      instance.SetNewArray(&newArray_KVBreakUp);
      instance.SetDelete(&delete_KVBreakUp);
      instance.SetDeleteArray(&deleteArray_KVBreakUp);
      instance.SetDestructor(&destruct_KVBreakUp);
      instance.SetStreamerFunc(&streamer_KVBreakUp);
      instance.SetMerge(&merge_KVBreakUp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBreakUp*)
   {
      return GenerateInitInstanceLocal((::KVBreakUp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBreakUp*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVWilckeReactionParameters(void *p = 0);
   static void *newArray_KVWilckeReactionParameters(Long_t size, void *p);
   static void delete_KVWilckeReactionParameters(void *p);
   static void deleteArray_KVWilckeReactionParameters(void *p);
   static void destruct_KVWilckeReactionParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVWilckeReactionParameters*)
   {
      ::KVWilckeReactionParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVWilckeReactionParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVWilckeReactionParameters", ::KVWilckeReactionParameters::Class_Version(), "KVWilckeReactionParameters.h", 14,
                  typeid(::KVWilckeReactionParameters), DefineBehavior(ptr, ptr),
                  &::KVWilckeReactionParameters::Dictionary, isa_proxy, 4,
                  sizeof(::KVWilckeReactionParameters) );
      instance.SetNew(&new_KVWilckeReactionParameters);
      instance.SetNewArray(&newArray_KVWilckeReactionParameters);
      instance.SetDelete(&delete_KVWilckeReactionParameters);
      instance.SetDeleteArray(&deleteArray_KVWilckeReactionParameters);
      instance.SetDestructor(&destruct_KVWilckeReactionParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVWilckeReactionParameters*)
   {
      return GenerateInitInstanceLocal((::KVWilckeReactionParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVWilckeReactionParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGenPhaseSpace(void *p = 0);
   static void *newArray_KVGenPhaseSpace(Long_t size, void *p);
   static void delete_KVGenPhaseSpace(void *p);
   static void deleteArray_KVGenPhaseSpace(void *p);
   static void destruct_KVGenPhaseSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGenPhaseSpace*)
   {
      ::KVGenPhaseSpace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGenPhaseSpace >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGenPhaseSpace", ::KVGenPhaseSpace::Class_Version(), "KVGenPhaseSpace.h", 11,
                  typeid(::KVGenPhaseSpace), DefineBehavior(ptr, ptr),
                  &::KVGenPhaseSpace::Dictionary, isa_proxy, 4,
                  sizeof(::KVGenPhaseSpace) );
      instance.SetNew(&new_KVGenPhaseSpace);
      instance.SetNewArray(&newArray_KVGenPhaseSpace);
      instance.SetDelete(&delete_KVGenPhaseSpace);
      instance.SetDeleteArray(&deleteArray_KVGenPhaseSpace);
      instance.SetDestructor(&destruct_KVGenPhaseSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGenPhaseSpace*)
   {
      return GenerateInitInstanceLocal((::KVGenPhaseSpace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGenPhaseSpace*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVSimEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimEvent::Class_Name()
{
   return "KVSimEvent";
}

//______________________________________________________________________________
const char *KVSimEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEvent::Class_Name()
{
   return "KVEvent";
}

//______________________________________________________________________________
const char *KVEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEventViewer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEventViewer::Class_Name()
{
   return "KVEventViewer";
}

//______________________________________________________________________________
const char *KVEventViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventViewer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEventViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventViewer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEventViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventViewer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEventViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventViewer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTestEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTestEvent::Class_Name()
{
   return "KVTestEvent";
}

//______________________________________________________________________________
const char *KVTestEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTestEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTestEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTestEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KV2Body::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KV2Body::Class_Name()
{
   return "KV2Body";
}

//______________________________________________________________________________
const char *KV2Body::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV2Body*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KV2Body::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV2Body*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KV2Body::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV2Body*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KV2Body::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV2Body*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBreakUp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBreakUp::Class_Name()
{
   return "KVBreakUp";
}

//______________________________________________________________________________
const char *KVBreakUp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBreakUp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBreakUp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBreakUp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBreakUp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBreakUp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBreakUp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBreakUp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVWilckeReactionParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVWilckeReactionParameters::Class_Name()
{
   return "KVWilckeReactionParameters";
}

//______________________________________________________________________________
const char *KVWilckeReactionParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWilckeReactionParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVWilckeReactionParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWilckeReactionParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVWilckeReactionParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWilckeReactionParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVWilckeReactionParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWilckeReactionParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGenPhaseSpace::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGenPhaseSpace::Class_Name()
{
   return "KVGenPhaseSpace";
}

//______________________________________________________________________________
const char *KVGenPhaseSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGenPhaseSpace*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGenPhaseSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGenPhaseSpace*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGenPhaseSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGenPhaseSpace*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGenPhaseSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGenPhaseSpace*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVSimEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSimEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSimEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimEvent(void *p) {
      return  p ? new(p) ::KVSimEvent : new ::KVSimEvent;
   }
   static void *newArray_KVSimEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimEvent[nElements] : new ::KVSimEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimEvent(void *p) {
      delete ((::KVSimEvent*)p);
   }
   static void deleteArray_KVSimEvent(void *p) {
      delete [] ((::KVSimEvent*)p);
   }
   static void destruct_KVSimEvent(void *p) {
      typedef ::KVSimEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSimEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEvent(void *p) {
      return  p ? new(p) ::KVEvent : new ::KVEvent;
   }
   static void *newArray_KVEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVEvent[nElements] : new ::KVEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEvent(void *p) {
      delete ((::KVEvent*)p);
   }
   static void deleteArray_KVEvent(void *p) {
      delete [] ((::KVEvent*)p);
   }
   static void destruct_KVEvent(void *p) {
      typedef ::KVEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVEvent(TBuffer &buf, void *obj) {
      ((::KVEvent*)obj)->::KVEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVEvent

//______________________________________________________________________________
void KVEventViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEventViewer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVEventViewer::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVEventViewer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEventViewer(void *p) {
      return  p ? new(p) ::KVEventViewer : new ::KVEventViewer;
   }
   static void *newArray_KVEventViewer(Long_t nElements, void *p) {
      return p ? new(p) ::KVEventViewer[nElements] : new ::KVEventViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEventViewer(void *p) {
      delete ((::KVEventViewer*)p);
   }
   static void deleteArray_KVEventViewer(void *p) {
      delete [] ((::KVEventViewer*)p);
   }
   static void destruct_KVEventViewer(void *p) {
      typedef ::KVEventViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVEventViewer

//______________________________________________________________________________
void KVTestEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTestEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTestEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTestEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTestEvent(void *p) {
      return  p ? new(p) ::KVTestEvent : new ::KVTestEvent;
   }
   static void *newArray_KVTestEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVTestEvent[nElements] : new ::KVTestEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTestEvent(void *p) {
      delete ((::KVTestEvent*)p);
   }
   static void deleteArray_KVTestEvent(void *p) {
      delete [] ((::KVTestEvent*)p);
   }
   static void destruct_KVTestEvent(void *p) {
      typedef ::KVTestEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTestEvent

//______________________________________________________________________________
void KV2Body::Streamer(TBuffer &R__b)
{
   // Stream an object of class KV2Body.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KV2Body::Class(),this);
   } else {
      R__b.WriteClassBuffer(KV2Body::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KV2Body(void *p) {
      return  p ? new(p) ::KV2Body : new ::KV2Body;
   }
   static void *newArray_KV2Body(Long_t nElements, void *p) {
      return p ? new(p) ::KV2Body[nElements] : new ::KV2Body[nElements];
   }
   // Wrapper around operator delete
   static void delete_KV2Body(void *p) {
      delete ((::KV2Body*)p);
   }
   static void deleteArray_KV2Body(void *p) {
      delete [] ((::KV2Body*)p);
   }
   static void destruct_KV2Body(void *p) {
      typedef ::KV2Body current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KV2Body

//______________________________________________________________________________
void KVBreakUp::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBreakUp.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVPartitionList::Streamer(R__b);
      R__b >> Ztotal;
      R__b >> Mtotal;
      R__b >> Zmin;
      delete [] bound;
      bound = new Int_t[Ztotal];
      R__b.ReadFastArray(bound,Ztotal);
      BreakUpMethod.Streamer(R__b);
      TRandom_Method.Streamer(R__b);
      R__b >> alea;
      nl.Streamer(R__b);
      R__b >> nbre_nuc;
      R__b >> size_max;
      delete [] size;
      size = new Int_t[size_max];
      R__b.ReadFastArray(size,size_max);
      R__b >> niter_tot;
      R__b >> tstart;
      R__b >> tstop;
      R__b >> tellapsed;
      R__b >> hzz;
      R__b >> hzt;
      R__b >> hmt;
      R__b >> lobjects;
      R__b >> lhisto;
      R__b >> partition;
      R__b >> current_event;
      R__b >> nraffine;
      R__b.CheckByteCount(R__s, R__c, KVBreakUp::IsA());
   } else {
      R__c = R__b.WriteVersion(KVBreakUp::IsA(), kTRUE);
      KVPartitionList::Streamer(R__b);
      R__b << Ztotal;
      R__b << Mtotal;
      R__b << Zmin;
      R__b.WriteFastArray(bound,Ztotal);
      BreakUpMethod.Streamer(R__b);
      TRandom_Method.Streamer(R__b);
      R__b << alea;
      nl.Streamer(R__b);
      R__b << nbre_nuc;
      R__b << size_max;
      R__b.WriteFastArray(size,size_max);
      R__b << niter_tot;
      R__b << tstart;
      R__b << tstop;
      R__b << tellapsed;
      R__b << (TObject*)hzz;
      R__b << (TObject*)hzt;
      R__b << (TObject*)hmt;
      R__b << lobjects;
      R__b << lhisto;
      R__b << partition;
      R__b << current_event;
      R__b << nraffine;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBreakUp(void *p) {
      return  p ? new(p) ::KVBreakUp : new ::KVBreakUp;
   }
   static void *newArray_KVBreakUp(Long_t nElements, void *p) {
      return p ? new(p) ::KVBreakUp[nElements] : new ::KVBreakUp[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBreakUp(void *p) {
      delete ((::KVBreakUp*)p);
   }
   static void deleteArray_KVBreakUp(void *p) {
      delete [] ((::KVBreakUp*)p);
   }
   static void destruct_KVBreakUp(void *p) {
      typedef ::KVBreakUp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBreakUp(TBuffer &buf, void *obj) {
      ((::KVBreakUp*)obj)->::KVBreakUp::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVBreakUp(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVBreakUp*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVBreakUp

//______________________________________________________________________________
void KVWilckeReactionParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVWilckeReactionParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVWilckeReactionParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVWilckeReactionParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVWilckeReactionParameters(void *p) {
      return  p ? new(p) ::KVWilckeReactionParameters : new ::KVWilckeReactionParameters;
   }
   static void *newArray_KVWilckeReactionParameters(Long_t nElements, void *p) {
      return p ? new(p) ::KVWilckeReactionParameters[nElements] : new ::KVWilckeReactionParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVWilckeReactionParameters(void *p) {
      delete ((::KVWilckeReactionParameters*)p);
   }
   static void deleteArray_KVWilckeReactionParameters(void *p) {
      delete [] ((::KVWilckeReactionParameters*)p);
   }
   static void destruct_KVWilckeReactionParameters(void *p) {
      typedef ::KVWilckeReactionParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVWilckeReactionParameters

//______________________________________________________________________________
void KVGenPhaseSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGenPhaseSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGenPhaseSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGenPhaseSpace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGenPhaseSpace(void *p) {
      return  p ? new(p) ::KVGenPhaseSpace : new ::KVGenPhaseSpace;
   }
   static void *newArray_KVGenPhaseSpace(Long_t nElements, void *p) {
      return p ? new(p) ::KVGenPhaseSpace[nElements] : new ::KVGenPhaseSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGenPhaseSpace(void *p) {
      delete ((::KVGenPhaseSpace*)p);
   }
   static void deleteArray_KVGenPhaseSpace(void *p) {
      delete [] ((::KVGenPhaseSpace*)p);
   }
   static void destruct_KVGenPhaseSpace(void *p) {
      typedef ::KVGenPhaseSpace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGenPhaseSpace

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetevents_Impl() {
    static const char* headers[] = {
"KVEvent.h",
"KVSimEvent.h",
"KVWilckeReactionParameters.h",
"KVGenPhaseSpace.h",
"KVEventViewer.h",
"KVTestEvent.h",
"KVBreakUp.h",
"KV2Body.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/events/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/events/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Events from simulation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimEvent.h")))  KVSimEvent;
class __attribute__((annotate(R"ATTRDUMP(Base class for all types of multiparticle event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEvent.h")))  KVEvent;
class __attribute__((annotate(R"ATTRDUMP(Draw events in 3D using OpenGL)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEventViewer.h")))  KVEventViewer;
class __attribute__((annotate(R"ATTRDUMP(A simple event generator to test charged particle array response)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTestEvent.h")))  KVTestEvent;
class __attribute__((annotate(R"ATTRDUMP(Relativistic binary kinematical calculation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KV2Body.h")))  KV2Body;
class __attribute__((annotate(R"ATTRDUMP(Exemple de differentes facons de casser un entier en plusieurs autres entiers, avec comme principales contraintes la charge totale et le nombre de clusters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBreakUp.h")))  KVBreakUp;
class __attribute__((annotate(R"ATTRDUMP(Reaction parameters for heavy-ion collisions (Wilcke et al))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVWilckeReactionParameters.h")))  KVWilckeReactionParameters;
class __attribute__((annotate(R"ATTRDUMP(Generate momenta for an event using microcanonical phase space sampling)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGenPhaseSpace.h")))  KVGenPhaseSpace;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVEvent.h"
#include "KVSimEvent.h"
#include "KVWilckeReactionParameters.h"
#include "KVGenPhaseSpace.h"
#include "KVEventViewer.h"
#include "KVTestEvent.h"
#include "KVBreakUp.h"
#include "KV2Body.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KV2Body", payloadCode, "@",
"KVBreakUp", payloadCode, "@",
"KVEvent", payloadCode, "@",
"KVEventViewer", payloadCode, "@",
"KVEventViewer::EHighlightMode", payloadCode, "@",
"KVGenPhaseSpace", payloadCode, "@",
"KVSimEvent", payloadCode, "@",
"KVTestEvent", payloadCode, "@",
"KVWilckeReactionParameters", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetevents",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetevents_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetevents_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetevents() {
  TriggerDictionaryInitialization_libKVMultiDetevents_Impl();
}
