// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetanalysis

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
#include "KVGaus1D.h"
#include "KVLinuxBatch.h"
#include "KV_CCIN2P3_BQS.h"
#include "KVSimReader_SMF_asym.h"
#include "KVEventSelector.h"
#include "KVSimReader_HIPSE_asym.h"
#include "KVDataAnalyser.h"
#include "KVSimReader_HIPSE.h"
#include "KVSimReader_ELIE.h"
#include "KVBatchSystem.h"
#include "KVDataTransfer.h"
#include "KVAutoFit.h"
#include "KVDataTransferSFTP.h"
#include "KVSimReader_MMM.h"
#include "KVBatchJob.h"
#include "KVDataTransferBBFTP.h"
#include "KVSimReader_SMF.h"
#include "KVDataPatch.h"
#include "KV_CCIN2P3_GE.h"
#include "KVGaxis.h"
#include "KVSimReader_MMM_asym.h"
#include "KVGraph.h"
#include "KVDataTransferXRD.h"
#include "KVBatchSystemManager.h"
#include "KVRootBatch.h"
#include "KVSimReader.h"
#include "KVGaus2D.h"
#include "KVGumGumDistribution.h"
#include "KVGEBatchJob.h"
#include "KVDataPatchList.h"
#include "KVGausGumDistribution.h"
#include "KVGumbelDistribution.h"
#include "KVImpactParameter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_KVBatchSystem(void *p);
   static void deleteArray_KVBatchSystem(void *p);
   static void destruct_KVBatchSystem(void *p);
   static void streamer_KVBatchSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBatchSystem*)
   {
      ::KVBatchSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBatchSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBatchSystem", ::KVBatchSystem::Class_Version(), "KVBatchSystem.h", 22,
                  typeid(::KVBatchSystem), DefineBehavior(ptr, ptr),
                  &::KVBatchSystem::Dictionary, isa_proxy, 16,
                  sizeof(::KVBatchSystem) );
      instance.SetDelete(&delete_KVBatchSystem);
      instance.SetDeleteArray(&deleteArray_KVBatchSystem);
      instance.SetDestructor(&destruct_KVBatchSystem);
      instance.SetStreamerFunc(&streamer_KVBatchSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBatchSystem*)
   {
      return GenerateInitInstanceLocal((::KVBatchSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBatchSystem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBatchSystemManager(void *p = 0);
   static void *newArray_KVBatchSystemManager(Long_t size, void *p);
   static void delete_KVBatchSystemManager(void *p);
   static void deleteArray_KVBatchSystemManager(void *p);
   static void destruct_KVBatchSystemManager(void *p);
   static void streamer_KVBatchSystemManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBatchSystemManager*)
   {
      ::KVBatchSystemManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBatchSystemManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBatchSystemManager", ::KVBatchSystemManager::Class_Version(), "KVBatchSystemManager.h", 17,
                  typeid(::KVBatchSystemManager), DefineBehavior(ptr, ptr),
                  &::KVBatchSystemManager::Dictionary, isa_proxy, 16,
                  sizeof(::KVBatchSystemManager) );
      instance.SetNew(&new_KVBatchSystemManager);
      instance.SetNewArray(&newArray_KVBatchSystemManager);
      instance.SetDelete(&delete_KVBatchSystemManager);
      instance.SetDeleteArray(&deleteArray_KVBatchSystemManager);
      instance.SetDestructor(&destruct_KVBatchSystemManager);
      instance.SetStreamerFunc(&streamer_KVBatchSystemManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBatchSystemManager*)
   {
      return GenerateInitInstanceLocal((::KVBatchSystemManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBatchSystemManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBatchJob(void *p = 0);
   static void *newArray_KVBatchJob(Long_t size, void *p);
   static void delete_KVBatchJob(void *p);
   static void deleteArray_KVBatchJob(void *p);
   static void destruct_KVBatchJob(void *p);
   static void streamer_KVBatchJob(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBatchJob*)
   {
      ::KVBatchJob *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBatchJob >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBatchJob", ::KVBatchJob::Class_Version(), "KVBatchJob.h", 10,
                  typeid(::KVBatchJob), DefineBehavior(ptr, ptr),
                  &::KVBatchJob::Dictionary, isa_proxy, 16,
                  sizeof(::KVBatchJob) );
      instance.SetNew(&new_KVBatchJob);
      instance.SetNewArray(&newArray_KVBatchJob);
      instance.SetDelete(&delete_KVBatchJob);
      instance.SetDeleteArray(&deleteArray_KVBatchJob);
      instance.SetDestructor(&destruct_KVBatchJob);
      instance.SetStreamerFunc(&streamer_KVBatchJob);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBatchJob*)
   {
      return GenerateInitInstanceLocal((::KVBatchJob*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBatchJob*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGEBatchJob(void *p = 0);
   static void *newArray_KVGEBatchJob(Long_t size, void *p);
   static void delete_KVGEBatchJob(void *p);
   static void deleteArray_KVGEBatchJob(void *p);
   static void destruct_KVGEBatchJob(void *p);
   static void streamer_KVGEBatchJob(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGEBatchJob*)
   {
      ::KVGEBatchJob *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGEBatchJob >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGEBatchJob", ::KVGEBatchJob::Class_Version(), "KVGEBatchJob.h", 9,
                  typeid(::KVGEBatchJob), DefineBehavior(ptr, ptr),
                  &::KVGEBatchJob::Dictionary, isa_proxy, 16,
                  sizeof(::KVGEBatchJob) );
      instance.SetNew(&new_KVGEBatchJob);
      instance.SetNewArray(&newArray_KVGEBatchJob);
      instance.SetDelete(&delete_KVGEBatchJob);
      instance.SetDeleteArray(&deleteArray_KVGEBatchJob);
      instance.SetDestructor(&destruct_KVGEBatchJob);
      instance.SetStreamerFunc(&streamer_KVGEBatchJob);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGEBatchJob*)
   {
      return GenerateInitInstanceLocal((::KVGEBatchJob*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGEBatchJob*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KV_CCIN2P3_BQS(void *p);
   static void deleteArray_KV_CCIN2P3_BQS(void *p);
   static void destruct_KV_CCIN2P3_BQS(void *p);
   static void streamer_KV_CCIN2P3_BQS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KV_CCIN2P3_BQS*)
   {
      ::KV_CCIN2P3_BQS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KV_CCIN2P3_BQS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KV_CCIN2P3_BQS", ::KV_CCIN2P3_BQS::Class_Version(), "KV_CCIN2P3_BQS.h", 15,
                  typeid(::KV_CCIN2P3_BQS), DefineBehavior(ptr, ptr),
                  &::KV_CCIN2P3_BQS::Dictionary, isa_proxy, 16,
                  sizeof(::KV_CCIN2P3_BQS) );
      instance.SetDelete(&delete_KV_CCIN2P3_BQS);
      instance.SetDeleteArray(&deleteArray_KV_CCIN2P3_BQS);
      instance.SetDestructor(&destruct_KV_CCIN2P3_BQS);
      instance.SetStreamerFunc(&streamer_KV_CCIN2P3_BQS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KV_CCIN2P3_BQS*)
   {
      return GenerateInitInstanceLocal((::KV_CCIN2P3_BQS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KV_CCIN2P3_BQS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KV_CCIN2P3_GE(void *p);
   static void deleteArray_KV_CCIN2P3_GE(void *p);
   static void destruct_KV_CCIN2P3_GE(void *p);
   static void streamer_KV_CCIN2P3_GE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KV_CCIN2P3_GE*)
   {
      ::KV_CCIN2P3_GE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KV_CCIN2P3_GE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KV_CCIN2P3_GE", ::KV_CCIN2P3_GE::Class_Version(), "KV_CCIN2P3_GE.h", 9,
                  typeid(::KV_CCIN2P3_GE), DefineBehavior(ptr, ptr),
                  &::KV_CCIN2P3_GE::Dictionary, isa_proxy, 16,
                  sizeof(::KV_CCIN2P3_GE) );
      instance.SetDelete(&delete_KV_CCIN2P3_GE);
      instance.SetDeleteArray(&deleteArray_KV_CCIN2P3_GE);
      instance.SetDestructor(&destruct_KV_CCIN2P3_GE);
      instance.SetStreamerFunc(&streamer_KV_CCIN2P3_GE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KV_CCIN2P3_GE*)
   {
      return GenerateInitInstanceLocal((::KV_CCIN2P3_GE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KV_CCIN2P3_GE*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVRootBatch(void *p);
   static void deleteArray_KVRootBatch(void *p);
   static void destruct_KVRootBatch(void *p);
   static void streamer_KVRootBatch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRootBatch*)
   {
      ::KVRootBatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRootBatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRootBatch", ::KVRootBatch::Class_Version(), "KVRootBatch.h", 15,
                  typeid(::KVRootBatch), DefineBehavior(ptr, ptr),
                  &::KVRootBatch::Dictionary, isa_proxy, 16,
                  sizeof(::KVRootBatch) );
      instance.SetDelete(&delete_KVRootBatch);
      instance.SetDeleteArray(&deleteArray_KVRootBatch);
      instance.SetDestructor(&destruct_KVRootBatch);
      instance.SetStreamerFunc(&streamer_KVRootBatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRootBatch*)
   {
      return GenerateInitInstanceLocal((::KVRootBatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRootBatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVLinuxBatch(void *p);
   static void deleteArray_KVLinuxBatch(void *p);
   static void destruct_KVLinuxBatch(void *p);
   static void streamer_KVLinuxBatch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLinuxBatch*)
   {
      ::KVLinuxBatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLinuxBatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLinuxBatch", ::KVLinuxBatch::Class_Version(), "KVLinuxBatch.h", 15,
                  typeid(::KVLinuxBatch), DefineBehavior(ptr, ptr),
                  &::KVLinuxBatch::Dictionary, isa_proxy, 16,
                  sizeof(::KVLinuxBatch) );
      instance.SetDelete(&delete_KVLinuxBatch);
      instance.SetDeleteArray(&deleteArray_KVLinuxBatch);
      instance.SetDestructor(&destruct_KVLinuxBatch);
      instance.SetStreamerFunc(&streamer_KVLinuxBatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLinuxBatch*)
   {
      return GenerateInitInstanceLocal((::KVLinuxBatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLinuxBatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataAnalyser(void *p = 0);
   static void *newArray_KVDataAnalyser(Long_t size, void *p);
   static void delete_KVDataAnalyser(void *p);
   static void deleteArray_KVDataAnalyser(void *p);
   static void destruct_KVDataAnalyser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataAnalyser*)
   {
      ::KVDataAnalyser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataAnalyser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataAnalyser", ::KVDataAnalyser::Class_Version(), "KVDataAnalyser.h", 23,
                  typeid(::KVDataAnalyser), DefineBehavior(ptr, ptr),
                  &::KVDataAnalyser::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataAnalyser) );
      instance.SetNew(&new_KVDataAnalyser);
      instance.SetNewArray(&newArray_KVDataAnalyser);
      instance.SetDelete(&delete_KVDataAnalyser);
      instance.SetDeleteArray(&deleteArray_KVDataAnalyser);
      instance.SetDestructor(&destruct_KVDataAnalyser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataAnalyser*)
   {
      return GenerateInitInstanceLocal((::KVDataAnalyser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataAnalyser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataPatch(void *p);
   static void deleteArray_KVDataPatch(void *p);
   static void destruct_KVDataPatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataPatch*)
   {
      ::KVDataPatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataPatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataPatch", ::KVDataPatch::Class_Version(), "KVDataPatch.h", 10,
                  typeid(::KVDataPatch), DefineBehavior(ptr, ptr),
                  &::KVDataPatch::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataPatch) );
      instance.SetDelete(&delete_KVDataPatch);
      instance.SetDeleteArray(&deleteArray_KVDataPatch);
      instance.SetDestructor(&destruct_KVDataPatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataPatch*)
   {
      return GenerateInitInstanceLocal((::KVDataPatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataPatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataPatchList(void *p = 0);
   static void *newArray_KVDataPatchList(Long_t size, void *p);
   static void delete_KVDataPatchList(void *p);
   static void deleteArray_KVDataPatchList(void *p);
   static void destruct_KVDataPatchList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataPatchList*)
   {
      ::KVDataPatchList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataPatchList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataPatchList", ::KVDataPatchList::Class_Version(), "KVDataPatchList.h", 11,
                  typeid(::KVDataPatchList), DefineBehavior(ptr, ptr),
                  &::KVDataPatchList::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataPatchList) );
      instance.SetNew(&new_KVDataPatchList);
      instance.SetNewArray(&newArray_KVDataPatchList);
      instance.SetDelete(&delete_KVDataPatchList);
      instance.SetDeleteArray(&deleteArray_KVDataPatchList);
      instance.SetDestructor(&destruct_KVDataPatchList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataPatchList*)
   {
      return GenerateInitInstanceLocal((::KVDataPatchList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataPatchList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEventSelector(void *p = 0);
   static void *newArray_KVEventSelector(Long_t size, void *p);
   static void delete_KVEventSelector(void *p);
   static void deleteArray_KVEventSelector(void *p);
   static void destruct_KVEventSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEventSelector*)
   {
      ::KVEventSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEventSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEventSelector", ::KVEventSelector::Class_Version(), "KVEventSelector.h", 27,
                  typeid(::KVEventSelector), DefineBehavior(ptr, ptr),
                  &::KVEventSelector::Dictionary, isa_proxy, 4,
                  sizeof(::KVEventSelector) );
      instance.SetNew(&new_KVEventSelector);
      instance.SetNewArray(&newArray_KVEventSelector);
      instance.SetDelete(&delete_KVEventSelector);
      instance.SetDeleteArray(&deleteArray_KVEventSelector);
      instance.SetDestructor(&destruct_KVEventSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEventSelector*)
   {
      return GenerateInitInstanceLocal((::KVEventSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEventSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader(void *p = 0);
   static void *newArray_KVSimReader(Long_t size, void *p);
   static void delete_KVSimReader(void *p);
   static void deleteArray_KVSimReader(void *p);
   static void destruct_KVSimReader(void *p);
   static void streamer_KVSimReader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader*)
   {
      ::KVSimReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader", ::KVSimReader::Class_Version(), "KVSimReader.h", 25,
                  typeid(::KVSimReader), DefineBehavior(ptr, ptr),
                  &::KVSimReader::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader) );
      instance.SetNew(&new_KVSimReader);
      instance.SetNewArray(&newArray_KVSimReader);
      instance.SetDelete(&delete_KVSimReader);
      instance.SetDeleteArray(&deleteArray_KVSimReader);
      instance.SetDestructor(&destruct_KVSimReader);
      instance.SetStreamerFunc(&streamer_KVSimReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader*)
   {
      return GenerateInitInstanceLocal((::KVSimReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_HIPSE(void *p = 0);
   static void *newArray_KVSimReader_HIPSE(Long_t size, void *p);
   static void delete_KVSimReader_HIPSE(void *p);
   static void deleteArray_KVSimReader_HIPSE(void *p);
   static void destruct_KVSimReader_HIPSE(void *p);
   static void streamer_KVSimReader_HIPSE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_HIPSE*)
   {
      ::KVSimReader_HIPSE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_HIPSE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_HIPSE", ::KVSimReader_HIPSE::Class_Version(), "KVSimReader_HIPSE.h", 10,
                  typeid(::KVSimReader_HIPSE), DefineBehavior(ptr, ptr),
                  &::KVSimReader_HIPSE::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_HIPSE) );
      instance.SetNew(&new_KVSimReader_HIPSE);
      instance.SetNewArray(&newArray_KVSimReader_HIPSE);
      instance.SetDelete(&delete_KVSimReader_HIPSE);
      instance.SetDeleteArray(&deleteArray_KVSimReader_HIPSE);
      instance.SetDestructor(&destruct_KVSimReader_HIPSE);
      instance.SetStreamerFunc(&streamer_KVSimReader_HIPSE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_HIPSE*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_HIPSE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_HIPSE*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_HIPSE_asym(void *p = 0);
   static void *newArray_KVSimReader_HIPSE_asym(Long_t size, void *p);
   static void delete_KVSimReader_HIPSE_asym(void *p);
   static void deleteArray_KVSimReader_HIPSE_asym(void *p);
   static void destruct_KVSimReader_HIPSE_asym(void *p);
   static void streamer_KVSimReader_HIPSE_asym(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_HIPSE_asym*)
   {
      ::KVSimReader_HIPSE_asym *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_HIPSE_asym >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_HIPSE_asym", ::KVSimReader_HIPSE_asym::Class_Version(), "KVSimReader_HIPSE_asym.h", 13,
                  typeid(::KVSimReader_HIPSE_asym), DefineBehavior(ptr, ptr),
                  &::KVSimReader_HIPSE_asym::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_HIPSE_asym) );
      instance.SetNew(&new_KVSimReader_HIPSE_asym);
      instance.SetNewArray(&newArray_KVSimReader_HIPSE_asym);
      instance.SetDelete(&delete_KVSimReader_HIPSE_asym);
      instance.SetDeleteArray(&deleteArray_KVSimReader_HIPSE_asym);
      instance.SetDestructor(&destruct_KVSimReader_HIPSE_asym);
      instance.SetStreamerFunc(&streamer_KVSimReader_HIPSE_asym);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_HIPSE_asym*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_HIPSE_asym*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_HIPSE_asym*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_SMF(void *p = 0);
   static void *newArray_KVSimReader_SMF(Long_t size, void *p);
   static void delete_KVSimReader_SMF(void *p);
   static void deleteArray_KVSimReader_SMF(void *p);
   static void destruct_KVSimReader_SMF(void *p);
   static void streamer_KVSimReader_SMF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_SMF*)
   {
      ::KVSimReader_SMF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_SMF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_SMF", ::KVSimReader_SMF::Class_Version(), "KVSimReader_SMF.h", 9,
                  typeid(::KVSimReader_SMF), DefineBehavior(ptr, ptr),
                  &::KVSimReader_SMF::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_SMF) );
      instance.SetNew(&new_KVSimReader_SMF);
      instance.SetNewArray(&newArray_KVSimReader_SMF);
      instance.SetDelete(&delete_KVSimReader_SMF);
      instance.SetDeleteArray(&deleteArray_KVSimReader_SMF);
      instance.SetDestructor(&destruct_KVSimReader_SMF);
      instance.SetStreamerFunc(&streamer_KVSimReader_SMF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_SMF*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_SMF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_SMF*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_SMF_asym(void *p = 0);
   static void *newArray_KVSimReader_SMF_asym(Long_t size, void *p);
   static void delete_KVSimReader_SMF_asym(void *p);
   static void deleteArray_KVSimReader_SMF_asym(void *p);
   static void destruct_KVSimReader_SMF_asym(void *p);
   static void streamer_KVSimReader_SMF_asym(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_SMF_asym*)
   {
      ::KVSimReader_SMF_asym *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_SMF_asym >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_SMF_asym", ::KVSimReader_SMF_asym::Class_Version(), "KVSimReader_SMF_asym.h", 9,
                  typeid(::KVSimReader_SMF_asym), DefineBehavior(ptr, ptr),
                  &::KVSimReader_SMF_asym::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_SMF_asym) );
      instance.SetNew(&new_KVSimReader_SMF_asym);
      instance.SetNewArray(&newArray_KVSimReader_SMF_asym);
      instance.SetDelete(&delete_KVSimReader_SMF_asym);
      instance.SetDeleteArray(&deleteArray_KVSimReader_SMF_asym);
      instance.SetDestructor(&destruct_KVSimReader_SMF_asym);
      instance.SetStreamerFunc(&streamer_KVSimReader_SMF_asym);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_SMF_asym*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_SMF_asym*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_SMF_asym*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_MMM(void *p = 0);
   static void *newArray_KVSimReader_MMM(Long_t size, void *p);
   static void delete_KVSimReader_MMM(void *p);
   static void deleteArray_KVSimReader_MMM(void *p);
   static void destruct_KVSimReader_MMM(void *p);
   static void streamer_KVSimReader_MMM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_MMM*)
   {
      ::KVSimReader_MMM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_MMM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_MMM", ::KVSimReader_MMM::Class_Version(), "KVSimReader_MMM.h", 9,
                  typeid(::KVSimReader_MMM), DefineBehavior(ptr, ptr),
                  &::KVSimReader_MMM::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_MMM) );
      instance.SetNew(&new_KVSimReader_MMM);
      instance.SetNewArray(&newArray_KVSimReader_MMM);
      instance.SetDelete(&delete_KVSimReader_MMM);
      instance.SetDeleteArray(&deleteArray_KVSimReader_MMM);
      instance.SetDestructor(&destruct_KVSimReader_MMM);
      instance.SetStreamerFunc(&streamer_KVSimReader_MMM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_MMM*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_MMM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_MMM*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_MMM_asym(void *p = 0);
   static void *newArray_KVSimReader_MMM_asym(Long_t size, void *p);
   static void delete_KVSimReader_MMM_asym(void *p);
   static void deleteArray_KVSimReader_MMM_asym(void *p);
   static void destruct_KVSimReader_MMM_asym(void *p);
   static void streamer_KVSimReader_MMM_asym(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_MMM_asym*)
   {
      ::KVSimReader_MMM_asym *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_MMM_asym >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_MMM_asym", ::KVSimReader_MMM_asym::Class_Version(), "KVSimReader_MMM_asym.h", 9,
                  typeid(::KVSimReader_MMM_asym), DefineBehavior(ptr, ptr),
                  &::KVSimReader_MMM_asym::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_MMM_asym) );
      instance.SetNew(&new_KVSimReader_MMM_asym);
      instance.SetNewArray(&newArray_KVSimReader_MMM_asym);
      instance.SetDelete(&delete_KVSimReader_MMM_asym);
      instance.SetDeleteArray(&deleteArray_KVSimReader_MMM_asym);
      instance.SetDestructor(&destruct_KVSimReader_MMM_asym);
      instance.SetStreamerFunc(&streamer_KVSimReader_MMM_asym);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_MMM_asym*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_MMM_asym*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_MMM_asym*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimReader_ELIE(void *p = 0);
   static void *newArray_KVSimReader_ELIE(Long_t size, void *p);
   static void delete_KVSimReader_ELIE(void *p);
   static void deleteArray_KVSimReader_ELIE(void *p);
   static void destruct_KVSimReader_ELIE(void *p);
   static void streamer_KVSimReader_ELIE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimReader_ELIE*)
   {
      ::KVSimReader_ELIE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimReader_ELIE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimReader_ELIE", ::KVSimReader_ELIE::Class_Version(), "KVSimReader_ELIE.h", 9,
                  typeid(::KVSimReader_ELIE), DefineBehavior(ptr, ptr),
                  &::KVSimReader_ELIE::Dictionary, isa_proxy, 16,
                  sizeof(::KVSimReader_ELIE) );
      instance.SetNew(&new_KVSimReader_ELIE);
      instance.SetNewArray(&newArray_KVSimReader_ELIE);
      instance.SetDelete(&delete_KVSimReader_ELIE);
      instance.SetDeleteArray(&deleteArray_KVSimReader_ELIE);
      instance.SetDestructor(&destruct_KVSimReader_ELIE);
      instance.SetStreamerFunc(&streamer_KVSimReader_ELIE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimReader_ELIE*)
   {
      return GenerateInitInstanceLocal((::KVSimReader_ELIE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimReader_ELIE*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVAutoFit(void *p = 0);
   static void *newArray_KVAutoFit(Long_t size, void *p);
   static void delete_KVAutoFit(void *p);
   static void deleteArray_KVAutoFit(void *p);
   static void destruct_KVAutoFit(void *p);
   static void streamer_KVAutoFit(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVAutoFit*)
   {
      ::KVAutoFit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVAutoFit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVAutoFit", ::KVAutoFit::Class_Version(), "KVAutoFit.h", 20,
                  typeid(::KVAutoFit), DefineBehavior(ptr, ptr),
                  &::KVAutoFit::Dictionary, isa_proxy, 16,
                  sizeof(::KVAutoFit) );
      instance.SetNew(&new_KVAutoFit);
      instance.SetNewArray(&newArray_KVAutoFit);
      instance.SetDelete(&delete_KVAutoFit);
      instance.SetDeleteArray(&deleteArray_KVAutoFit);
      instance.SetDestructor(&destruct_KVAutoFit);
      instance.SetStreamerFunc(&streamer_KVAutoFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVAutoFit*)
   {
      return GenerateInitInstanceLocal((::KVAutoFit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVAutoFit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGaus1D(void *p = 0);
   static void *newArray_KVGaus1D(Long_t size, void *p);
   static void delete_KVGaus1D(void *p);
   static void deleteArray_KVGaus1D(void *p);
   static void destruct_KVGaus1D(void *p);
   static void streamer_KVGaus1D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGaus1D*)
   {
      ::KVGaus1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGaus1D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGaus1D", ::KVGaus1D::Class_Version(), "KVGaus1D.h", 9,
                  typeid(::KVGaus1D), DefineBehavior(ptr, ptr),
                  &::KVGaus1D::Dictionary, isa_proxy, 16,
                  sizeof(::KVGaus1D) );
      instance.SetNew(&new_KVGaus1D);
      instance.SetNewArray(&newArray_KVGaus1D);
      instance.SetDelete(&delete_KVGaus1D);
      instance.SetDeleteArray(&deleteArray_KVGaus1D);
      instance.SetDestructor(&destruct_KVGaus1D);
      instance.SetStreamerFunc(&streamer_KVGaus1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGaus1D*)
   {
      return GenerateInitInstanceLocal((::KVGaus1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGaus1D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGaus2D(void *p = 0);
   static void *newArray_KVGaus2D(Long_t size, void *p);
   static void delete_KVGaus2D(void *p);
   static void deleteArray_KVGaus2D(void *p);
   static void destruct_KVGaus2D(void *p);
   static void streamer_KVGaus2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGaus2D*)
   {
      ::KVGaus2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGaus2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGaus2D", ::KVGaus2D::Class_Version(), "KVGaus2D.h", 10,
                  typeid(::KVGaus2D), DefineBehavior(ptr, ptr),
                  &::KVGaus2D::Dictionary, isa_proxy, 16,
                  sizeof(::KVGaus2D) );
      instance.SetNew(&new_KVGaus2D);
      instance.SetNewArray(&newArray_KVGaus2D);
      instance.SetDelete(&delete_KVGaus2D);
      instance.SetDeleteArray(&deleteArray_KVGaus2D);
      instance.SetDestructor(&destruct_KVGaus2D);
      instance.SetStreamerFunc(&streamer_KVGaus2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGaus2D*)
   {
      return GenerateInitInstanceLocal((::KVGaus2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGaus2D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGumbelDistribution(void *p = 0);
   static void *newArray_KVGumbelDistribution(Long_t size, void *p);
   static void delete_KVGumbelDistribution(void *p);
   static void deleteArray_KVGumbelDistribution(void *p);
   static void destruct_KVGumbelDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGumbelDistribution*)
   {
      ::KVGumbelDistribution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGumbelDistribution >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGumbelDistribution", ::KVGumbelDistribution::Class_Version(), "KVGumbelDistribution.h", 9,
                  typeid(::KVGumbelDistribution), DefineBehavior(ptr, ptr),
                  &::KVGumbelDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::KVGumbelDistribution) );
      instance.SetNew(&new_KVGumbelDistribution);
      instance.SetNewArray(&newArray_KVGumbelDistribution);
      instance.SetDelete(&delete_KVGumbelDistribution);
      instance.SetDeleteArray(&deleteArray_KVGumbelDistribution);
      instance.SetDestructor(&destruct_KVGumbelDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGumbelDistribution*)
   {
      return GenerateInitInstanceLocal((::KVGumbelDistribution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGumbelDistribution*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGausGumDistribution(void *p = 0);
   static void *newArray_KVGausGumDistribution(Long_t size, void *p);
   static void delete_KVGausGumDistribution(void *p);
   static void deleteArray_KVGausGumDistribution(void *p);
   static void destruct_KVGausGumDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGausGumDistribution*)
   {
      ::KVGausGumDistribution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGausGumDistribution >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGausGumDistribution", ::KVGausGumDistribution::Class_Version(), "KVGausGumDistribution.h", 10,
                  typeid(::KVGausGumDistribution), DefineBehavior(ptr, ptr),
                  &::KVGausGumDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::KVGausGumDistribution) );
      instance.SetNew(&new_KVGausGumDistribution);
      instance.SetNewArray(&newArray_KVGausGumDistribution);
      instance.SetDelete(&delete_KVGausGumDistribution);
      instance.SetDeleteArray(&deleteArray_KVGausGumDistribution);
      instance.SetDestructor(&destruct_KVGausGumDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGausGumDistribution*)
   {
      return GenerateInitInstanceLocal((::KVGausGumDistribution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGausGumDistribution*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGumGumDistribution(void *p = 0);
   static void *newArray_KVGumGumDistribution(Long_t size, void *p);
   static void delete_KVGumGumDistribution(void *p);
   static void deleteArray_KVGumGumDistribution(void *p);
   static void destruct_KVGumGumDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGumGumDistribution*)
   {
      ::KVGumGumDistribution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGumGumDistribution >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGumGumDistribution", ::KVGumGumDistribution::Class_Version(), "KVGumGumDistribution.h", 10,
                  typeid(::KVGumGumDistribution), DefineBehavior(ptr, ptr),
                  &::KVGumGumDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::KVGumGumDistribution) );
      instance.SetNew(&new_KVGumGumDistribution);
      instance.SetNewArray(&newArray_KVGumGumDistribution);
      instance.SetDelete(&delete_KVGumGumDistribution);
      instance.SetDeleteArray(&deleteArray_KVGumGumDistribution);
      instance.SetDestructor(&destruct_KVGumGumDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGumGumDistribution*)
   {
      return GenerateInitInstanceLocal((::KVGumGumDistribution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGumGumDistribution*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGraph(void *p = 0);
   static void *newArray_KVGraph(Long_t size, void *p);
   static void delete_KVGraph(void *p);
   static void deleteArray_KVGraph(void *p);
   static void destruct_KVGraph(void *p);
   static Long64_t merge_KVGraph(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGraph*)
   {
      ::KVGraph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGraph >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGraph", ::KVGraph::Class_Version(), "KVGraph.h", 9,
                  typeid(::KVGraph), DefineBehavior(ptr, ptr),
                  &::KVGraph::Dictionary, isa_proxy, 4,
                  sizeof(::KVGraph) );
      instance.SetNew(&new_KVGraph);
      instance.SetNewArray(&newArray_KVGraph);
      instance.SetDelete(&delete_KVGraph);
      instance.SetDeleteArray(&deleteArray_KVGraph);
      instance.SetDestructor(&destruct_KVGraph);
      instance.SetMerge(&merge_KVGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGraph*)
   {
      return GenerateInitInstanceLocal((::KVGraph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGraph*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGaxis(void *p = 0);
   static void *newArray_KVGaxis(Long_t size, void *p);
   static void delete_KVGaxis(void *p);
   static void deleteArray_KVGaxis(void *p);
   static void destruct_KVGaxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGaxis*)
   {
      ::KVGaxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGaxis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGaxis", ::KVGaxis::Class_Version(), "KVGaxis.h", 11,
                  typeid(::KVGaxis), DefineBehavior(ptr, ptr),
                  &::KVGaxis::Dictionary, isa_proxy, 4,
                  sizeof(::KVGaxis) );
      instance.SetNew(&new_KVGaxis);
      instance.SetNewArray(&newArray_KVGaxis);
      instance.SetDelete(&delete_KVGaxis);
      instance.SetDeleteArray(&deleteArray_KVGaxis);
      instance.SetDestructor(&destruct_KVGaxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGaxis*)
   {
      return GenerateInitInstanceLocal((::KVGaxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGaxis*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataTransfer(void *p);
   static void deleteArray_KVDataTransfer(void *p);
   static void destruct_KVDataTransfer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataTransfer*)
   {
      ::KVDataTransfer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataTransfer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataTransfer", ::KVDataTransfer::Class_Version(), "KVDataTransfer.h", 18,
                  typeid(::KVDataTransfer), DefineBehavior(ptr, ptr),
                  &::KVDataTransfer::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataTransfer) );
      instance.SetDelete(&delete_KVDataTransfer);
      instance.SetDeleteArray(&deleteArray_KVDataTransfer);
      instance.SetDestructor(&destruct_KVDataTransfer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataTransfer*)
   {
      return GenerateInitInstanceLocal((::KVDataTransfer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataTransfer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataTransferSFTP(void *p);
   static void deleteArray_KVDataTransferSFTP(void *p);
   static void destruct_KVDataTransferSFTP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataTransferSFTP*)
   {
      ::KVDataTransferSFTP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataTransferSFTP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataTransferSFTP", ::KVDataTransferSFTP::Class_Version(), "KVDataTransferSFTP.h", 15,
                  typeid(::KVDataTransferSFTP), DefineBehavior(ptr, ptr),
                  &::KVDataTransferSFTP::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataTransferSFTP) );
      instance.SetDelete(&delete_KVDataTransferSFTP);
      instance.SetDeleteArray(&deleteArray_KVDataTransferSFTP);
      instance.SetDestructor(&destruct_KVDataTransferSFTP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataTransferSFTP*)
   {
      return GenerateInitInstanceLocal((::KVDataTransferSFTP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataTransferSFTP*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataTransferBBFTP(void *p = 0);
   static void *newArray_KVDataTransferBBFTP(Long_t size, void *p);
   static void delete_KVDataTransferBBFTP(void *p);
   static void deleteArray_KVDataTransferBBFTP(void *p);
   static void destruct_KVDataTransferBBFTP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataTransferBBFTP*)
   {
      ::KVDataTransferBBFTP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataTransferBBFTP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataTransferBBFTP", ::KVDataTransferBBFTP::Class_Version(), "KVDataTransferBBFTP.h", 15,
                  typeid(::KVDataTransferBBFTP), DefineBehavior(ptr, ptr),
                  &::KVDataTransferBBFTP::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataTransferBBFTP) );
      instance.SetNew(&new_KVDataTransferBBFTP);
      instance.SetNewArray(&newArray_KVDataTransferBBFTP);
      instance.SetDelete(&delete_KVDataTransferBBFTP);
      instance.SetDeleteArray(&deleteArray_KVDataTransferBBFTP);
      instance.SetDestructor(&destruct_KVDataTransferBBFTP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataTransferBBFTP*)
   {
      return GenerateInitInstanceLocal((::KVDataTransferBBFTP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataTransferBBFTP*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataTransferXRD(void *p = 0);
   static void *newArray_KVDataTransferXRD(Long_t size, void *p);
   static void delete_KVDataTransferXRD(void *p);
   static void deleteArray_KVDataTransferXRD(void *p);
   static void destruct_KVDataTransferXRD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataTransferXRD*)
   {
      ::KVDataTransferXRD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataTransferXRD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataTransferXRD", ::KVDataTransferXRD::Class_Version(), "KVDataTransferXRD.h", 9,
                  typeid(::KVDataTransferXRD), DefineBehavior(ptr, ptr),
                  &::KVDataTransferXRD::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataTransferXRD) );
      instance.SetNew(&new_KVDataTransferXRD);
      instance.SetNewArray(&newArray_KVDataTransferXRD);
      instance.SetDelete(&delete_KVDataTransferXRD);
      instance.SetDeleteArray(&deleteArray_KVDataTransferXRD);
      instance.SetDestructor(&destruct_KVDataTransferXRD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataTransferXRD*)
   {
      return GenerateInitInstanceLocal((::KVDataTransferXRD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataTransferXRD*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVImpactParameter(void *p);
   static void deleteArray_KVImpactParameter(void *p);
   static void destruct_KVImpactParameter(void *p);
   static void streamer_KVImpactParameter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVImpactParameter*)
   {
      ::KVImpactParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVImpactParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVImpactParameter", ::KVImpactParameter::Class_Version(), "KVImpactParameter.h", 13,
                  typeid(::KVImpactParameter), DefineBehavior(ptr, ptr),
                  &::KVImpactParameter::Dictionary, isa_proxy, 16,
                  sizeof(::KVImpactParameter) );
      instance.SetDelete(&delete_KVImpactParameter);
      instance.SetDeleteArray(&deleteArray_KVImpactParameter);
      instance.SetDestructor(&destruct_KVImpactParameter);
      instance.SetStreamerFunc(&streamer_KVImpactParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVImpactParameter*)
   {
      return GenerateInitInstanceLocal((::KVImpactParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVImpactParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVBatchSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBatchSystem::Class_Name()
{
   return "KVBatchSystem";
}

//______________________________________________________________________________
const char *KVBatchSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBatchSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBatchSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBatchSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBatchSystemManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBatchSystemManager::Class_Name()
{
   return "KVBatchSystemManager";
}

//______________________________________________________________________________
const char *KVBatchSystemManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBatchSystemManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBatchSystemManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBatchSystemManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBatchJob::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBatchJob::Class_Name()
{
   return "KVBatchJob";
}

//______________________________________________________________________________
const char *KVBatchJob::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchJob*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBatchJob::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchJob*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBatchJob::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchJob*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBatchJob::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchJob*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGEBatchJob::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGEBatchJob::Class_Name()
{
   return "KVGEBatchJob";
}

//______________________________________________________________________________
const char *KVGEBatchJob::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGEBatchJob*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGEBatchJob::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGEBatchJob*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGEBatchJob::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGEBatchJob*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGEBatchJob::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGEBatchJob*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KV_CCIN2P3_BQS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KV_CCIN2P3_BQS::Class_Name()
{
   return "KV_CCIN2P3_BQS";
}

//______________________________________________________________________________
const char *KV_CCIN2P3_BQS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_BQS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KV_CCIN2P3_BQS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_BQS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KV_CCIN2P3_BQS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_BQS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KV_CCIN2P3_BQS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_BQS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KV_CCIN2P3_GE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KV_CCIN2P3_GE::Class_Name()
{
   return "KV_CCIN2P3_GE";
}

//______________________________________________________________________________
const char *KV_CCIN2P3_GE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_GE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KV_CCIN2P3_GE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_GE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KV_CCIN2P3_GE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_GE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KV_CCIN2P3_GE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KV_CCIN2P3_GE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRootBatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRootBatch::Class_Name()
{
   return "KVRootBatch";
}

//______________________________________________________________________________
const char *KVRootBatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRootBatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRootBatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRootBatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRootBatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRootBatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRootBatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRootBatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLinuxBatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLinuxBatch::Class_Name()
{
   return "KVLinuxBatch";
}

//______________________________________________________________________________
const char *KVLinuxBatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLinuxBatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLinuxBatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLinuxBatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLinuxBatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLinuxBatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLinuxBatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLinuxBatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataAnalyser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataAnalyser::Class_Name()
{
   return "KVDataAnalyser";
}

//______________________________________________________________________________
const char *KVDataAnalyser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalyser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataAnalyser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalyser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataAnalyser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalyser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataAnalyser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalyser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataPatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataPatch::Class_Name()
{
   return "KVDataPatch";
}

//______________________________________________________________________________
const char *KVDataPatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataPatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataPatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataPatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataPatchList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataPatchList::Class_Name()
{
   return "KVDataPatchList";
}

//______________________________________________________________________________
const char *KVDataPatchList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatchList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataPatchList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatchList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataPatchList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatchList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataPatchList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataPatchList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEventSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEventSelector::Class_Name()
{
   return "KVEventSelector";
}

//______________________________________________________________________________
const char *KVEventSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEventSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEventSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEventSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader::Class_Name()
{
   return "KVSimReader";
}

//______________________________________________________________________________
const char *KVSimReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_HIPSE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_HIPSE::Class_Name()
{
   return "KVSimReader_HIPSE";
}

//______________________________________________________________________________
const char *KVSimReader_HIPSE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_HIPSE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_HIPSE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_HIPSE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_HIPSE_asym::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_HIPSE_asym::Class_Name()
{
   return "KVSimReader_HIPSE_asym";
}

//______________________________________________________________________________
const char *KVSimReader_HIPSE_asym::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE_asym*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_HIPSE_asym::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE_asym*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_HIPSE_asym::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE_asym*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_HIPSE_asym::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_HIPSE_asym*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_SMF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_SMF::Class_Name()
{
   return "KVSimReader_SMF";
}

//______________________________________________________________________________
const char *KVSimReader_SMF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_SMF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_SMF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_SMF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_SMF_asym::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_SMF_asym::Class_Name()
{
   return "KVSimReader_SMF_asym";
}

//______________________________________________________________________________
const char *KVSimReader_SMF_asym::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF_asym*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_SMF_asym::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF_asym*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_SMF_asym::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF_asym*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_SMF_asym::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_SMF_asym*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_MMM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_MMM::Class_Name()
{
   return "KVSimReader_MMM";
}

//______________________________________________________________________________
const char *KVSimReader_MMM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_MMM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_MMM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_MMM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_MMM_asym::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_MMM_asym::Class_Name()
{
   return "KVSimReader_MMM_asym";
}

//______________________________________________________________________________
const char *KVSimReader_MMM_asym::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM_asym*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_MMM_asym::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM_asym*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_MMM_asym::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM_asym*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_MMM_asym::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_MMM_asym*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimReader_ELIE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimReader_ELIE::Class_Name()
{
   return "KVSimReader_ELIE";
}

//______________________________________________________________________________
const char *KVSimReader_ELIE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_ELIE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimReader_ELIE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_ELIE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimReader_ELIE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_ELIE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimReader_ELIE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimReader_ELIE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVAutoFit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVAutoFit::Class_Name()
{
   return "KVAutoFit";
}

//______________________________________________________________________________
const char *KVAutoFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAutoFit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVAutoFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAutoFit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVAutoFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAutoFit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVAutoFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAutoFit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGaus1D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGaus1D::Class_Name()
{
   return "KVGaus1D";
}

//______________________________________________________________________________
const char *KVGaus1D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaus1D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGaus1D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaus1D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGaus1D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaus1D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGaus1D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaus1D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGaus2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGaus2D::Class_Name()
{
   return "KVGaus2D";
}

//______________________________________________________________________________
const char *KVGaus2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaus2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGaus2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaus2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGaus2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaus2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGaus2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaus2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGumbelDistribution::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGumbelDistribution::Class_Name()
{
   return "KVGumbelDistribution";
}

//______________________________________________________________________________
const char *KVGumbelDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGumbelDistribution*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGumbelDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGumbelDistribution*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGumbelDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGumbelDistribution*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGumbelDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGumbelDistribution*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGausGumDistribution::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGausGumDistribution::Class_Name()
{
   return "KVGausGumDistribution";
}

//______________________________________________________________________________
const char *KVGausGumDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGausGumDistribution*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGausGumDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGausGumDistribution*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGausGumDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGausGumDistribution*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGausGumDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGausGumDistribution*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGumGumDistribution::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGumGumDistribution::Class_Name()
{
   return "KVGumGumDistribution";
}

//______________________________________________________________________________
const char *KVGumGumDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGumGumDistribution*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGumGumDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGumGumDistribution*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGumGumDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGumGumDistribution*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGumGumDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGumGumDistribution*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGraph::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGraph::Class_Name()
{
   return "KVGraph";
}

//______________________________________________________________________________
const char *KVGraph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGraph*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGraph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGraph*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGraph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGraph*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGraph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGraph*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGaxis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGaxis::Class_Name()
{
   return "KVGaxis";
}

//______________________________________________________________________________
const char *KVGaxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaxis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGaxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGaxis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGaxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaxis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGaxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGaxis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataTransfer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataTransfer::Class_Name()
{
   return "KVDataTransfer";
}

//______________________________________________________________________________
const char *KVDataTransfer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransfer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataTransfer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransfer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataTransfer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransfer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataTransfer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransfer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataTransferSFTP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataTransferSFTP::Class_Name()
{
   return "KVDataTransferSFTP";
}

//______________________________________________________________________________
const char *KVDataTransferSFTP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferSFTP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataTransferSFTP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferSFTP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataTransferSFTP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferSFTP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataTransferSFTP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferSFTP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataTransferBBFTP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataTransferBBFTP::Class_Name()
{
   return "KVDataTransferBBFTP";
}

//______________________________________________________________________________
const char *KVDataTransferBBFTP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferBBFTP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataTransferBBFTP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferBBFTP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataTransferBBFTP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferBBFTP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataTransferBBFTP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferBBFTP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataTransferXRD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataTransferXRD::Class_Name()
{
   return "KVDataTransferXRD";
}

//______________________________________________________________________________
const char *KVDataTransferXRD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferXRD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataTransferXRD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferXRD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataTransferXRD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferXRD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataTransferXRD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataTransferXRD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVImpactParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVImpactParameter::Class_Name()
{
   return "KVImpactParameter";
}

//______________________________________________________________________________
const char *KVImpactParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVImpactParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVImpactParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVImpactParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVImpactParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVImpactParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVImpactParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVImpactParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVBatchSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBatchSystem.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> fAnalyser;
      fParList.Streamer(R__b);
      fJobName.Streamer(R__b);
      fJobSubCmd.Streamer(R__b);
      fJobScript.Streamer(R__b);
      fDefOpt.Streamer(R__b);
      R__b >> fMultiJobs;
      R__b >> fRunsPerJob;
      fCurrJobName.Streamer(R__b);
      fCurrJobRunList.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVBatchSystem::IsA());
   } else {
      R__c = R__b.WriteVersion(KVBatchSystem::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << fAnalyser;
      fParList.Streamer(R__b);
      fJobName.Streamer(R__b);
      fJobSubCmd.Streamer(R__b);
      fJobScript.Streamer(R__b);
      fDefOpt.Streamer(R__b);
      R__b << fMultiJobs;
      R__b << fRunsPerJob;
      fCurrJobName.Streamer(R__b);
      fCurrJobRunList.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVBatchSystem(void *p) {
      delete ((::KVBatchSystem*)p);
   }
   static void deleteArray_KVBatchSystem(void *p) {
      delete [] ((::KVBatchSystem*)p);
   }
   static void destruct_KVBatchSystem(void *p) {
      typedef ::KVBatchSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBatchSystem(TBuffer &buf, void *obj) {
      ((::KVBatchSystem*)obj)->::KVBatchSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBatchSystem

//______________________________________________________________________________
void KVBatchSystemManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBatchSystemManager.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      fBatchSystems.Streamer(R__b);
      R__b >> fDefault;
      R__b.CheckByteCount(R__s, R__c, KVBatchSystemManager::IsA());
   } else {
      R__c = R__b.WriteVersion(KVBatchSystemManager::IsA(), kTRUE);
      fBatchSystems.Streamer(R__b);
      R__b << fDefault;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBatchSystemManager(void *p) {
      return  p ? new(p) ::KVBatchSystemManager : new ::KVBatchSystemManager;
   }
   static void *newArray_KVBatchSystemManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVBatchSystemManager[nElements] : new ::KVBatchSystemManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBatchSystemManager(void *p) {
      delete ((::KVBatchSystemManager*)p);
   }
   static void deleteArray_KVBatchSystemManager(void *p) {
      delete [] ((::KVBatchSystemManager*)p);
   }
   static void destruct_KVBatchSystemManager(void *p) {
      typedef ::KVBatchSystemManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBatchSystemManager(TBuffer &buf, void *obj) {
      ((::KVBatchSystemManager*)obj)->::KVBatchSystemManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBatchSystemManager

//______________________________________________________________________________
void KVBatchJob::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBatchJob.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      submitted.Streamer(R__b);
      R__b >> cpu_used;
      mem_used.Streamer(R__b);
      R__b >> cpu_max;
      mem_max.Streamer(R__b);
      disk_max.Streamer(R__b);
      disk_used.Streamer(R__b);
      R__b >> events_total;
      R__b >> events_read;
      R__b.CheckByteCount(R__s, R__c, KVBatchJob::IsA());
   } else {
      R__c = R__b.WriteVersion(KVBatchJob::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      submitted.Streamer(R__b);
      R__b << cpu_used;
      mem_used.Streamer(R__b);
      R__b << cpu_max;
      mem_max.Streamer(R__b);
      disk_max.Streamer(R__b);
      disk_used.Streamer(R__b);
      R__b << events_total;
      R__b << events_read;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBatchJob(void *p) {
      return  p ? new(p) ::KVBatchJob : new ::KVBatchJob;
   }
   static void *newArray_KVBatchJob(Long_t nElements, void *p) {
      return p ? new(p) ::KVBatchJob[nElements] : new ::KVBatchJob[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBatchJob(void *p) {
      delete ((::KVBatchJob*)p);
   }
   static void deleteArray_KVBatchJob(void *p) {
      delete [] ((::KVBatchJob*)p);
   }
   static void destruct_KVBatchJob(void *p) {
      typedef ::KVBatchJob current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBatchJob(TBuffer &buf, void *obj) {
      ((::KVBatchJob*)obj)->::KVBatchJob::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBatchJob

//______________________________________________________________________________
void KVGEBatchJob::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGEBatchJob.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBatchJob::Streamer(R__b);
      resources.Streamer(R__b);
      R__b >> cpu_scaling_factor;
      R__b.CheckByteCount(R__s, R__c, KVGEBatchJob::IsA());
   } else {
      R__c = R__b.WriteVersion(KVGEBatchJob::IsA(), kTRUE);
      KVBatchJob::Streamer(R__b);
      resources.Streamer(R__b);
      R__b << cpu_scaling_factor;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGEBatchJob(void *p) {
      return  p ? new(p) ::KVGEBatchJob : new ::KVGEBatchJob;
   }
   static void *newArray_KVGEBatchJob(Long_t nElements, void *p) {
      return p ? new(p) ::KVGEBatchJob[nElements] : new ::KVGEBatchJob[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGEBatchJob(void *p) {
      delete ((::KVGEBatchJob*)p);
   }
   static void deleteArray_KVGEBatchJob(void *p) {
      delete [] ((::KVGEBatchJob*)p);
   }
   static void destruct_KVGEBatchJob(void *p) {
      typedef ::KVGEBatchJob current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGEBatchJob(TBuffer &buf, void *obj) {
      ((::KVGEBatchJob*)obj)->::KVGEBatchJob::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVGEBatchJob

//______________________________________________________________________________
void KV_CCIN2P3_BQS::Streamer(TBuffer &R__b)
{
   // Stream an object of class KV_CCIN2P3_BQS.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBatchSystem::Streamer(R__b);
      R__b >> fDefJobTime;
      fDefJobMem.Streamer(R__b);
      fDefJobDisk.Streamer(R__b);
      R__b >> fTimeSet;
      R__b >> fDiskSet;
      R__b >> fMemSet;
      R__b.CheckByteCount(R__s, R__c, KV_CCIN2P3_BQS::IsA());
   } else {
      R__c = R__b.WriteVersion(KV_CCIN2P3_BQS::IsA(), kTRUE);
      KVBatchSystem::Streamer(R__b);
      R__b << fDefJobTime;
      fDefJobMem.Streamer(R__b);
      fDefJobDisk.Streamer(R__b);
      R__b << fTimeSet;
      R__b << fDiskSet;
      R__b << fMemSet;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KV_CCIN2P3_BQS(void *p) {
      delete ((::KV_CCIN2P3_BQS*)p);
   }
   static void deleteArray_KV_CCIN2P3_BQS(void *p) {
      delete [] ((::KV_CCIN2P3_BQS*)p);
   }
   static void destruct_KV_CCIN2P3_BQS(void *p) {
      typedef ::KV_CCIN2P3_BQS current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KV_CCIN2P3_BQS(TBuffer &buf, void *obj) {
      ((::KV_CCIN2P3_BQS*)obj)->::KV_CCIN2P3_BQS::Streamer(buf);
   }
} // end of namespace ROOT for class ::KV_CCIN2P3_BQS

//______________________________________________________________________________
void KV_CCIN2P3_GE::Streamer(TBuffer &R__b)
{
   // Stream an object of class KV_CCIN2P3_GE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBatchSystem::Streamer(R__b);
      R__b >> fDefJobTime;
      fDefJobMem.Streamer(R__b);
      fDefJobDisk.Streamer(R__b);
      R__b >> fTimeSet;
      R__b >> fDiskSet;
      R__b >> fMemSet;
      R__b.CheckByteCount(R__s, R__c, KV_CCIN2P3_GE::IsA());
   } else {
      R__c = R__b.WriteVersion(KV_CCIN2P3_GE::IsA(), kTRUE);
      KVBatchSystem::Streamer(R__b);
      R__b << fDefJobTime;
      fDefJobMem.Streamer(R__b);
      fDefJobDisk.Streamer(R__b);
      R__b << fTimeSet;
      R__b << fDiskSet;
      R__b << fMemSet;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KV_CCIN2P3_GE(void *p) {
      delete ((::KV_CCIN2P3_GE*)p);
   }
   static void deleteArray_KV_CCIN2P3_GE(void *p) {
      delete [] ((::KV_CCIN2P3_GE*)p);
   }
   static void destruct_KV_CCIN2P3_GE(void *p) {
      typedef ::KV_CCIN2P3_GE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KV_CCIN2P3_GE(TBuffer &buf, void *obj) {
      ((::KV_CCIN2P3_GE*)obj)->::KV_CCIN2P3_GE::Streamer(buf);
   }
} // end of namespace ROOT for class ::KV_CCIN2P3_GE

//______________________________________________________________________________
void KVRootBatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRootBatch.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBatchSystem::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVRootBatch::IsA());
   } else {
      R__c = R__b.WriteVersion(KVRootBatch::IsA(), kTRUE);
      KVBatchSystem::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVRootBatch(void *p) {
      delete ((::KVRootBatch*)p);
   }
   static void deleteArray_KVRootBatch(void *p) {
      delete [] ((::KVRootBatch*)p);
   }
   static void destruct_KVRootBatch(void *p) {
      typedef ::KVRootBatch current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVRootBatch(TBuffer &buf, void *obj) {
      ((::KVRootBatch*)obj)->::KVRootBatch::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVRootBatch

//______________________________________________________________________________
void KVLinuxBatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLinuxBatch.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVRootBatch::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVLinuxBatch::IsA());
   } else {
      R__c = R__b.WriteVersion(KVLinuxBatch::IsA(), kTRUE);
      KVRootBatch::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVLinuxBatch(void *p) {
      delete ((::KVLinuxBatch*)p);
   }
   static void deleteArray_KVLinuxBatch(void *p) {
      delete [] ((::KVLinuxBatch*)p);
   }
   static void destruct_KVLinuxBatch(void *p) {
      typedef ::KVLinuxBatch current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVLinuxBatch(TBuffer &buf, void *obj) {
      ((::KVLinuxBatch*)obj)->::KVLinuxBatch::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVLinuxBatch

//______________________________________________________________________________
void KVDataAnalyser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataAnalyser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataAnalyser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataAnalyser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataAnalyser(void *p) {
      return  p ? new(p) ::KVDataAnalyser : new ::KVDataAnalyser;
   }
   static void *newArray_KVDataAnalyser(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataAnalyser[nElements] : new ::KVDataAnalyser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataAnalyser(void *p) {
      delete ((::KVDataAnalyser*)p);
   }
   static void deleteArray_KVDataAnalyser(void *p) {
      delete [] ((::KVDataAnalyser*)p);
   }
   static void destruct_KVDataAnalyser(void *p) {
      typedef ::KVDataAnalyser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataAnalyser

//______________________________________________________________________________
void KVDataPatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataPatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataPatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataPatch::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataPatch(void *p) {
      delete ((::KVDataPatch*)p);
   }
   static void deleteArray_KVDataPatch(void *p) {
      delete [] ((::KVDataPatch*)p);
   }
   static void destruct_KVDataPatch(void *p) {
      typedef ::KVDataPatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataPatch

//______________________________________________________________________________
void KVDataPatchList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataPatchList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataPatchList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataPatchList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataPatchList(void *p) {
      return  p ? new(p) ::KVDataPatchList : new ::KVDataPatchList;
   }
   static void *newArray_KVDataPatchList(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataPatchList[nElements] : new ::KVDataPatchList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataPatchList(void *p) {
      delete ((::KVDataPatchList*)p);
   }
   static void deleteArray_KVDataPatchList(void *p) {
      delete [] ((::KVDataPatchList*)p);
   }
   static void destruct_KVDataPatchList(void *p) {
      typedef ::KVDataPatchList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataPatchList

//______________________________________________________________________________
void KVEventSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEventSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVEventSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVEventSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEventSelector(void *p) {
      return  p ? new(p) ::KVEventSelector : new ::KVEventSelector;
   }
   static void *newArray_KVEventSelector(Long_t nElements, void *p) {
      return p ? new(p) ::KVEventSelector[nElements] : new ::KVEventSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEventSelector(void *p) {
      delete ((::KVEventSelector*)p);
   }
   static void deleteArray_KVEventSelector(void *p) {
      delete [] ((::KVEventSelector*)p);
   }
   static void destruct_KVEventSelector(void *p) {
      typedef ::KVEventSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVEventSelector

//______________________________________________________________________________
void KVSimReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVFileReader::Streamer(R__b);
      R__b >> nevt;
      tree_name.Streamer(R__b);
      tree_title.Streamer(R__b);
      branch_name.Streamer(R__b);
      root_file_name.Streamer(R__b);
      R__b >> kmode;
      R__b >> linked_info;
      R__b >> linked_objects;
      R__b >> nv;
      R__b.CheckByteCount(R__s, R__c, KVSimReader::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader::IsA(), kTRUE);
      KVFileReader::Streamer(R__b);
      R__b << nevt;
      tree_name.Streamer(R__b);
      tree_title.Streamer(R__b);
      branch_name.Streamer(R__b);
      root_file_name.Streamer(R__b);
      R__b << kmode;
      R__b << linked_info;
      R__b << linked_objects;
      R__b << nv;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader(void *p) {
      return  p ? new(p) ::KVSimReader : new ::KVSimReader;
   }
   static void *newArray_KVSimReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader[nElements] : new ::KVSimReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader(void *p) {
      delete ((::KVSimReader*)p);
   }
   static void deleteArray_KVSimReader(void *p) {
      delete [] ((::KVSimReader*)p);
   }
   static void destruct_KVSimReader(void *p) {
      typedef ::KVSimReader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader(TBuffer &buf, void *obj) {
      ((::KVSimReader*)obj)->::KVSimReader::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader

//______________________________________________________________________________
void KVSimReader_HIPSE::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_HIPSE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      R__b >> h1;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_HIPSE::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_HIPSE::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      R__b << (TObject*)h1;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_HIPSE(void *p) {
      return  p ? new(p) ::KVSimReader_HIPSE : new ::KVSimReader_HIPSE;
   }
   static void *newArray_KVSimReader_HIPSE(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_HIPSE[nElements] : new ::KVSimReader_HIPSE[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_HIPSE(void *p) {
      delete ((::KVSimReader_HIPSE*)p);
   }
   static void deleteArray_KVSimReader_HIPSE(void *p) {
      delete [] ((::KVSimReader_HIPSE*)p);
   }
   static void destruct_KVSimReader_HIPSE(void *p) {
      typedef ::KVSimReader_HIPSE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_HIPSE(TBuffer &buf, void *obj) {
      ((::KVSimReader_HIPSE*)obj)->::KVSimReader_HIPSE::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_HIPSE

//______________________________________________________________________________
void KVSimReader_HIPSE_asym::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_HIPSE_asym.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader_HIPSE::Streamer(R__b);
      R__b >> h1;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_HIPSE_asym::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_HIPSE_asym::IsA(), kTRUE);
      KVSimReader_HIPSE::Streamer(R__b);
      R__b << (TObject*)h1;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_HIPSE_asym(void *p) {
      return  p ? new(p) ::KVSimReader_HIPSE_asym : new ::KVSimReader_HIPSE_asym;
   }
   static void *newArray_KVSimReader_HIPSE_asym(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_HIPSE_asym[nElements] : new ::KVSimReader_HIPSE_asym[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_HIPSE_asym(void *p) {
      delete ((::KVSimReader_HIPSE_asym*)p);
   }
   static void deleteArray_KVSimReader_HIPSE_asym(void *p) {
      delete [] ((::KVSimReader_HIPSE_asym*)p);
   }
   static void destruct_KVSimReader_HIPSE_asym(void *p) {
      typedef ::KVSimReader_HIPSE_asym current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_HIPSE_asym(TBuffer &buf, void *obj) {
      ((::KVSimReader_HIPSE_asym*)obj)->::KVSimReader_HIPSE_asym::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_HIPSE_asym

//______________________________________________________________________________
void KVSimReader_SMF::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_SMF.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVSimReader_SMF::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_SMF::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_SMF(void *p) {
      return  p ? new(p) ::KVSimReader_SMF : new ::KVSimReader_SMF;
   }
   static void *newArray_KVSimReader_SMF(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_SMF[nElements] : new ::KVSimReader_SMF[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_SMF(void *p) {
      delete ((::KVSimReader_SMF*)p);
   }
   static void deleteArray_KVSimReader_SMF(void *p) {
      delete [] ((::KVSimReader_SMF*)p);
   }
   static void destruct_KVSimReader_SMF(void *p) {
      typedef ::KVSimReader_SMF current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_SMF(TBuffer &buf, void *obj) {
      ((::KVSimReader_SMF*)obj)->::KVSimReader_SMF::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_SMF

//______________________________________________________________________________
void KVSimReader_SMF_asym::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_SMF_asym.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      R__b >> ndes;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_SMF_asym::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_SMF_asym::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      R__b << ndes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_SMF_asym(void *p) {
      return  p ? new(p) ::KVSimReader_SMF_asym : new ::KVSimReader_SMF_asym;
   }
   static void *newArray_KVSimReader_SMF_asym(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_SMF_asym[nElements] : new ::KVSimReader_SMF_asym[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_SMF_asym(void *p) {
      delete ((::KVSimReader_SMF_asym*)p);
   }
   static void deleteArray_KVSimReader_SMF_asym(void *p) {
      delete [] ((::KVSimReader_SMF_asym*)p);
   }
   static void destruct_KVSimReader_SMF_asym(void *p) {
      typedef ::KVSimReader_SMF_asym current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_SMF_asym(TBuffer &buf, void *obj) {
      ((::KVSimReader_SMF_asym*)obj)->::KVSimReader_SMF_asym::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_SMF_asym

//______________________________________________________________________________
void KVSimReader_MMM::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_MMM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      R__b >> idx;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_MMM::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_MMM::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      R__b << idx;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_MMM(void *p) {
      return  p ? new(p) ::KVSimReader_MMM : new ::KVSimReader_MMM;
   }
   static void *newArray_KVSimReader_MMM(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_MMM[nElements] : new ::KVSimReader_MMM[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_MMM(void *p) {
      delete ((::KVSimReader_MMM*)p);
   }
   static void deleteArray_KVSimReader_MMM(void *p) {
      delete [] ((::KVSimReader_MMM*)p);
   }
   static void destruct_KVSimReader_MMM(void *p) {
      typedef ::KVSimReader_MMM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_MMM(TBuffer &buf, void *obj) {
      ((::KVSimReader_MMM*)obj)->::KVSimReader_MMM::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_MMM

//______________________________________________________________________________
void KVSimReader_MMM_asym::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_MMM_asym.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      R__b >> idx;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_MMM_asym::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_MMM_asym::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      R__b << idx;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_MMM_asym(void *p) {
      return  p ? new(p) ::KVSimReader_MMM_asym : new ::KVSimReader_MMM_asym;
   }
   static void *newArray_KVSimReader_MMM_asym(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_MMM_asym[nElements] : new ::KVSimReader_MMM_asym[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_MMM_asym(void *p) {
      delete ((::KVSimReader_MMM_asym*)p);
   }
   static void deleteArray_KVSimReader_MMM_asym(void *p) {
      delete [] ((::KVSimReader_MMM_asym*)p);
   }
   static void destruct_KVSimReader_MMM_asym(void *p) {
      typedef ::KVSimReader_MMM_asym current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_MMM_asym(TBuffer &buf, void *obj) {
      ((::KVSimReader_MMM_asym*)obj)->::KVSimReader_MMM_asym::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_MMM_asym

//______________________________________________________________________________
void KVSimReader_ELIE::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimReader_ELIE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVSimReader::Streamer(R__b);
      proj.Streamer(R__b);
      targ.Streamer(R__b);
      R__b >> ebeam;
      R__b.CheckByteCount(R__s, R__c, KVSimReader_ELIE::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSimReader_ELIE::IsA(), kTRUE);
      KVSimReader::Streamer(R__b);
      proj.Streamer(R__b);
      targ.Streamer(R__b);
      R__b << ebeam;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimReader_ELIE(void *p) {
      return  p ? new(p) ::KVSimReader_ELIE : new ::KVSimReader_ELIE;
   }
   static void *newArray_KVSimReader_ELIE(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimReader_ELIE[nElements] : new ::KVSimReader_ELIE[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimReader_ELIE(void *p) {
      delete ((::KVSimReader_ELIE*)p);
   }
   static void deleteArray_KVSimReader_ELIE(void *p) {
      delete [] ((::KVSimReader_ELIE*)p);
   }
   static void destruct_KVSimReader_ELIE(void *p) {
      typedef ::KVSimReader_ELIE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSimReader_ELIE(TBuffer &buf, void *obj) {
      ((::KVSimReader_ELIE*)obj)->::KVSimReader_ELIE::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSimReader_ELIE

//______________________________________________________________________________
void KVAutoFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVAutoFit.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> lfunc;
      R__b >> f1Dfit;
      R__b >> f2Dfit;
      R__b >> hfit;
      R__b >> hclone;
      R__b >> c1;
      R__b >> XminSet;
      R__b >> XmaxSet;
      R__b >> Xmin;
      R__b >> Xmax;
      R__b >> Ymin;
      R__b >> Ymax;
      R__b >> lplabel;
      R__b >> lhisto;
      R__b >> nhisto;
      R__b >> userdefined;
      koption.Streamer(R__b);
      R__b >> is2D;
      R__b.CheckByteCount(R__s, R__c, KVAutoFit::IsA());
   } else {
      R__c = R__b.WriteVersion(KVAutoFit::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << lfunc;
      R__b << f1Dfit;
      R__b << f2Dfit;
      R__b << hfit;
      R__b << hclone;
      R__b << c1;
      R__b << XminSet;
      R__b << XmaxSet;
      R__b << Xmin;
      R__b << Xmax;
      R__b << Ymin;
      R__b << Ymax;
      R__b << lplabel;
      R__b << lhisto;
      R__b << nhisto;
      R__b << userdefined;
      koption.Streamer(R__b);
      R__b << is2D;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVAutoFit(void *p) {
      return  p ? new(p) ::KVAutoFit : new ::KVAutoFit;
   }
   static void *newArray_KVAutoFit(Long_t nElements, void *p) {
      return p ? new(p) ::KVAutoFit[nElements] : new ::KVAutoFit[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVAutoFit(void *p) {
      delete ((::KVAutoFit*)p);
   }
   static void deleteArray_KVAutoFit(void *p) {
      delete [] ((::KVAutoFit*)p);
   }
   static void destruct_KVAutoFit(void *p) {
      typedef ::KVAutoFit current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVAutoFit(TBuffer &buf, void *obj) {
      ((::KVAutoFit*)obj)->::KVAutoFit::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVAutoFit

//______________________________________________________________________________
void KVGaus1D::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGaus1D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVAutoFit::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVGaus1D::IsA());
   } else {
      R__c = R__b.WriteVersion(KVGaus1D::IsA(), kTRUE);
      KVAutoFit::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGaus1D(void *p) {
      return  p ? new(p) ::KVGaus1D : new ::KVGaus1D;
   }
   static void *newArray_KVGaus1D(Long_t nElements, void *p) {
      return p ? new(p) ::KVGaus1D[nElements] : new ::KVGaus1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGaus1D(void *p) {
      delete ((::KVGaus1D*)p);
   }
   static void deleteArray_KVGaus1D(void *p) {
      delete [] ((::KVGaus1D*)p);
   }
   static void destruct_KVGaus1D(void *p) {
      typedef ::KVGaus1D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGaus1D(TBuffer &buf, void *obj) {
      ((::KVGaus1D*)obj)->::KVGaus1D::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVGaus1D

//______________________________________________________________________________
void KVGaus2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGaus2D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVAutoFit::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVGaus2D::IsA());
   } else {
      R__c = R__b.WriteVersion(KVGaus2D::IsA(), kTRUE);
      KVAutoFit::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGaus2D(void *p) {
      return  p ? new(p) ::KVGaus2D : new ::KVGaus2D;
   }
   static void *newArray_KVGaus2D(Long_t nElements, void *p) {
      return p ? new(p) ::KVGaus2D[nElements] : new ::KVGaus2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGaus2D(void *p) {
      delete ((::KVGaus2D*)p);
   }
   static void deleteArray_KVGaus2D(void *p) {
      delete [] ((::KVGaus2D*)p);
   }
   static void destruct_KVGaus2D(void *p) {
      typedef ::KVGaus2D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGaus2D(TBuffer &buf, void *obj) {
      ((::KVGaus2D*)obj)->::KVGaus2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVGaus2D

//______________________________________________________________________________
void KVGumbelDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGumbelDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGumbelDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGumbelDistribution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGumbelDistribution(void *p) {
      return  p ? new(p) ::KVGumbelDistribution : new ::KVGumbelDistribution;
   }
   static void *newArray_KVGumbelDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::KVGumbelDistribution[nElements] : new ::KVGumbelDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGumbelDistribution(void *p) {
      delete ((::KVGumbelDistribution*)p);
   }
   static void deleteArray_KVGumbelDistribution(void *p) {
      delete [] ((::KVGumbelDistribution*)p);
   }
   static void destruct_KVGumbelDistribution(void *p) {
      typedef ::KVGumbelDistribution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGumbelDistribution

//______________________________________________________________________________
void KVGausGumDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGausGumDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGausGumDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGausGumDistribution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGausGumDistribution(void *p) {
      return  p ? new(p) ::KVGausGumDistribution : new ::KVGausGumDistribution;
   }
   static void *newArray_KVGausGumDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::KVGausGumDistribution[nElements] : new ::KVGausGumDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGausGumDistribution(void *p) {
      delete ((::KVGausGumDistribution*)p);
   }
   static void deleteArray_KVGausGumDistribution(void *p) {
      delete [] ((::KVGausGumDistribution*)p);
   }
   static void destruct_KVGausGumDistribution(void *p) {
      typedef ::KVGausGumDistribution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGausGumDistribution

//______________________________________________________________________________
void KVGumGumDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGumGumDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGumGumDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGumGumDistribution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGumGumDistribution(void *p) {
      return  p ? new(p) ::KVGumGumDistribution : new ::KVGumGumDistribution;
   }
   static void *newArray_KVGumGumDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::KVGumGumDistribution[nElements] : new ::KVGumGumDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGumGumDistribution(void *p) {
      delete ((::KVGumGumDistribution*)p);
   }
   static void deleteArray_KVGumGumDistribution(void *p) {
      delete [] ((::KVGumGumDistribution*)p);
   }
   static void destruct_KVGumGumDistribution(void *p) {
      typedef ::KVGumGumDistribution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGumGumDistribution

//______________________________________________________________________________
void KVGraph::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGraph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGraph::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGraph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGraph(void *p) {
      return  p ? new(p) ::KVGraph : new ::KVGraph;
   }
   static void *newArray_KVGraph(Long_t nElements, void *p) {
      return p ? new(p) ::KVGraph[nElements] : new ::KVGraph[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGraph(void *p) {
      delete ((::KVGraph*)p);
   }
   static void deleteArray_KVGraph(void *p) {
      delete [] ((::KVGraph*)p);
   }
   static void destruct_KVGraph(void *p) {
      typedef ::KVGraph current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVGraph(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVGraph*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVGraph

//______________________________________________________________________________
void KVGaxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGaxis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGaxis::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGaxis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGaxis(void *p) {
      return  p ? new(p) ::KVGaxis : new ::KVGaxis;
   }
   static void *newArray_KVGaxis(Long_t nElements, void *p) {
      return p ? new(p) ::KVGaxis[nElements] : new ::KVGaxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGaxis(void *p) {
      delete ((::KVGaxis*)p);
   }
   static void deleteArray_KVGaxis(void *p) {
      delete [] ((::KVGaxis*)p);
   }
   static void destruct_KVGaxis(void *p) {
      typedef ::KVGaxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGaxis

//______________________________________________________________________________
void KVDataTransfer::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataTransfer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataTransfer::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataTransfer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataTransfer(void *p) {
      delete ((::KVDataTransfer*)p);
   }
   static void deleteArray_KVDataTransfer(void *p) {
      delete [] ((::KVDataTransfer*)p);
   }
   static void destruct_KVDataTransfer(void *p) {
      typedef ::KVDataTransfer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataTransfer

//______________________________________________________________________________
void KVDataTransferSFTP::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataTransferSFTP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataTransferSFTP::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataTransferSFTP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataTransferSFTP(void *p) {
      delete ((::KVDataTransferSFTP*)p);
   }
   static void deleteArray_KVDataTransferSFTP(void *p) {
      delete [] ((::KVDataTransferSFTP*)p);
   }
   static void destruct_KVDataTransferSFTP(void *p) {
      typedef ::KVDataTransferSFTP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataTransferSFTP

//______________________________________________________________________________
void KVDataTransferBBFTP::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataTransferBBFTP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataTransferBBFTP::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataTransferBBFTP::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataTransferBBFTP(void *p) {
      return  p ? new(p) ::KVDataTransferBBFTP : new ::KVDataTransferBBFTP;
   }
   static void *newArray_KVDataTransferBBFTP(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataTransferBBFTP[nElements] : new ::KVDataTransferBBFTP[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataTransferBBFTP(void *p) {
      delete ((::KVDataTransferBBFTP*)p);
   }
   static void deleteArray_KVDataTransferBBFTP(void *p) {
      delete [] ((::KVDataTransferBBFTP*)p);
   }
   static void destruct_KVDataTransferBBFTP(void *p) {
      typedef ::KVDataTransferBBFTP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataTransferBBFTP

//______________________________________________________________________________
void KVDataTransferXRD::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataTransferXRD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataTransferXRD::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataTransferXRD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataTransferXRD(void *p) {
      return  p ? new(p) ::KVDataTransferXRD : new ::KVDataTransferXRD;
   }
   static void *newArray_KVDataTransferXRD(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataTransferXRD[nElements] : new ::KVDataTransferXRD[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataTransferXRD(void *p) {
      delete ((::KVDataTransferXRD*)p);
   }
   static void deleteArray_KVDataTransferXRD(void *p) {
      delete [] ((::KVDataTransferXRD*)p);
   }
   static void destruct_KVDataTransferXRD(void *p) {
      typedef ::KVDataTransferXRD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataTransferXRD

//______________________________________________________________________________
void KVImpactParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVImpactParameter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> fData;
      fEvol.Streamer(R__b);
      R__b >> fIPScale;
      R__b >> fXSecScale;
      R__b >> fObsTransform;
      R__b >> fObsTransformXSec;
      HM.Streamer(R__b);
      R__b >> Bmax;
      R__b >> Smax;
      R__b.CheckByteCount(R__s, R__c, KVImpactParameter::IsA());
   } else {
      R__c = R__b.WriteVersion(KVImpactParameter::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << fData;
      fEvol.Streamer(R__b);
      R__b << fIPScale;
      R__b << fXSecScale;
      R__b << fObsTransform;
      R__b << fObsTransformXSec;
      HM.Streamer(R__b);
      R__b << Bmax;
      R__b << Smax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVImpactParameter(void *p) {
      delete ((::KVImpactParameter*)p);
   }
   static void deleteArray_KVImpactParameter(void *p) {
      delete [] ((::KVImpactParameter*)p);
   }
   static void destruct_KVImpactParameter(void *p) {
      typedef ::KVImpactParameter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVImpactParameter(TBuffer &buf, void *obj) {
      ((::KVImpactParameter*)obj)->::KVImpactParameter::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVImpactParameter

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetanalysis_Impl() {
    static const char* headers[] = {
"KVGaus1D.h",
"KVLinuxBatch.h",
"KV_CCIN2P3_BQS.h",
"KVSimReader_SMF_asym.h",
"KVEventSelector.h",
"KVSimReader_HIPSE_asym.h",
"KVDataAnalyser.h",
"KVSimReader_HIPSE.h",
"KVSimReader_ELIE.h",
"KVBatchSystem.h",
"KVDataTransfer.h",
"KVAutoFit.h",
"KVDataTransferSFTP.h",
"KVSimReader_MMM.h",
"KVBatchJob.h",
"KVDataTransferBBFTP.h",
"KVSimReader_SMF.h",
"KVDataPatch.h",
"KV_CCIN2P3_GE.h",
"KVGaxis.h",
"KVSimReader_MMM_asym.h",
"KVGraph.h",
"KVDataTransferXRD.h",
"KVBatchSystemManager.h",
"KVRootBatch.h",
"KVSimReader.h",
"KVGaus2D.h",
"KVGumGumDistribution.h",
"KVGEBatchJob.h",
"KVDataPatchList.h",
"KVGausGumDistribution.h",
"KVGumbelDistribution.h",
"KVImpactParameter.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/analysis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base class for interface to batch job management system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLinuxBatch.h")))  KVBatchSystem;
class __attribute__((annotate(R"ATTRDUMP(Manages methods of processing non-interactive data analysis tasks)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBatchSystemManager.h")))  KVBatchSystemManager;
class __attribute__((annotate(R"ATTRDUMP(Job handled by batch system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBatchJob.h")))  KVBatchJob;
class __attribute__((annotate(R"ATTRDUMP(Job handled by Grid Engine batch system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGEBatchJob.h")))  KVGEBatchJob;
class __attribute__((annotate(R"ATTRDUMP(Interface to CCIN2P3-BQS batch job management system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KV_CCIN2P3_BQS.h")))  KV_CCIN2P3_BQS;
class __attribute__((annotate(R"ATTRDUMP(Interface to CCIN2P3-GE batch job management system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KV_CCIN2P3_GE.h")))  KV_CCIN2P3_GE;
class __attribute__((annotate(R"ATTRDUMP(Run KaliVeda analysis task in an Xterm window)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLinuxBatch.h")))  KVRootBatch;
class __attribute__((annotate(R"ATTRDUMP(Run KaliVeda analysis task in background on Linux system with output stored in logfile)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLinuxBatch.h")))  KVLinuxBatch;
class __attribute__((annotate(R"ATTRDUMP(For submitting & performing data analysis tasks)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataAnalyser.h")))  KVDataAnalyser;
class __attribute__((annotate(R"ATTRDUMP(Correction to be applied to reconstructed calibrated data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataPatch.h")))  KVDataPatch;
class __attribute__((annotate(R"ATTRDUMP(List of corrections to be applied to reconstructed calibrated data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataPatchList.h")))  KVDataPatchList;
class __attribute__((annotate(R"ATTRDUMP(General purpose analysis class for TTrees containing KVEvent objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEventSelector.h")))  KVEventSelector;
class __attribute__((annotate(R"ATTRDUMP(Base class to read output files for simulation and create tree using KVEvent type class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_SMF_asym.h")))  KVSimReader;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for events of the HIPSE code after clusterization)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_HIPSE_asym.h")))  KVSimReader_HIPSE;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for asymptotic events of the HIPSE code after SIMON deexcitation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_HIPSE_asym.h")))  KVSimReader_HIPSE_asym;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for events of the SMF code after clusterization)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_SMF.h")))  KVSimReader_SMF;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for asymptotic events of the SMF code after SIMON deexcitation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_SMF_asym.h")))  KVSimReader_SMF_asym;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for events of the MMM code at Freeze Out)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_MMM.h")))  KVSimReader_MMM;
class __attribute__((annotate(R"ATTRDUMP(Read ascii file for asymptotic events of the MMM code after deexcitation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_MMM_asym.h")))  KVSimReader_MMM_asym;
class __attribute__((annotate(R"ATTRDUMP(Read ascii files containing events generated by Elie)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimReader_ELIE.h")))  KVSimReader_ELIE;
class __attribute__((annotate(R"ATTRDUMP(Manage SemiAutomatic Fits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGaus1D.h")))  KVAutoFit;
class __attribute__((annotate(R"ATTRDUMP(Fit gaussien a une dimension)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGaus1D.h")))  KVGaus1D;
class __attribute__((annotate(R"ATTRDUMP(Fit gaussien a deux dimensions)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGaus2D.h")))  KVGaus2D;
class __attribute__((annotate(R"ATTRDUMP(Gumbel distributions for rank-ordered extremal variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGumGumDistribution.h")))  KVGumbelDistribution;
class __attribute__((annotate(R"ATTRDUMP(Sum of normalised Gaussian and Gumbel distributions)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGausGumDistribution.h")))  KVGausGumDistribution;
class __attribute__((annotate(R"ATTRDUMP(Sum of normalised Gumbel first asymptote and Gumbel last asymptote)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGumGumDistribution.h")))  KVGumGumDistribution;
class __attribute__((annotate(R"ATTRDUMP(TGraph with new draw option)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGraph.h")))  KVGraph;
class __attribute__((annotate(R"ATTRDUMP(TAxis optimised for KVGraph visualisation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGaxis.h")))  KVGaxis;
class __attribute__((annotate(R"ATTRDUMP(Transfers data between data repositories)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataTransfer.h")))  KVDataTransfer;
class __attribute__((annotate(R"ATTRDUMP(File transfer between repositories using sftp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataTransferSFTP.h")))  KVDataTransferSFTP;
class __attribute__((annotate(R"ATTRDUMP(File transfer between repositories using bbftp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataTransferBBFTP.h")))  KVDataTransferBBFTP;
class __attribute__((annotate(R"ATTRDUMP(Transfer data from remote repository using xrootd)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataTransferXRD.h")))  KVDataTransferXRD;
class __attribute__((annotate(R"ATTRDUMP(Impact parameter analysis tools)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVImpactParameter.h")))  KVImpactParameter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVGaus1D.h"
#include "KVLinuxBatch.h"
#include "KV_CCIN2P3_BQS.h"
#include "KVSimReader_SMF_asym.h"
#include "KVEventSelector.h"
#include "KVSimReader_HIPSE_asym.h"
#include "KVDataAnalyser.h"
#include "KVSimReader_HIPSE.h"
#include "KVSimReader_ELIE.h"
#include "KVBatchSystem.h"
#include "KVDataTransfer.h"
#include "KVAutoFit.h"
#include "KVDataTransferSFTP.h"
#include "KVSimReader_MMM.h"
#include "KVBatchJob.h"
#include "KVDataTransferBBFTP.h"
#include "KVSimReader_SMF.h"
#include "KVDataPatch.h"
#include "KV_CCIN2P3_GE.h"
#include "KVGaxis.h"
#include "KVSimReader_MMM_asym.h"
#include "KVGraph.h"
#include "KVDataTransferXRD.h"
#include "KVBatchSystemManager.h"
#include "KVRootBatch.h"
#include "KVSimReader.h"
#include "KVGaus2D.h"
#include "KVGumGumDistribution.h"
#include "KVGEBatchJob.h"
#include "KVDataPatchList.h"
#include "KVGausGumDistribution.h"
#include "KVGumbelDistribution.h"
#include "KVImpactParameter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVAutoFit", payloadCode, "@",
"KVBatchJob", payloadCode, "@",
"KVBatchSystem", payloadCode, "@",
"KVBatchSystemManager", payloadCode, "@",
"KVDataAnalyser", payloadCode, "@",
"KVDataPatch", payloadCode, "@",
"KVDataPatchList", payloadCode, "@",
"KVDataTransfer", payloadCode, "@",
"KVDataTransferBBFTP", payloadCode, "@",
"KVDataTransferSFTP", payloadCode, "@",
"KVDataTransferXRD", payloadCode, "@",
"KVEventSelector", payloadCode, "@",
"KVGEBatchJob", payloadCode, "@",
"KVGaus1D", payloadCode, "@",
"KVGaus2D", payloadCode, "@",
"KVGausGumDistribution", payloadCode, "@",
"KVGaxis", payloadCode, "@",
"KVGraph", payloadCode, "@",
"KVGumGumDistribution", payloadCode, "@",
"KVGumbelDistribution", payloadCode, "@",
"KVImpactParameter", payloadCode, "@",
"KVLinuxBatch", payloadCode, "@",
"KVRootBatch", payloadCode, "@",
"KVSimReader", payloadCode, "@",
"KVSimReader_ELIE", payloadCode, "@",
"KVSimReader_HIPSE", payloadCode, "@",
"KVSimReader_HIPSE_asym", payloadCode, "@",
"KVSimReader_MMM", payloadCode, "@",
"KVSimReader_MMM_asym", payloadCode, "@",
"KVSimReader_SMF", payloadCode, "@",
"KVSimReader_SMF_asym", payloadCode, "@",
"KV_CCIN2P3_BQS", payloadCode, "@",
"KV_CCIN2P3_GE", payloadCode, "@",
"gBatchSystem", payloadCode, "@",
"gBatchSystemManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetanalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetanalysis_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetanalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetanalysis() {
  TriggerDictionaryInitialization_libKVMultiDetanalysis_Impl();
}
