// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetparticles

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
#include "KVNuclData.h"
#include "KVChargeRadius.h"
#include "KVElementDensityTable.h"
#include "KVMassExcessTable.h"
#include "KVLifeTimeTable.h"
#include "KVAbundance.h"
#include "KVNDTManager.h"
#include "KVNucleus.h"
#include "KVAbundanceTable.h"
#include "KVElementDensity.h"
#include "KVNuclDataTable.h"
#include "KVParticleCondition.h"
#include "KVLifeTime.h"
#include "KVParticle.h"
#include "KVSimNucleus.h"
#include "KVChargeRadiusTable.h"
#include "KVMassExcess.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVSimNucleus(void *p = 0);
   static void *newArray_KVSimNucleus(Long_t size, void *p);
   static void delete_KVSimNucleus(void *p);
   static void deleteArray_KVSimNucleus(void *p);
   static void destruct_KVSimNucleus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimNucleus*)
   {
      ::KVSimNucleus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimNucleus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimNucleus", ::KVSimNucleus::Class_Version(), "KVSimNucleus.h", 12,
                  typeid(::KVSimNucleus), DefineBehavior(ptr, ptr),
                  &::KVSimNucleus::Dictionary, isa_proxy, 4,
                  sizeof(::KVSimNucleus) );
      instance.SetNew(&new_KVSimNucleus);
      instance.SetNewArray(&newArray_KVSimNucleus);
      instance.SetDelete(&delete_KVSimNucleus);
      instance.SetDeleteArray(&deleteArray_KVSimNucleus);
      instance.SetDestructor(&destruct_KVSimNucleus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimNucleus*)
   {
      return GenerateInitInstanceLocal((::KVSimNucleus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimNucleus*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNucleus(void *p = 0);
   static void *newArray_KVNucleus(Long_t size, void *p);
   static void delete_KVNucleus(void *p);
   static void deleteArray_KVNucleus(void *p);
   static void destruct_KVNucleus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNucleus*)
   {
      ::KVNucleus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNucleus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNucleus", ::KVNucleus::Class_Version(), "KVNucleus.h", 27,
                  typeid(::KVNucleus), DefineBehavior(ptr, ptr),
                  &::KVNucleus::Dictionary, isa_proxy, 4,
                  sizeof(::KVNucleus) );
      instance.SetNew(&new_KVNucleus);
      instance.SetNewArray(&newArray_KVNucleus);
      instance.SetDelete(&delete_KVNucleus);
      instance.SetDeleteArray(&deleteArray_KVNucleus);
      instance.SetDestructor(&destruct_KVNucleus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNucleus*)
   {
      return GenerateInitInstanceLocal((::KVNucleus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNucleus*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVParticle(void *p = 0);
   static void *newArray_KVParticle(Long_t size, void *p);
   static void delete_KVParticle(void *p);
   static void deleteArray_KVParticle(void *p);
   static void destruct_KVParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVParticle*)
   {
      ::KVParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVParticle", ::KVParticle::Class_Version(), "KVParticle.h", 36,
                  typeid(::KVParticle), DefineBehavior(ptr, ptr),
                  &::KVParticle::Dictionary, isa_proxy, 4,
                  sizeof(::KVParticle) );
      instance.SetNew(&new_KVParticle);
      instance.SetNewArray(&newArray_KVParticle);
      instance.SetDelete(&delete_KVParticle);
      instance.SetDeleteArray(&deleteArray_KVParticle);
      instance.SetDestructor(&destruct_KVParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVParticle*)
   {
      return GenerateInitInstanceLocal((::KVParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVParticleCondition(void *p = 0);
   static void *newArray_KVParticleCondition(Long_t size, void *p);
   static void delete_KVParticleCondition(void *p);
   static void deleteArray_KVParticleCondition(void *p);
   static void destruct_KVParticleCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVParticleCondition*)
   {
      ::KVParticleCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVParticleCondition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVParticleCondition", ::KVParticleCondition::Class_Version(), "KVParticleCondition.h", 19,
                  typeid(::KVParticleCondition), DefineBehavior(ptr, ptr),
                  &::KVParticleCondition::Dictionary, isa_proxy, 4,
                  sizeof(::KVParticleCondition) );
      instance.SetNew(&new_KVParticleCondition);
      instance.SetNewArray(&newArray_KVParticleCondition);
      instance.SetDelete(&delete_KVParticleCondition);
      instance.SetDeleteArray(&deleteArray_KVParticleCondition);
      instance.SetDestructor(&destruct_KVParticleCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVParticleCondition*)
   {
      return GenerateInitInstanceLocal((::KVParticleCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVParticleCondition*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNuclData(void *p = 0);
   static void *newArray_KVNuclData(Long_t size, void *p);
   static void delete_KVNuclData(void *p);
   static void deleteArray_KVNuclData(void *p);
   static void destruct_KVNuclData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNuclData*)
   {
      ::KVNuclData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNuclData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNuclData", ::KVNuclData::Class_Version(), "KVNuclData.h", 10,
                  typeid(::KVNuclData), DefineBehavior(ptr, ptr),
                  &::KVNuclData::Dictionary, isa_proxy, 4,
                  sizeof(::KVNuclData) );
      instance.SetNew(&new_KVNuclData);
      instance.SetNewArray(&newArray_KVNuclData);
      instance.SetDelete(&delete_KVNuclData);
      instance.SetDeleteArray(&deleteArray_KVNuclData);
      instance.SetDestructor(&destruct_KVNuclData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNuclData*)
   {
      return GenerateInitInstanceLocal((::KVNuclData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNuclData*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_NDTcLcLvalue(void *p);
   static void deleteArray_NDTcLcLvalue(void *p);
   static void destruct_NDTcLcLvalue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NDT::value*)
   {
      ::NDT::value *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NDT::value >(0);
      static ::ROOT::TGenericClassInfo 
         instance("NDT::value", ::NDT::value::Class_Version(), "KVNuclDataTable.h", 28,
                  typeid(::NDT::value), DefineBehavior(ptr, ptr),
                  &::NDT::value::Dictionary, isa_proxy, 4,
                  sizeof(::NDT::value) );
      instance.SetDelete(&delete_NDTcLcLvalue);
      instance.SetDeleteArray(&deleteArray_NDTcLcLvalue);
      instance.SetDestructor(&destruct_NDTcLcLvalue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NDT::value*)
   {
      return GenerateInitInstanceLocal((::NDT::value*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::NDT::value*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_NDTcLcLkey(void *p);
   static void deleteArray_NDTcLcLkey(void *p);
   static void destruct_NDTcLcLkey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NDT::key*)
   {
      ::NDT::key *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NDT::key >(0);
      static ::ROOT::TGenericClassInfo 
         instance("NDT::key", ::NDT::key::Class_Version(), "KVNuclDataTable.h", 19,
                  typeid(::NDT::key), DefineBehavior(ptr, ptr),
                  &::NDT::key::Dictionary, isa_proxy, 4,
                  sizeof(::NDT::key) );
      instance.SetDelete(&delete_NDTcLcLkey);
      instance.SetDeleteArray(&deleteArray_NDTcLcLkey);
      instance.SetDestructor(&destruct_NDTcLcLkey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NDT::key*)
   {
      return GenerateInitInstanceLocal((::NDT::key*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::NDT::key*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVNuclDataTable(void *p);
   static void deleteArray_KVNuclDataTable(void *p);
   static void destruct_KVNuclDataTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNuclDataTable*)
   {
      ::KVNuclDataTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNuclDataTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNuclDataTable", ::KVNuclDataTable::Class_Version(), "KVNuclDataTable.h", 42,
                  typeid(::KVNuclDataTable), DefineBehavior(ptr, ptr),
                  &::KVNuclDataTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVNuclDataTable) );
      instance.SetDelete(&delete_KVNuclDataTable);
      instance.SetDeleteArray(&deleteArray_KVNuclDataTable);
      instance.SetDestructor(&destruct_KVNuclDataTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNuclDataTable*)
   {
      return GenerateInitInstanceLocal((::KVNuclDataTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNuclDataTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNDTManager(void *p = 0);
   static void *newArray_KVNDTManager(Long_t size, void *p);
   static void delete_KVNDTManager(void *p);
   static void deleteArray_KVNDTManager(void *p);
   static void destruct_KVNDTManager(void *p);
   static Long64_t merge_KVNDTManager(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNDTManager*)
   {
      ::KVNDTManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNDTManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNDTManager", ::KVNDTManager::Class_Version(), "KVNDTManager.h", 13,
                  typeid(::KVNDTManager), DefineBehavior(ptr, ptr),
                  &::KVNDTManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVNDTManager) );
      instance.SetNew(&new_KVNDTManager);
      instance.SetNewArray(&newArray_KVNDTManager);
      instance.SetDelete(&delete_KVNDTManager);
      instance.SetDeleteArray(&deleteArray_KVNDTManager);
      instance.SetDestructor(&destruct_KVNDTManager);
      instance.SetMerge(&merge_KVNDTManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNDTManager*)
   {
      return GenerateInitInstanceLocal((::KVNDTManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNDTManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLifeTime(void *p = 0);
   static void *newArray_KVLifeTime(Long_t size, void *p);
   static void delete_KVLifeTime(void *p);
   static void deleteArray_KVLifeTime(void *p);
   static void destruct_KVLifeTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLifeTime*)
   {
      ::KVLifeTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLifeTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLifeTime", ::KVLifeTime::Class_Version(), "KVLifeTime.h", 9,
                  typeid(::KVLifeTime), DefineBehavior(ptr, ptr),
                  &::KVLifeTime::Dictionary, isa_proxy, 4,
                  sizeof(::KVLifeTime) );
      instance.SetNew(&new_KVLifeTime);
      instance.SetNewArray(&newArray_KVLifeTime);
      instance.SetDelete(&delete_KVLifeTime);
      instance.SetDeleteArray(&deleteArray_KVLifeTime);
      instance.SetDestructor(&destruct_KVLifeTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLifeTime*)
   {
      return GenerateInitInstanceLocal((::KVLifeTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLifeTime*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVAbundance(void *p = 0);
   static void *newArray_KVAbundance(Long_t size, void *p);
   static void delete_KVAbundance(void *p);
   static void deleteArray_KVAbundance(void *p);
   static void destruct_KVAbundance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVAbundance*)
   {
      ::KVAbundance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVAbundance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVAbundance", ::KVAbundance::Class_Version(), "KVAbundance.h", 9,
                  typeid(::KVAbundance), DefineBehavior(ptr, ptr),
                  &::KVAbundance::Dictionary, isa_proxy, 4,
                  sizeof(::KVAbundance) );
      instance.SetNew(&new_KVAbundance);
      instance.SetNewArray(&newArray_KVAbundance);
      instance.SetDelete(&delete_KVAbundance);
      instance.SetDeleteArray(&deleteArray_KVAbundance);
      instance.SetDestructor(&destruct_KVAbundance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVAbundance*)
   {
      return GenerateInitInstanceLocal((::KVAbundance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVAbundance*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChargeRadius(void *p = 0);
   static void *newArray_KVChargeRadius(Long_t size, void *p);
   static void delete_KVChargeRadius(void *p);
   static void deleteArray_KVChargeRadius(void *p);
   static void destruct_KVChargeRadius(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChargeRadius*)
   {
      ::KVChargeRadius *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChargeRadius >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChargeRadius", ::KVChargeRadius::Class_Version(), "KVChargeRadius.h", 9,
                  typeid(::KVChargeRadius), DefineBehavior(ptr, ptr),
                  &::KVChargeRadius::Dictionary, isa_proxy, 4,
                  sizeof(::KVChargeRadius) );
      instance.SetNew(&new_KVChargeRadius);
      instance.SetNewArray(&newArray_KVChargeRadius);
      instance.SetDelete(&delete_KVChargeRadius);
      instance.SetDeleteArray(&deleteArray_KVChargeRadius);
      instance.SetDestructor(&destruct_KVChargeRadius);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChargeRadius*)
   {
      return GenerateInitInstanceLocal((::KVChargeRadius*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChargeRadius*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVElementDensity(void *p = 0);
   static void *newArray_KVElementDensity(Long_t size, void *p);
   static void delete_KVElementDensity(void *p);
   static void deleteArray_KVElementDensity(void *p);
   static void destruct_KVElementDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVElementDensity*)
   {
      ::KVElementDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVElementDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVElementDensity", ::KVElementDensity::Class_Version(), "KVElementDensity.h", 9,
                  typeid(::KVElementDensity), DefineBehavior(ptr, ptr),
                  &::KVElementDensity::Dictionary, isa_proxy, 4,
                  sizeof(::KVElementDensity) );
      instance.SetNew(&new_KVElementDensity);
      instance.SetNewArray(&newArray_KVElementDensity);
      instance.SetDelete(&delete_KVElementDensity);
      instance.SetDeleteArray(&deleteArray_KVElementDensity);
      instance.SetDestructor(&destruct_KVElementDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVElementDensity*)
   {
      return GenerateInitInstanceLocal((::KVElementDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVElementDensity*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMassExcess(void *p = 0);
   static void *newArray_KVMassExcess(Long_t size, void *p);
   static void delete_KVMassExcess(void *p);
   static void deleteArray_KVMassExcess(void *p);
   static void destruct_KVMassExcess(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMassExcess*)
   {
      ::KVMassExcess *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMassExcess >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMassExcess", ::KVMassExcess::Class_Version(), "KVMassExcess.h", 9,
                  typeid(::KVMassExcess), DefineBehavior(ptr, ptr),
                  &::KVMassExcess::Dictionary, isa_proxy, 4,
                  sizeof(::KVMassExcess) );
      instance.SetNew(&new_KVMassExcess);
      instance.SetNewArray(&newArray_KVMassExcess);
      instance.SetDelete(&delete_KVMassExcess);
      instance.SetDeleteArray(&deleteArray_KVMassExcess);
      instance.SetDestructor(&destruct_KVMassExcess);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMassExcess*)
   {
      return GenerateInitInstanceLocal((::KVMassExcess*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMassExcess*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLifeTimeTable(void *p = 0);
   static void *newArray_KVLifeTimeTable(Long_t size, void *p);
   static void delete_KVLifeTimeTable(void *p);
   static void deleteArray_KVLifeTimeTable(void *p);
   static void destruct_KVLifeTimeTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLifeTimeTable*)
   {
      ::KVLifeTimeTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLifeTimeTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLifeTimeTable", ::KVLifeTimeTable::Class_Version(), "KVLifeTimeTable.h", 11,
                  typeid(::KVLifeTimeTable), DefineBehavior(ptr, ptr),
                  &::KVLifeTimeTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVLifeTimeTable) );
      instance.SetNew(&new_KVLifeTimeTable);
      instance.SetNewArray(&newArray_KVLifeTimeTable);
      instance.SetDelete(&delete_KVLifeTimeTable);
      instance.SetDeleteArray(&deleteArray_KVLifeTimeTable);
      instance.SetDestructor(&destruct_KVLifeTimeTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLifeTimeTable*)
   {
      return GenerateInitInstanceLocal((::KVLifeTimeTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLifeTimeTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVAbundanceTable(void *p = 0);
   static void *newArray_KVAbundanceTable(Long_t size, void *p);
   static void delete_KVAbundanceTable(void *p);
   static void deleteArray_KVAbundanceTable(void *p);
   static void destruct_KVAbundanceTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVAbundanceTable*)
   {
      ::KVAbundanceTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVAbundanceTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVAbundanceTable", ::KVAbundanceTable::Class_Version(), "KVAbundanceTable.h", 10,
                  typeid(::KVAbundanceTable), DefineBehavior(ptr, ptr),
                  &::KVAbundanceTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVAbundanceTable) );
      instance.SetNew(&new_KVAbundanceTable);
      instance.SetNewArray(&newArray_KVAbundanceTable);
      instance.SetDelete(&delete_KVAbundanceTable);
      instance.SetDeleteArray(&deleteArray_KVAbundanceTable);
      instance.SetDestructor(&destruct_KVAbundanceTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVAbundanceTable*)
   {
      return GenerateInitInstanceLocal((::KVAbundanceTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVAbundanceTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMassExcessTable(void *p = 0);
   static void *newArray_KVMassExcessTable(Long_t size, void *p);
   static void delete_KVMassExcessTable(void *p);
   static void deleteArray_KVMassExcessTable(void *p);
   static void destruct_KVMassExcessTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMassExcessTable*)
   {
      ::KVMassExcessTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMassExcessTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMassExcessTable", ::KVMassExcessTable::Class_Version(), "KVMassExcessTable.h", 10,
                  typeid(::KVMassExcessTable), DefineBehavior(ptr, ptr),
                  &::KVMassExcessTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVMassExcessTable) );
      instance.SetNew(&new_KVMassExcessTable);
      instance.SetNewArray(&newArray_KVMassExcessTable);
      instance.SetDelete(&delete_KVMassExcessTable);
      instance.SetDeleteArray(&deleteArray_KVMassExcessTable);
      instance.SetDestructor(&destruct_KVMassExcessTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMassExcessTable*)
   {
      return GenerateInitInstanceLocal((::KVMassExcessTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMassExcessTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVElementDensityTable(void *p = 0);
   static void *newArray_KVElementDensityTable(Long_t size, void *p);
   static void delete_KVElementDensityTable(void *p);
   static void deleteArray_KVElementDensityTable(void *p);
   static void destruct_KVElementDensityTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVElementDensityTable*)
   {
      ::KVElementDensityTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVElementDensityTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVElementDensityTable", ::KVElementDensityTable::Class_Version(), "KVElementDensityTable.h", 11,
                  typeid(::KVElementDensityTable), DefineBehavior(ptr, ptr),
                  &::KVElementDensityTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVElementDensityTable) );
      instance.SetNew(&new_KVElementDensityTable);
      instance.SetNewArray(&newArray_KVElementDensityTable);
      instance.SetDelete(&delete_KVElementDensityTable);
      instance.SetDeleteArray(&deleteArray_KVElementDensityTable);
      instance.SetDestructor(&destruct_KVElementDensityTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVElementDensityTable*)
   {
      return GenerateInitInstanceLocal((::KVElementDensityTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVElementDensityTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChargeRadiusTable(void *p = 0);
   static void *newArray_KVChargeRadiusTable(Long_t size, void *p);
   static void delete_KVChargeRadiusTable(void *p);
   static void deleteArray_KVChargeRadiusTable(void *p);
   static void destruct_KVChargeRadiusTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChargeRadiusTable*)
   {
      ::KVChargeRadiusTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChargeRadiusTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChargeRadiusTable", ::KVChargeRadiusTable::Class_Version(), "KVChargeRadiusTable.h", 10,
                  typeid(::KVChargeRadiusTable), DefineBehavior(ptr, ptr),
                  &::KVChargeRadiusTable::Dictionary, isa_proxy, 4,
                  sizeof(::KVChargeRadiusTable) );
      instance.SetNew(&new_KVChargeRadiusTable);
      instance.SetNewArray(&newArray_KVChargeRadiusTable);
      instance.SetDelete(&delete_KVChargeRadiusTable);
      instance.SetDeleteArray(&deleteArray_KVChargeRadiusTable);
      instance.SetDestructor(&destruct_KVChargeRadiusTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChargeRadiusTable*)
   {
      return GenerateInitInstanceLocal((::KVChargeRadiusTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChargeRadiusTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVSimNucleus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimNucleus::Class_Name()
{
   return "KVSimNucleus";
}

//______________________________________________________________________________
const char *KVSimNucleus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimNucleus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimNucleus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimNucleus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimNucleus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimNucleus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimNucleus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimNucleus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNucleus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNucleus::Class_Name()
{
   return "KVNucleus";
}

//______________________________________________________________________________
const char *KVNucleus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNucleus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNucleus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNucleus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNucleus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNucleus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNucleus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNucleus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVParticle::Class_Name()
{
   return "KVParticle";
}

//______________________________________________________________________________
const char *KVParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVParticleCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVParticleCondition::Class_Name()
{
   return "KVParticleCondition";
}

//______________________________________________________________________________
const char *KVParticleCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVParticleCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVParticleCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVParticleCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVParticleCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVParticleCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVParticleCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVParticleCondition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNuclData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNuclData::Class_Name()
{
   return "KVNuclData";
}

//______________________________________________________________________________
const char *KVNuclData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNuclData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNuclData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNuclData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclData*)0x0)->GetClass(); }
   return fgIsA;
}

namespace NDT {
//______________________________________________________________________________
atomic_TClass_ptr value::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *value::Class_Name()
{
   return "NDT::value";
}

//______________________________________________________________________________
const char *value::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NDT::value*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int value::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NDT::value*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *value::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NDT::value*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *value::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NDT::value*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace NDT
namespace NDT {
//______________________________________________________________________________
atomic_TClass_ptr key::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *key::Class_Name()
{
   return "NDT::key";
}

//______________________________________________________________________________
const char *key::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NDT::key*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int key::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NDT::key*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *key::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NDT::key*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *key::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NDT::key*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace NDT
//______________________________________________________________________________
atomic_TClass_ptr KVNuclDataTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNuclDataTable::Class_Name()
{
   return "KVNuclDataTable";
}

//______________________________________________________________________________
const char *KVNuclDataTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclDataTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNuclDataTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclDataTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNuclDataTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclDataTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNuclDataTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclDataTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNDTManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNDTManager::Class_Name()
{
   return "KVNDTManager";
}

//______________________________________________________________________________
const char *KVNDTManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNDTManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNDTManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNDTManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNDTManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNDTManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNDTManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNDTManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLifeTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLifeTime::Class_Name()
{
   return "KVLifeTime";
}

//______________________________________________________________________________
const char *KVLifeTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLifeTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLifeTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLifeTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVAbundance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVAbundance::Class_Name()
{
   return "KVAbundance";
}

//______________________________________________________________________________
const char *KVAbundance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAbundance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVAbundance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAbundance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVAbundance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAbundance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVAbundance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAbundance*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChargeRadius::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChargeRadius::Class_Name()
{
   return "KVChargeRadius";
}

//______________________________________________________________________________
const char *KVChargeRadius::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadius*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChargeRadius::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadius*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChargeRadius::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadius*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChargeRadius::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadius*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVElementDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVElementDensity::Class_Name()
{
   return "KVElementDensity";
}

//______________________________________________________________________________
const char *KVElementDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVElementDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVElementDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVElementDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMassExcess::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMassExcess::Class_Name()
{
   return "KVMassExcess";
}

//______________________________________________________________________________
const char *KVMassExcess::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcess*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMassExcess::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcess*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMassExcess::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcess*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMassExcess::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcess*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLifeTimeTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLifeTimeTable::Class_Name()
{
   return "KVLifeTimeTable";
}

//______________________________________________________________________________
const char *KVLifeTimeTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTimeTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLifeTimeTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTimeTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLifeTimeTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTimeTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLifeTimeTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLifeTimeTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVAbundanceTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVAbundanceTable::Class_Name()
{
   return "KVAbundanceTable";
}

//______________________________________________________________________________
const char *KVAbundanceTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAbundanceTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVAbundanceTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAbundanceTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVAbundanceTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAbundanceTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVAbundanceTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAbundanceTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMassExcessTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMassExcessTable::Class_Name()
{
   return "KVMassExcessTable";
}

//______________________________________________________________________________
const char *KVMassExcessTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcessTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMassExcessTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcessTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMassExcessTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcessTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMassExcessTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMassExcessTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVElementDensityTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVElementDensityTable::Class_Name()
{
   return "KVElementDensityTable";
}

//______________________________________________________________________________
const char *KVElementDensityTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensityTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVElementDensityTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensityTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVElementDensityTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensityTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVElementDensityTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVElementDensityTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChargeRadiusTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChargeRadiusTable::Class_Name()
{
   return "KVChargeRadiusTable";
}

//______________________________________________________________________________
const char *KVChargeRadiusTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadiusTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChargeRadiusTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadiusTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChargeRadiusTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadiusTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChargeRadiusTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChargeRadiusTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVSimNucleus::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimNucleus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSimNucleus::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSimNucleus::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimNucleus(void *p) {
      return  p ? new(p) ::KVSimNucleus : new ::KVSimNucleus;
   }
   static void *newArray_KVSimNucleus(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimNucleus[nElements] : new ::KVSimNucleus[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimNucleus(void *p) {
      delete ((::KVSimNucleus*)p);
   }
   static void deleteArray_KVSimNucleus(void *p) {
      delete [] ((::KVSimNucleus*)p);
   }
   static void destruct_KVSimNucleus(void *p) {
      typedef ::KVSimNucleus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSimNucleus

//______________________________________________________________________________
void KVNucleus::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNucleus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNucleus::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNucleus::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNucleus(void *p) {
      return  p ? new(p) ::KVNucleus : new ::KVNucleus;
   }
   static void *newArray_KVNucleus(Long_t nElements, void *p) {
      return p ? new(p) ::KVNucleus[nElements] : new ::KVNucleus[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNucleus(void *p) {
      delete ((::KVNucleus*)p);
   }
   static void deleteArray_KVNucleus(void *p) {
      delete [] ((::KVNucleus*)p);
   }
   static void destruct_KVNucleus(void *p) {
      typedef ::KVNucleus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNucleus

//______________________________________________________________________________
void KVParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVParticle(void *p) {
      return  p ? new(p) ::KVParticle : new ::KVParticle;
   }
   static void *newArray_KVParticle(Long_t nElements, void *p) {
      return p ? new(p) ::KVParticle[nElements] : new ::KVParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVParticle(void *p) {
      delete ((::KVParticle*)p);
   }
   static void deleteArray_KVParticle(void *p) {
      delete [] ((::KVParticle*)p);
   }
   static void destruct_KVParticle(void *p) {
      typedef ::KVParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVParticle

//______________________________________________________________________________
void KVParticleCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVParticleCondition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVParticleCondition::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVParticleCondition::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVParticleCondition(void *p) {
      return  p ? new(p) ::KVParticleCondition : new ::KVParticleCondition;
   }
   static void *newArray_KVParticleCondition(Long_t nElements, void *p) {
      return p ? new(p) ::KVParticleCondition[nElements] : new ::KVParticleCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVParticleCondition(void *p) {
      delete ((::KVParticleCondition*)p);
   }
   static void deleteArray_KVParticleCondition(void *p) {
      delete [] ((::KVParticleCondition*)p);
   }
   static void destruct_KVParticleCondition(void *p) {
      typedef ::KVParticleCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVParticleCondition

//______________________________________________________________________________
void KVNuclData::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNuclData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNuclData::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNuclData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNuclData(void *p) {
      return  p ? new(p) ::KVNuclData : new ::KVNuclData;
   }
   static void *newArray_KVNuclData(Long_t nElements, void *p) {
      return p ? new(p) ::KVNuclData[nElements] : new ::KVNuclData[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNuclData(void *p) {
      delete ((::KVNuclData*)p);
   }
   static void deleteArray_KVNuclData(void *p) {
      delete [] ((::KVNuclData*)p);
   }
   static void destruct_KVNuclData(void *p) {
      typedef ::KVNuclData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNuclData

namespace NDT {
//______________________________________________________________________________
void value::Streamer(TBuffer &R__b)
{
   // Stream an object of class NDT::value.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NDT::value::Class(),this);
   } else {
      R__b.WriteClassBuffer(NDT::value::Class(),this);
   }
}

} // namespace NDT
namespace ROOT {
   // Wrapper around operator delete
   static void delete_NDTcLcLvalue(void *p) {
      delete ((::NDT::value*)p);
   }
   static void deleteArray_NDTcLcLvalue(void *p) {
      delete [] ((::NDT::value*)p);
   }
   static void destruct_NDTcLcLvalue(void *p) {
      typedef ::NDT::value current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NDT::value

namespace NDT {
//______________________________________________________________________________
void key::Streamer(TBuffer &R__b)
{
   // Stream an object of class NDT::key.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NDT::key::Class(),this);
   } else {
      R__b.WriteClassBuffer(NDT::key::Class(),this);
   }
}

} // namespace NDT
namespace ROOT {
   // Wrapper around operator delete
   static void delete_NDTcLcLkey(void *p) {
      delete ((::NDT::key*)p);
   }
   static void deleteArray_NDTcLcLkey(void *p) {
      delete [] ((::NDT::key*)p);
   }
   static void destruct_NDTcLcLkey(void *p) {
      typedef ::NDT::key current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NDT::key

//______________________________________________________________________________
void KVNuclDataTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNuclDataTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNuclDataTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNuclDataTable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVNuclDataTable(void *p) {
      delete ((::KVNuclDataTable*)p);
   }
   static void deleteArray_KVNuclDataTable(void *p) {
      delete [] ((::KVNuclDataTable*)p);
   }
   static void destruct_KVNuclDataTable(void *p) {
      typedef ::KVNuclDataTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNuclDataTable

//______________________________________________________________________________
void KVNDTManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNDTManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNDTManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNDTManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNDTManager(void *p) {
      return  p ? new(p) ::KVNDTManager : new ::KVNDTManager;
   }
   static void *newArray_KVNDTManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVNDTManager[nElements] : new ::KVNDTManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNDTManager(void *p) {
      delete ((::KVNDTManager*)p);
   }
   static void deleteArray_KVNDTManager(void *p) {
      delete [] ((::KVNDTManager*)p);
   }
   static void destruct_KVNDTManager(void *p) {
      typedef ::KVNDTManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVNDTManager(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVNDTManager*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVNDTManager

//______________________________________________________________________________
void KVLifeTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLifeTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLifeTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLifeTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLifeTime(void *p) {
      return  p ? new(p) ::KVLifeTime : new ::KVLifeTime;
   }
   static void *newArray_KVLifeTime(Long_t nElements, void *p) {
      return p ? new(p) ::KVLifeTime[nElements] : new ::KVLifeTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLifeTime(void *p) {
      delete ((::KVLifeTime*)p);
   }
   static void deleteArray_KVLifeTime(void *p) {
      delete [] ((::KVLifeTime*)p);
   }
   static void destruct_KVLifeTime(void *p) {
      typedef ::KVLifeTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLifeTime

//______________________________________________________________________________
void KVAbundance::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVAbundance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVAbundance::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVAbundance::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVAbundance(void *p) {
      return  p ? new(p) ::KVAbundance : new ::KVAbundance;
   }
   static void *newArray_KVAbundance(Long_t nElements, void *p) {
      return p ? new(p) ::KVAbundance[nElements] : new ::KVAbundance[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVAbundance(void *p) {
      delete ((::KVAbundance*)p);
   }
   static void deleteArray_KVAbundance(void *p) {
      delete [] ((::KVAbundance*)p);
   }
   static void destruct_KVAbundance(void *p) {
      typedef ::KVAbundance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVAbundance

//______________________________________________________________________________
void KVChargeRadius::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChargeRadius.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChargeRadius::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChargeRadius::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChargeRadius(void *p) {
      return  p ? new(p) ::KVChargeRadius : new ::KVChargeRadius;
   }
   static void *newArray_KVChargeRadius(Long_t nElements, void *p) {
      return p ? new(p) ::KVChargeRadius[nElements] : new ::KVChargeRadius[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChargeRadius(void *p) {
      delete ((::KVChargeRadius*)p);
   }
   static void deleteArray_KVChargeRadius(void *p) {
      delete [] ((::KVChargeRadius*)p);
   }
   static void destruct_KVChargeRadius(void *p) {
      typedef ::KVChargeRadius current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChargeRadius

//______________________________________________________________________________
void KVElementDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVElementDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVElementDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVElementDensity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVElementDensity(void *p) {
      return  p ? new(p) ::KVElementDensity : new ::KVElementDensity;
   }
   static void *newArray_KVElementDensity(Long_t nElements, void *p) {
      return p ? new(p) ::KVElementDensity[nElements] : new ::KVElementDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVElementDensity(void *p) {
      delete ((::KVElementDensity*)p);
   }
   static void deleteArray_KVElementDensity(void *p) {
      delete [] ((::KVElementDensity*)p);
   }
   static void destruct_KVElementDensity(void *p) {
      typedef ::KVElementDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVElementDensity

//______________________________________________________________________________
void KVMassExcess::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMassExcess.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMassExcess::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMassExcess::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMassExcess(void *p) {
      return  p ? new(p) ::KVMassExcess : new ::KVMassExcess;
   }
   static void *newArray_KVMassExcess(Long_t nElements, void *p) {
      return p ? new(p) ::KVMassExcess[nElements] : new ::KVMassExcess[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMassExcess(void *p) {
      delete ((::KVMassExcess*)p);
   }
   static void deleteArray_KVMassExcess(void *p) {
      delete [] ((::KVMassExcess*)p);
   }
   static void destruct_KVMassExcess(void *p) {
      typedef ::KVMassExcess current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMassExcess

//______________________________________________________________________________
void KVLifeTimeTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLifeTimeTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLifeTimeTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLifeTimeTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLifeTimeTable(void *p) {
      return  p ? new(p) ::KVLifeTimeTable : new ::KVLifeTimeTable;
   }
   static void *newArray_KVLifeTimeTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVLifeTimeTable[nElements] : new ::KVLifeTimeTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLifeTimeTable(void *p) {
      delete ((::KVLifeTimeTable*)p);
   }
   static void deleteArray_KVLifeTimeTable(void *p) {
      delete [] ((::KVLifeTimeTable*)p);
   }
   static void destruct_KVLifeTimeTable(void *p) {
      typedef ::KVLifeTimeTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLifeTimeTable

//______________________________________________________________________________
void KVAbundanceTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVAbundanceTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVAbundanceTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVAbundanceTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVAbundanceTable(void *p) {
      return  p ? new(p) ::KVAbundanceTable : new ::KVAbundanceTable;
   }
   static void *newArray_KVAbundanceTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVAbundanceTable[nElements] : new ::KVAbundanceTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVAbundanceTable(void *p) {
      delete ((::KVAbundanceTable*)p);
   }
   static void deleteArray_KVAbundanceTable(void *p) {
      delete [] ((::KVAbundanceTable*)p);
   }
   static void destruct_KVAbundanceTable(void *p) {
      typedef ::KVAbundanceTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVAbundanceTable

//______________________________________________________________________________
void KVMassExcessTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMassExcessTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMassExcessTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMassExcessTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMassExcessTable(void *p) {
      return  p ? new(p) ::KVMassExcessTable : new ::KVMassExcessTable;
   }
   static void *newArray_KVMassExcessTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVMassExcessTable[nElements] : new ::KVMassExcessTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMassExcessTable(void *p) {
      delete ((::KVMassExcessTable*)p);
   }
   static void deleteArray_KVMassExcessTable(void *p) {
      delete [] ((::KVMassExcessTable*)p);
   }
   static void destruct_KVMassExcessTable(void *p) {
      typedef ::KVMassExcessTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMassExcessTable

//______________________________________________________________________________
void KVElementDensityTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVElementDensityTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVElementDensityTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVElementDensityTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVElementDensityTable(void *p) {
      return  p ? new(p) ::KVElementDensityTable : new ::KVElementDensityTable;
   }
   static void *newArray_KVElementDensityTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVElementDensityTable[nElements] : new ::KVElementDensityTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVElementDensityTable(void *p) {
      delete ((::KVElementDensityTable*)p);
   }
   static void deleteArray_KVElementDensityTable(void *p) {
      delete [] ((::KVElementDensityTable*)p);
   }
   static void destruct_KVElementDensityTable(void *p) {
      typedef ::KVElementDensityTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVElementDensityTable

//______________________________________________________________________________
void KVChargeRadiusTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChargeRadiusTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChargeRadiusTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChargeRadiusTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChargeRadiusTable(void *p) {
      return  p ? new(p) ::KVChargeRadiusTable : new ::KVChargeRadiusTable;
   }
   static void *newArray_KVChargeRadiusTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVChargeRadiusTable[nElements] : new ::KVChargeRadiusTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChargeRadiusTable(void *p) {
      delete ((::KVChargeRadiusTable*)p);
   }
   static void deleteArray_KVChargeRadiusTable(void *p) {
      delete [] ((::KVChargeRadiusTable*)p);
   }
   static void destruct_KVChargeRadiusTable(void *p) {
      typedef ::KVChargeRadiusTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChargeRadiusTable

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetparticles_Impl() {
    static const char* headers[] = {
"KVNuclData.h",
"KVChargeRadius.h",
"KVElementDensityTable.h",
"KVMassExcessTable.h",
"KVLifeTimeTable.h",
"KVAbundance.h",
"KVNDTManager.h",
"KVNucleus.h",
"KVAbundanceTable.h",
"KVElementDensity.h",
"KVNuclDataTable.h",
"KVParticleCondition.h",
"KVLifeTime.h",
"KVParticle.h",
"KVSimNucleus.h",
"KVChargeRadiusTable.h",
"KVMassExcess.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/particles/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Nuclear particle in a simulated event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimNucleus.h")))  KVSimNucleus;
class __attribute__((annotate(R"ATTRDUMP(Class describing atomic nuclei)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNucleus.h")))  KVNucleus;
class __attribute__((annotate(R"ATTRDUMP(General base class for all massive particles)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNucleus.h")))  KVParticle;
class __attribute__((annotate(R"ATTRDUMP(Implements parser of particle selection criteria)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNucleus.h")))  KVParticleCondition;
class __attribute__((annotate(R"ATTRDUMP(Simple abstract class to store value related to nuclear data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNuclData.h")))  KVNuclData;
namespace NDT{class __attribute__((annotate("$clingAutoload$KVElementDensityTable.h")))  value;}
namespace NDT{class __attribute__((annotate("$clingAutoload$KVElementDensityTable.h")))  key;}
class __attribute__((annotate(R"ATTRDUMP(Store information on nuclei)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVElementDensityTable.h")))  KVNuclDataTable;
class __attribute__((annotate(R"ATTRDUMP(Allow to navigate between different tables of nuclear data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNDTManager.h")))  KVNDTManager;
class __attribute__((annotate(R"ATTRDUMP(Simple class for store life time information of nucleus)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLifeTimeTable.h")))  KVLifeTime;
class __attribute__((annotate(R"ATTRDUMP(Value of the relative abundance)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVAbundance.h")))  KVAbundance;
class __attribute__((annotate(R"ATTRDUMP(//Simple class for store charge radius information of nucleus)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChargeRadius.h")))  KVChargeRadius;
class __attribute__((annotate(R"ATTRDUMP(Atomic element with name, symbol and density)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVElementDensity.h")))  KVElementDensity;
class __attribute__((annotate(R"ATTRDUMP(Simple class to store mass information of nucleus)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMassExcessTable.h")))  KVMassExcess;
class __attribute__((annotate(R"ATTRDUMP(Store life time information of nuclei)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLifeTimeTable.h")))  KVLifeTimeTable;
class __attribute__((annotate(R"ATTRDUMP(Store available values of the relative abundance)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVAbundanceTable.h")))  KVAbundanceTable;
class __attribute__((annotate(R"ATTRDUMP(manage mass excess data for nuclei)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMassExcessTable.h")))  KVMassExcessTable;
class __attribute__((annotate(R"ATTRDUMP(Table of atomic elements)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVElementDensityTable.h")))  KVElementDensityTable;
class __attribute__((annotate(R"ATTRDUMP(//Store charge radius information for nuclei)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChargeRadiusTable.h")))  KVChargeRadiusTable;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVNuclData.h"
#include "KVChargeRadius.h"
#include "KVElementDensityTable.h"
#include "KVMassExcessTable.h"
#include "KVLifeTimeTable.h"
#include "KVAbundance.h"
#include "KVNDTManager.h"
#include "KVNucleus.h"
#include "KVAbundanceTable.h"
#include "KVElementDensity.h"
#include "KVNuclDataTable.h"
#include "KVParticleCondition.h"
#include "KVLifeTime.h"
#include "KVParticle.h"
#include "KVSimNucleus.h"
#include "KVChargeRadiusTable.h"
#include "KVMassExcess.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVAbundance", payloadCode, "@",
"KVAbundanceTable", payloadCode, "@",
"KVChargeRadius", payloadCode, "@",
"KVChargeRadiusTable", payloadCode, "@",
"KVElementDensity", payloadCode, "@",
"KVElementDensityTable", payloadCode, "@",
"KVLifeTime", payloadCode, "@",
"KVLifeTimeTable", payloadCode, "@",
"KVMassExcess", payloadCode, "@",
"KVMassExcessTable", payloadCode, "@",
"KVNDTManager", payloadCode, "@",
"KVNuclData", payloadCode, "@",
"KVNuclDataTable", payloadCode, "@",
"KVNucleus", payloadCode, "@",
"KVParticle", payloadCode, "@",
"KVParticleCondition", payloadCode, "@",
"KVSimNucleus", payloadCode, "@",
"NDT::key", payloadCode, "@",
"NDT::value", payloadCode, "@",
"gNDTManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetparticles",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetparticles_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetparticles_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetparticles() {
  TriggerDictionaryInitialization_libKVMultiDetparticles_Impl();
}
