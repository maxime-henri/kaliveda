// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetgeometry

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
#include "KVLayer.h"
#include "KVTelescope.h"
#include "KVCalibrator.h"
#include "KVGroup.h"
#include "KVRangeTableGeoNavigator.h"
#include "KVGeoDetectorNode.h"
#include "KVASGroup.h"
#include "KVRing.h"
#include "KVDetector.h"
#include "KVGeoNavigator.h"
#include "KVACQParam.h"
#include "KVGeoStrucElement.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVACQParam(void *p = 0);
   static void *newArray_KVACQParam(Long_t size, void *p);
   static void delete_KVACQParam(void *p);
   static void deleteArray_KVACQParam(void *p);
   static void destruct_KVACQParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVACQParam*)
   {
      ::KVACQParam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVACQParam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVACQParam", ::KVACQParam::Class_Version(), "KVACQParam.h", 28,
                  typeid(::KVACQParam), DefineBehavior(ptr, ptr),
                  &::KVACQParam::Dictionary, isa_proxy, 4,
                  sizeof(::KVACQParam) );
      instance.SetNew(&new_KVACQParam);
      instance.SetNewArray(&newArray_KVACQParam);
      instance.SetDelete(&delete_KVACQParam);
      instance.SetDeleteArray(&deleteArray_KVACQParam);
      instance.SetDestructor(&destruct_KVACQParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVACQParam*)
   {
      return GenerateInitInstanceLocal((::KVACQParam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVACQParam*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVCalibrator(void *p);
   static void deleteArray_KVCalibrator(void *p);
   static void destruct_KVCalibrator(void *p);
   static void streamer_KVCalibrator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCalibrator*)
   {
      ::KVCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCalibrator", ::KVCalibrator::Class_Version(), "KVCalibrator.h", 27,
                  typeid(::KVCalibrator), DefineBehavior(ptr, ptr),
                  &::KVCalibrator::Dictionary, isa_proxy, 17,
                  sizeof(::KVCalibrator) );
      instance.SetDelete(&delete_KVCalibrator);
      instance.SetDeleteArray(&deleteArray_KVCalibrator);
      instance.SetDestructor(&destruct_KVCalibrator);
      instance.SetStreamerFunc(&streamer_KVCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCalibrator*)
   {
      return GenerateInitInstanceLocal((::KVCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDetector(void *p = 0);
   static void *newArray_KVDetector(Long_t size, void *p);
   static void delete_KVDetector(void *p);
   static void deleteArray_KVDetector(void *p);
   static void destruct_KVDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDetector*)
   {
      ::KVDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDetector", ::KVDetector::Class_Version(), "KVDetector.h", 46,
                  typeid(::KVDetector), DefineBehavior(ptr, ptr),
                  &::KVDetector::Dictionary, isa_proxy, 4,
                  sizeof(::KVDetector) );
      instance.SetNew(&new_KVDetector);
      instance.SetNewArray(&newArray_KVDetector);
      instance.SetDelete(&delete_KVDetector);
      instance.SetDeleteArray(&deleteArray_KVDetector);
      instance.SetDestructor(&destruct_KVDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDetector*)
   {
      return GenerateInitInstanceLocal((::KVDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTelescope(void *p = 0);
   static void *newArray_KVTelescope(Long_t size, void *p);
   static void delete_KVTelescope(void *p);
   static void deleteArray_KVTelescope(void *p);
   static void destruct_KVTelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTelescope*)
   {
      ::KVTelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTelescope", ::KVTelescope::Class_Version(), "KVTelescope.h", 32,
                  typeid(::KVTelescope), DefineBehavior(ptr, ptr),
                  &::KVTelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVTelescope) );
      instance.SetNew(&new_KVTelescope);
      instance.SetNewArray(&newArray_KVTelescope);
      instance.SetDelete(&delete_KVTelescope);
      instance.SetDeleteArray(&deleteArray_KVTelescope);
      instance.SetDestructor(&destruct_KVTelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTelescope*)
   {
      return GenerateInitInstanceLocal((::KVTelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGroup(void *p = 0);
   static void *newArray_KVGroup(Long_t size, void *p);
   static void delete_KVGroup(void *p);
   static void deleteArray_KVGroup(void *p);
   static void destruct_KVGroup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGroup*)
   {
      ::KVGroup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGroup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGroup", ::KVGroup::Class_Version(), "KVGroup.h", 13,
                  typeid(::KVGroup), DefineBehavior(ptr, ptr),
                  &::KVGroup::Dictionary, isa_proxy, 4,
                  sizeof(::KVGroup) );
      instance.SetNew(&new_KVGroup);
      instance.SetNewArray(&newArray_KVGroup);
      instance.SetDelete(&delete_KVGroup);
      instance.SetDeleteArray(&deleteArray_KVGroup);
      instance.SetDestructor(&destruct_KVGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGroup*)
   {
      return GenerateInitInstanceLocal((::KVGroup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGroup*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVASGroup(void *p = 0);
   static void *newArray_KVASGroup(Long_t size, void *p);
   static void delete_KVASGroup(void *p);
   static void deleteArray_KVASGroup(void *p);
   static void destruct_KVASGroup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVASGroup*)
   {
      ::KVASGroup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVASGroup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVASGroup", ::KVASGroup::Class_Version(), "KVASGroup.h", 10,
                  typeid(::KVASGroup), DefineBehavior(ptr, ptr),
                  &::KVASGroup::Dictionary, isa_proxy, 4,
                  sizeof(::KVASGroup) );
      instance.SetNew(&new_KVASGroup);
      instance.SetNewArray(&newArray_KVASGroup);
      instance.SetDelete(&delete_KVASGroup);
      instance.SetDeleteArray(&deleteArray_KVASGroup);
      instance.SetDestructor(&destruct_KVASGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVASGroup*)
   {
      return GenerateInitInstanceLocal((::KVASGroup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVASGroup*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLayer(void *p = 0);
   static void *newArray_KVLayer(Long_t size, void *p);
   static void delete_KVLayer(void *p);
   static void deleteArray_KVLayer(void *p);
   static void destruct_KVLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLayer*)
   {
      ::KVLayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLayer", ::KVLayer::Class_Version(), "KVLayer.h", 24,
                  typeid(::KVLayer), DefineBehavior(ptr, ptr),
                  &::KVLayer::Dictionary, isa_proxy, 4,
                  sizeof(::KVLayer) );
      instance.SetNew(&new_KVLayer);
      instance.SetNewArray(&newArray_KVLayer);
      instance.SetDelete(&delete_KVLayer);
      instance.SetDeleteArray(&deleteArray_KVLayer);
      instance.SetDestructor(&destruct_KVLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLayer*)
   {
      return GenerateInitInstanceLocal((::KVLayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLayer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRing(void *p = 0);
   static void *newArray_KVRing(Long_t size, void *p);
   static void delete_KVRing(void *p);
   static void deleteArray_KVRing(void *p);
   static void destruct_KVRing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRing*)
   {
      ::KVRing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRing >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRing", ::KVRing::Class_Version(), "KVRing.h", 32,
                  typeid(::KVRing), DefineBehavior(ptr, ptr),
                  &::KVRing::Dictionary, isa_proxy, 4,
                  sizeof(::KVRing) );
      instance.SetNew(&new_KVRing);
      instance.SetNewArray(&newArray_KVRing);
      instance.SetDelete(&delete_KVRing);
      instance.SetDeleteArray(&deleteArray_KVRing);
      instance.SetDestructor(&destruct_KVRing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRing*)
   {
      return GenerateInitInstanceLocal((::KVRing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRing*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVGeoNavigator(void *p);
   static void deleteArray_KVGeoNavigator(void *p);
   static void destruct_KVGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGeoNavigator*)
   {
      ::KVGeoNavigator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGeoNavigator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGeoNavigator", ::KVGeoNavigator::Class_Version(), "KVGeoNavigator.h", 19,
                  typeid(::KVGeoNavigator), DefineBehavior(ptr, ptr),
                  &::KVGeoNavigator::Dictionary, isa_proxy, 4,
                  sizeof(::KVGeoNavigator) );
      instance.SetDelete(&delete_KVGeoNavigator);
      instance.SetDeleteArray(&deleteArray_KVGeoNavigator);
      instance.SetDestructor(&destruct_KVGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::KVGeoNavigator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGeoNavigator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVRangeTableGeoNavigator(void *p);
   static void deleteArray_KVRangeTableGeoNavigator(void *p);
   static void destruct_KVRangeTableGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRangeTableGeoNavigator*)
   {
      ::KVRangeTableGeoNavigator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRangeTableGeoNavigator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRangeTableGeoNavigator", ::KVRangeTableGeoNavigator::Class_Version(), "KVRangeTableGeoNavigator.h", 10,
                  typeid(::KVRangeTableGeoNavigator), DefineBehavior(ptr, ptr),
                  &::KVRangeTableGeoNavigator::Dictionary, isa_proxy, 4,
                  sizeof(::KVRangeTableGeoNavigator) );
      instance.SetDelete(&delete_KVRangeTableGeoNavigator);
      instance.SetDeleteArray(&deleteArray_KVRangeTableGeoNavigator);
      instance.SetDestructor(&destruct_KVRangeTableGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRangeTableGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::KVRangeTableGeoNavigator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRangeTableGeoNavigator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGeoDetectorNode(void *p = 0);
   static void *newArray_KVGeoDetectorNode(Long_t size, void *p);
   static void delete_KVGeoDetectorNode(void *p);
   static void deleteArray_KVGeoDetectorNode(void *p);
   static void destruct_KVGeoDetectorNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGeoDetectorNode*)
   {
      ::KVGeoDetectorNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGeoDetectorNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGeoDetectorNode", ::KVGeoDetectorNode::Class_Version(), "KVGeoDetectorNode.h", 11,
                  typeid(::KVGeoDetectorNode), DefineBehavior(ptr, ptr),
                  &::KVGeoDetectorNode::Dictionary, isa_proxy, 4,
                  sizeof(::KVGeoDetectorNode) );
      instance.SetNew(&new_KVGeoDetectorNode);
      instance.SetNewArray(&newArray_KVGeoDetectorNode);
      instance.SetDelete(&delete_KVGeoDetectorNode);
      instance.SetDeleteArray(&deleteArray_KVGeoDetectorNode);
      instance.SetDestructor(&destruct_KVGeoDetectorNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGeoDetectorNode*)
   {
      return GenerateInitInstanceLocal((::KVGeoDetectorNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGeoDetectorNode*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGeoStrucElement(void *p = 0);
   static void *newArray_KVGeoStrucElement(Long_t size, void *p);
   static void delete_KVGeoStrucElement(void *p);
   static void deleteArray_KVGeoStrucElement(void *p);
   static void destruct_KVGeoStrucElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGeoStrucElement*)
   {
      ::KVGeoStrucElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGeoStrucElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGeoStrucElement", ::KVGeoStrucElement::Class_Version(), "KVGeoStrucElement.h", 11,
                  typeid(::KVGeoStrucElement), DefineBehavior(ptr, ptr),
                  &::KVGeoStrucElement::Dictionary, isa_proxy, 4,
                  sizeof(::KVGeoStrucElement) );
      instance.SetNew(&new_KVGeoStrucElement);
      instance.SetNewArray(&newArray_KVGeoStrucElement);
      instance.SetDelete(&delete_KVGeoStrucElement);
      instance.SetDeleteArray(&deleteArray_KVGeoStrucElement);
      instance.SetDestructor(&destruct_KVGeoStrucElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGeoStrucElement*)
   {
      return GenerateInitInstanceLocal((::KVGeoStrucElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGeoStrucElement*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVACQParam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVACQParam::Class_Name()
{
   return "KVACQParam";
}

//______________________________________________________________________________
const char *KVACQParam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVACQParam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVACQParam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVACQParam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVACQParam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVACQParam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVACQParam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVACQParam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCalibrator::Class_Name()
{
   return "KVCalibrator";
}

//______________________________________________________________________________
const char *KVCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDetector::Class_Name()
{
   return "KVDetector";
}

//______________________________________________________________________________
const char *KVDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTelescope::Class_Name()
{
   return "KVTelescope";
}

//______________________________________________________________________________
const char *KVTelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGroup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGroup::Class_Name()
{
   return "KVGroup";
}

//______________________________________________________________________________
const char *KVGroup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGroup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGroup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGroup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGroup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGroup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGroup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGroup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVASGroup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVASGroup::Class_Name()
{
   return "KVASGroup";
}

//______________________________________________________________________________
const char *KVASGroup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVASGroup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVASGroup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVASGroup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVASGroup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVASGroup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVASGroup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVASGroup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLayer::Class_Name()
{
   return "KVLayer";
}

//______________________________________________________________________________
const char *KVLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRing::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRing::Class_Name()
{
   return "KVRing";
}

//______________________________________________________________________________
const char *KVRing::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRing*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRing::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRing*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRing::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRing*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRing::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRing*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGeoNavigator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGeoNavigator::Class_Name()
{
   return "KVGeoNavigator";
}

//______________________________________________________________________________
const char *KVGeoNavigator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoNavigator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGeoNavigator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoNavigator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGeoNavigator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoNavigator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGeoNavigator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoNavigator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRangeTableGeoNavigator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRangeTableGeoNavigator::Class_Name()
{
   return "KVRangeTableGeoNavigator";
}

//______________________________________________________________________________
const char *KVRangeTableGeoNavigator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRangeTableGeoNavigator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRangeTableGeoNavigator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRangeTableGeoNavigator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRangeTableGeoNavigator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRangeTableGeoNavigator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRangeTableGeoNavigator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRangeTableGeoNavigator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGeoDetectorNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGeoDetectorNode::Class_Name()
{
   return "KVGeoDetectorNode";
}

//______________________________________________________________________________
const char *KVGeoDetectorNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoDetectorNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGeoDetectorNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoDetectorNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGeoDetectorNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoDetectorNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGeoDetectorNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoDetectorNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGeoStrucElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGeoStrucElement::Class_Name()
{
   return "KVGeoStrucElement";
}

//______________________________________________________________________________
const char *KVGeoStrucElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoStrucElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGeoStrucElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGeoStrucElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGeoStrucElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoStrucElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGeoStrucElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGeoStrucElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVACQParam::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVACQParam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVACQParam::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVACQParam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVACQParam(void *p) {
      return  p ? new(p) ::KVACQParam : new ::KVACQParam;
   }
   static void *newArray_KVACQParam(Long_t nElements, void *p) {
      return p ? new(p) ::KVACQParam[nElements] : new ::KVACQParam[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVACQParam(void *p) {
      delete ((::KVACQParam*)p);
   }
   static void deleteArray_KVACQParam(void *p) {
      delete [] ((::KVACQParam*)p);
   }
   static void destruct_KVACQParam(void *p) {
      typedef ::KVACQParam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVACQParam

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVCalibrator(void *p) {
      delete ((::KVCalibrator*)p);
   }
   static void deleteArray_KVCalibrator(void *p) {
      delete [] ((::KVCalibrator*)p);
   }
   static void destruct_KVCalibrator(void *p) {
      typedef ::KVCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCalibrator(TBuffer &buf, void *obj) {
      ((::KVCalibrator*)obj)->::KVCalibrator::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCalibrator

//______________________________________________________________________________
void KVDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDetector(void *p) {
      return  p ? new(p) ::KVDetector : new ::KVDetector;
   }
   static void *newArray_KVDetector(Long_t nElements, void *p) {
      return p ? new(p) ::KVDetector[nElements] : new ::KVDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDetector(void *p) {
      delete ((::KVDetector*)p);
   }
   static void deleteArray_KVDetector(void *p) {
      delete [] ((::KVDetector*)p);
   }
   static void destruct_KVDetector(void *p) {
      typedef ::KVDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDetector

//______________________________________________________________________________
void KVTelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTelescope(void *p) {
      return  p ? new(p) ::KVTelescope : new ::KVTelescope;
   }
   static void *newArray_KVTelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVTelescope[nElements] : new ::KVTelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTelescope(void *p) {
      delete ((::KVTelescope*)p);
   }
   static void deleteArray_KVTelescope(void *p) {
      delete [] ((::KVTelescope*)p);
   }
   static void destruct_KVTelescope(void *p) {
      typedef ::KVTelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTelescope

//______________________________________________________________________________
void KVGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGroup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGroup::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGroup::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGroup(void *p) {
      return  p ? new(p) ::KVGroup : new ::KVGroup;
   }
   static void *newArray_KVGroup(Long_t nElements, void *p) {
      return p ? new(p) ::KVGroup[nElements] : new ::KVGroup[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGroup(void *p) {
      delete ((::KVGroup*)p);
   }
   static void deleteArray_KVGroup(void *p) {
      delete [] ((::KVGroup*)p);
   }
   static void destruct_KVGroup(void *p) {
      typedef ::KVGroup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGroup

//______________________________________________________________________________
void KVASGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVASGroup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVASGroup::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVASGroup::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVASGroup(void *p) {
      return  p ? new(p) ::KVASGroup : new ::KVASGroup;
   }
   static void *newArray_KVASGroup(Long_t nElements, void *p) {
      return p ? new(p) ::KVASGroup[nElements] : new ::KVASGroup[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVASGroup(void *p) {
      delete ((::KVASGroup*)p);
   }
   static void deleteArray_KVASGroup(void *p) {
      delete [] ((::KVASGroup*)p);
   }
   static void destruct_KVASGroup(void *p) {
      typedef ::KVASGroup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVASGroup

//______________________________________________________________________________
void KVLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLayer(void *p) {
      return  p ? new(p) ::KVLayer : new ::KVLayer;
   }
   static void *newArray_KVLayer(Long_t nElements, void *p) {
      return p ? new(p) ::KVLayer[nElements] : new ::KVLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLayer(void *p) {
      delete ((::KVLayer*)p);
   }
   static void deleteArray_KVLayer(void *p) {
      delete [] ((::KVLayer*)p);
   }
   static void destruct_KVLayer(void *p) {
      typedef ::KVLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLayer

//______________________________________________________________________________
void KVRing::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRing.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRing::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRing::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRing(void *p) {
      return  p ? new(p) ::KVRing : new ::KVRing;
   }
   static void *newArray_KVRing(Long_t nElements, void *p) {
      return p ? new(p) ::KVRing[nElements] : new ::KVRing[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRing(void *p) {
      delete ((::KVRing*)p);
   }
   static void deleteArray_KVRing(void *p) {
      delete [] ((::KVRing*)p);
   }
   static void destruct_KVRing(void *p) {
      typedef ::KVRing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRing

//______________________________________________________________________________
void KVGeoNavigator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGeoNavigator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGeoNavigator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGeoNavigator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVGeoNavigator(void *p) {
      delete ((::KVGeoNavigator*)p);
   }
   static void deleteArray_KVGeoNavigator(void *p) {
      delete [] ((::KVGeoNavigator*)p);
   }
   static void destruct_KVGeoNavigator(void *p) {
      typedef ::KVGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGeoNavigator

//______________________________________________________________________________
void KVRangeTableGeoNavigator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRangeTableGeoNavigator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRangeTableGeoNavigator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRangeTableGeoNavigator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVRangeTableGeoNavigator(void *p) {
      delete ((::KVRangeTableGeoNavigator*)p);
   }
   static void deleteArray_KVRangeTableGeoNavigator(void *p) {
      delete [] ((::KVRangeTableGeoNavigator*)p);
   }
   static void destruct_KVRangeTableGeoNavigator(void *p) {
      typedef ::KVRangeTableGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRangeTableGeoNavigator

//______________________________________________________________________________
void KVGeoDetectorNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGeoDetectorNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGeoDetectorNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGeoDetectorNode::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGeoDetectorNode(void *p) {
      return  p ? new(p) ::KVGeoDetectorNode : new ::KVGeoDetectorNode;
   }
   static void *newArray_KVGeoDetectorNode(Long_t nElements, void *p) {
      return p ? new(p) ::KVGeoDetectorNode[nElements] : new ::KVGeoDetectorNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGeoDetectorNode(void *p) {
      delete ((::KVGeoDetectorNode*)p);
   }
   static void deleteArray_KVGeoDetectorNode(void *p) {
      delete [] ((::KVGeoDetectorNode*)p);
   }
   static void destruct_KVGeoDetectorNode(void *p) {
      typedef ::KVGeoDetectorNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGeoDetectorNode

//______________________________________________________________________________
void KVGeoStrucElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGeoStrucElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGeoStrucElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGeoStrucElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGeoStrucElement(void *p) {
      return  p ? new(p) ::KVGeoStrucElement : new ::KVGeoStrucElement;
   }
   static void *newArray_KVGeoStrucElement(Long_t nElements, void *p) {
      return p ? new(p) ::KVGeoStrucElement[nElements] : new ::KVGeoStrucElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGeoStrucElement(void *p) {
      delete ((::KVGeoStrucElement*)p);
   }
   static void deleteArray_KVGeoStrucElement(void *p) {
      delete [] ((::KVGeoStrucElement*)p);
   }
   static void destruct_KVGeoStrucElement(void *p) {
      typedef ::KVGeoStrucElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGeoStrucElement

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetgeometry_Impl() {
    static const char* headers[] = {
"KVLayer.h",
"KVTelescope.h",
"KVCalibrator.h",
"KVGroup.h",
"KVRangeTableGeoNavigator.h",
"KVGeoDetectorNode.h",
"KVASGroup.h",
"KVRing.h",
"KVDetector.h",
"KVGeoNavigator.h",
"KVACQParam.h",
"KVGeoStrucElement.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/geometry/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Data acquisition parameters read from raw DLT's)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLayer.h")))  KVACQParam;
class __attribute__((annotate(R"ATTRDUMP(Base class for calibration of detectors)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCalibrator.h")))  KVCalibrator;
class __attribute__((annotate(R"ATTRDUMP(Base class for the description of detectors in multidetector arrays)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLayer.h")))  KVDetector;
class __attribute__((annotate(R"ATTRDUMP(Multi-layered telescopes composed of different absorbers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTelescope.h")))  KVTelescope;
class __attribute__((annotate(R"ATTRDUMP(Group of detectors having similar angular positions.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTelescope.h")))  KVGroup;
class __attribute__((annotate(R"ATTRDUMP(Group in axially-symmetric multidetector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVASGroup.h")))  KVASGroup;
class __attribute__((annotate(R"ATTRDUMP(Layer of telescopes at the "same distance" from the target in a multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLayer.h")))  KVLayer;
class __attribute__((annotate(R"ATTRDUMP(Class representing one ring of an axially symmetric multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRing.h")))  KVRing;
class __attribute__((annotate(R"ATTRDUMP(Propagate particles of an event through a TGeo geometry)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRangeTableGeoNavigator.h")))  KVGeoNavigator;
class __attribute__((annotate(R"ATTRDUMP(Propagate particles through a geometry and calculate their energy losses)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRangeTableGeoNavigator.h")))  KVRangeTableGeoNavigator;
class __attribute__((annotate(R"ATTRDUMP(Stores lists of detectors in front and behind this node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLayer.h")))  KVGeoDetectorNode;
class __attribute__((annotate(R"ATTRDUMP(A multidetector array geometry structural element)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLayer.h")))  KVGeoStrucElement;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVLayer.h"
#include "KVTelescope.h"
#include "KVCalibrator.h"
#include "KVGroup.h"
#include "KVRangeTableGeoNavigator.h"
#include "KVGeoDetectorNode.h"
#include "KVASGroup.h"
#include "KVRing.h"
#include "KVDetector.h"
#include "KVGeoNavigator.h"
#include "KVACQParam.h"
#include "KVGeoStrucElement.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVACQParam", payloadCode, "@",
"KVASGroup", payloadCode, "@",
"KVCalibrator", payloadCode, "@",
"KVDetector", payloadCode, "@",
"KVGeoDetectorNode", payloadCode, "@",
"KVGeoNavigator", payloadCode, "@",
"KVGeoStrucElement", payloadCode, "@",
"KVGroup", payloadCode, "@",
"KVLayer", payloadCode, "@",
"KVRangeTableGeoNavigator", payloadCode, "@",
"KVRing", payloadCode, "@",
"KVTelescope", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetgeometry",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetgeometry_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetgeometry_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetgeometry() {
  TriggerDictionaryInitialization_libKVMultiDetgeometry_Impl();
}
