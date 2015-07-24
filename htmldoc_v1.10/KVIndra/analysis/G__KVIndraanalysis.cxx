// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndraanalysis

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
#include "KVINDRARawDataAnalyser.h"
#include "KVINDRAReconIdent.h"
#include "KVReconIdent_e475s.h"
#include "KVINDRAReconDataAnalyser.h"
#include "KVINDRAReconRoot.h"
#include "KVINDRARawDataReconstructor.h"
#include "KVDataPatch_CorrectEtalonModuleIDCode.h"
#include "KVSelector.h"
#include "KVINDRAIdentRoot.h"
#include "KVINDRADstToRootTransfert.h"
#include "KVDataPatch_INDRA_camp5_PHDcorrection.h"
#include "KVINDRAGeneDataAnalyser.h"
#include "KVINDRAGeneDataSelector.h"
#include "KVDataSelector.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_KVINDRARawDataAnalyser(void *p);
   static void deleteArray_KVINDRARawDataAnalyser(void *p);
   static void destruct_KVINDRARawDataAnalyser(void *p);
   static void streamer_KVINDRARawDataAnalyser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARawDataAnalyser*)
   {
      ::KVINDRARawDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARawDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARawDataAnalyser", ::KVINDRARawDataAnalyser::Class_Version(), "KVINDRARawDataAnalyser.h", 12,
                  typeid(::KVINDRARawDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVINDRARawDataAnalyser::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRARawDataAnalyser) );
      instance.SetDelete(&delete_KVINDRARawDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVINDRARawDataAnalyser);
      instance.SetDestructor(&destruct_KVINDRARawDataAnalyser);
      instance.SetStreamerFunc(&streamer_KVINDRARawDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARawDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVINDRARawDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARawDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRARawDataReconstructor(void *p = 0);
   static void *newArray_KVINDRARawDataReconstructor(Long_t size, void *p);
   static void delete_KVINDRARawDataReconstructor(void *p);
   static void deleteArray_KVINDRARawDataReconstructor(void *p);
   static void destruct_KVINDRARawDataReconstructor(void *p);
   static void streamer_KVINDRARawDataReconstructor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARawDataReconstructor*)
   {
      ::KVINDRARawDataReconstructor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARawDataReconstructor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARawDataReconstructor", ::KVINDRARawDataReconstructor::Class_Version(), "KVINDRARawDataReconstructor.h", 19,
                  typeid(::KVINDRARawDataReconstructor), DefineBehavior(ptr, ptr),
                  &::KVINDRARawDataReconstructor::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRARawDataReconstructor) );
      instance.SetNew(&new_KVINDRARawDataReconstructor);
      instance.SetNewArray(&newArray_KVINDRARawDataReconstructor);
      instance.SetDelete(&delete_KVINDRARawDataReconstructor);
      instance.SetDeleteArray(&deleteArray_KVINDRARawDataReconstructor);
      instance.SetDestructor(&destruct_KVINDRARawDataReconstructor);
      instance.SetStreamerFunc(&streamer_KVINDRARawDataReconstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARawDataReconstructor*)
   {
      return GenerateInitInstanceLocal((::KVINDRARawDataReconstructor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARawDataReconstructor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADstToRootTransfert(void *p = 0);
   static void *newArray_KVINDRADstToRootTransfert(Long_t size, void *p);
   static void delete_KVINDRADstToRootTransfert(void *p);
   static void deleteArray_KVINDRADstToRootTransfert(void *p);
   static void destruct_KVINDRADstToRootTransfert(void *p);
   static void streamer_KVINDRADstToRootTransfert(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADstToRootTransfert*)
   {
      ::KVINDRADstToRootTransfert *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADstToRootTransfert >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADstToRootTransfert", ::KVINDRADstToRootTransfert::Class_Version(), "KVINDRADstToRootTransfert.h", 25,
                  typeid(::KVINDRADstToRootTransfert), DefineBehavior(ptr, ptr),
                  &::KVINDRADstToRootTransfert::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADstToRootTransfert) );
      instance.SetNew(&new_KVINDRADstToRootTransfert);
      instance.SetNewArray(&newArray_KVINDRADstToRootTransfert);
      instance.SetDelete(&delete_KVINDRADstToRootTransfert);
      instance.SetDeleteArray(&deleteArray_KVINDRADstToRootTransfert);
      instance.SetDestructor(&destruct_KVINDRADstToRootTransfert);
      instance.SetStreamerFunc(&streamer_KVINDRADstToRootTransfert);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADstToRootTransfert*)
   {
      return GenerateInitInstanceLocal((::KVINDRADstToRootTransfert*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADstToRootTransfert*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAReconDataAnalyser(void *p = 0);
   static void *newArray_KVINDRAReconDataAnalyser(Long_t size, void *p);
   static void delete_KVINDRAReconDataAnalyser(void *p);
   static void deleteArray_KVINDRAReconDataAnalyser(void *p);
   static void destruct_KVINDRAReconDataAnalyser(void *p);
   static void streamer_KVINDRAReconDataAnalyser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAReconDataAnalyser*)
   {
      ::KVINDRAReconDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAReconDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAReconDataAnalyser", ::KVINDRAReconDataAnalyser::Class_Version(), "KVINDRAReconDataAnalyser.h", 18,
                  typeid(::KVINDRAReconDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVINDRAReconDataAnalyser::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRAReconDataAnalyser) );
      instance.SetNew(&new_KVINDRAReconDataAnalyser);
      instance.SetNewArray(&newArray_KVINDRAReconDataAnalyser);
      instance.SetDelete(&delete_KVINDRAReconDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVINDRAReconDataAnalyser);
      instance.SetDestructor(&destruct_KVINDRAReconDataAnalyser);
      instance.SetStreamerFunc(&streamer_KVINDRAReconDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAReconDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVINDRAReconDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAReconDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAGeneDataSelector(void *p = 0);
   static void *newArray_KVINDRAGeneDataSelector(Long_t size, void *p);
   static void delete_KVINDRAGeneDataSelector(void *p);
   static void deleteArray_KVINDRAGeneDataSelector(void *p);
   static void destruct_KVINDRAGeneDataSelector(void *p);
   static void streamer_KVINDRAGeneDataSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAGeneDataSelector*)
   {
      ::KVINDRAGeneDataSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAGeneDataSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAGeneDataSelector", ::KVINDRAGeneDataSelector::Class_Version(), "KVINDRAGeneDataSelector.h", 19,
                  typeid(::KVINDRAGeneDataSelector), DefineBehavior(ptr, ptr),
                  &::KVINDRAGeneDataSelector::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRAGeneDataSelector) );
      instance.SetNew(&new_KVINDRAGeneDataSelector);
      instance.SetNewArray(&newArray_KVINDRAGeneDataSelector);
      instance.SetDelete(&delete_KVINDRAGeneDataSelector);
      instance.SetDeleteArray(&deleteArray_KVINDRAGeneDataSelector);
      instance.SetDestructor(&destruct_KVINDRAGeneDataSelector);
      instance.SetStreamerFunc(&streamer_KVINDRAGeneDataSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAGeneDataSelector*)
   {
      return GenerateInitInstanceLocal((::KVINDRAGeneDataSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAGeneDataSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAGeneDataAnalyser(void *p = 0);
   static void *newArray_KVINDRAGeneDataAnalyser(Long_t size, void *p);
   static void delete_KVINDRAGeneDataAnalyser(void *p);
   static void deleteArray_KVINDRAGeneDataAnalyser(void *p);
   static void destruct_KVINDRAGeneDataAnalyser(void *p);
   static void streamer_KVINDRAGeneDataAnalyser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAGeneDataAnalyser*)
   {
      ::KVINDRAGeneDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAGeneDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAGeneDataAnalyser", ::KVINDRAGeneDataAnalyser::Class_Version(), "KVINDRAGeneDataAnalyser.h", 15,
                  typeid(::KVINDRAGeneDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVINDRAGeneDataAnalyser::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRAGeneDataAnalyser) );
      instance.SetNew(&new_KVINDRAGeneDataAnalyser);
      instance.SetNewArray(&newArray_KVINDRAGeneDataAnalyser);
      instance.SetDelete(&delete_KVINDRAGeneDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVINDRAGeneDataAnalyser);
      instance.SetDestructor(&destruct_KVINDRAGeneDataAnalyser);
      instance.SetStreamerFunc(&streamer_KVINDRAGeneDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAGeneDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVINDRAGeneDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAGeneDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSelector(void *p = 0);
   static void *newArray_KVSelector(Long_t size, void *p);
   static void delete_KVSelector(void *p);
   static void deleteArray_KVSelector(void *p);
   static void destruct_KVSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSelector*)
   {
      ::KVSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSelector", ::KVSelector::Class_Version(), "KVSelector.h", 40,
                  typeid(::KVSelector), DefineBehavior(ptr, ptr),
                  &::KVSelector::Dictionary, isa_proxy, 4,
                  sizeof(::KVSelector) );
      instance.SetNew(&new_KVSelector);
      instance.SetNewArray(&newArray_KVSelector);
      instance.SetDelete(&delete_KVSelector);
      instance.SetDeleteArray(&deleteArray_KVSelector);
      instance.SetDestructor(&destruct_KVSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSelector*)
   {
      return GenerateInitInstanceLocal((::KVSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataSelector(void *p = 0);
   static void *newArray_KVDataSelector(Long_t size, void *p);
   static void delete_KVDataSelector(void *p);
   static void deleteArray_KVDataSelector(void *p);
   static void destruct_KVDataSelector(void *p);
   static void streamer_KVDataSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataSelector*)
   {
      ::KVDataSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataSelector", ::KVDataSelector::Class_Version(), "KVDataSelector.h", 17,
                  typeid(::KVDataSelector), DefineBehavior(ptr, ptr),
                  &::KVDataSelector::Dictionary, isa_proxy, 16,
                  sizeof(::KVDataSelector) );
      instance.SetNew(&new_KVDataSelector);
      instance.SetNewArray(&newArray_KVDataSelector);
      instance.SetDelete(&delete_KVDataSelector);
      instance.SetDeleteArray(&deleteArray_KVDataSelector);
      instance.SetDestructor(&destruct_KVDataSelector);
      instance.SetStreamerFunc(&streamer_KVDataSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataSelector*)
   {
      return GenerateInitInstanceLocal((::KVDataSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAReconIdent(void *p = 0);
   static void *newArray_KVINDRAReconIdent(Long_t size, void *p);
   static void delete_KVINDRAReconIdent(void *p);
   static void deleteArray_KVINDRAReconIdent(void *p);
   static void destruct_KVINDRAReconIdent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAReconIdent*)
   {
      ::KVINDRAReconIdent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAReconIdent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAReconIdent", ::KVINDRAReconIdent::Class_Version(), "KVINDRAReconIdent.h", 15,
                  typeid(::KVINDRAReconIdent), DefineBehavior(ptr, ptr),
                  &::KVINDRAReconIdent::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAReconIdent) );
      instance.SetNew(&new_KVINDRAReconIdent);
      instance.SetNewArray(&newArray_KVINDRAReconIdent);
      instance.SetDelete(&delete_KVINDRAReconIdent);
      instance.SetDeleteArray(&deleteArray_KVINDRAReconIdent);
      instance.SetDestructor(&destruct_KVINDRAReconIdent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAReconIdent*)
   {
      return GenerateInitInstanceLocal((::KVINDRAReconIdent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAReconIdent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVReconIdent_e475s(void *p = 0);
   static void *newArray_KVReconIdent_e475s(Long_t size, void *p);
   static void delete_KVReconIdent_e475s(void *p);
   static void deleteArray_KVReconIdent_e475s(void *p);
   static void destruct_KVReconIdent_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVReconIdent_e475s*)
   {
      ::KVReconIdent_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVReconIdent_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVReconIdent_e475s", ::KVReconIdent_e475s::Class_Version(), "KVReconIdent_e475s.h", 15,
                  typeid(::KVReconIdent_e475s), DefineBehavior(ptr, ptr),
                  &::KVReconIdent_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVReconIdent_e475s) );
      instance.SetNew(&new_KVReconIdent_e475s);
      instance.SetNewArray(&newArray_KVReconIdent_e475s);
      instance.SetDelete(&delete_KVReconIdent_e475s);
      instance.SetDeleteArray(&deleteArray_KVReconIdent_e475s);
      instance.SetDestructor(&destruct_KVReconIdent_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVReconIdent_e475s*)
   {
      return GenerateInitInstanceLocal((::KVReconIdent_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVReconIdent_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAIdentRoot(void *p = 0);
   static void *newArray_KVINDRAIdentRoot(Long_t size, void *p);
   static void delete_KVINDRAIdentRoot(void *p);
   static void deleteArray_KVINDRAIdentRoot(void *p);
   static void destruct_KVINDRAIdentRoot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAIdentRoot*)
   {
      ::KVINDRAIdentRoot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAIdentRoot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAIdentRoot", ::KVINDRAIdentRoot::Class_Version(), "KVINDRAIdentRoot.h", 16,
                  typeid(::KVINDRAIdentRoot), DefineBehavior(ptr, ptr),
                  &::KVINDRAIdentRoot::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAIdentRoot) );
      instance.SetNew(&new_KVINDRAIdentRoot);
      instance.SetNewArray(&newArray_KVINDRAIdentRoot);
      instance.SetDelete(&delete_KVINDRAIdentRoot);
      instance.SetDeleteArray(&deleteArray_KVINDRAIdentRoot);
      instance.SetDestructor(&destruct_KVINDRAIdentRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAIdentRoot*)
   {
      return GenerateInitInstanceLocal((::KVINDRAIdentRoot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAIdentRoot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAReconRoot(void *p = 0);
   static void *newArray_KVINDRAReconRoot(Long_t size, void *p);
   static void delete_KVINDRAReconRoot(void *p);
   static void deleteArray_KVINDRAReconRoot(void *p);
   static void destruct_KVINDRAReconRoot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAReconRoot*)
   {
      ::KVINDRAReconRoot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAReconRoot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAReconRoot", ::KVINDRAReconRoot::Class_Version(), "KVINDRAReconRoot.h", 9,
                  typeid(::KVINDRAReconRoot), DefineBehavior(ptr, ptr),
                  &::KVINDRAReconRoot::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAReconRoot) );
      instance.SetNew(&new_KVINDRAReconRoot);
      instance.SetNewArray(&newArray_KVINDRAReconRoot);
      instance.SetDelete(&delete_KVINDRAReconRoot);
      instance.SetDeleteArray(&deleteArray_KVINDRAReconRoot);
      instance.SetDestructor(&destruct_KVINDRAReconRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAReconRoot*)
   {
      return GenerateInitInstanceLocal((::KVINDRAReconRoot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAReconRoot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataPatch_INDRA_camp5_PHDcorrection(void *p = 0);
   static void *newArray_KVDataPatch_INDRA_camp5_PHDcorrection(Long_t size, void *p);
   static void delete_KVDataPatch_INDRA_camp5_PHDcorrection(void *p);
   static void deleteArray_KVDataPatch_INDRA_camp5_PHDcorrection(void *p);
   static void destruct_KVDataPatch_INDRA_camp5_PHDcorrection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataPatch_INDRA_camp5_PHDcorrection*)
   {
      ::KVDataPatch_INDRA_camp5_PHDcorrection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataPatch_INDRA_camp5_PHDcorrection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataPatch_INDRA_camp5_PHDcorrection", ::KVDataPatch_INDRA_camp5_PHDcorrection::Class_Version(), "KVDataPatch_INDRA_camp5_PHDcorrection.h", 9,
                  typeid(::KVDataPatch_INDRA_camp5_PHDcorrection), DefineBehavior(ptr, ptr),
                  &::KVDataPatch_INDRA_camp5_PHDcorrection::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataPatch_INDRA_camp5_PHDcorrection) );
      instance.SetNew(&new_KVDataPatch_INDRA_camp5_PHDcorrection);
      instance.SetNewArray(&newArray_KVDataPatch_INDRA_camp5_PHDcorrection);
      instance.SetDelete(&delete_KVDataPatch_INDRA_camp5_PHDcorrection);
      instance.SetDeleteArray(&deleteArray_KVDataPatch_INDRA_camp5_PHDcorrection);
      instance.SetDestructor(&destruct_KVDataPatch_INDRA_camp5_PHDcorrection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataPatch_INDRA_camp5_PHDcorrection*)
   {
      return GenerateInitInstanceLocal((::KVDataPatch_INDRA_camp5_PHDcorrection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataPatch_INDRA_camp5_PHDcorrection*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataPatch_CorrectEtalonModuleIDCode(void *p = 0);
   static void *newArray_KVDataPatch_CorrectEtalonModuleIDCode(Long_t size, void *p);
   static void delete_KVDataPatch_CorrectEtalonModuleIDCode(void *p);
   static void deleteArray_KVDataPatch_CorrectEtalonModuleIDCode(void *p);
   static void destruct_KVDataPatch_CorrectEtalonModuleIDCode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataPatch_CorrectEtalonModuleIDCode*)
   {
      ::KVDataPatch_CorrectEtalonModuleIDCode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataPatch_CorrectEtalonModuleIDCode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataPatch_CorrectEtalonModuleIDCode", ::KVDataPatch_CorrectEtalonModuleIDCode::Class_Version(), "KVDataPatch_CorrectEtalonModuleIDCode.h", 9,
                  typeid(::KVDataPatch_CorrectEtalonModuleIDCode), DefineBehavior(ptr, ptr),
                  &::KVDataPatch_CorrectEtalonModuleIDCode::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataPatch_CorrectEtalonModuleIDCode) );
      instance.SetNew(&new_KVDataPatch_CorrectEtalonModuleIDCode);
      instance.SetNewArray(&newArray_KVDataPatch_CorrectEtalonModuleIDCode);
      instance.SetDelete(&delete_KVDataPatch_CorrectEtalonModuleIDCode);
      instance.SetDeleteArray(&deleteArray_KVDataPatch_CorrectEtalonModuleIDCode);
      instance.SetDestructor(&destruct_KVDataPatch_CorrectEtalonModuleIDCode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataPatch_CorrectEtalonModuleIDCode*)
   {
      return GenerateInitInstanceLocal((::KVDataPatch_CorrectEtalonModuleIDCode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataPatch_CorrectEtalonModuleIDCode*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARawDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARawDataAnalyser::Class_Name()
{
   return "KVINDRARawDataAnalyser";
}

//______________________________________________________________________________
const char *KVINDRARawDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARawDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARawDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARawDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARawDataReconstructor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARawDataReconstructor::Class_Name()
{
   return "KVINDRARawDataReconstructor";
}

//______________________________________________________________________________
const char *KVINDRARawDataReconstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataReconstructor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARawDataReconstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataReconstructor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARawDataReconstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataReconstructor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARawDataReconstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARawDataReconstructor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADstToRootTransfert::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADstToRootTransfert::Class_Name()
{
   return "KVINDRADstToRootTransfert";
}

//______________________________________________________________________________
const char *KVINDRADstToRootTransfert::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADstToRootTransfert*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADstToRootTransfert::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADstToRootTransfert*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADstToRootTransfert::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADstToRootTransfert*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADstToRootTransfert::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADstToRootTransfert*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAReconDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAReconDataAnalyser::Class_Name()
{
   return "KVINDRAReconDataAnalyser";
}

//______________________________________________________________________________
const char *KVINDRAReconDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAReconDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAReconDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAReconDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAGeneDataSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAGeneDataSelector::Class_Name()
{
   return "KVINDRAGeneDataSelector";
}

//______________________________________________________________________________
const char *KVINDRAGeneDataSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAGeneDataSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAGeneDataSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAGeneDataSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAGeneDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAGeneDataAnalyser::Class_Name()
{
   return "KVINDRAGeneDataAnalyser";
}

//______________________________________________________________________________
const char *KVINDRAGeneDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAGeneDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAGeneDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAGeneDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAGeneDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSelector::Class_Name()
{
   return "KVSelector";
}

//______________________________________________________________________________
const char *KVSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataSelector::Class_Name()
{
   return "KVDataSelector";
}

//______________________________________________________________________________
const char *KVDataSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAReconIdent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAReconIdent::Class_Name()
{
   return "KVINDRAReconIdent";
}

//______________________________________________________________________________
const char *KVINDRAReconIdent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconIdent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAReconIdent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconIdent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAReconIdent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconIdent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAReconIdent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconIdent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVReconIdent_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVReconIdent_e475s::Class_Name()
{
   return "KVReconIdent_e475s";
}

//______________________________________________________________________________
const char *KVReconIdent_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconIdent_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVReconIdent_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVReconIdent_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVReconIdent_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconIdent_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVReconIdent_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVReconIdent_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAIdentRoot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAIdentRoot::Class_Name()
{
   return "KVINDRAIdentRoot";
}

//______________________________________________________________________________
const char *KVINDRAIdentRoot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIdentRoot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAIdentRoot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIdentRoot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAIdentRoot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIdentRoot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAIdentRoot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIdentRoot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAReconRoot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAReconRoot::Class_Name()
{
   return "KVINDRAReconRoot";
}

//______________________________________________________________________________
const char *KVINDRAReconRoot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconRoot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAReconRoot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconRoot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAReconRoot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconRoot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAReconRoot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconRoot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataPatch_INDRA_camp5_PHDcorrection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataPatch_INDRA_camp5_PHDcorrection::Class_Name()
{
   return "KVDataPatch_INDRA_camp5_PHDcorrection";
}

//______________________________________________________________________________
const char *KVDataPatch_INDRA_camp5_PHDcorrection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_INDRA_camp5_PHDcorrection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataPatch_INDRA_camp5_PHDcorrection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_INDRA_camp5_PHDcorrection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataPatch_INDRA_camp5_PHDcorrection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_INDRA_camp5_PHDcorrection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataPatch_INDRA_camp5_PHDcorrection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_INDRA_camp5_PHDcorrection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataPatch_CorrectEtalonModuleIDCode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataPatch_CorrectEtalonModuleIDCode::Class_Name()
{
   return "KVDataPatch_CorrectEtalonModuleIDCode";
}

//______________________________________________________________________________
const char *KVDataPatch_CorrectEtalonModuleIDCode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_CorrectEtalonModuleIDCode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataPatch_CorrectEtalonModuleIDCode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_CorrectEtalonModuleIDCode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataPatch_CorrectEtalonModuleIDCode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_CorrectEtalonModuleIDCode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataPatch_CorrectEtalonModuleIDCode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch_CorrectEtalonModuleIDCode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRARawDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARawDataAnalyser.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVRawDataAnalyser::Streamer(R__b);
      R__b >> INDRA_events;
      R__b >> gene_events;
      R__b >> other_events;
      R__b.CheckByteCount(R__s, R__c, KVINDRARawDataAnalyser::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRARawDataAnalyser::IsA(), kTRUE);
      KVRawDataAnalyser::Streamer(R__b);
      R__b << INDRA_events;
      R__b << gene_events;
      R__b << other_events;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVINDRARawDataAnalyser(void *p) {
      delete ((::KVINDRARawDataAnalyser*)p);
   }
   static void deleteArray_KVINDRARawDataAnalyser(void *p) {
      delete [] ((::KVINDRARawDataAnalyser*)p);
   }
   static void destruct_KVINDRARawDataAnalyser(void *p) {
      typedef ::KVINDRARawDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRARawDataAnalyser(TBuffer &buf, void *obj) {
      ((::KVINDRARawDataAnalyser*)obj)->::KVINDRARawDataAnalyser::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRARawDataAnalyser

//______________________________________________________________________________
void KVINDRARawDataReconstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARawDataReconstructor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRARawDataAnalyser::Streamer(R__b);
      R__b >> file;
      R__b >> tree;
      R__b >> genetree;
      R__b >> rawtree;
      R__b >> recev;
      R__b >> nb_recon;
      taskname.Streamer(R__b);
      datatype.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRARawDataReconstructor::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRARawDataReconstructor::IsA(), kTRUE);
      KVINDRARawDataAnalyser::Streamer(R__b);
      R__b << file;
      R__b << tree;
      R__b << genetree;
      R__b << rawtree;
      R__b << recev;
      R__b << nb_recon;
      taskname.Streamer(R__b);
      datatype.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRARawDataReconstructor(void *p) {
      return  p ? new(p) ::KVINDRARawDataReconstructor : new ::KVINDRARawDataReconstructor;
   }
   static void *newArray_KVINDRARawDataReconstructor(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRARawDataReconstructor[nElements] : new ::KVINDRARawDataReconstructor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRARawDataReconstructor(void *p) {
      delete ((::KVINDRARawDataReconstructor*)p);
   }
   static void deleteArray_KVINDRARawDataReconstructor(void *p) {
      delete [] ((::KVINDRARawDataReconstructor*)p);
   }
   static void destruct_KVINDRARawDataReconstructor(void *p) {
      typedef ::KVINDRARawDataReconstructor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRARawDataReconstructor(TBuffer &buf, void *obj) {
      ((::KVINDRARawDataReconstructor*)obj)->::KVINDRARawDataReconstructor::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRARawDataReconstructor

//______________________________________________________________________________
void KVINDRADstToRootTransfert::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADstToRootTransfert.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDataAnalyser::Streamer(R__b);
      R__b >> mt;
      R__b >> de1;
      R__b >> de2;
      R__b >> de3;
      R__b >> de4;
      R__b >> de5;
      R__b.ReadStaticArray((double*)canal);
      R__b.ReadStaticArray((int*)code_idf);
      R__b >> identifying_telescope;
      R__b >> camp1;
      R__b >> camp2;
      R__b >> camp4;
      R__b >> events_in_file;
      R__b >> events_good;
      R__b >> events_read;
      R__b >> data_tree;
      R__b >> rawtree;
      R__b >> fRunNumber;
      R__b >> fCampNumber;
      req_time.Streamer(R__b);
      req_mem.Streamer(R__b);
      req_scratch.Streamer(R__b);
      cur_time.Streamer(R__b);
      cur_mem.Streamer(R__b);
      cur_scratch.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADstToRootTransfert::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADstToRootTransfert::IsA(), kTRUE);
      KVDataAnalyser::Streamer(R__b);
      R__b << mt;
      R__b << de1;
      R__b << de2;
      R__b << de3;
      R__b << de4;
      R__b << de5;
      R__b.WriteArray(canal, 16);
      R__b.WriteArray(code_idf, 4);
      R__b << identifying_telescope;
      R__b << camp1;
      R__b << camp2;
      R__b << camp4;
      R__b << events_in_file;
      R__b << events_good;
      R__b << events_read;
      R__b << data_tree;
      R__b << rawtree;
      R__b << fRunNumber;
      R__b << fCampNumber;
      req_time.Streamer(R__b);
      req_mem.Streamer(R__b);
      req_scratch.Streamer(R__b);
      cur_time.Streamer(R__b);
      cur_mem.Streamer(R__b);
      cur_scratch.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADstToRootTransfert(void *p) {
      return  p ? new(p) ::KVINDRADstToRootTransfert : new ::KVINDRADstToRootTransfert;
   }
   static void *newArray_KVINDRADstToRootTransfert(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADstToRootTransfert[nElements] : new ::KVINDRADstToRootTransfert[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADstToRootTransfert(void *p) {
      delete ((::KVINDRADstToRootTransfert*)p);
   }
   static void deleteArray_KVINDRADstToRootTransfert(void *p) {
      delete [] ((::KVINDRADstToRootTransfert*)p);
   }
   static void destruct_KVINDRADstToRootTransfert(void *p) {
      typedef ::KVINDRADstToRootTransfert current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADstToRootTransfert(TBuffer &buf, void *obj) {
      ((::KVINDRADstToRootTransfert*)obj)->::KVINDRADstToRootTransfert::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADstToRootTransfert

//______________________________________________________________________________
void KVINDRAReconDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAReconDataAnalyser.

   KVDataAnalyser::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAReconDataAnalyser(void *p) {
      return  p ? new(p) ::KVINDRAReconDataAnalyser : new ::KVINDRAReconDataAnalyser;
   }
   static void *newArray_KVINDRAReconDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAReconDataAnalyser[nElements] : new ::KVINDRAReconDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAReconDataAnalyser(void *p) {
      delete ((::KVINDRAReconDataAnalyser*)p);
   }
   static void deleteArray_KVINDRAReconDataAnalyser(void *p) {
      delete [] ((::KVINDRAReconDataAnalyser*)p);
   }
   static void destruct_KVINDRAReconDataAnalyser(void *p) {
      typedef ::KVINDRAReconDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRAReconDataAnalyser(TBuffer &buf, void *obj) {
      ((::KVINDRAReconDataAnalyser*)obj)->::KVINDRAReconDataAnalyser::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRAReconDataAnalyser

//______________________________________________________________________________
void KVINDRAGeneDataSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAGeneDataSelector.

   TSelector::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAGeneDataSelector(void *p) {
      return  p ? new(p) ::KVINDRAGeneDataSelector : new ::KVINDRAGeneDataSelector;
   }
   static void *newArray_KVINDRAGeneDataSelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAGeneDataSelector[nElements] : new ::KVINDRAGeneDataSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAGeneDataSelector(void *p) {
      delete ((::KVINDRAGeneDataSelector*)p);
   }
   static void deleteArray_KVINDRAGeneDataSelector(void *p) {
      delete [] ((::KVINDRAGeneDataSelector*)p);
   }
   static void destruct_KVINDRAGeneDataSelector(void *p) {
      typedef ::KVINDRAGeneDataSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRAGeneDataSelector(TBuffer &buf, void *obj) {
      ((::KVINDRAGeneDataSelector*)obj)->::KVINDRAGeneDataSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRAGeneDataSelector

//______________________________________________________________________________
void KVINDRAGeneDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAGeneDataAnalyser.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDataAnalyser::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRAGeneDataAnalyser::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRAGeneDataAnalyser::IsA(), kTRUE);
      KVDataAnalyser::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAGeneDataAnalyser(void *p) {
      return  p ? new(p) ::KVINDRAGeneDataAnalyser : new ::KVINDRAGeneDataAnalyser;
   }
   static void *newArray_KVINDRAGeneDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAGeneDataAnalyser[nElements] : new ::KVINDRAGeneDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAGeneDataAnalyser(void *p) {
      delete ((::KVINDRAGeneDataAnalyser*)p);
   }
   static void deleteArray_KVINDRAGeneDataAnalyser(void *p) {
      delete [] ((::KVINDRAGeneDataAnalyser*)p);
   }
   static void destruct_KVINDRAGeneDataAnalyser(void *p) {
      typedef ::KVINDRAGeneDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRAGeneDataAnalyser(TBuffer &buf, void *obj) {
      ((::KVINDRAGeneDataAnalyser*)obj)->::KVINDRAGeneDataAnalyser::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRAGeneDataAnalyser

//______________________________________________________________________________
void KVSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSelector(void *p) {
      return  p ? new(p) ::KVSelector : new ::KVSelector;
   }
   static void *newArray_KVSelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVSelector[nElements] : new ::KVSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSelector(void *p) {
      delete ((::KVSelector*)p);
   }
   static void deleteArray_KVSelector(void *p) {
      delete [] ((::KVSelector*)p);
   }
   static void destruct_KVSelector(void *p) {
      typedef ::KVSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSelector

//______________________________________________________________________________
void KVDataSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> kvsel;
      R__b >> evtl;
      R__b.CheckByteCount(R__s, R__c, KVDataSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDataSelector::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << kvsel;
      R__b << evtl;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataSelector(void *p) {
      return  p ? new(p) ::KVDataSelector : new ::KVDataSelector;
   }
   static void *newArray_KVDataSelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataSelector[nElements] : new ::KVDataSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataSelector(void *p) {
      delete ((::KVDataSelector*)p);
   }
   static void deleteArray_KVDataSelector(void *p) {
      delete [] ((::KVDataSelector*)p);
   }
   static void destruct_KVDataSelector(void *p) {
      typedef ::KVDataSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDataSelector(TBuffer &buf, void *obj) {
      ((::KVDataSelector*)obj)->::KVDataSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDataSelector

//______________________________________________________________________________
void KVINDRAReconIdent::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAReconIdent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAReconIdent::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAReconIdent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAReconIdent(void *p) {
      return  p ? new(p) ::KVINDRAReconIdent : new ::KVINDRAReconIdent;
   }
   static void *newArray_KVINDRAReconIdent(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAReconIdent[nElements] : new ::KVINDRAReconIdent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAReconIdent(void *p) {
      delete ((::KVINDRAReconIdent*)p);
   }
   static void deleteArray_KVINDRAReconIdent(void *p) {
      delete [] ((::KVINDRAReconIdent*)p);
   }
   static void destruct_KVINDRAReconIdent(void *p) {
      typedef ::KVINDRAReconIdent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAReconIdent

//______________________________________________________________________________
void KVReconIdent_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVReconIdent_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVReconIdent_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVReconIdent_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVReconIdent_e475s(void *p) {
      return  p ? new(p) ::KVReconIdent_e475s : new ::KVReconIdent_e475s;
   }
   static void *newArray_KVReconIdent_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVReconIdent_e475s[nElements] : new ::KVReconIdent_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVReconIdent_e475s(void *p) {
      delete ((::KVReconIdent_e475s*)p);
   }
   static void deleteArray_KVReconIdent_e475s(void *p) {
      delete [] ((::KVReconIdent_e475s*)p);
   }
   static void destruct_KVReconIdent_e475s(void *p) {
      typedef ::KVReconIdent_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVReconIdent_e475s

//______________________________________________________________________________
void KVINDRAIdentRoot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAIdentRoot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAIdentRoot::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAIdentRoot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAIdentRoot(void *p) {
      return  p ? new(p) ::KVINDRAIdentRoot : new ::KVINDRAIdentRoot;
   }
   static void *newArray_KVINDRAIdentRoot(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAIdentRoot[nElements] : new ::KVINDRAIdentRoot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAIdentRoot(void *p) {
      delete ((::KVINDRAIdentRoot*)p);
   }
   static void deleteArray_KVINDRAIdentRoot(void *p) {
      delete [] ((::KVINDRAIdentRoot*)p);
   }
   static void destruct_KVINDRAIdentRoot(void *p) {
      typedef ::KVINDRAIdentRoot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAIdentRoot

//______________________________________________________________________________
void KVINDRAReconRoot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAReconRoot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAReconRoot::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAReconRoot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAReconRoot(void *p) {
      return  p ? new(p) ::KVINDRAReconRoot : new ::KVINDRAReconRoot;
   }
   static void *newArray_KVINDRAReconRoot(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAReconRoot[nElements] : new ::KVINDRAReconRoot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAReconRoot(void *p) {
      delete ((::KVINDRAReconRoot*)p);
   }
   static void deleteArray_KVINDRAReconRoot(void *p) {
      delete [] ((::KVINDRAReconRoot*)p);
   }
   static void destruct_KVINDRAReconRoot(void *p) {
      typedef ::KVINDRAReconRoot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAReconRoot

//______________________________________________________________________________
void KVDataPatch_INDRA_camp5_PHDcorrection::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataPatch_INDRA_camp5_PHDcorrection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataPatch_INDRA_camp5_PHDcorrection::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataPatch_INDRA_camp5_PHDcorrection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataPatch_INDRA_camp5_PHDcorrection(void *p) {
      return  p ? new(p) ::KVDataPatch_INDRA_camp5_PHDcorrection : new ::KVDataPatch_INDRA_camp5_PHDcorrection;
   }
   static void *newArray_KVDataPatch_INDRA_camp5_PHDcorrection(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataPatch_INDRA_camp5_PHDcorrection[nElements] : new ::KVDataPatch_INDRA_camp5_PHDcorrection[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataPatch_INDRA_camp5_PHDcorrection(void *p) {
      delete ((::KVDataPatch_INDRA_camp5_PHDcorrection*)p);
   }
   static void deleteArray_KVDataPatch_INDRA_camp5_PHDcorrection(void *p) {
      delete [] ((::KVDataPatch_INDRA_camp5_PHDcorrection*)p);
   }
   static void destruct_KVDataPatch_INDRA_camp5_PHDcorrection(void *p) {
      typedef ::KVDataPatch_INDRA_camp5_PHDcorrection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataPatch_INDRA_camp5_PHDcorrection

//______________________________________________________________________________
void KVDataPatch_CorrectEtalonModuleIDCode::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataPatch_CorrectEtalonModuleIDCode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataPatch_CorrectEtalonModuleIDCode::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataPatch_CorrectEtalonModuleIDCode::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataPatch_CorrectEtalonModuleIDCode(void *p) {
      return  p ? new(p) ::KVDataPatch_CorrectEtalonModuleIDCode : new ::KVDataPatch_CorrectEtalonModuleIDCode;
   }
   static void *newArray_KVDataPatch_CorrectEtalonModuleIDCode(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataPatch_CorrectEtalonModuleIDCode[nElements] : new ::KVDataPatch_CorrectEtalonModuleIDCode[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataPatch_CorrectEtalonModuleIDCode(void *p) {
      delete ((::KVDataPatch_CorrectEtalonModuleIDCode*)p);
   }
   static void deleteArray_KVDataPatch_CorrectEtalonModuleIDCode(void *p) {
      delete [] ((::KVDataPatch_CorrectEtalonModuleIDCode*)p);
   }
   static void destruct_KVDataPatch_CorrectEtalonModuleIDCode(void *p) {
      typedef ::KVDataPatch_CorrectEtalonModuleIDCode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataPatch_CorrectEtalonModuleIDCode

namespace {
  void TriggerDictionaryInitialization_libKVIndraanalysis_Impl() {
    static const char* headers[] = {
"KVINDRARawDataAnalyser.h",
"KVINDRAReconIdent.h",
"KVReconIdent_e475s.h",
"KVINDRAReconDataAnalyser.h",
"KVINDRAReconRoot.h",
"KVINDRARawDataReconstructor.h",
"KVDataPatch_CorrectEtalonModuleIDCode.h",
"KVSelector.h",
"KVINDRAIdentRoot.h",
"KVINDRADstToRootTransfert.h",
"KVDataPatch_INDRA_camp5_PHDcorrection.h",
"KVINDRAGeneDataAnalyser.h",
"KVINDRAGeneDataSelector.h",
"KVDataSelector.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/analysis/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/analysis",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/analysis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Analysis of raw INDRA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARawDataAnalyser.h")))  KVINDRARawDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Reconstruction of events from raw data acquisition files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARawDataReconstructor.h")))  KVINDRARawDataReconstructor;
class __attribute__((annotate(R"ATTRDUMP(Conversion of INDRA DST to KaliVeda ROOT format)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADstToRootTransfert.h")))  KVINDRADstToRootTransfert;
class __attribute__((annotate(R"ATTRDUMP(For analysing reconstructed INDRA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconDataAnalyser.h")))  KVINDRAReconDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Base class for analysis of INDRA pulser & laser data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAGeneDataSelector.h")))  KVINDRAGeneDataSelector;
class __attribute__((annotate(R"ATTRDUMP(For analysing INDRA gene data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAGeneDataAnalyser.h")))  KVINDRAGeneDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Analysis class for TChains of KVINDRAReconEvents)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Analysis class for TChains of KVINDRAReconEvents)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconIdent.h")))  KVSelector;
class __attribute__((annotate(R"ATTRDUMP(Class handling event lists for KVSelector analysis of data chains)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconIdent.h")))  KVDataSelector;
class __attribute__((annotate(R"ATTRDUMP(Analysis class used to identify previously reconstructed INDRA events)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconIdent.h")))  KVINDRAReconIdent;
class __attribute__((annotate(R"ATTRDUMP(Identification of E475S events)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVReconIdent_e475s.h")))  KVReconIdent_e475s;
class __attribute__((annotate(R"ATTRDUMP(Generation of fully-identified and calibrated INDRA data files)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generation of fully-identified and calibrated INDRA data files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAIdentRoot.h")))  KVINDRAIdentRoot;
class __attribute__((annotate(R"ATTRDUMP(Generation of fully-identified and calibrated INDRA data files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconRoot.h")))  KVINDRAReconRoot;
class __attribute__((annotate(R"ATTRDUMP(Patch for correcting Silicon PHD on rings 1-9 [INDRA_camp5 before 1.8.10])ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataPatch_INDRA_camp5_PHDcorrection.h")))  KVDataPatch_INDRA_camp5_PHDcorrection;
class __attribute__((annotate(R"ATTRDUMP(Patch for correcting bad id-code & calibration for particles stopping in CsI member of etalon modules [data written with v1.8.11])ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataPatch_CorrectEtalonModuleIDCode.h")))  KVDataPatch_CorrectEtalonModuleIDCode;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVINDRARawDataAnalyser.h"
#include "KVINDRAReconIdent.h"
#include "KVReconIdent_e475s.h"
#include "KVINDRAReconDataAnalyser.h"
#include "KVINDRAReconRoot.h"
#include "KVINDRARawDataReconstructor.h"
#include "KVDataPatch_CorrectEtalonModuleIDCode.h"
#include "KVSelector.h"
#include "KVINDRAIdentRoot.h"
#include "KVINDRADstToRootTransfert.h"
#include "KVDataPatch_INDRA_camp5_PHDcorrection.h"
#include "KVINDRAGeneDataAnalyser.h"
#include "KVINDRAGeneDataSelector.h"
#include "KVDataSelector.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDataPatch_CorrectEtalonModuleIDCode", payloadCode, "@",
"KVDataPatch_INDRA_camp5_PHDcorrection", payloadCode, "@",
"KVDataSelector", payloadCode, "@",
"KVINDRADstToRootTransfert", payloadCode, "@",
"KVINDRAGeneDataAnalyser", payloadCode, "@",
"KVINDRAGeneDataSelector", payloadCode, "@",
"KVINDRAIdentRoot", payloadCode, "@",
"KVINDRARawDataAnalyser", payloadCode, "@",
"KVINDRARawDataReconstructor", payloadCode, "@",
"KVINDRAReconDataAnalyser", payloadCode, "@",
"KVINDRAReconIdent", payloadCode, "@",
"KVINDRAReconRoot", payloadCode, "@",
"KVReconIdent_e475s", payloadCode, "@",
"KVSelector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndraanalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndraanalysis_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndraanalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndraanalysis() {
  TriggerDictionaryInitialization_libKVIndraanalysis_Impl();
}
