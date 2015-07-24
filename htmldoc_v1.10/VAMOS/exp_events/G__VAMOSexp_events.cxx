// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSexp_events

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
#include "KVHarpeeIC.h"
#include "KVVAMOSReconNuc.h"
#include "KVVAMOSTransferMatrix.h"
#include "KVIVUpDater.h"
#include "KVVAMOSReconEvent.h"
#include "KVHarpeeSi.h"
#include "KVVAMOS.h"
#include "KVINDRA_VAMOS.h"
#include "KVVAMOSReconGeoNavigator.h"
#include "KVVAMOSDetector.h"
#include "KVIVReconEvent.h"
#include "KVSeD.h"
#include "KVDriftChamber.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVVAMOSReconNuc(void *p = 0);
   static void *newArray_KVVAMOSReconNuc(Long_t size, void *p);
   static void delete_KVVAMOSReconNuc(void *p);
   static void deleteArray_KVVAMOSReconNuc(void *p);
   static void destruct_KVVAMOSReconNuc(void *p);
   static void streamer_KVVAMOSReconNuc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSReconNuc*)
   {
      ::KVVAMOSReconNuc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSReconNuc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSReconNuc", ::KVVAMOSReconNuc::Class_Version(), "KVVAMOSReconNuc.h", 15,
                  typeid(::KVVAMOSReconNuc), DefineBehavior(ptr, ptr),
                  &::KVVAMOSReconNuc::Dictionary, isa_proxy, 17,
                  sizeof(::KVVAMOSReconNuc) );
      instance.SetNew(&new_KVVAMOSReconNuc);
      instance.SetNewArray(&newArray_KVVAMOSReconNuc);
      instance.SetDelete(&delete_KVVAMOSReconNuc);
      instance.SetDeleteArray(&deleteArray_KVVAMOSReconNuc);
      instance.SetDestructor(&destruct_KVVAMOSReconNuc);
      instance.SetStreamerFunc(&streamer_KVVAMOSReconNuc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSReconNuc*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSReconNuc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSReconNuc*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSReconEvent(void *p = 0);
   static void *newArray_KVVAMOSReconEvent(Long_t size, void *p);
   static void delete_KVVAMOSReconEvent(void *p);
   static void deleteArray_KVVAMOSReconEvent(void *p);
   static void destruct_KVVAMOSReconEvent(void *p);
   static void streamer_KVVAMOSReconEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSReconEvent*)
   {
      ::KVVAMOSReconEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSReconEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSReconEvent", ::KVVAMOSReconEvent::Class_Version(), "KVVAMOSReconEvent.h", 13,
                  typeid(::KVVAMOSReconEvent), DefineBehavior(ptr, ptr),
                  &::KVVAMOSReconEvent::Dictionary, isa_proxy, 17,
                  sizeof(::KVVAMOSReconEvent) );
      instance.SetNew(&new_KVVAMOSReconEvent);
      instance.SetNewArray(&newArray_KVVAMOSReconEvent);
      instance.SetDelete(&delete_KVVAMOSReconEvent);
      instance.SetDeleteArray(&deleteArray_KVVAMOSReconEvent);
      instance.SetDestructor(&destruct_KVVAMOSReconEvent);
      instance.SetStreamerFunc(&streamer_KVVAMOSReconEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSReconEvent*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSReconEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSReconEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOS(void *p = 0);
   static void *newArray_KVVAMOS(Long_t size, void *p);
   static void delete_KVVAMOS(void *p);
   static void deleteArray_KVVAMOS(void *p);
   static void destruct_KVVAMOS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOS*)
   {
      ::KVVAMOS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOS", ::KVVAMOS::Class_Version(), "KVVAMOS.h", 25,
                  typeid(::KVVAMOS), DefineBehavior(ptr, ptr),
                  &::KVVAMOS::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOS) );
      instance.SetNew(&new_KVVAMOS);
      instance.SetNewArray(&newArray_KVVAMOS);
      instance.SetDelete(&delete_KVVAMOS);
      instance.SetDeleteArray(&deleteArray_KVVAMOS);
      instance.SetDestructor(&destruct_KVVAMOS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOS*)
   {
      return GenerateInitInstanceLocal((::KVVAMOS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVVAMOSReconGeoNavigator(void *p);
   static void deleteArray_KVVAMOSReconGeoNavigator(void *p);
   static void destruct_KVVAMOSReconGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSReconGeoNavigator*)
   {
      ::KVVAMOSReconGeoNavigator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSReconGeoNavigator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSReconGeoNavigator", ::KVVAMOSReconGeoNavigator::Class_Version(), "KVVAMOSReconGeoNavigator.h", 12,
                  typeid(::KVVAMOSReconGeoNavigator), DefineBehavior(ptr, ptr),
                  &::KVVAMOSReconGeoNavigator::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOSReconGeoNavigator) );
      instance.SetDelete(&delete_KVVAMOSReconGeoNavigator);
      instance.SetDeleteArray(&deleteArray_KVVAMOSReconGeoNavigator);
      instance.SetDestructor(&destruct_KVVAMOSReconGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSReconGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSReconGeoNavigator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSReconGeoNavigator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRA_VAMOS(void *p = 0);
   static void *newArray_KVINDRA_VAMOS(Long_t size, void *p);
   static void delete_KVINDRA_VAMOS(void *p);
   static void deleteArray_KVINDRA_VAMOS(void *p);
   static void destruct_KVINDRA_VAMOS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRA_VAMOS*)
   {
      ::KVINDRA_VAMOS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRA_VAMOS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRA_VAMOS", ::KVINDRA_VAMOS::Class_Version(), "KVINDRA_VAMOS.h", 12,
                  typeid(::KVINDRA_VAMOS), DefineBehavior(ptr, ptr),
                  &::KVINDRA_VAMOS::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRA_VAMOS) );
      instance.SetNew(&new_KVINDRA_VAMOS);
      instance.SetNewArray(&newArray_KVINDRA_VAMOS);
      instance.SetDelete(&delete_KVINDRA_VAMOS);
      instance.SetDeleteArray(&deleteArray_KVINDRA_VAMOS);
      instance.SetDestructor(&destruct_KVINDRA_VAMOS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRA_VAMOS*)
   {
      return GenerateInitInstanceLocal((::KVINDRA_VAMOS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRA_VAMOS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSDetector(void *p = 0);
   static void *newArray_KVVAMOSDetector(Long_t size, void *p);
   static void delete_KVVAMOSDetector(void *p);
   static void deleteArray_KVVAMOSDetector(void *p);
   static void destruct_KVVAMOSDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSDetector*)
   {
      ::KVVAMOSDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSDetector", ::KVVAMOSDetector::Class_Version(), "KVVAMOSDetector.h", 11,
                  typeid(::KVVAMOSDetector), DefineBehavior(ptr, ptr),
                  &::KVVAMOSDetector::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOSDetector) );
      instance.SetNew(&new_KVVAMOSDetector);
      instance.SetNewArray(&newArray_KVVAMOSDetector);
      instance.SetDelete(&delete_KVVAMOSDetector);
      instance.SetDeleteArray(&deleteArray_KVVAMOSDetector);
      instance.SetDestructor(&destruct_KVVAMOSDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSDetector*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSDetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVHarpeeSi(void *p = 0);
   static void *newArray_KVHarpeeSi(Long_t size, void *p);
   static void delete_KVHarpeeSi(void *p);
   static void deleteArray_KVHarpeeSi(void *p);
   static void destruct_KVHarpeeSi(void *p);
   static void streamer_KVHarpeeSi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVHarpeeSi*)
   {
      ::KVHarpeeSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVHarpeeSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVHarpeeSi", ::KVHarpeeSi::Class_Version(), "KVHarpeeSi.h", 11,
                  typeid(::KVHarpeeSi), DefineBehavior(ptr, ptr),
                  &::KVHarpeeSi::Dictionary, isa_proxy, 17,
                  sizeof(::KVHarpeeSi) );
      instance.SetNew(&new_KVHarpeeSi);
      instance.SetNewArray(&newArray_KVHarpeeSi);
      instance.SetDelete(&delete_KVHarpeeSi);
      instance.SetDeleteArray(&deleteArray_KVHarpeeSi);
      instance.SetDestructor(&destruct_KVHarpeeSi);
      instance.SetStreamerFunc(&streamer_KVHarpeeSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVHarpeeSi*)
   {
      return GenerateInitInstanceLocal((::KVHarpeeSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVHarpeeSi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVHarpeeIC(void *p = 0);
   static void *newArray_KVHarpeeIC(Long_t size, void *p);
   static void delete_KVHarpeeIC(void *p);
   static void deleteArray_KVHarpeeIC(void *p);
   static void destruct_KVHarpeeIC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVHarpeeIC*)
   {
      ::KVHarpeeIC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVHarpeeIC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVHarpeeIC", ::KVHarpeeIC::Class_Version(), "KVHarpeeIC.h", 11,
                  typeid(::KVHarpeeIC), DefineBehavior(ptr, ptr),
                  &::KVHarpeeIC::Dictionary, isa_proxy, 4,
                  sizeof(::KVHarpeeIC) );
      instance.SetNew(&new_KVHarpeeIC);
      instance.SetNewArray(&newArray_KVHarpeeIC);
      instance.SetDelete(&delete_KVHarpeeIC);
      instance.SetDeleteArray(&deleteArray_KVHarpeeIC);
      instance.SetDestructor(&destruct_KVHarpeeIC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVHarpeeIC*)
   {
      return GenerateInitInstanceLocal((::KVHarpeeIC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVHarpeeIC*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDriftChamber(void *p = 0);
   static void *newArray_KVDriftChamber(Long_t size, void *p);
   static void delete_KVDriftChamber(void *p);
   static void deleteArray_KVDriftChamber(void *p);
   static void destruct_KVDriftChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDriftChamber*)
   {
      ::KVDriftChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDriftChamber >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDriftChamber", ::KVDriftChamber::Class_Version(), "KVDriftChamber.h", 9,
                  typeid(::KVDriftChamber), DefineBehavior(ptr, ptr),
                  &::KVDriftChamber::Dictionary, isa_proxy, 4,
                  sizeof(::KVDriftChamber) );
      instance.SetNew(&new_KVDriftChamber);
      instance.SetNewArray(&newArray_KVDriftChamber);
      instance.SetDelete(&delete_KVDriftChamber);
      instance.SetDeleteArray(&deleteArray_KVDriftChamber);
      instance.SetDestructor(&destruct_KVDriftChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDriftChamber*)
   {
      return GenerateInitInstanceLocal((::KVDriftChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDriftChamber*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSeD(void *p = 0);
   static void *newArray_KVSeD(Long_t size, void *p);
   static void delete_KVSeD(void *p);
   static void deleteArray_KVSeD(void *p);
   static void destruct_KVSeD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSeD*)
   {
      ::KVSeD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSeD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSeD", ::KVSeD::Class_Version(), "KVSeD.h", 18,
                  typeid(::KVSeD), DefineBehavior(ptr, ptr),
                  &::KVSeD::Dictionary, isa_proxy, 4,
                  sizeof(::KVSeD) );
      instance.SetNew(&new_KVSeD);
      instance.SetNewArray(&newArray_KVSeD);
      instance.SetDelete(&delete_KVSeD);
      instance.SetDeleteArray(&deleteArray_KVSeD);
      instance.SetDestructor(&destruct_KVSeD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSeD*)
   {
      return GenerateInitInstanceLocal((::KVSeD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSeD*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVReconEvent(void *p = 0);
   static void *newArray_KVIVReconEvent(Long_t size, void *p);
   static void delete_KVIVReconEvent(void *p);
   static void deleteArray_KVIVReconEvent(void *p);
   static void destruct_KVIVReconEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVReconEvent*)
   {
      ::KVIVReconEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVReconEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVReconEvent", ::KVIVReconEvent::Class_Version(), "KVIVReconEvent.h", 10,
                  typeid(::KVIVReconEvent), DefineBehavior(ptr, ptr),
                  &::KVIVReconEvent::Dictionary, isa_proxy, 4,
                  sizeof(::KVIVReconEvent) );
      instance.SetNew(&new_KVIVReconEvent);
      instance.SetNewArray(&newArray_KVIVReconEvent);
      instance.SetDelete(&delete_KVIVReconEvent);
      instance.SetDeleteArray(&deleteArray_KVIVReconEvent);
      instance.SetDestructor(&destruct_KVIVReconEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVReconEvent*)
   {
      return GenerateInitInstanceLocal((::KVIVReconEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVReconEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSTransferMatrix(void *p = 0);
   static void *newArray_KVVAMOSTransferMatrix(Long_t size, void *p);
   static void delete_KVVAMOSTransferMatrix(void *p);
   static void deleteArray_KVVAMOSTransferMatrix(void *p);
   static void destruct_KVVAMOSTransferMatrix(void *p);
   static void streamer_KVVAMOSTransferMatrix(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSTransferMatrix*)
   {
      ::KVVAMOSTransferMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSTransferMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSTransferMatrix", ::KVVAMOSTransferMatrix::Class_Version(), "KVVAMOSTransferMatrix.h", 12,
                  typeid(::KVVAMOSTransferMatrix), DefineBehavior(ptr, ptr),
                  &::KVVAMOSTransferMatrix::Dictionary, isa_proxy, 17,
                  sizeof(::KVVAMOSTransferMatrix) );
      instance.SetNew(&new_KVVAMOSTransferMatrix);
      instance.SetNewArray(&newArray_KVVAMOSTransferMatrix);
      instance.SetDelete(&delete_KVVAMOSTransferMatrix);
      instance.SetDeleteArray(&deleteArray_KVVAMOSTransferMatrix);
      instance.SetDestructor(&destruct_KVVAMOSTransferMatrix);
      instance.SetStreamerFunc(&streamer_KVVAMOSTransferMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSTransferMatrix*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSTransferMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSTransferMatrix*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIVUpDater(void *p = 0);
   static void *newArray_KVIVUpDater(Long_t size, void *p);
   static void delete_KVIVUpDater(void *p);
   static void deleteArray_KVIVUpDater(void *p);
   static void destruct_KVIVUpDater(void *p);
   static void streamer_KVIVUpDater(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVUpDater*)
   {
      ::KVIVUpDater *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVUpDater >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVUpDater", ::KVIVUpDater::Class_Version(), "KVIVUpDater.h", 9,
                  typeid(::KVIVUpDater), DefineBehavior(ptr, ptr),
                  &::KVIVUpDater::Dictionary, isa_proxy, 16,
                  sizeof(::KVIVUpDater) );
      instance.SetNew(&new_KVIVUpDater);
      instance.SetNewArray(&newArray_KVIVUpDater);
      instance.SetDelete(&delete_KVIVUpDater);
      instance.SetDeleteArray(&deleteArray_KVIVUpDater);
      instance.SetDestructor(&destruct_KVIVUpDater);
      instance.SetStreamerFunc(&streamer_KVIVUpDater);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVUpDater*)
   {
      return GenerateInitInstanceLocal((::KVIVUpDater*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVUpDater*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSReconNuc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSReconNuc::Class_Name()
{
   return "KVVAMOSReconNuc";
}

//______________________________________________________________________________
const char *KVVAMOSReconNuc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconNuc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSReconNuc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconNuc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSReconNuc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconNuc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSReconNuc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconNuc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSReconEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSReconEvent::Class_Name()
{
   return "KVVAMOSReconEvent";
}

//______________________________________________________________________________
const char *KVVAMOSReconEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSReconEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSReconEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSReconEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOS::Class_Name()
{
   return "KVVAMOS";
}

//______________________________________________________________________________
const char *KVVAMOS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSReconGeoNavigator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSReconGeoNavigator::Class_Name()
{
   return "KVVAMOSReconGeoNavigator";
}

//______________________________________________________________________________
const char *KVVAMOSReconGeoNavigator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconGeoNavigator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSReconGeoNavigator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconGeoNavigator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSReconGeoNavigator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconGeoNavigator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSReconGeoNavigator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconGeoNavigator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRA_VAMOS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRA_VAMOS::Class_Name()
{
   return "KVINDRA_VAMOS";
}

//______________________________________________________________________________
const char *KVINDRA_VAMOS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA_VAMOS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRA_VAMOS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA_VAMOS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRA_VAMOS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA_VAMOS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRA_VAMOS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA_VAMOS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSDetector::Class_Name()
{
   return "KVVAMOSDetector";
}

//______________________________________________________________________________
const char *KVVAMOSDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVHarpeeSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVHarpeeSi::Class_Name()
{
   return "KVHarpeeSi";
}

//______________________________________________________________________________
const char *KVHarpeeSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVHarpeeSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVHarpeeSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVHarpeeSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVHarpeeIC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVHarpeeIC::Class_Name()
{
   return "KVHarpeeIC";
}

//______________________________________________________________________________
const char *KVHarpeeIC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeIC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVHarpeeIC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeIC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVHarpeeIC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeIC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVHarpeeIC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHarpeeIC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDriftChamber::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDriftChamber::Class_Name()
{
   return "KVDriftChamber";
}

//______________________________________________________________________________
const char *KVDriftChamber::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDriftChamber*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDriftChamber::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDriftChamber*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDriftChamber::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDriftChamber*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDriftChamber::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDriftChamber*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSeD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSeD::Class_Name()
{
   return "KVSeD";
}

//______________________________________________________________________________
const char *KVSeD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSeD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSeD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSeD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVReconEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVReconEvent::Class_Name()
{
   return "KVIVReconEvent";
}

//______________________________________________________________________________
const char *KVIVReconEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVReconEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVReconEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVReconEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVReconEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSTransferMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSTransferMatrix::Class_Name()
{
   return "KVVAMOSTransferMatrix";
}

//______________________________________________________________________________
const char *KVVAMOSTransferMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSTransferMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSTransferMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSTransferMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSTransferMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSTransferMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSTransferMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSTransferMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIVUpDater::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVUpDater::Class_Name()
{
   return "KVIVUpDater";
}

//______________________________________________________________________________
const char *KVIVUpDater::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVUpDater*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVUpDater::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVUpDater*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVUpDater::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVUpDater*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVUpDater::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVUpDater*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSReconNuc(void *p) {
      return  p ? new(p) ::KVVAMOSReconNuc : new ::KVVAMOSReconNuc;
   }
   static void *newArray_KVVAMOSReconNuc(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSReconNuc[nElements] : new ::KVVAMOSReconNuc[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSReconNuc(void *p) {
      delete ((::KVVAMOSReconNuc*)p);
   }
   static void deleteArray_KVVAMOSReconNuc(void *p) {
      delete [] ((::KVVAMOSReconNuc*)p);
   }
   static void destruct_KVVAMOSReconNuc(void *p) {
      typedef ::KVVAMOSReconNuc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVAMOSReconNuc(TBuffer &buf, void *obj) {
      ((::KVVAMOSReconNuc*)obj)->::KVVAMOSReconNuc::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVAMOSReconNuc

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSReconEvent(void *p) {
      return  p ? new(p) ::KVVAMOSReconEvent : new ::KVVAMOSReconEvent;
   }
   static void *newArray_KVVAMOSReconEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSReconEvent[nElements] : new ::KVVAMOSReconEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSReconEvent(void *p) {
      delete ((::KVVAMOSReconEvent*)p);
   }
   static void deleteArray_KVVAMOSReconEvent(void *p) {
      delete [] ((::KVVAMOSReconEvent*)p);
   }
   static void destruct_KVVAMOSReconEvent(void *p) {
      typedef ::KVVAMOSReconEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVAMOSReconEvent(TBuffer &buf, void *obj) {
      ((::KVVAMOSReconEvent*)obj)->::KVVAMOSReconEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVAMOSReconEvent

//______________________________________________________________________________
void KVVAMOS::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOS::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOS(void *p) {
      return  p ? new(p) ::KVVAMOS : new ::KVVAMOS;
   }
   static void *newArray_KVVAMOS(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOS[nElements] : new ::KVVAMOS[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOS(void *p) {
      delete ((::KVVAMOS*)p);
   }
   static void deleteArray_KVVAMOS(void *p) {
      delete [] ((::KVVAMOS*)p);
   }
   static void destruct_KVVAMOS(void *p) {
      typedef ::KVVAMOS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOS

//______________________________________________________________________________
void KVVAMOSReconGeoNavigator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOSReconGeoNavigator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOSReconGeoNavigator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOSReconGeoNavigator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVVAMOSReconGeoNavigator(void *p) {
      delete ((::KVVAMOSReconGeoNavigator*)p);
   }
   static void deleteArray_KVVAMOSReconGeoNavigator(void *p) {
      delete [] ((::KVVAMOSReconGeoNavigator*)p);
   }
   static void destruct_KVVAMOSReconGeoNavigator(void *p) {
      typedef ::KVVAMOSReconGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOSReconGeoNavigator

//______________________________________________________________________________
void KVINDRA_VAMOS::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRA_VAMOS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRA_VAMOS::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRA_VAMOS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRA_VAMOS(void *p) {
      return  p ? new(p) ::KVINDRA_VAMOS : new ::KVINDRA_VAMOS;
   }
   static void *newArray_KVINDRA_VAMOS(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRA_VAMOS[nElements] : new ::KVINDRA_VAMOS[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRA_VAMOS(void *p) {
      delete ((::KVINDRA_VAMOS*)p);
   }
   static void deleteArray_KVINDRA_VAMOS(void *p) {
      delete [] ((::KVINDRA_VAMOS*)p);
   }
   static void destruct_KVINDRA_VAMOS(void *p) {
      typedef ::KVINDRA_VAMOS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRA_VAMOS

//______________________________________________________________________________
void KVVAMOSDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOSDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOSDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOSDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSDetector(void *p) {
      return  p ? new(p) ::KVVAMOSDetector : new ::KVVAMOSDetector;
   }
   static void *newArray_KVVAMOSDetector(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSDetector[nElements] : new ::KVVAMOSDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSDetector(void *p) {
      delete ((::KVVAMOSDetector*)p);
   }
   static void deleteArray_KVVAMOSDetector(void *p) {
      delete [] ((::KVVAMOSDetector*)p);
   }
   static void destruct_KVVAMOSDetector(void *p) {
      typedef ::KVVAMOSDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOSDetector

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVHarpeeSi(void *p) {
      return  p ? new(p) ::KVHarpeeSi : new ::KVHarpeeSi;
   }
   static void *newArray_KVHarpeeSi(Long_t nElements, void *p) {
      return p ? new(p) ::KVHarpeeSi[nElements] : new ::KVHarpeeSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVHarpeeSi(void *p) {
      delete ((::KVHarpeeSi*)p);
   }
   static void deleteArray_KVHarpeeSi(void *p) {
      delete [] ((::KVHarpeeSi*)p);
   }
   static void destruct_KVHarpeeSi(void *p) {
      typedef ::KVHarpeeSi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVHarpeeSi(TBuffer &buf, void *obj) {
      ((::KVHarpeeSi*)obj)->::KVHarpeeSi::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVHarpeeSi

//______________________________________________________________________________
void KVHarpeeIC::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVHarpeeIC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVHarpeeIC::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVHarpeeIC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVHarpeeIC(void *p) {
      return  p ? new(p) ::KVHarpeeIC : new ::KVHarpeeIC;
   }
   static void *newArray_KVHarpeeIC(Long_t nElements, void *p) {
      return p ? new(p) ::KVHarpeeIC[nElements] : new ::KVHarpeeIC[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVHarpeeIC(void *p) {
      delete ((::KVHarpeeIC*)p);
   }
   static void deleteArray_KVHarpeeIC(void *p) {
      delete [] ((::KVHarpeeIC*)p);
   }
   static void destruct_KVHarpeeIC(void *p) {
      typedef ::KVHarpeeIC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVHarpeeIC

//______________________________________________________________________________
void KVDriftChamber::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDriftChamber.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDriftChamber::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDriftChamber::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDriftChamber(void *p) {
      return  p ? new(p) ::KVDriftChamber : new ::KVDriftChamber;
   }
   static void *newArray_KVDriftChamber(Long_t nElements, void *p) {
      return p ? new(p) ::KVDriftChamber[nElements] : new ::KVDriftChamber[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDriftChamber(void *p) {
      delete ((::KVDriftChamber*)p);
   }
   static void deleteArray_KVDriftChamber(void *p) {
      delete [] ((::KVDriftChamber*)p);
   }
   static void destruct_KVDriftChamber(void *p) {
      typedef ::KVDriftChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDriftChamber

//______________________________________________________________________________
void KVSeD::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSeD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSeD::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSeD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSeD(void *p) {
      return  p ? new(p) ::KVSeD : new ::KVSeD;
   }
   static void *newArray_KVSeD(Long_t nElements, void *p) {
      return p ? new(p) ::KVSeD[nElements] : new ::KVSeD[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSeD(void *p) {
      delete ((::KVSeD*)p);
   }
   static void deleteArray_KVSeD(void *p) {
      delete [] ((::KVSeD*)p);
   }
   static void destruct_KVSeD(void *p) {
      typedef ::KVSeD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSeD

//______________________________________________________________________________
void KVIVReconEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVReconEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIVReconEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIVReconEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVReconEvent(void *p) {
      return  p ? new(p) ::KVIVReconEvent : new ::KVIVReconEvent;
   }
   static void *newArray_KVIVReconEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVReconEvent[nElements] : new ::KVIVReconEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVReconEvent(void *p) {
      delete ((::KVIVReconEvent*)p);
   }
   static void deleteArray_KVIVReconEvent(void *p) {
      delete [] ((::KVIVReconEvent*)p);
   }
   static void destruct_KVIVReconEvent(void *p) {
      typedef ::KVIVReconEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIVReconEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSTransferMatrix(void *p) {
      return  p ? new(p) ::KVVAMOSTransferMatrix : new ::KVVAMOSTransferMatrix;
   }
   static void *newArray_KVVAMOSTransferMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSTransferMatrix[nElements] : new ::KVVAMOSTransferMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSTransferMatrix(void *p) {
      delete ((::KVVAMOSTransferMatrix*)p);
   }
   static void deleteArray_KVVAMOSTransferMatrix(void *p) {
      delete [] ((::KVVAMOSTransferMatrix*)p);
   }
   static void destruct_KVVAMOSTransferMatrix(void *p) {
      typedef ::KVVAMOSTransferMatrix current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVAMOSTransferMatrix(TBuffer &buf, void *obj) {
      ((::KVVAMOSTransferMatrix*)obj)->::KVVAMOSTransferMatrix::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVAMOSTransferMatrix

//______________________________________________________________________________
void KVIVUpDater::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVUpDater.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRAUpDater::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVIVUpDater::IsA());
   } else {
      R__c = R__b.WriteVersion(KVIVUpDater::IsA(), kTRUE);
      KVINDRAUpDater::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVUpDater(void *p) {
      return  p ? new(p) ::KVIVUpDater : new ::KVIVUpDater;
   }
   static void *newArray_KVIVUpDater(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVUpDater[nElements] : new ::KVIVUpDater[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVUpDater(void *p) {
      delete ((::KVIVUpDater*)p);
   }
   static void deleteArray_KVIVUpDater(void *p) {
      delete [] ((::KVIVUpDater*)p);
   }
   static void destruct_KVIVUpDater(void *p) {
      typedef ::KVIVUpDater current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIVUpDater(TBuffer &buf, void *obj) {
      ((::KVIVUpDater*)obj)->::KVIVUpDater::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVIVUpDater

namespace {
  void TriggerDictionaryInitialization_libVAMOSexp_events_Impl() {
    static const char* headers[] = {
"KVHarpeeIC.h",
"KVVAMOSReconNuc.h",
"KVVAMOSTransferMatrix.h",
"KVIVUpDater.h",
"KVVAMOSReconEvent.h",
"KVHarpeeSi.h",
"KVVAMOS.h",
"KVINDRA_VAMOS.h",
"KVVAMOSReconGeoNavigator.h",
"KVVAMOSDetector.h",
"KVIVReconEvent.h",
"KVSeD.h",
"KVDriftChamber.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/exp_events/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/identification",
"/home/john/software/sources/kaliveda.git/VAMOS/geometry",
"/home/john/software/sources/kaliveda.git/VAMOS/reconstruction",
"/home/john/software/sources/kaliveda.git/VAMOS/calibration",
"/home/john/software/sources/kaliveda.git/VAMOS/exp_events",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/exp_events/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Nucleus identified by VAMOS spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSReconNuc.h")))  KVVAMOSReconNuc;
class __attribute__((annotate(R"ATTRDUMP(Event reconstructed from energy losses in VAMOS spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSReconEvent.h")))  KVVAMOSReconEvent;
class __attribute__((annotate(R"ATTRDUMP(VAMOS: variable mode spectrometer at GANIL)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHarpeeIC.h")))  KVVAMOS;
class __attribute__((annotate(R"ATTRDUMP(Propagate nuclei through the geometry of VAMOS for their reconstruction/calibrate/identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSReconGeoNavigator.h")))  KVVAMOSReconGeoNavigator;
class __attribute__((annotate(R"ATTRDUMP(INDRA + VAMOS experimental setup for the e494s and the e503 experiments performed at GANIL)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRA_VAMOS.h")))  KVINDRA_VAMOS;
class __attribute__((annotate(R"ATTRDUMP(Detectors of VAMOS spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHarpeeIC.h")))  KVVAMOSDetector;
class __attribute__((annotate(R"ATTRDUMP(Silicon detectors of Harpee, used at the focal plan of VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHarpeeSi.h")))  KVHarpeeSi;
class __attribute__((annotate(R"ATTRDUMP(Ionisiation chamber of Harpee, used at the focal plan of VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHarpeeIC.h")))  KVHarpeeIC;
class __attribute__((annotate(R"ATTRDUMP(Drift Chamber, used at the focal plan of VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDriftChamber.h")))  KVDriftChamber;
class __attribute__((annotate(R"ATTRDUMP(Secondary Electron Detector, used at the focal plan of VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSeD.h")))  KVSeD;
class __attribute__((annotate(R"ATTRDUMP(Event reconstructed from energy losses in INDRA array and VAMOS spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVReconEvent.h")))  KVIVReconEvent;
class __attribute__((annotate(R"ATTRDUMP(VAMOS's transformation matrix to map the measured coordinates at the focal plane back to the target)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSTransferMatrix.h")))  KVVAMOSTransferMatrix;
class __attribute__((annotate(R"ATTRDUMP(Class for setting INDRA-VAMOS parameter for each run (e494s/e503 experiment))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVUpDater.h")))  KVIVUpDater;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVHarpeeIC.h"
#include "KVVAMOSReconNuc.h"
#include "KVVAMOSTransferMatrix.h"
#include "KVIVUpDater.h"
#include "KVVAMOSReconEvent.h"
#include "KVHarpeeSi.h"
#include "KVVAMOS.h"
#include "KVINDRA_VAMOS.h"
#include "KVVAMOSReconGeoNavigator.h"
#include "KVVAMOSDetector.h"
#include "KVIVReconEvent.h"
#include "KVSeD.h"
#include "KVDriftChamber.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDriftChamber", payloadCode, "@",
"KVHarpeeIC", payloadCode, "@",
"KVHarpeeSi", payloadCode, "@",
"KVINDRA_VAMOS", payloadCode, "@",
"KVIVReconEvent", payloadCode, "@",
"KVIVUpDater", payloadCode, "@",
"KVSeD", payloadCode, "@",
"KVVAMOS", payloadCode, "@",
"KVVAMOSDetector", payloadCode, "@",
"KVVAMOSReconEvent", payloadCode, "@",
"KVVAMOSReconGeoNavigator", payloadCode, "@",
"KVVAMOSReconNuc", payloadCode, "@",
"KVVAMOSTransferMatrix", payloadCode, "@",
"gVamos", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSexp_events",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSexp_events_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSexp_events_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSexp_events() {
  TriggerDictionaryInitialization_libVAMOSexp_events_Impl();
}
