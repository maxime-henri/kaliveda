// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndrageometry

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
#include "KVLightEnergyCsI.h"
#include "KVCsI.h"
#include "KVINDRATelescope.h"
#include "KVChIo_e475s.h"
#include "KVSiB.h"
#include "KVPhoswich.h"
#include "KVSilicon_e475s.h"
#include "KVINDRADetector.h"
#include "KVChIo.h"
#include "KVTelBlocking.h"
#include "KVCsI_e475s.h"
#include "KVChannelEnergyBrho.h"
#include "KVBIC.h"
#include "KVSilicon.h"
#include "KVChannelEnergyChIo.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRADetector(void *p = 0);
   static void *newArray_KVINDRADetector(Long_t size, void *p);
   static void delete_KVINDRADetector(void *p);
   static void deleteArray_KVINDRADetector(void *p);
   static void destruct_KVINDRADetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADetector*)
   {
      ::KVINDRADetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADetector", ::KVINDRADetector::Class_Version(), "KVINDRADetector.h", 10,
                  typeid(::KVINDRADetector), DefineBehavior(ptr, ptr),
                  &::KVINDRADetector::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRADetector) );
      instance.SetNew(&new_KVINDRADetector);
      instance.SetNewArray(&newArray_KVINDRADetector);
      instance.SetDelete(&delete_KVINDRADetector);
      instance.SetDeleteArray(&deleteArray_KVINDRADetector);
      instance.SetDestructor(&destruct_KVINDRADetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADetector*)
   {
      return GenerateInitInstanceLocal((::KVINDRADetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRATelescope(void *p = 0);
   static void *newArray_KVINDRATelescope(Long_t size, void *p);
   static void delete_KVINDRATelescope(void *p);
   static void deleteArray_KVINDRATelescope(void *p);
   static void destruct_KVINDRATelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRATelescope*)
   {
      ::KVINDRATelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRATelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRATelescope", ::KVINDRATelescope::Class_Version(), "KVINDRATelescope.h", 11,
                  typeid(::KVINDRATelescope), DefineBehavior(ptr, ptr),
                  &::KVINDRATelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRATelescope) );
      instance.SetNew(&new_KVINDRATelescope);
      instance.SetNewArray(&newArray_KVINDRATelescope);
      instance.SetDelete(&delete_KVINDRATelescope);
      instance.SetDeleteArray(&deleteArray_KVINDRATelescope);
      instance.SetDestructor(&destruct_KVINDRATelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRATelescope*)
   {
      return GenerateInitInstanceLocal((::KVINDRATelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRATelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSilicon(void *p = 0);
   static void *newArray_KVSilicon(Long_t size, void *p);
   static void delete_KVSilicon(void *p);
   static void deleteArray_KVSilicon(void *p);
   static void destruct_KVSilicon(void *p);
   static void streamer_KVSilicon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSilicon*)
   {
      ::KVSilicon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSilicon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSilicon", ::KVSilicon::Class_Version(), "KVSilicon.h", 24,
                  typeid(::KVSilicon), DefineBehavior(ptr, ptr),
                  &::KVSilicon::Dictionary, isa_proxy, 17,
                  sizeof(::KVSilicon) );
      instance.SetNew(&new_KVSilicon);
      instance.SetNewArray(&newArray_KVSilicon);
      instance.SetDelete(&delete_KVSilicon);
      instance.SetDeleteArray(&deleteArray_KVSilicon);
      instance.SetDestructor(&destruct_KVSilicon);
      instance.SetStreamerFunc(&streamer_KVSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSilicon*)
   {
      return GenerateInitInstanceLocal((::KVSilicon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSilicon*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSi75(void *p = 0);
   static void *newArray_KVSi75(Long_t size, void *p);
   static void delete_KVSi75(void *p);
   static void deleteArray_KVSi75(void *p);
   static void destruct_KVSi75(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSi75*)
   {
      ::KVSi75 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSi75 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSi75", ::KVSi75::Class_Version(), "KVSilicon.h", 101,
                  typeid(::KVSi75), DefineBehavior(ptr, ptr),
                  &::KVSi75::Dictionary, isa_proxy, 4,
                  sizeof(::KVSi75) );
      instance.SetNew(&new_KVSi75);
      instance.SetNewArray(&newArray_KVSi75);
      instance.SetDelete(&delete_KVSi75);
      instance.SetDeleteArray(&deleteArray_KVSi75);
      instance.SetDestructor(&destruct_KVSi75);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSi75*)
   {
      return GenerateInitInstanceLocal((::KVSi75*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSi75*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSiLi(void *p = 0);
   static void *newArray_KVSiLi(Long_t size, void *p);
   static void delete_KVSiLi(void *p);
   static void deleteArray_KVSiLi(void *p);
   static void destruct_KVSiLi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSiLi*)
   {
      ::KVSiLi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSiLi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSiLi", ::KVSiLi::Class_Version(), "KVSilicon.h", 112,
                  typeid(::KVSiLi), DefineBehavior(ptr, ptr),
                  &::KVSiLi::Dictionary, isa_proxy, 4,
                  sizeof(::KVSiLi) );
      instance.SetNew(&new_KVSiLi);
      instance.SetNewArray(&newArray_KVSiLi);
      instance.SetDelete(&delete_KVSiLi);
      instance.SetDeleteArray(&deleteArray_KVSiLi);
      instance.SetDestructor(&destruct_KVSiLi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSiLi*)
   {
      return GenerateInitInstanceLocal((::KVSiLi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSiLi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSilicon_e475s(void *p = 0);
   static void *newArray_KVSilicon_e475s(Long_t size, void *p);
   static void delete_KVSilicon_e475s(void *p);
   static void deleteArray_KVSilicon_e475s(void *p);
   static void destruct_KVSilicon_e475s(void *p);
   static void streamer_KVSilicon_e475s(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSilicon_e475s*)
   {
      ::KVSilicon_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSilicon_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSilicon_e475s", ::KVSilicon_e475s::Class_Version(), "KVSilicon_e475s.h", 19,
                  typeid(::KVSilicon_e475s), DefineBehavior(ptr, ptr),
                  &::KVSilicon_e475s::Dictionary, isa_proxy, 17,
                  sizeof(::KVSilicon_e475s) );
      instance.SetNew(&new_KVSilicon_e475s);
      instance.SetNewArray(&newArray_KVSilicon_e475s);
      instance.SetDelete(&delete_KVSilicon_e475s);
      instance.SetDeleteArray(&deleteArray_KVSilicon_e475s);
      instance.SetDestructor(&destruct_KVSilicon_e475s);
      instance.SetStreamerFunc(&streamer_KVSilicon_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSilicon_e475s*)
   {
      return GenerateInitInstanceLocal((::KVSilicon_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSilicon_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChIo(void *p = 0);
   static void *newArray_KVChIo(Long_t size, void *p);
   static void delete_KVChIo(void *p);
   static void deleteArray_KVChIo(void *p);
   static void destruct_KVChIo(void *p);
   static void streamer_KVChIo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChIo*)
   {
      ::KVChIo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChIo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChIo", ::KVChIo::Class_Version(), "KVChIo.h", 21,
                  typeid(::KVChIo), DefineBehavior(ptr, ptr),
                  &::KVChIo::Dictionary, isa_proxy, 17,
                  sizeof(::KVChIo) );
      instance.SetNew(&new_KVChIo);
      instance.SetNewArray(&newArray_KVChIo);
      instance.SetDelete(&delete_KVChIo);
      instance.SetDeleteArray(&deleteArray_KVChIo);
      instance.SetDestructor(&destruct_KVChIo);
      instance.SetStreamerFunc(&streamer_KVChIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChIo*)
   {
      return GenerateInitInstanceLocal((::KVChIo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChIo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChIo_e475s(void *p = 0);
   static void *newArray_KVChIo_e475s(Long_t size, void *p);
   static void delete_KVChIo_e475s(void *p);
   static void deleteArray_KVChIo_e475s(void *p);
   static void destruct_KVChIo_e475s(void *p);
   static void streamer_KVChIo_e475s(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChIo_e475s*)
   {
      ::KVChIo_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChIo_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChIo_e475s", ::KVChIo_e475s::Class_Version(), "KVChIo_e475s.h", 18,
                  typeid(::KVChIo_e475s), DefineBehavior(ptr, ptr),
                  &::KVChIo_e475s::Dictionary, isa_proxy, 17,
                  sizeof(::KVChIo_e475s) );
      instance.SetNew(&new_KVChIo_e475s);
      instance.SetNewArray(&newArray_KVChIo_e475s);
      instance.SetDelete(&delete_KVChIo_e475s);
      instance.SetDeleteArray(&deleteArray_KVChIo_e475s);
      instance.SetDestructor(&destruct_KVChIo_e475s);
      instance.SetStreamerFunc(&streamer_KVChIo_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChIo_e475s*)
   {
      return GenerateInitInstanceLocal((::KVChIo_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChIo_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCsI(void *p = 0);
   static void *newArray_KVCsI(Long_t size, void *p);
   static void delete_KVCsI(void *p);
   static void deleteArray_KVCsI(void *p);
   static void destruct_KVCsI(void *p);
   static void streamer_KVCsI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCsI*)
   {
      ::KVCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCsI", ::KVCsI::Class_Version(), "KVCsI.h", 35,
                  typeid(::KVCsI), DefineBehavior(ptr, ptr),
                  &::KVCsI::Dictionary, isa_proxy, 17,
                  sizeof(::KVCsI) );
      instance.SetNew(&new_KVCsI);
      instance.SetNewArray(&newArray_KVCsI);
      instance.SetDelete(&delete_KVCsI);
      instance.SetDeleteArray(&deleteArray_KVCsI);
      instance.SetDestructor(&destruct_KVCsI);
      instance.SetStreamerFunc(&streamer_KVCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCsI*)
   {
      return GenerateInitInstanceLocal((::KVCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCsI_e475s(void *p = 0);
   static void *newArray_KVCsI_e475s(Long_t size, void *p);
   static void delete_KVCsI_e475s(void *p);
   static void deleteArray_KVCsI_e475s(void *p);
   static void destruct_KVCsI_e475s(void *p);
   static void streamer_KVCsI_e475s(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCsI_e475s*)
   {
      ::KVCsI_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCsI_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCsI_e475s", ::KVCsI_e475s::Class_Version(), "KVCsI_e475s.h", 19,
                  typeid(::KVCsI_e475s), DefineBehavior(ptr, ptr),
                  &::KVCsI_e475s::Dictionary, isa_proxy, 17,
                  sizeof(::KVCsI_e475s) );
      instance.SetNew(&new_KVCsI_e475s);
      instance.SetNewArray(&newArray_KVCsI_e475s);
      instance.SetDelete(&delete_KVCsI_e475s);
      instance.SetDeleteArray(&deleteArray_KVCsI_e475s);
      instance.SetDestructor(&destruct_KVCsI_e475s);
      instance.SetStreamerFunc(&streamer_KVCsI_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCsI_e475s*)
   {
      return GenerateInitInstanceLocal((::KVCsI_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCsI_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPhoswich(void *p = 0);
   static void *newArray_KVPhoswich(Long_t size, void *p);
   static void delete_KVPhoswich(void *p);
   static void deleteArray_KVPhoswich(void *p);
   static void destruct_KVPhoswich(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPhoswich*)
   {
      ::KVPhoswich *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPhoswich >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPhoswich", ::KVPhoswich::Class_Version(), "KVPhoswich.h", 24,
                  typeid(::KVPhoswich), DefineBehavior(ptr, ptr),
                  &::KVPhoswich::Dictionary, isa_proxy, 4,
                  sizeof(::KVPhoswich) );
      instance.SetNew(&new_KVPhoswich);
      instance.SetNewArray(&newArray_KVPhoswich);
      instance.SetDelete(&delete_KVPhoswich);
      instance.SetDeleteArray(&deleteArray_KVPhoswich);
      instance.SetDestructor(&destruct_KVPhoswich);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPhoswich*)
   {
      return GenerateInitInstanceLocal((::KVPhoswich*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPhoswich*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBIC(void *p = 0);
   static void *newArray_KVBIC(Long_t size, void *p);
   static void delete_KVBIC(void *p);
   static void deleteArray_KVBIC(void *p);
   static void destruct_KVBIC(void *p);
   static void streamer_KVBIC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBIC*)
   {
      ::KVBIC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBIC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBIC", ::KVBIC::Class_Version(), "KVBIC.h", 24,
                  typeid(::KVBIC), DefineBehavior(ptr, ptr),
                  &::KVBIC::Dictionary, isa_proxy, 17,
                  sizeof(::KVBIC) );
      instance.SetNew(&new_KVBIC);
      instance.SetNewArray(&newArray_KVBIC);
      instance.SetDelete(&delete_KVBIC);
      instance.SetDeleteArray(&deleteArray_KVBIC);
      instance.SetDestructor(&destruct_KVBIC);
      instance.SetStreamerFunc(&streamer_KVBIC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBIC*)
   {
      return GenerateInitInstanceLocal((::KVBIC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBIC*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSiB(void *p = 0);
   static void *newArray_KVSiB(Long_t size, void *p);
   static void delete_KVSiB(void *p);
   static void deleteArray_KVSiB(void *p);
   static void destruct_KVSiB(void *p);
   static void streamer_KVSiB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSiB*)
   {
      ::KVSiB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSiB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSiB", ::KVSiB::Class_Version(), "KVSiB.h", 26,
                  typeid(::KVSiB), DefineBehavior(ptr, ptr),
                  &::KVSiB::Dictionary, isa_proxy, 17,
                  sizeof(::KVSiB) );
      instance.SetNew(&new_KVSiB);
      instance.SetNewArray(&newArray_KVSiB);
      instance.SetDelete(&delete_KVSiB);
      instance.SetDeleteArray(&deleteArray_KVSiB);
      instance.SetDestructor(&destruct_KVSiB);
      instance.SetStreamerFunc(&streamer_KVSiB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSiB*)
   {
      return GenerateInitInstanceLocal((::KVSiB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSiB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTelBlocking(void *p = 0);
   static void *newArray_KVTelBlocking(Long_t size, void *p);
   static void delete_KVTelBlocking(void *p);
   static void deleteArray_KVTelBlocking(void *p);
   static void destruct_KVTelBlocking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTelBlocking*)
   {
      ::KVTelBlocking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTelBlocking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTelBlocking", ::KVTelBlocking::Class_Version(), "KVTelBlocking.h", 23,
                  typeid(::KVTelBlocking), DefineBehavior(ptr, ptr),
                  &::KVTelBlocking::Dictionary, isa_proxy, 4,
                  sizeof(::KVTelBlocking) );
      instance.SetNew(&new_KVTelBlocking);
      instance.SetNewArray(&newArray_KVTelBlocking);
      instance.SetDelete(&delete_KVTelBlocking);
      instance.SetDeleteArray(&deleteArray_KVTelBlocking);
      instance.SetDestructor(&destruct_KVTelBlocking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTelBlocking*)
   {
      return GenerateInitInstanceLocal((::KVTelBlocking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTelBlocking*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLightEnergyCsI(void *p = 0);
   static void *newArray_KVLightEnergyCsI(Long_t size, void *p);
   static void delete_KVLightEnergyCsI(void *p);
   static void deleteArray_KVLightEnergyCsI(void *p);
   static void destruct_KVLightEnergyCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLightEnergyCsI*)
   {
      ::KVLightEnergyCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLightEnergyCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLightEnergyCsI", ::KVLightEnergyCsI::Class_Version(), "KVLightEnergyCsI.h", 23,
                  typeid(::KVLightEnergyCsI), DefineBehavior(ptr, ptr),
                  &::KVLightEnergyCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVLightEnergyCsI) );
      instance.SetNew(&new_KVLightEnergyCsI);
      instance.SetNewArray(&newArray_KVLightEnergyCsI);
      instance.SetDelete(&delete_KVLightEnergyCsI);
      instance.SetDeleteArray(&deleteArray_KVLightEnergyCsI);
      instance.SetDestructor(&destruct_KVLightEnergyCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLightEnergyCsI*)
   {
      return GenerateInitInstanceLocal((::KVLightEnergyCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLightEnergyCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChannelEnergyChIo(void *p = 0);
   static void *newArray_KVChannelEnergyChIo(Long_t size, void *p);
   static void delete_KVChannelEnergyChIo(void *p);
   static void deleteArray_KVChannelEnergyChIo(void *p);
   static void destruct_KVChannelEnergyChIo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChannelEnergyChIo*)
   {
      ::KVChannelEnergyChIo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChannelEnergyChIo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChannelEnergyChIo", ::KVChannelEnergyChIo::Class_Version(), "KVChannelEnergyChIo.h", 23,
                  typeid(::KVChannelEnergyChIo), DefineBehavior(ptr, ptr),
                  &::KVChannelEnergyChIo::Dictionary, isa_proxy, 4,
                  sizeof(::KVChannelEnergyChIo) );
      instance.SetNew(&new_KVChannelEnergyChIo);
      instance.SetNewArray(&newArray_KVChannelEnergyChIo);
      instance.SetDelete(&delete_KVChannelEnergyChIo);
      instance.SetDeleteArray(&deleteArray_KVChannelEnergyChIo);
      instance.SetDestructor(&destruct_KVChannelEnergyChIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChannelEnergyChIo*)
   {
      return GenerateInitInstanceLocal((::KVChannelEnergyChIo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChannelEnergyChIo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChannelEnergyBrho(void *p = 0);
   static void *newArray_KVChannelEnergyBrho(Long_t size, void *p);
   static void delete_KVChannelEnergyBrho(void *p);
   static void deleteArray_KVChannelEnergyBrho(void *p);
   static void destruct_KVChannelEnergyBrho(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChannelEnergyBrho*)
   {
      ::KVChannelEnergyBrho *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChannelEnergyBrho >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChannelEnergyBrho", ::KVChannelEnergyBrho::Class_Version(), "KVChannelEnergyBrho.h", 23,
                  typeid(::KVChannelEnergyBrho), DefineBehavior(ptr, ptr),
                  &::KVChannelEnergyBrho::Dictionary, isa_proxy, 4,
                  sizeof(::KVChannelEnergyBrho) );
      instance.SetNew(&new_KVChannelEnergyBrho);
      instance.SetNewArray(&newArray_KVChannelEnergyBrho);
      instance.SetDelete(&delete_KVChannelEnergyBrho);
      instance.SetDeleteArray(&deleteArray_KVChannelEnergyBrho);
      instance.SetDestructor(&destruct_KVChannelEnergyBrho);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChannelEnergyBrho*)
   {
      return GenerateInitInstanceLocal((::KVChannelEnergyBrho*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChannelEnergyBrho*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADetector::Class_Name()
{
   return "KVINDRADetector";
}

//______________________________________________________________________________
const char *KVINDRADetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRATelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRATelescope::Class_Name()
{
   return "KVINDRATelescope";
}

//______________________________________________________________________________
const char *KVINDRATelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRATelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRATelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRATelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSilicon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSilicon::Class_Name()
{
   return "KVSilicon";
}

//______________________________________________________________________________
const char *KVSilicon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSilicon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSilicon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSilicon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSi75::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSi75::Class_Name()
{
   return "KVSi75";
}

//______________________________________________________________________________
const char *KVSi75::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSi75*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSi75::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSi75*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSi75::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSi75*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSi75::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSi75*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSiLi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSiLi::Class_Name()
{
   return "KVSiLi";
}

//______________________________________________________________________________
const char *KVSiLi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiLi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSiLi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiLi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSiLi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiLi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSiLi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiLi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSilicon_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSilicon_e475s::Class_Name()
{
   return "KVSilicon_e475s";
}

//______________________________________________________________________________
const char *KVSilicon_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSilicon_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSilicon_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSilicon_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSilicon_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChIo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChIo::Class_Name()
{
   return "KVChIo";
}

//______________________________________________________________________________
const char *KVChIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChIo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChIo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChIo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChIo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChIo_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChIo_e475s::Class_Name()
{
   return "KVChIo_e475s";
}

//______________________________________________________________________________
const char *KVChIo_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChIo_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChIo_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChIo_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChIo_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChIo_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChIo_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChIo_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCsI::Class_Name()
{
   return "KVCsI";
}

//______________________________________________________________________________
const char *KVCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCsI_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCsI_e475s::Class_Name()
{
   return "KVCsI_e475s";
}

//______________________________________________________________________________
const char *KVCsI_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsI_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCsI_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsI_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCsI_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsI_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCsI_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsI_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPhoswich::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPhoswich::Class_Name()
{
   return "KVPhoswich";
}

//______________________________________________________________________________
const char *KVPhoswich::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPhoswich*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPhoswich::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPhoswich*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPhoswich::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPhoswich*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPhoswich::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPhoswich*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBIC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBIC::Class_Name()
{
   return "KVBIC";
}

//______________________________________________________________________________
const char *KVBIC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBIC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBIC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBIC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBIC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBIC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBIC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBIC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSiB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSiB::Class_Name()
{
   return "KVSiB";
}

//______________________________________________________________________________
const char *KVSiB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSiB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSiB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSiB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTelBlocking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTelBlocking::Class_Name()
{
   return "KVTelBlocking";
}

//______________________________________________________________________________
const char *KVTelBlocking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTelBlocking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTelBlocking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTelBlocking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTelBlocking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTelBlocking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTelBlocking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTelBlocking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLightEnergyCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLightEnergyCsI::Class_Name()
{
   return "KVLightEnergyCsI";
}

//______________________________________________________________________________
const char *KVLightEnergyCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLightEnergyCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLightEnergyCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLightEnergyCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChannelEnergyChIo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChannelEnergyChIo::Class_Name()
{
   return "KVChannelEnergyChIo";
}

//______________________________________________________________________________
const char *KVChannelEnergyChIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyChIo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChannelEnergyChIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyChIo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChannelEnergyChIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyChIo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChannelEnergyChIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyChIo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChannelEnergyBrho::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChannelEnergyBrho::Class_Name()
{
   return "KVChannelEnergyBrho";
}

//______________________________________________________________________________
const char *KVChannelEnergyBrho::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyBrho*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChannelEnergyBrho::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyBrho*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChannelEnergyBrho::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyBrho*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChannelEnergyBrho::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyBrho*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRADetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRADetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRADetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADetector(void *p) {
      return  p ? new(p) ::KVINDRADetector : new ::KVINDRADetector;
   }
   static void *newArray_KVINDRADetector(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADetector[nElements] : new ::KVINDRADetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADetector(void *p) {
      delete ((::KVINDRADetector*)p);
   }
   static void deleteArray_KVINDRADetector(void *p) {
      delete [] ((::KVINDRADetector*)p);
   }
   static void destruct_KVINDRADetector(void *p) {
      typedef ::KVINDRADetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRADetector

//______________________________________________________________________________
void KVINDRATelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRATelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRATelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRATelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRATelescope(void *p) {
      return  p ? new(p) ::KVINDRATelescope : new ::KVINDRATelescope;
   }
   static void *newArray_KVINDRATelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRATelescope[nElements] : new ::KVINDRATelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRATelescope(void *p) {
      delete ((::KVINDRATelescope*)p);
   }
   static void deleteArray_KVINDRATelescope(void *p) {
      delete [] ((::KVINDRATelescope*)p);
   }
   static void destruct_KVINDRATelescope(void *p) {
      typedef ::KVINDRATelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRATelescope

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSilicon(void *p) {
      return  p ? new(p) ::KVSilicon : new ::KVSilicon;
   }
   static void *newArray_KVSilicon(Long_t nElements, void *p) {
      return p ? new(p) ::KVSilicon[nElements] : new ::KVSilicon[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSilicon(void *p) {
      delete ((::KVSilicon*)p);
   }
   static void deleteArray_KVSilicon(void *p) {
      delete [] ((::KVSilicon*)p);
   }
   static void destruct_KVSilicon(void *p) {
      typedef ::KVSilicon current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSilicon(TBuffer &buf, void *obj) {
      ((::KVSilicon*)obj)->::KVSilicon::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSilicon

//______________________________________________________________________________
void KVSi75::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSi75.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSi75::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSi75::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSi75(void *p) {
      return  p ? new(p) ::KVSi75 : new ::KVSi75;
   }
   static void *newArray_KVSi75(Long_t nElements, void *p) {
      return p ? new(p) ::KVSi75[nElements] : new ::KVSi75[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSi75(void *p) {
      delete ((::KVSi75*)p);
   }
   static void deleteArray_KVSi75(void *p) {
      delete [] ((::KVSi75*)p);
   }
   static void destruct_KVSi75(void *p) {
      typedef ::KVSi75 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSi75

//______________________________________________________________________________
void KVSiLi::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSiLi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSiLi::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSiLi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSiLi(void *p) {
      return  p ? new(p) ::KVSiLi : new ::KVSiLi;
   }
   static void *newArray_KVSiLi(Long_t nElements, void *p) {
      return p ? new(p) ::KVSiLi[nElements] : new ::KVSiLi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSiLi(void *p) {
      delete ((::KVSiLi*)p);
   }
   static void deleteArray_KVSiLi(void *p) {
      delete [] ((::KVSiLi*)p);
   }
   static void destruct_KVSiLi(void *p) {
      typedef ::KVSiLi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSiLi

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSilicon_e475s(void *p) {
      return  p ? new(p) ::KVSilicon_e475s : new ::KVSilicon_e475s;
   }
   static void *newArray_KVSilicon_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVSilicon_e475s[nElements] : new ::KVSilicon_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSilicon_e475s(void *p) {
      delete ((::KVSilicon_e475s*)p);
   }
   static void deleteArray_KVSilicon_e475s(void *p) {
      delete [] ((::KVSilicon_e475s*)p);
   }
   static void destruct_KVSilicon_e475s(void *p) {
      typedef ::KVSilicon_e475s current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSilicon_e475s(TBuffer &buf, void *obj) {
      ((::KVSilicon_e475s*)obj)->::KVSilicon_e475s::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSilicon_e475s

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChIo(void *p) {
      return  p ? new(p) ::KVChIo : new ::KVChIo;
   }
   static void *newArray_KVChIo(Long_t nElements, void *p) {
      return p ? new(p) ::KVChIo[nElements] : new ::KVChIo[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChIo(void *p) {
      delete ((::KVChIo*)p);
   }
   static void deleteArray_KVChIo(void *p) {
      delete [] ((::KVChIo*)p);
   }
   static void destruct_KVChIo(void *p) {
      typedef ::KVChIo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVChIo(TBuffer &buf, void *obj) {
      ((::KVChIo*)obj)->::KVChIo::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVChIo

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChIo_e475s(void *p) {
      return  p ? new(p) ::KVChIo_e475s : new ::KVChIo_e475s;
   }
   static void *newArray_KVChIo_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVChIo_e475s[nElements] : new ::KVChIo_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChIo_e475s(void *p) {
      delete ((::KVChIo_e475s*)p);
   }
   static void deleteArray_KVChIo_e475s(void *p) {
      delete [] ((::KVChIo_e475s*)p);
   }
   static void destruct_KVChIo_e475s(void *p) {
      typedef ::KVChIo_e475s current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVChIo_e475s(TBuffer &buf, void *obj) {
      ((::KVChIo_e475s*)obj)->::KVChIo_e475s::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVChIo_e475s

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCsI(void *p) {
      return  p ? new(p) ::KVCsI : new ::KVCsI;
   }
   static void *newArray_KVCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVCsI[nElements] : new ::KVCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCsI(void *p) {
      delete ((::KVCsI*)p);
   }
   static void deleteArray_KVCsI(void *p) {
      delete [] ((::KVCsI*)p);
   }
   static void destruct_KVCsI(void *p) {
      typedef ::KVCsI current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCsI(TBuffer &buf, void *obj) {
      ((::KVCsI*)obj)->::KVCsI::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCsI

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCsI_e475s(void *p) {
      return  p ? new(p) ::KVCsI_e475s : new ::KVCsI_e475s;
   }
   static void *newArray_KVCsI_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVCsI_e475s[nElements] : new ::KVCsI_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCsI_e475s(void *p) {
      delete ((::KVCsI_e475s*)p);
   }
   static void deleteArray_KVCsI_e475s(void *p) {
      delete [] ((::KVCsI_e475s*)p);
   }
   static void destruct_KVCsI_e475s(void *p) {
      typedef ::KVCsI_e475s current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCsI_e475s(TBuffer &buf, void *obj) {
      ((::KVCsI_e475s*)obj)->::KVCsI_e475s::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCsI_e475s

//______________________________________________________________________________
void KVPhoswich::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPhoswich.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPhoswich::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPhoswich::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPhoswich(void *p) {
      return  p ? new(p) ::KVPhoswich : new ::KVPhoswich;
   }
   static void *newArray_KVPhoswich(Long_t nElements, void *p) {
      return p ? new(p) ::KVPhoswich[nElements] : new ::KVPhoswich[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPhoswich(void *p) {
      delete ((::KVPhoswich*)p);
   }
   static void deleteArray_KVPhoswich(void *p) {
      delete [] ((::KVPhoswich*)p);
   }
   static void destruct_KVPhoswich(void *p) {
      typedef ::KVPhoswich current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPhoswich

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBIC(void *p) {
      return  p ? new(p) ::KVBIC : new ::KVBIC;
   }
   static void *newArray_KVBIC(Long_t nElements, void *p) {
      return p ? new(p) ::KVBIC[nElements] : new ::KVBIC[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBIC(void *p) {
      delete ((::KVBIC*)p);
   }
   static void deleteArray_KVBIC(void *p) {
      delete [] ((::KVBIC*)p);
   }
   static void destruct_KVBIC(void *p) {
      typedef ::KVBIC current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBIC(TBuffer &buf, void *obj) {
      ((::KVBIC*)obj)->::KVBIC::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBIC

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSiB(void *p) {
      return  p ? new(p) ::KVSiB : new ::KVSiB;
   }
   static void *newArray_KVSiB(Long_t nElements, void *p) {
      return p ? new(p) ::KVSiB[nElements] : new ::KVSiB[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSiB(void *p) {
      delete ((::KVSiB*)p);
   }
   static void deleteArray_KVSiB(void *p) {
      delete [] ((::KVSiB*)p);
   }
   static void destruct_KVSiB(void *p) {
      typedef ::KVSiB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSiB(TBuffer &buf, void *obj) {
      ((::KVSiB*)obj)->::KVSiB::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSiB

//______________________________________________________________________________
void KVTelBlocking::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTelBlocking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTelBlocking::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTelBlocking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTelBlocking(void *p) {
      return  p ? new(p) ::KVTelBlocking : new ::KVTelBlocking;
   }
   static void *newArray_KVTelBlocking(Long_t nElements, void *p) {
      return p ? new(p) ::KVTelBlocking[nElements] : new ::KVTelBlocking[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTelBlocking(void *p) {
      delete ((::KVTelBlocking*)p);
   }
   static void deleteArray_KVTelBlocking(void *p) {
      delete [] ((::KVTelBlocking*)p);
   }
   static void destruct_KVTelBlocking(void *p) {
      typedef ::KVTelBlocking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTelBlocking

//______________________________________________________________________________
void KVLightEnergyCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLightEnergyCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLightEnergyCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLightEnergyCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLightEnergyCsI(void *p) {
      return  p ? new(p) ::KVLightEnergyCsI : new ::KVLightEnergyCsI;
   }
   static void *newArray_KVLightEnergyCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVLightEnergyCsI[nElements] : new ::KVLightEnergyCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLightEnergyCsI(void *p) {
      delete ((::KVLightEnergyCsI*)p);
   }
   static void deleteArray_KVLightEnergyCsI(void *p) {
      delete [] ((::KVLightEnergyCsI*)p);
   }
   static void destruct_KVLightEnergyCsI(void *p) {
      typedef ::KVLightEnergyCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLightEnergyCsI

//______________________________________________________________________________
void KVChannelEnergyChIo::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChannelEnergyChIo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChannelEnergyChIo::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChannelEnergyChIo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChannelEnergyChIo(void *p) {
      return  p ? new(p) ::KVChannelEnergyChIo : new ::KVChannelEnergyChIo;
   }
   static void *newArray_KVChannelEnergyChIo(Long_t nElements, void *p) {
      return p ? new(p) ::KVChannelEnergyChIo[nElements] : new ::KVChannelEnergyChIo[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChannelEnergyChIo(void *p) {
      delete ((::KVChannelEnergyChIo*)p);
   }
   static void deleteArray_KVChannelEnergyChIo(void *p) {
      delete [] ((::KVChannelEnergyChIo*)p);
   }
   static void destruct_KVChannelEnergyChIo(void *p) {
      typedef ::KVChannelEnergyChIo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChannelEnergyChIo

//______________________________________________________________________________
void KVChannelEnergyBrho::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChannelEnergyBrho.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChannelEnergyBrho::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChannelEnergyBrho::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChannelEnergyBrho(void *p) {
      return  p ? new(p) ::KVChannelEnergyBrho : new ::KVChannelEnergyBrho;
   }
   static void *newArray_KVChannelEnergyBrho(Long_t nElements, void *p) {
      return p ? new(p) ::KVChannelEnergyBrho[nElements] : new ::KVChannelEnergyBrho[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChannelEnergyBrho(void *p) {
      delete ((::KVChannelEnergyBrho*)p);
   }
   static void deleteArray_KVChannelEnergyBrho(void *p) {
      delete [] ((::KVChannelEnergyBrho*)p);
   }
   static void destruct_KVChannelEnergyBrho(void *p) {
      typedef ::KVChannelEnergyBrho current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChannelEnergyBrho

namespace {
  void TriggerDictionaryInitialization_libKVIndrageometry_Impl() {
    static const char* headers[] = {
"KVLightEnergyCsI.h",
"KVCsI.h",
"KVINDRATelescope.h",
"KVChIo_e475s.h",
"KVSiB.h",
"KVPhoswich.h",
"KVSilicon_e475s.h",
"KVINDRADetector.h",
"KVChIo.h",
"KVTelBlocking.h",
"KVCsI_e475s.h",
"KVChannelEnergyBrho.h",
"KVBIC.h",
"KVSilicon.h",
"KVChannelEnergyChIo.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/geometry/inc",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/geometry/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Detectors of INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCsI.h")))  KVINDRADetector;
class __attribute__((annotate(R"ATTRDUMP(A detector telescope in the INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCsI.h")))  KVINDRATelescope;
class __attribute__((annotate(R"ATTRDUMP(INDRA forward-rings silicon detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSiB.h")))  KVSilicon;
class __attribute__((annotate(R"ATTRDUMP(80um silicon detector for INDRA etalon telescopes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSiB.h")))  KVSi75;
class __attribute__((annotate(R"ATTRDUMP(2mm + 40um dead zone Si(Li) detector for INDRA etalon telescopes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSiB.h")))  KVSiLi;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVSilicon class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSilicon_e475s.h")))  KVSilicon_e475s;
class __attribute__((annotate(R"ATTRDUMP(The ionisation chamber detectors (ChIo) of the INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChIo_e475s.h")))  KVChIo;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVChIo class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChIo_e475s.h")))  KVChIo_e475s;
class __attribute__((annotate(R"ATTRDUMP(The CsI(Tl) detectors of the INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCsI.h")))  KVCsI;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVCsI class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCsI_e475s.h")))  KVCsI_e475s;
class __attribute__((annotate(R"ATTRDUMP(Phoswich telescopes of the INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPhoswich.h")))  KVPhoswich;
class __attribute__((annotate(R"ATTRDUMP(Blocking ChIo for E416 experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBIC.h")))  KVBIC;
class __attribute__((annotate(R"ATTRDUMP(Position sensitive silicon detector for E416 blocking telescope)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSiB.h")))  KVSiB;
class __attribute__((annotate(R"ATTRDUMP(Blocking telescope for E416 experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTelBlocking.h")))  KVTelBlocking;
class __attribute__((annotate(R"ATTRDUMP(Light-energy calibration for CsI detectors)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLightEnergyCsI.h")))  KVLightEnergyCsI;
class __attribute__((annotate(R"ATTRDUMP(Pedestal-corrected linear channel-energy calibration from thoron and elastic peaks for ChIo detectors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChannelEnergyChIo.h")))  KVChannelEnergyChIo;
class __attribute__((annotate(R"ATTRDUMP(Pedestal-corrected linear channel-energy calibration from Brho data for Si and ChIo detectors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChannelEnergyBrho.h")))  KVChannelEnergyBrho;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVLightEnergyCsI.h"
#include "KVCsI.h"
#include "KVINDRATelescope.h"
#include "KVChIo_e475s.h"
#include "KVSiB.h"
#include "KVPhoswich.h"
#include "KVSilicon_e475s.h"
#include "KVINDRADetector.h"
#include "KVChIo.h"
#include "KVTelBlocking.h"
#include "KVCsI_e475s.h"
#include "KVChannelEnergyBrho.h"
#include "KVBIC.h"
#include "KVSilicon.h"
#include "KVChannelEnergyChIo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVBIC", payloadCode, "@",
"KVChIo", payloadCode, "@",
"KVChIo_e475s", payloadCode, "@",
"KVChannelEnergyBrho", payloadCode, "@",
"KVChannelEnergyChIo", payloadCode, "@",
"KVCsI", payloadCode, "@",
"KVCsI_e475s", payloadCode, "@",
"KVINDRADetector", payloadCode, "@",
"KVINDRATelescope", payloadCode, "@",
"KVLightEnergyCsI", payloadCode, "@",
"KVPhoswich", payloadCode, "@",
"KVSi75", payloadCode, "@",
"KVSiB", payloadCode, "@",
"KVSiLi", payloadCode, "@",
"KVSilicon", payloadCode, "@",
"KVSilicon_e475s", payloadCode, "@",
"KVTelBlocking", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndrageometry",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndrageometry_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndrageometry_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndrageometry() {
  TriggerDictionaryInitialization_libKVIndrageometry_Impl();
}
