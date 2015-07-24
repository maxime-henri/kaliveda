// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetexp_events

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
#include "KVGANILDataReader.h"
#include "KVIDTelescope.h"
#include "KVASMultiDetArray.h"
#include "KVReconstructedEvent.h"
#include "KVRTGIDManager.h"
#include "KVDetectorEvent.h"
#include "KVElasticScatterEvent.h"
#include "KVMultiDetArray.h"
#include "KVUpDater.h"
#include "KVGeoImport.h"
#include "KVReconstructedNucleus.h"
#include "KVEventFiltering.h"
#include "KVRawDataAnalyser.h"
#include "KVElasticScatter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVEventFiltering(void *p = 0);
   static void *newArray_KVEventFiltering(Long_t size, void *p);
   static void delete_KVEventFiltering(void *p);
   static void deleteArray_KVEventFiltering(void *p);
   static void destruct_KVEventFiltering(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEventFiltering*)
   {
      ::KVEventFiltering *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEventFiltering >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEventFiltering", ::KVEventFiltering::Class_Version(), "KVEventFiltering.h", 12,
                  typeid(::KVEventFiltering), DefineBehavior(ptr, ptr),
                  &::KVEventFiltering::Dictionary, isa_proxy, 4,
                  sizeof(::KVEventFiltering) );
      instance.SetNew(&new_KVEventFiltering);
      instance.SetNewArray(&newArray_KVEventFiltering);
      instance.SetDelete(&delete_KVEventFiltering);
      instance.SetDeleteArray(&deleteArray_KVEventFiltering);
      instance.SetDestructor(&destruct_KVEventFiltering);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEventFiltering*)
   {
      return GenerateInitInstanceLocal((::KVEventFiltering*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEventFiltering*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVReconstructedNucleus(void *p = 0);
   static void *newArray_KVReconstructedNucleus(Long_t size, void *p);
   static void delete_KVReconstructedNucleus(void *p);
   static void deleteArray_KVReconstructedNucleus(void *p);
   static void destruct_KVReconstructedNucleus(void *p);
   static void streamer_KVReconstructedNucleus(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVReconstructedNucleus*)
   {
      ::KVReconstructedNucleus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVReconstructedNucleus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVReconstructedNucleus", ::KVReconstructedNucleus::Class_Version(), "KVReconstructedNucleus.h", 13,
                  typeid(::KVReconstructedNucleus), DefineBehavior(ptr, ptr),
                  &::KVReconstructedNucleus::Dictionary, isa_proxy, 17,
                  sizeof(::KVReconstructedNucleus) );
      instance.SetNew(&new_KVReconstructedNucleus);
      instance.SetNewArray(&newArray_KVReconstructedNucleus);
      instance.SetDelete(&delete_KVReconstructedNucleus);
      instance.SetDeleteArray(&deleteArray_KVReconstructedNucleus);
      instance.SetDestructor(&destruct_KVReconstructedNucleus);
      instance.SetStreamerFunc(&streamer_KVReconstructedNucleus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVReconstructedNucleus*)
   {
      return GenerateInitInstanceLocal((::KVReconstructedNucleus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVReconstructedNucleus*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDetectorEvent(void *p = 0);
   static void *newArray_KVDetectorEvent(Long_t size, void *p);
   static void delete_KVDetectorEvent(void *p);
   static void deleteArray_KVDetectorEvent(void *p);
   static void destruct_KVDetectorEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDetectorEvent*)
   {
      ::KVDetectorEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDetectorEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDetectorEvent", ::KVDetectorEvent::Class_Version(), "KVDetectorEvent.h", 28,
                  typeid(::KVDetectorEvent), DefineBehavior(ptr, ptr),
                  &::KVDetectorEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVDetectorEvent) );
      instance.SetNew(&new_KVDetectorEvent);
      instance.SetNewArray(&newArray_KVDetectorEvent);
      instance.SetDelete(&delete_KVDetectorEvent);
      instance.SetDeleteArray(&deleteArray_KVDetectorEvent);
      instance.SetDestructor(&destruct_KVDetectorEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDetectorEvent*)
   {
      return GenerateInitInstanceLocal((::KVDetectorEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDetectorEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVElasticScatter(void *p = 0);
   static void *newArray_KVElasticScatter(Long_t size, void *p);
   static void delete_KVElasticScatter(void *p);
   static void deleteArray_KVElasticScatter(void *p);
   static void destruct_KVElasticScatter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVElasticScatter*)
   {
      ::KVElasticScatter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVElasticScatter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVElasticScatter", ::KVElasticScatter::Class_Version(), "KVElasticScatter.h", 26,
                  typeid(::KVElasticScatter), DefineBehavior(ptr, ptr),
                  &::KVElasticScatter::Dictionary, isa_proxy, 4,
                  sizeof(::KVElasticScatter) );
      instance.SetNew(&new_KVElasticScatter);
      instance.SetNewArray(&newArray_KVElasticScatter);
      instance.SetDelete(&delete_KVElasticScatter);
      instance.SetDeleteArray(&deleteArray_KVElasticScatter);
      instance.SetDestructor(&destruct_KVElasticScatter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVElasticScatter*)
   {
      return GenerateInitInstanceLocal((::KVElasticScatter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVElasticScatter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVElasticScatterEvent(void *p = 0);
   static void *newArray_KVElasticScatterEvent(Long_t size, void *p);
   static void delete_KVElasticScatterEvent(void *p);
   static void deleteArray_KVElasticScatterEvent(void *p);
   static void destruct_KVElasticScatterEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVElasticScatterEvent*)
   {
      ::KVElasticScatterEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVElasticScatterEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVElasticScatterEvent", ::KVElasticScatterEvent::Class_Version(), "KVElasticScatterEvent.h", 33,
                  typeid(::KVElasticScatterEvent), DefineBehavior(ptr, ptr),
                  &::KVElasticScatterEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVElasticScatterEvent) );
      instance.SetNew(&new_KVElasticScatterEvent);
      instance.SetNewArray(&newArray_KVElasticScatterEvent);
      instance.SetDelete(&delete_KVElasticScatterEvent);
      instance.SetDeleteArray(&deleteArray_KVElasticScatterEvent);
      instance.SetDestructor(&destruct_KVElasticScatterEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVElasticScatterEvent*)
   {
      return GenerateInitInstanceLocal((::KVElasticScatterEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVElasticScatterEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVReconstructedEvent(void *p = 0);
   static void *newArray_KVReconstructedEvent(Long_t size, void *p);
   static void delete_KVReconstructedEvent(void *p);
   static void deleteArray_KVReconstructedEvent(void *p);
   static void destruct_KVReconstructedEvent(void *p);
   static void streamer_KVReconstructedEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVReconstructedEvent*)
   {
      ::KVReconstructedEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVReconstructedEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVReconstructedEvent", ::KVReconstructedEvent::Class_Version(), "KVReconstructedEvent.h", 29,
                  typeid(::KVReconstructedEvent), DefineBehavior(ptr, ptr),
                  &::KVReconstructedEvent::Dictionary, isa_proxy, 17,
                  sizeof(::KVReconstructedEvent) );
      instance.SetNew(&new_KVReconstructedEvent);
      instance.SetNewArray(&newArray_KVReconstructedEvent);
      instance.SetDelete(&delete_KVReconstructedEvent);
      instance.SetDeleteArray(&deleteArray_KVReconstructedEvent);
      instance.SetDestructor(&destruct_KVReconstructedEvent);
      instance.SetStreamerFunc(&streamer_KVReconstructedEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVReconstructedEvent*)
   {
      return GenerateInitInstanceLocal((::KVReconstructedEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVReconstructedEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDTelescope(void *p = 0);
   static void *newArray_KVIDTelescope(Long_t size, void *p);
   static void delete_KVIDTelescope(void *p);
   static void deleteArray_KVIDTelescope(void *p);
   static void destruct_KVIDTelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDTelescope*)
   {
      ::KVIDTelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDTelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDTelescope", ::KVIDTelescope::Class_Version(), "KVIDTelescope.h", 35,
                  typeid(::KVIDTelescope), DefineBehavior(ptr, ptr),
                  &::KVIDTelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDTelescope) );
      instance.SetNew(&new_KVIDTelescope);
      instance.SetNewArray(&newArray_KVIDTelescope);
      instance.SetDelete(&delete_KVIDTelescope);
      instance.SetDeleteArray(&deleteArray_KVIDTelescope);
      instance.SetDestructor(&destruct_KVIDTelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDTelescope*)
   {
      return GenerateInitInstanceLocal((::KVIDTelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDTelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRTGIDManager(void *p = 0);
   static void *newArray_KVRTGIDManager(Long_t size, void *p);
   static void delete_KVRTGIDManager(void *p);
   static void deleteArray_KVRTGIDManager(void *p);
   static void destruct_KVRTGIDManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRTGIDManager*)
   {
      ::KVRTGIDManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRTGIDManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRTGIDManager", ::KVRTGIDManager::Class_Version(), "KVRTGIDManager.h", 9,
                  typeid(::KVRTGIDManager), DefineBehavior(ptr, ptr),
                  &::KVRTGIDManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVRTGIDManager) );
      instance.SetNew(&new_KVRTGIDManager);
      instance.SetNewArray(&newArray_KVRTGIDManager);
      instance.SetDelete(&delete_KVRTGIDManager);
      instance.SetDeleteArray(&deleteArray_KVRTGIDManager);
      instance.SetDestructor(&destruct_KVRTGIDManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRTGIDManager*)
   {
      return GenerateInitInstanceLocal((::KVRTGIDManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRTGIDManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVUpDater(void *p = 0);
   static void *newArray_KVUpDater(Long_t size, void *p);
   static void delete_KVUpDater(void *p);
   static void deleteArray_KVUpDater(void *p);
   static void destruct_KVUpDater(void *p);
   static void streamer_KVUpDater(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVUpDater*)
   {
      ::KVUpDater *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVUpDater >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVUpDater", ::KVUpDater::Class_Version(), "KVUpDater.h", 15,
                  typeid(::KVUpDater), DefineBehavior(ptr, ptr),
                  &::KVUpDater::Dictionary, isa_proxy, 16,
                  sizeof(::KVUpDater) );
      instance.SetNew(&new_KVUpDater);
      instance.SetNewArray(&newArray_KVUpDater);
      instance.SetDelete(&delete_KVUpDater);
      instance.SetDeleteArray(&deleteArray_KVUpDater);
      instance.SetDestructor(&destruct_KVUpDater);
      instance.SetStreamerFunc(&streamer_KVUpDater);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVUpDater*)
   {
      return GenerateInitInstanceLocal((::KVUpDater*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVUpDater*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGANILDataReader(void *p = 0);
   static void *newArray_KVGANILDataReader(Long_t size, void *p);
   static void delete_KVGANILDataReader(void *p);
   static void deleteArray_KVGANILDataReader(void *p);
   static void destruct_KVGANILDataReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGANILDataReader*)
   {
      ::KVGANILDataReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGANILDataReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGANILDataReader", ::KVGANILDataReader::Class_Version(), "KVGANILDataReader.h", 14,
                  typeid(::KVGANILDataReader), DefineBehavior(ptr, ptr),
                  &::KVGANILDataReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVGANILDataReader) );
      instance.SetNew(&new_KVGANILDataReader);
      instance.SetNewArray(&newArray_KVGANILDataReader);
      instance.SetDelete(&delete_KVGANILDataReader);
      instance.SetDeleteArray(&deleteArray_KVGANILDataReader);
      instance.SetDestructor(&destruct_KVGANILDataReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGANILDataReader*)
   {
      return GenerateInitInstanceLocal((::KVGANILDataReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGANILDataReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVRawDataAnalyser(void *p);
   static void deleteArray_KVRawDataAnalyser(void *p);
   static void destruct_KVRawDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRawDataAnalyser*)
   {
      ::KVRawDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRawDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRawDataAnalyser", ::KVRawDataAnalyser::Class_Version(), "KVRawDataAnalyser.h", 12,
                  typeid(::KVRawDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVRawDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVRawDataAnalyser) );
      instance.SetDelete(&delete_KVRawDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVRawDataAnalyser);
      instance.SetDestructor(&destruct_KVRawDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRawDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVRawDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRawDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultiDetArray(void *p = 0);
   static void *newArray_KVMultiDetArray(Long_t size, void *p);
   static void delete_KVMultiDetArray(void *p);
   static void deleteArray_KVMultiDetArray(void *p);
   static void destruct_KVMultiDetArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultiDetArray*)
   {
      ::KVMultiDetArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultiDetArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultiDetArray", ::KVMultiDetArray::Class_Version(), "KVMultiDetArray.h", 30,
                  typeid(::KVMultiDetArray), DefineBehavior(ptr, ptr),
                  &::KVMultiDetArray::Dictionary, isa_proxy, 4,
                  sizeof(::KVMultiDetArray) );
      instance.SetNew(&new_KVMultiDetArray);
      instance.SetNewArray(&newArray_KVMultiDetArray);
      instance.SetDelete(&delete_KVMultiDetArray);
      instance.SetDeleteArray(&deleteArray_KVMultiDetArray);
      instance.SetDestructor(&destruct_KVMultiDetArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultiDetArray*)
   {
      return GenerateInitInstanceLocal((::KVMultiDetArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultiDetArray*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVASMultiDetArray(void *p = 0);
   static void *newArray_KVASMultiDetArray(Long_t size, void *p);
   static void delete_KVASMultiDetArray(void *p);
   static void deleteArray_KVASMultiDetArray(void *p);
   static void destruct_KVASMultiDetArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVASMultiDetArray*)
   {
      ::KVASMultiDetArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVASMultiDetArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVASMultiDetArray", ::KVASMultiDetArray::Class_Version(), "KVASMultiDetArray.h", 28,
                  typeid(::KVASMultiDetArray), DefineBehavior(ptr, ptr),
                  &::KVASMultiDetArray::Dictionary, isa_proxy, 4,
                  sizeof(::KVASMultiDetArray) );
      instance.SetNew(&new_KVASMultiDetArray);
      instance.SetNewArray(&newArray_KVASMultiDetArray);
      instance.SetDelete(&delete_KVASMultiDetArray);
      instance.SetDeleteArray(&deleteArray_KVASMultiDetArray);
      instance.SetDestructor(&destruct_KVASMultiDetArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVASMultiDetArray*)
   {
      return GenerateInitInstanceLocal((::KVASMultiDetArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVASMultiDetArray*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVGeoImport(void *p);
   static void deleteArray_KVGeoImport(void *p);
   static void destruct_KVGeoImport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGeoImport*)
   {
      ::KVGeoImport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGeoImport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGeoImport", ::KVGeoImport::Class_Version(), "KVGeoImport.h", 14,
                  typeid(::KVGeoImport), DefineBehavior(ptr, ptr),
                  &::KVGeoImport::Dictionary, isa_proxy, 4,
                  sizeof(::KVGeoImport) );
      instance.SetDelete(&delete_KVGeoImport);
      instance.SetDeleteArray(&deleteArray_KVGeoImport);
      instance.SetDestructor(&destruct_KVGeoImport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGeoImport*)
   {
      return GenerateInitInstanceLocal((::KVGeoImport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGeoImport*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVEventFiltering::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEventFiltering::Class_Name()
{
   return "KVEventFiltering";
}

//______________________________________________________________________________
const char *KVEventFiltering::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventFiltering*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEventFiltering::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventFiltering*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEventFiltering::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventFiltering*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEventFiltering::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventFiltering*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVReconstructedNucleus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVReconstructedNucleus::Class_Name()
{
   return "KVReconstructedNucleus";
}

//______________________________________________________________________________
const char *KVReconstructedNucleus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedNucleus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVReconstructedNucleus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedNucleus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVReconstructedNucleus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedNucleus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVReconstructedNucleus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedNucleus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDetectorEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDetectorEvent::Class_Name()
{
   return "KVDetectorEvent";
}

//______________________________________________________________________________
const char *KVDetectorEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDetectorEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDetectorEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDetectorEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDetectorEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDetectorEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDetectorEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDetectorEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVElasticScatter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVElasticScatter::Class_Name()
{
   return "KVElasticScatter";
}

//______________________________________________________________________________
const char *KVElasticScatter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVElasticScatter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVElasticScatter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVElasticScatter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVElasticScatterEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVElasticScatterEvent::Class_Name()
{
   return "KVElasticScatterEvent";
}

//______________________________________________________________________________
const char *KVElasticScatterEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatterEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVElasticScatterEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatterEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVElasticScatterEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatterEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVElasticScatterEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElasticScatterEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVReconstructedEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVReconstructedEvent::Class_Name()
{
   return "KVReconstructedEvent";
}

//______________________________________________________________________________
const char *KVReconstructedEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVReconstructedEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVReconstructedEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVReconstructedEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconstructedEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDTelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDTelescope::Class_Name()
{
   return "KVIDTelescope";
}

//______________________________________________________________________________
const char *KVIDTelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDTelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDTelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDTelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDTelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDTelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDTelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDTelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRTGIDManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRTGIDManager::Class_Name()
{
   return "KVRTGIDManager";
}

//______________________________________________________________________________
const char *KVRTGIDManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRTGIDManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRTGIDManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRTGIDManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRTGIDManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRTGIDManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRTGIDManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRTGIDManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVUpDater::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVUpDater::Class_Name()
{
   return "KVUpDater";
}

//______________________________________________________________________________
const char *KVUpDater::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUpDater*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVUpDater::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUpDater*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVUpDater::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUpDater*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVUpDater::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUpDater*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGANILDataReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGANILDataReader::Class_Name()
{
   return "KVGANILDataReader";
}

//______________________________________________________________________________
const char *KVGANILDataReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGANILDataReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGANILDataReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGANILDataReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGANILDataReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGANILDataReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGANILDataReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGANILDataReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRawDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRawDataAnalyser::Class_Name()
{
   return "KVRawDataAnalyser";
}

//______________________________________________________________________________
const char *KVRawDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRawDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRawDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRawDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultiDetArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultiDetArray::Class_Name()
{
   return "KVMultiDetArray";
}

//______________________________________________________________________________
const char *KVMultiDetArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultiDetArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultiDetArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultiDetArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultiDetArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultiDetArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultiDetArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultiDetArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVASMultiDetArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVASMultiDetArray::Class_Name()
{
   return "KVASMultiDetArray";
}

//______________________________________________________________________________
const char *KVASMultiDetArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVASMultiDetArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVASMultiDetArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVASMultiDetArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVASMultiDetArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVASMultiDetArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVASMultiDetArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVASMultiDetArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGeoImport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGeoImport::Class_Name()
{
   return "KVGeoImport";
}

//______________________________________________________________________________
const char *KVGeoImport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoImport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGeoImport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoImport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGeoImport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoImport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGeoImport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoImport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVEventFiltering::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEventFiltering.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVEventFiltering::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVEventFiltering::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEventFiltering(void *p) {
      return  p ? new(p) ::KVEventFiltering : new ::KVEventFiltering;
   }
   static void *newArray_KVEventFiltering(Long_t nElements, void *p) {
      return p ? new(p) ::KVEventFiltering[nElements] : new ::KVEventFiltering[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEventFiltering(void *p) {
      delete ((::KVEventFiltering*)p);
   }
   static void deleteArray_KVEventFiltering(void *p) {
      delete [] ((::KVEventFiltering*)p);
   }
   static void destruct_KVEventFiltering(void *p) {
      typedef ::KVEventFiltering current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVEventFiltering

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVReconstructedNucleus(void *p) {
      return  p ? new(p) ::KVReconstructedNucleus : new ::KVReconstructedNucleus;
   }
   static void *newArray_KVReconstructedNucleus(Long_t nElements, void *p) {
      return p ? new(p) ::KVReconstructedNucleus[nElements] : new ::KVReconstructedNucleus[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVReconstructedNucleus(void *p) {
      delete ((::KVReconstructedNucleus*)p);
   }
   static void deleteArray_KVReconstructedNucleus(void *p) {
      delete [] ((::KVReconstructedNucleus*)p);
   }
   static void destruct_KVReconstructedNucleus(void *p) {
      typedef ::KVReconstructedNucleus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVReconstructedNucleus(TBuffer &buf, void *obj) {
      ((::KVReconstructedNucleus*)obj)->::KVReconstructedNucleus::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVReconstructedNucleus

//______________________________________________________________________________
void KVDetectorEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDetectorEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDetectorEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDetectorEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDetectorEvent(void *p) {
      return  p ? new(p) ::KVDetectorEvent : new ::KVDetectorEvent;
   }
   static void *newArray_KVDetectorEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVDetectorEvent[nElements] : new ::KVDetectorEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDetectorEvent(void *p) {
      delete ((::KVDetectorEvent*)p);
   }
   static void deleteArray_KVDetectorEvent(void *p) {
      delete [] ((::KVDetectorEvent*)p);
   }
   static void destruct_KVDetectorEvent(void *p) {
      typedef ::KVDetectorEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDetectorEvent

//______________________________________________________________________________
void KVElasticScatter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVElasticScatter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVElasticScatter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVElasticScatter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVElasticScatter(void *p) {
      return  p ? new(p) ::KVElasticScatter : new ::KVElasticScatter;
   }
   static void *newArray_KVElasticScatter(Long_t nElements, void *p) {
      return p ? new(p) ::KVElasticScatter[nElements] : new ::KVElasticScatter[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVElasticScatter(void *p) {
      delete ((::KVElasticScatter*)p);
   }
   static void deleteArray_KVElasticScatter(void *p) {
      delete [] ((::KVElasticScatter*)p);
   }
   static void destruct_KVElasticScatter(void *p) {
      typedef ::KVElasticScatter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVElasticScatter

//______________________________________________________________________________
void KVElasticScatterEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVElasticScatterEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVElasticScatterEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVElasticScatterEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVElasticScatterEvent(void *p) {
      return  p ? new(p) ::KVElasticScatterEvent : new ::KVElasticScatterEvent;
   }
   static void *newArray_KVElasticScatterEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVElasticScatterEvent[nElements] : new ::KVElasticScatterEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVElasticScatterEvent(void *p) {
      delete ((::KVElasticScatterEvent*)p);
   }
   static void deleteArray_KVElasticScatterEvent(void *p) {
      delete [] ((::KVElasticScatterEvent*)p);
   }
   static void destruct_KVElasticScatterEvent(void *p) {
      typedef ::KVElasticScatterEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVElasticScatterEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVReconstructedEvent(void *p) {
      return  p ? new(p) ::KVReconstructedEvent : new ::KVReconstructedEvent;
   }
   static void *newArray_KVReconstructedEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVReconstructedEvent[nElements] : new ::KVReconstructedEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVReconstructedEvent(void *p) {
      delete ((::KVReconstructedEvent*)p);
   }
   static void deleteArray_KVReconstructedEvent(void *p) {
      delete [] ((::KVReconstructedEvent*)p);
   }
   static void destruct_KVReconstructedEvent(void *p) {
      typedef ::KVReconstructedEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVReconstructedEvent(TBuffer &buf, void *obj) {
      ((::KVReconstructedEvent*)obj)->::KVReconstructedEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVReconstructedEvent

//______________________________________________________________________________
void KVIDTelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDTelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDTelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDTelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDTelescope(void *p) {
      return  p ? new(p) ::KVIDTelescope : new ::KVIDTelescope;
   }
   static void *newArray_KVIDTelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDTelescope[nElements] : new ::KVIDTelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDTelescope(void *p) {
      delete ((::KVIDTelescope*)p);
   }
   static void deleteArray_KVIDTelescope(void *p) {
      delete [] ((::KVIDTelescope*)p);
   }
   static void destruct_KVIDTelescope(void *p) {
      typedef ::KVIDTelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDTelescope

//______________________________________________________________________________
void KVRTGIDManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRTGIDManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRTGIDManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRTGIDManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRTGIDManager(void *p) {
      return  p ? new(p) ::KVRTGIDManager : new ::KVRTGIDManager;
   }
   static void *newArray_KVRTGIDManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVRTGIDManager[nElements] : new ::KVRTGIDManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRTGIDManager(void *p) {
      delete ((::KVRTGIDManager*)p);
   }
   static void deleteArray_KVRTGIDManager(void *p) {
      delete [] ((::KVRTGIDManager*)p);
   }
   static void destruct_KVRTGIDManager(void *p) {
      typedef ::KVRTGIDManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRTGIDManager

//______________________________________________________________________________
void KVUpDater::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVUpDater.

   ::Error("KVUpDater::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVUpDater(void *p) {
      return  p ? new(p) ::KVUpDater : new ::KVUpDater;
   }
   static void *newArray_KVUpDater(Long_t nElements, void *p) {
      return p ? new(p) ::KVUpDater[nElements] : new ::KVUpDater[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVUpDater(void *p) {
      delete ((::KVUpDater*)p);
   }
   static void deleteArray_KVUpDater(void *p) {
      delete [] ((::KVUpDater*)p);
   }
   static void destruct_KVUpDater(void *p) {
      typedef ::KVUpDater current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVUpDater(TBuffer &buf, void *obj) {
      ((::KVUpDater*)obj)->::KVUpDater::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVUpDater

//______________________________________________________________________________
void KVGANILDataReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGANILDataReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGANILDataReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGANILDataReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGANILDataReader(void *p) {
      return  p ? new(p) ::KVGANILDataReader : new ::KVGANILDataReader;
   }
   static void *newArray_KVGANILDataReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVGANILDataReader[nElements] : new ::KVGANILDataReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGANILDataReader(void *p) {
      delete ((::KVGANILDataReader*)p);
   }
   static void deleteArray_KVGANILDataReader(void *p) {
      delete [] ((::KVGANILDataReader*)p);
   }
   static void destruct_KVGANILDataReader(void *p) {
      typedef ::KVGANILDataReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGANILDataReader

//______________________________________________________________________________
void KVRawDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRawDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRawDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRawDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVRawDataAnalyser(void *p) {
      delete ((::KVRawDataAnalyser*)p);
   }
   static void deleteArray_KVRawDataAnalyser(void *p) {
      delete [] ((::KVRawDataAnalyser*)p);
   }
   static void destruct_KVRawDataAnalyser(void *p) {
      typedef ::KVRawDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRawDataAnalyser

//______________________________________________________________________________
void KVMultiDetArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultiDetArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMultiDetArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMultiDetArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultiDetArray(void *p) {
      return  p ? new(p) ::KVMultiDetArray : new ::KVMultiDetArray;
   }
   static void *newArray_KVMultiDetArray(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultiDetArray[nElements] : new ::KVMultiDetArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultiDetArray(void *p) {
      delete ((::KVMultiDetArray*)p);
   }
   static void deleteArray_KVMultiDetArray(void *p) {
      delete [] ((::KVMultiDetArray*)p);
   }
   static void destruct_KVMultiDetArray(void *p) {
      typedef ::KVMultiDetArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMultiDetArray

//______________________________________________________________________________
void KVASMultiDetArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVASMultiDetArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVASMultiDetArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVASMultiDetArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVASMultiDetArray(void *p) {
      return  p ? new(p) ::KVASMultiDetArray : new ::KVASMultiDetArray;
   }
   static void *newArray_KVASMultiDetArray(Long_t nElements, void *p) {
      return p ? new(p) ::KVASMultiDetArray[nElements] : new ::KVASMultiDetArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVASMultiDetArray(void *p) {
      delete ((::KVASMultiDetArray*)p);
   }
   static void deleteArray_KVASMultiDetArray(void *p) {
      delete [] ((::KVASMultiDetArray*)p);
   }
   static void destruct_KVASMultiDetArray(void *p) {
      typedef ::KVASMultiDetArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVASMultiDetArray

//______________________________________________________________________________
void KVGeoImport::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGeoImport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGeoImport::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGeoImport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVGeoImport(void *p) {
      delete ((::KVGeoImport*)p);
   }
   static void deleteArray_KVGeoImport(void *p) {
      delete [] ((::KVGeoImport*)p);
   }
   static void destruct_KVGeoImport(void *p) {
      typedef ::KVGeoImport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGeoImport

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetexp_events_Impl() {
    static const char* headers[] = {
"KVGANILDataReader.h",
"KVIDTelescope.h",
"KVASMultiDetArray.h",
"KVReconstructedEvent.h",
"KVRTGIDManager.h",
"KVDetectorEvent.h",
"KVElasticScatterEvent.h",
"KVMultiDetArray.h",
"KVUpDater.h",
"KVGeoImport.h",
"KVReconstructedNucleus.h",
"KVEventFiltering.h",
"KVRawDataAnalyser.h",
"KVElasticScatter.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/exp_events/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification",
"/home/john/software/sources/kaliveda.git/KVMultiDet/daq_cec",
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars",
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis",
"/home/john/software/sources/kaliveda.git/KVMultiDet/exp_events",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/exp_events/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Filter simulated events with multidetector response)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEventFiltering.h")))  KVEventFiltering;
class __attribute__((annotate(R"ATTRDUMP(Nucleus detected by multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVReconstructedEvent.h")))  KVReconstructedNucleus;
class __attribute__((annotate(R"ATTRDUMP(List of hit groups in a multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDetectorEvent.h")))  KVDetectorEvent;
class __attribute__((annotate(R"ATTRDUMP(Calculate elastic scattering spectra in multidetector arrays)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVElasticScatter.h")))  KVElasticScatter;
class __attribute__((annotate(R"ATTRDUMP(simulate ElasticScatterEvent and answer of a given (multi-)detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVElasticScatterEvent.h")))  KVElasticScatterEvent;
class __attribute__((annotate(R"ATTRDUMP(Base class for reconstructed experimental multiparticle events)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVReconstructedEvent.h")))  KVReconstructedEvent;
class __attribute__((annotate(R"ATTRDUMP(A delta-E - E identification telescope)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDTelescope.h")))  KVIDTelescope;
class __attribute__((annotate(R"ATTRDUMP(Run-dependant KVTGIDManager)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRTGIDManager.h")))  KVRTGIDManager;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class handling setting of multidetector parameters for each run)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVUpDater.h")))  KVUpDater;
class __attribute__((annotate(R"ATTRDUMP(Reads GANIL acquisition files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGANILDataReader.h")))  KVGANILDataReader;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for user analysis of raw data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRawDataAnalyser.h")))  KVRawDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Base class for multidetector arrays)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVASMultiDetArray.h")))  KVMultiDetArray;
class __attribute__((annotate(R"ATTRDUMP(Azimuthally-symmetric multidetector arrays)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVASMultiDetArray.h")))  KVASMultiDetArray;
class __attribute__((annotate(R"ATTRDUMP(Import a ROOT geometry into a KVMultiDetArray object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGeoImport.h")))  KVGeoImport;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVGANILDataReader.h"
#include "KVIDTelescope.h"
#include "KVASMultiDetArray.h"
#include "KVReconstructedEvent.h"
#include "KVRTGIDManager.h"
#include "KVDetectorEvent.h"
#include "KVElasticScatterEvent.h"
#include "KVMultiDetArray.h"
#include "KVUpDater.h"
#include "KVGeoImport.h"
#include "KVReconstructedNucleus.h"
#include "KVEventFiltering.h"
#include "KVRawDataAnalyser.h"
#include "KVElasticScatter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVASMultiDetArray", payloadCode, "@",
"KVDetectorEvent", payloadCode, "@",
"KVElasticScatter", payloadCode, "@",
"KVElasticScatterEvent", payloadCode, "@",
"KVEventFiltering", payloadCode, "@",
"KVGANILDataReader", payloadCode, "@",
"KVGeoImport", payloadCode, "@",
"KVIDTelescope", payloadCode, "@",
"KVMultiDetArray", payloadCode, "@",
"KVMultiDetArray::EFilterType", payloadCode, "@",
"KVRTGIDManager", payloadCode, "@",
"KVRawDataAnalyser", payloadCode, "@",
"KVReconstructedEvent", payloadCode, "@",
"KVReconstructedNucleus", payloadCode, "@",
"KVUpDater", payloadCode, "@",
"gMultiDetArray", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetexp_events",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetexp_events_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetexp_events_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetexp_events() {
  TriggerDictionaryInitialization_libKVMultiDetexp_events_Impl();
}
