// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndraidentification

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
#include "KVIDChIoSiCorr.h"
#include "KVIDChIoSi75_camp5.h"
#include "KVIDSiCorrCsI.h"
#include "KVIDChIoCsI.h"
#include "KVIDChIoSi_e613.h"
#include "KVINDRACodeMask.h"
#include "KVIDGChIoSi_e494s.h"
#include "KVIDSiLiCsI_e494s.h"
#include "KVIDSi75SiLi_e494s.h"
#include "KVIDCsI.h"
#include "KVIDChIoSiLi.h"
#include "KVIDSiLiCsI_camp5.h"
#include "KVINDRAIDTelescope.h"
#include "KVIDChIoSi.h"
#include "KVIDSiCsI_e613.h"
#include "KVIDCsIRLLine.h"
#include "KVIDSiCsI5.h"
#include "KVIDSi75SiLi_camp5.h"
#include "KVIDSiCsI.h"
#include "KVDP2toCsIGridConvertor.h"
#include "KVIDChIoCorrCsI.h"
#include "KVIDGCsI.h"
#include "KVIDCsI_e475s.h"
#include "KVIDGChIoSi.h"
#include "KVIDChIoSi75_e494s.h"
#include "KVIDChIoCorrCsI_e494s.h"
#include "KVIDChIoSi_e475s.h"
#include "KVIDSi75SiLi.h"
#include "KVINDRACodes.h"
#include "KVIDChIoCsI_camp5.h"
#include "KVIDSiLiCsI.h"
#include "KVIDSi150CsI_camp5.h"
#include "KVIDChIoSi75.h"
#include "KVIDPhoswich.h"
#include "KVIDChIoCsI_e475s.h"
#include "KVINDRARRMValidator.h"
#include "KVIDChIoSi5.h"
#include "KVIDSiCsI_e475s.h"
#include "KVIDBlocking.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRACodes(void *p = 0);
   static void *newArray_KVINDRACodes(Long_t size, void *p);
   static void delete_KVINDRACodes(void *p);
   static void deleteArray_KVINDRACodes(void *p);
   static void destruct_KVINDRACodes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRACodes*)
   {
      ::KVINDRACodes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRACodes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRACodes", ::KVINDRACodes::Class_Version(), "KVINDRACodes.h", 11,
                  typeid(::KVINDRACodes), DefineBehavior(ptr, ptr),
                  &::KVINDRACodes::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRACodes) );
      instance.SetNew(&new_KVINDRACodes);
      instance.SetNewArray(&newArray_KVINDRACodes);
      instance.SetDelete(&delete_KVINDRACodes);
      instance.SetDeleteArray(&deleteArray_KVINDRACodes);
      instance.SetDestructor(&destruct_KVINDRACodes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRACodes*)
   {
      return GenerateInitInstanceLocal((::KVINDRACodes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRACodes*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRACodeMask(void *p = 0);
   static void *newArray_KVINDRACodeMask(Long_t size, void *p);
   static void delete_KVINDRACodeMask(void *p);
   static void deleteArray_KVINDRACodeMask(void *p);
   static void destruct_KVINDRACodeMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRACodeMask*)
   {
      ::KVINDRACodeMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRACodeMask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRACodeMask", ::KVINDRACodeMask::Class_Version(), "KVINDRACodeMask.h", 56,
                  typeid(::KVINDRACodeMask), DefineBehavior(ptr, ptr),
                  &::KVINDRACodeMask::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRACodeMask) );
      instance.SetNew(&new_KVINDRACodeMask);
      instance.SetNewArray(&newArray_KVINDRACodeMask);
      instance.SetDelete(&delete_KVINDRACodeMask);
      instance.SetDeleteArray(&deleteArray_KVINDRACodeMask);
      instance.SetDestructor(&destruct_KVINDRACodeMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRACodeMask*)
   {
      return GenerateInitInstanceLocal((::KVINDRACodeMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRACodeMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDP2toCsIGridConvertor(void *p = 0);
   static void *newArray_KVDP2toCsIGridConvertor(Long_t size, void *p);
   static void delete_KVDP2toCsIGridConvertor(void *p);
   static void deleteArray_KVDP2toCsIGridConvertor(void *p);
   static void destruct_KVDP2toCsIGridConvertor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDP2toCsIGridConvertor*)
   {
      ::KVDP2toCsIGridConvertor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDP2toCsIGridConvertor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDP2toCsIGridConvertor", ::KVDP2toCsIGridConvertor::Class_Version(), "KVDP2toCsIGridConvertor.h", 15,
                  typeid(::KVDP2toCsIGridConvertor), DefineBehavior(ptr, ptr),
                  &::KVDP2toCsIGridConvertor::Dictionary, isa_proxy, 4,
                  sizeof(::KVDP2toCsIGridConvertor) );
      instance.SetNew(&new_KVDP2toCsIGridConvertor);
      instance.SetNewArray(&newArray_KVDP2toCsIGridConvertor);
      instance.SetDelete(&delete_KVDP2toCsIGridConvertor);
      instance.SetDeleteArray(&deleteArray_KVDP2toCsIGridConvertor);
      instance.SetDestructor(&destruct_KVDP2toCsIGridConvertor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDP2toCsIGridConvertor*)
   {
      return GenerateInitInstanceLocal((::KVDP2toCsIGridConvertor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDP2toCsIGridConvertor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDCsIRLLine(void *p = 0);
   static void *newArray_KVIDCsIRLLine(Long_t size, void *p);
   static void delete_KVIDCsIRLLine(void *p);
   static void deleteArray_KVIDCsIRLLine(void *p);
   static void destruct_KVIDCsIRLLine(void *p);
   static Long64_t merge_KVIDCsIRLLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDCsIRLLine*)
   {
      ::KVIDCsIRLLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDCsIRLLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDCsIRLLine", ::KVIDCsIRLLine::Class_Version(), "KVIDCsIRLLine.h", 16,
                  typeid(::KVIDCsIRLLine), DefineBehavior(ptr, ptr),
                  &::KVIDCsIRLLine::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDCsIRLLine) );
      instance.SetNew(&new_KVIDCsIRLLine);
      instance.SetNewArray(&newArray_KVIDCsIRLLine);
      instance.SetDelete(&delete_KVIDCsIRLLine);
      instance.SetDeleteArray(&deleteArray_KVIDCsIRLLine);
      instance.SetDestructor(&destruct_KVIDCsIRLLine);
      instance.SetMerge(&merge_KVIDCsIRLLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDCsIRLLine*)
   {
      return GenerateInitInstanceLocal((::KVIDCsIRLLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDCsIRLLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGCsI(void *p = 0);
   static void *newArray_KVIDGCsI(Long_t size, void *p);
   static void delete_KVIDGCsI(void *p);
   static void deleteArray_KVIDGCsI(void *p);
   static void destruct_KVIDGCsI(void *p);
   static Long64_t merge_KVIDGCsI(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGCsI*)
   {
      ::KVIDGCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGCsI", ::KVIDGCsI::Class_Version(), "KVIDGCsI.h", 16,
                  typeid(::KVIDGCsI), DefineBehavior(ptr, ptr),
                  &::KVIDGCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGCsI) );
      instance.SetNew(&new_KVIDGCsI);
      instance.SetNewArray(&newArray_KVIDGCsI);
      instance.SetDelete(&delete_KVIDGCsI);
      instance.SetDeleteArray(&deleteArray_KVIDGCsI);
      instance.SetDestructor(&destruct_KVIDGCsI);
      instance.SetMerge(&merge_KVIDGCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDGCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGChIoSi(void *p = 0);
   static void *newArray_KVIDGChIoSi(Long_t size, void *p);
   static void delete_KVIDGChIoSi(void *p);
   static void deleteArray_KVIDGChIoSi(void *p);
   static void destruct_KVIDGChIoSi(void *p);
   static void streamer_KVIDGChIoSi(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDGChIoSi(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGChIoSi*)
   {
      ::KVIDGChIoSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGChIoSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGChIoSi", ::KVIDGChIoSi::Class_Version(), "KVIDGChIoSi.h", 17,
                  typeid(::KVIDGChIoSi), DefineBehavior(ptr, ptr),
                  &::KVIDGChIoSi::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDGChIoSi) );
      instance.SetNew(&new_KVIDGChIoSi);
      instance.SetNewArray(&newArray_KVIDGChIoSi);
      instance.SetDelete(&delete_KVIDGChIoSi);
      instance.SetDeleteArray(&deleteArray_KVIDGChIoSi);
      instance.SetDestructor(&destruct_KVIDGChIoSi);
      instance.SetStreamerFunc(&streamer_KVIDGChIoSi);
      instance.SetMerge(&merge_KVIDGChIoSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGChIoSi*)
   {
      return GenerateInitInstanceLocal((::KVIDGChIoSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGChIoSi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGChIoSi_e494s(void *p = 0);
   static void *newArray_KVIDGChIoSi_e494s(Long_t size, void *p);
   static void delete_KVIDGChIoSi_e494s(void *p);
   static void deleteArray_KVIDGChIoSi_e494s(void *p);
   static void destruct_KVIDGChIoSi_e494s(void *p);
   static Long64_t merge_KVIDGChIoSi_e494s(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGChIoSi_e494s*)
   {
      ::KVIDGChIoSi_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGChIoSi_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGChIoSi_e494s", ::KVIDGChIoSi_e494s::Class_Version(), "KVIDGChIoSi_e494s.h", 10,
                  typeid(::KVIDGChIoSi_e494s), DefineBehavior(ptr, ptr),
                  &::KVIDGChIoSi_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGChIoSi_e494s) );
      instance.SetNew(&new_KVIDGChIoSi_e494s);
      instance.SetNewArray(&newArray_KVIDGChIoSi_e494s);
      instance.SetDelete(&delete_KVIDGChIoSi_e494s);
      instance.SetDeleteArray(&deleteArray_KVIDGChIoSi_e494s);
      instance.SetDestructor(&destruct_KVIDGChIoSi_e494s);
      instance.SetMerge(&merge_KVIDGChIoSi_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGChIoSi_e494s*)
   {
      return GenerateInitInstanceLocal((::KVIDGChIoSi_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGChIoSi_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAIDTelescope(void *p = 0);
   static void *newArray_KVINDRAIDTelescope(Long_t size, void *p);
   static void delete_KVINDRAIDTelescope(void *p);
   static void deleteArray_KVINDRAIDTelescope(void *p);
   static void destruct_KVINDRAIDTelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAIDTelescope*)
   {
      ::KVINDRAIDTelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAIDTelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAIDTelescope", ::KVINDRAIDTelescope::Class_Version(), "KVINDRAIDTelescope.h", 7,
                  typeid(::KVINDRAIDTelescope), DefineBehavior(ptr, ptr),
                  &::KVINDRAIDTelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAIDTelescope) );
      instance.SetNew(&new_KVINDRAIDTelescope);
      instance.SetNewArray(&newArray_KVINDRAIDTelescope);
      instance.SetDelete(&delete_KVINDRAIDTelescope);
      instance.SetDeleteArray(&deleteArray_KVINDRAIDTelescope);
      instance.SetDestructor(&destruct_KVINDRAIDTelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAIDTelescope*)
   {
      return GenerateInitInstanceLocal((::KVINDRAIDTelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAIDTelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCsI(void *p = 0);
   static void *newArray_KVIDSiCsI(Long_t size, void *p);
   static void delete_KVIDSiCsI(void *p);
   static void deleteArray_KVIDSiCsI(void *p);
   static void destruct_KVIDSiCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCsI*)
   {
      ::KVIDSiCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCsI", ::KVIDSiCsI::Class_Version(), "KVIDSiCsI.h", 24,
                  typeid(::KVIDSiCsI), DefineBehavior(ptr, ptr),
                  &::KVIDSiCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCsI) );
      instance.SetNew(&new_KVIDSiCsI);
      instance.SetNewArray(&newArray_KVIDSiCsI);
      instance.SetDelete(&delete_KVIDSiCsI);
      instance.SetDeleteArray(&deleteArray_KVIDSiCsI);
      instance.SetDestructor(&destruct_KVIDSiCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCsI_e475s(void *p = 0);
   static void *newArray_KVIDSiCsI_e475s(Long_t size, void *p);
   static void delete_KVIDSiCsI_e475s(void *p);
   static void deleteArray_KVIDSiCsI_e475s(void *p);
   static void destruct_KVIDSiCsI_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCsI_e475s*)
   {
      ::KVIDSiCsI_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCsI_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCsI_e475s", ::KVIDSiCsI_e475s::Class_Version(), "KVIDSiCsI_e475s.h", 19,
                  typeid(::KVIDSiCsI_e475s), DefineBehavior(ptr, ptr),
                  &::KVIDSiCsI_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCsI_e475s) );
      instance.SetNew(&new_KVIDSiCsI_e475s);
      instance.SetNewArray(&newArray_KVIDSiCsI_e475s);
      instance.SetDelete(&delete_KVIDSiCsI_e475s);
      instance.SetDeleteArray(&deleteArray_KVIDSiCsI_e475s);
      instance.SetDestructor(&destruct_KVIDSiCsI_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCsI_e475s*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCsI_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCsI_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCsI_e613(void *p = 0);
   static void *newArray_KVIDSiCsI_e613(Long_t size, void *p);
   static void delete_KVIDSiCsI_e613(void *p);
   static void deleteArray_KVIDSiCsI_e613(void *p);
   static void destruct_KVIDSiCsI_e613(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCsI_e613*)
   {
      ::KVIDSiCsI_e613 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCsI_e613 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCsI_e613", ::KVIDSiCsI_e613::Class_Version(), "KVIDSiCsI_e613.h", 12,
                  typeid(::KVIDSiCsI_e613), DefineBehavior(ptr, ptr),
                  &::KVIDSiCsI_e613::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCsI_e613) );
      instance.SetNew(&new_KVIDSiCsI_e613);
      instance.SetNewArray(&newArray_KVIDSiCsI_e613);
      instance.SetDelete(&delete_KVIDSiCsI_e613);
      instance.SetDeleteArray(&deleteArray_KVIDSiCsI_e613);
      instance.SetDestructor(&destruct_KVIDSiCsI_e613);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCsI_e613*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCsI_e613*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCsI_e613*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiLiCsI(void *p = 0);
   static void *newArray_KVIDSiLiCsI(Long_t size, void *p);
   static void delete_KVIDSiLiCsI(void *p);
   static void deleteArray_KVIDSiLiCsI(void *p);
   static void destruct_KVIDSiLiCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiLiCsI*)
   {
      ::KVIDSiLiCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiLiCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiLiCsI", ::KVIDSiLiCsI::Class_Version(), "KVIDSiLiCsI.h", 24,
                  typeid(::KVIDSiLiCsI), DefineBehavior(ptr, ptr),
                  &::KVIDSiLiCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiLiCsI) );
      instance.SetNew(&new_KVIDSiLiCsI);
      instance.SetNewArray(&newArray_KVIDSiLiCsI);
      instance.SetDelete(&delete_KVIDSiLiCsI);
      instance.SetDeleteArray(&deleteArray_KVIDSiLiCsI);
      instance.SetDestructor(&destruct_KVIDSiLiCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiLiCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDSiLiCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiLiCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSi75SiLi(void *p = 0);
   static void *newArray_KVIDSi75SiLi(Long_t size, void *p);
   static void delete_KVIDSi75SiLi(void *p);
   static void deleteArray_KVIDSi75SiLi(void *p);
   static void destruct_KVIDSi75SiLi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSi75SiLi*)
   {
      ::KVIDSi75SiLi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSi75SiLi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSi75SiLi", ::KVIDSi75SiLi::Class_Version(), "KVIDSi75SiLi.h", 24,
                  typeid(::KVIDSi75SiLi), DefineBehavior(ptr, ptr),
                  &::KVIDSi75SiLi::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSi75SiLi) );
      instance.SetNew(&new_KVIDSi75SiLi);
      instance.SetNewArray(&newArray_KVIDSi75SiLi);
      instance.SetDelete(&delete_KVIDSi75SiLi);
      instance.SetDeleteArray(&deleteArray_KVIDSi75SiLi);
      instance.SetDestructor(&destruct_KVIDSi75SiLi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSi75SiLi*)
   {
      return GenerateInitInstanceLocal((::KVIDSi75SiLi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSi75SiLi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi(void *p = 0);
   static void *newArray_KVIDChIoSi(Long_t size, void *p);
   static void delete_KVIDChIoSi(void *p);
   static void deleteArray_KVIDChIoSi(void *p);
   static void destruct_KVIDChIoSi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi*)
   {
      ::KVIDChIoSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi", ::KVIDChIoSi::Class_Version(), "KVIDChIoSi.h", 24,
                  typeid(::KVIDChIoSi), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi) );
      instance.SetNew(&new_KVIDChIoSi);
      instance.SetNewArray(&newArray_KVIDChIoSi);
      instance.SetDelete(&delete_KVIDChIoSi);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi);
      instance.SetDestructor(&destruct_KVIDChIoSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi75(void *p = 0);
   static void *newArray_KVIDChIoSi75(Long_t size, void *p);
   static void delete_KVIDChIoSi75(void *p);
   static void deleteArray_KVIDChIoSi75(void *p);
   static void destruct_KVIDChIoSi75(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi75*)
   {
      ::KVIDChIoSi75 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi75 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi75", ::KVIDChIoSi75::Class_Version(), "KVIDChIoSi75.h", 24,
                  typeid(::KVIDChIoSi75), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi75::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi75) );
      instance.SetNew(&new_KVIDChIoSi75);
      instance.SetNewArray(&newArray_KVIDChIoSi75);
      instance.SetDelete(&delete_KVIDChIoSi75);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi75);
      instance.SetDestructor(&destruct_KVIDChIoSi75);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi75*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi75*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi75*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSiLi(void *p = 0);
   static void *newArray_KVIDChIoSiLi(Long_t size, void *p);
   static void delete_KVIDChIoSiLi(void *p);
   static void deleteArray_KVIDChIoSiLi(void *p);
   static void destruct_KVIDChIoSiLi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSiLi*)
   {
      ::KVIDChIoSiLi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSiLi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSiLi", ::KVIDChIoSiLi::Class_Version(), "KVIDChIoSiLi.h", 10,
                  typeid(::KVIDChIoSiLi), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSiLi::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSiLi) );
      instance.SetNew(&new_KVIDChIoSiLi);
      instance.SetNewArray(&newArray_KVIDChIoSiLi);
      instance.SetDelete(&delete_KVIDChIoSiLi);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSiLi);
      instance.SetDestructor(&destruct_KVIDChIoSiLi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSiLi*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSiLi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSiLi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi_e475s(void *p = 0);
   static void *newArray_KVIDChIoSi_e475s(Long_t size, void *p);
   static void delete_KVIDChIoSi_e475s(void *p);
   static void deleteArray_KVIDChIoSi_e475s(void *p);
   static void destruct_KVIDChIoSi_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi_e475s*)
   {
      ::KVIDChIoSi_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi_e475s", ::KVIDChIoSi_e475s::Class_Version(), "KVIDChIoSi_e475s.h", 15,
                  typeid(::KVIDChIoSi_e475s), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi_e475s) );
      instance.SetNew(&new_KVIDChIoSi_e475s);
      instance.SetNewArray(&newArray_KVIDChIoSi_e475s);
      instance.SetDelete(&delete_KVIDChIoSi_e475s);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi_e475s);
      instance.SetDestructor(&destruct_KVIDChIoSi_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi_e475s*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoCsI_e475s(void *p = 0);
   static void *newArray_KVIDChIoCsI_e475s(Long_t size, void *p);
   static void delete_KVIDChIoCsI_e475s(void *p);
   static void deleteArray_KVIDChIoCsI_e475s(void *p);
   static void destruct_KVIDChIoCsI_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoCsI_e475s*)
   {
      ::KVIDChIoCsI_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoCsI_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoCsI_e475s", ::KVIDChIoCsI_e475s::Class_Version(), "KVIDChIoCsI_e475s.h", 18,
                  typeid(::KVIDChIoCsI_e475s), DefineBehavior(ptr, ptr),
                  &::KVIDChIoCsI_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoCsI_e475s) );
      instance.SetNew(&new_KVIDChIoCsI_e475s);
      instance.SetNewArray(&newArray_KVIDChIoCsI_e475s);
      instance.SetDelete(&delete_KVIDChIoCsI_e475s);
      instance.SetDeleteArray(&deleteArray_KVIDChIoCsI_e475s);
      instance.SetDestructor(&destruct_KVIDChIoCsI_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoCsI_e475s*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoCsI_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoCsI_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDCsI_e475s(void *p = 0);
   static void *newArray_KVIDCsI_e475s(Long_t size, void *p);
   static void delete_KVIDCsI_e475s(void *p);
   static void deleteArray_KVIDCsI_e475s(void *p);
   static void destruct_KVIDCsI_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDCsI_e475s*)
   {
      ::KVIDCsI_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDCsI_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDCsI_e475s", ::KVIDCsI_e475s::Class_Version(), "KVIDCsI_e475s.h", 15,
                  typeid(::KVIDCsI_e475s), DefineBehavior(ptr, ptr),
                  &::KVIDCsI_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDCsI_e475s) );
      instance.SetNew(&new_KVIDCsI_e475s);
      instance.SetNewArray(&newArray_KVIDCsI_e475s);
      instance.SetDelete(&delete_KVIDCsI_e475s);
      instance.SetDeleteArray(&deleteArray_KVIDCsI_e475s);
      instance.SetDestructor(&destruct_KVIDCsI_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDCsI_e475s*)
   {
      return GenerateInitInstanceLocal((::KVIDCsI_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDCsI_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDCsI(void *p = 0);
   static void *newArray_KVIDCsI(Long_t size, void *p);
   static void delete_KVIDCsI(void *p);
   static void deleteArray_KVIDCsI(void *p);
   static void destruct_KVIDCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDCsI*)
   {
      ::KVIDCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDCsI", ::KVIDCsI::Class_Version(), "KVIDCsI.h", 24,
                  typeid(::KVIDCsI), DefineBehavior(ptr, ptr),
                  &::KVIDCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDCsI) );
      instance.SetNew(&new_KVIDCsI);
      instance.SetNewArray(&newArray_KVIDCsI);
      instance.SetDelete(&delete_KVIDCsI);
      instance.SetDeleteArray(&deleteArray_KVIDCsI);
      instance.SetDestructor(&destruct_KVIDCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDPhoswich(void *p = 0);
   static void *newArray_KVIDPhoswich(Long_t size, void *p);
   static void delete_KVIDPhoswich(void *p);
   static void deleteArray_KVIDPhoswich(void *p);
   static void destruct_KVIDPhoswich(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDPhoswich*)
   {
      ::KVIDPhoswich *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDPhoswich >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDPhoswich", ::KVIDPhoswich::Class_Version(), "KVIDPhoswich.h", 24,
                  typeid(::KVIDPhoswich), DefineBehavior(ptr, ptr),
                  &::KVIDPhoswich::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDPhoswich) );
      instance.SetNew(&new_KVIDPhoswich);
      instance.SetNewArray(&newArray_KVIDPhoswich);
      instance.SetDelete(&delete_KVIDPhoswich);
      instance.SetDeleteArray(&deleteArray_KVIDPhoswich);
      instance.SetDestructor(&destruct_KVIDPhoswich);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDPhoswich*)
   {
      return GenerateInitInstanceLocal((::KVIDPhoswich*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDPhoswich*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoCsI(void *p = 0);
   static void *newArray_KVIDChIoCsI(Long_t size, void *p);
   static void delete_KVIDChIoCsI(void *p);
   static void deleteArray_KVIDChIoCsI(void *p);
   static void destruct_KVIDChIoCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoCsI*)
   {
      ::KVIDChIoCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoCsI", ::KVIDChIoCsI::Class_Version(), "KVIDChIoCsI.h", 23,
                  typeid(::KVIDChIoCsI), DefineBehavior(ptr, ptr),
                  &::KVIDChIoCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoCsI) );
      instance.SetNew(&new_KVIDChIoCsI);
      instance.SetNewArray(&newArray_KVIDChIoCsI);
      instance.SetDelete(&delete_KVIDChIoCsI);
      instance.SetDeleteArray(&deleteArray_KVIDChIoCsI);
      instance.SetDestructor(&destruct_KVIDChIoCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSi150CsI_camp5(void *p = 0);
   static void *newArray_KVIDSi150CsI_camp5(Long_t size, void *p);
   static void delete_KVIDSi150CsI_camp5(void *p);
   static void deleteArray_KVIDSi150CsI_camp5(void *p);
   static void destruct_KVIDSi150CsI_camp5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSi150CsI_camp5*)
   {
      ::KVIDSi150CsI_camp5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSi150CsI_camp5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSi150CsI_camp5", ::KVIDSi150CsI_camp5::Class_Version(), "KVIDSi150CsI_camp5.h", 12,
                  typeid(::KVIDSi150CsI_camp5), DefineBehavior(ptr, ptr),
                  &::KVIDSi150CsI_camp5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSi150CsI_camp5) );
      instance.SetNew(&new_KVIDSi150CsI_camp5);
      instance.SetNewArray(&newArray_KVIDSi150CsI_camp5);
      instance.SetDelete(&delete_KVIDSi150CsI_camp5);
      instance.SetDeleteArray(&deleteArray_KVIDSi150CsI_camp5);
      instance.SetDestructor(&destruct_KVIDSi150CsI_camp5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSi150CsI_camp5*)
   {
      return GenerateInitInstanceLocal((::KVIDSi150CsI_camp5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSi150CsI_camp5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi5(void *p = 0);
   static void *newArray_KVIDChIoSi5(Long_t size, void *p);
   static void delete_KVIDChIoSi5(void *p);
   static void deleteArray_KVIDChIoSi5(void *p);
   static void destruct_KVIDChIoSi5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi5*)
   {
      ::KVIDChIoSi5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi5", ::KVIDChIoSi5::Class_Version(), "KVIDChIoSi5.h", 15,
                  typeid(::KVIDChIoSi5), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi5) );
      instance.SetNew(&new_KVIDChIoSi5);
      instance.SetNewArray(&newArray_KVIDChIoSi5);
      instance.SetDelete(&delete_KVIDChIoSi5);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi5);
      instance.SetDestructor(&destruct_KVIDChIoSi5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi5*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSiCorr(void *p = 0);
   static void *newArray_KVIDChIoSiCorr(Long_t size, void *p);
   static void delete_KVIDChIoSiCorr(void *p);
   static void deleteArray_KVIDChIoSiCorr(void *p);
   static void destruct_KVIDChIoSiCorr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSiCorr*)
   {
      ::KVIDChIoSiCorr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSiCorr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSiCorr", ::KVIDChIoSiCorr::Class_Version(), "KVIDChIoSiCorr.h", 19,
                  typeid(::KVIDChIoSiCorr), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSiCorr::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSiCorr) );
      instance.SetNew(&new_KVIDChIoSiCorr);
      instance.SetNewArray(&newArray_KVIDChIoSiCorr);
      instance.SetDelete(&delete_KVIDChIoSiCorr);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSiCorr);
      instance.SetDestructor(&destruct_KVIDChIoSiCorr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSiCorr*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSiCorr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSiCorr*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi75_camp5(void *p = 0);
   static void *newArray_KVIDChIoSi75_camp5(Long_t size, void *p);
   static void delete_KVIDChIoSi75_camp5(void *p);
   static void deleteArray_KVIDChIoSi75_camp5(void *p);
   static void destruct_KVIDChIoSi75_camp5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi75_camp5*)
   {
      ::KVIDChIoSi75_camp5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi75_camp5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi75_camp5", ::KVIDChIoSi75_camp5::Class_Version(), "KVIDChIoSi75_camp5.h", 9,
                  typeid(::KVIDChIoSi75_camp5), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi75_camp5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi75_camp5) );
      instance.SetNew(&new_KVIDChIoSi75_camp5);
      instance.SetNewArray(&newArray_KVIDChIoSi75_camp5);
      instance.SetDelete(&delete_KVIDChIoSi75_camp5);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi75_camp5);
      instance.SetDestructor(&destruct_KVIDChIoSi75_camp5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi75_camp5*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi75_camp5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi75_camp5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoCsI_camp5(void *p = 0);
   static void *newArray_KVIDChIoCsI_camp5(Long_t size, void *p);
   static void delete_KVIDChIoCsI_camp5(void *p);
   static void deleteArray_KVIDChIoCsI_camp5(void *p);
   static void destruct_KVIDChIoCsI_camp5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoCsI_camp5*)
   {
      ::KVIDChIoCsI_camp5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoCsI_camp5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoCsI_camp5", ::KVIDChIoCsI_camp5::Class_Version(), "KVIDChIoCsI_camp5.h", 18,
                  typeid(::KVIDChIoCsI_camp5), DefineBehavior(ptr, ptr),
                  &::KVIDChIoCsI_camp5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoCsI_camp5) );
      instance.SetNew(&new_KVIDChIoCsI_camp5);
      instance.SetNewArray(&newArray_KVIDChIoCsI_camp5);
      instance.SetDelete(&delete_KVIDChIoCsI_camp5);
      instance.SetDeleteArray(&deleteArray_KVIDChIoCsI_camp5);
      instance.SetDestructor(&destruct_KVIDChIoCsI_camp5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoCsI_camp5*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoCsI_camp5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoCsI_camp5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoCorrCsI(void *p = 0);
   static void *newArray_KVIDChIoCorrCsI(Long_t size, void *p);
   static void delete_KVIDChIoCorrCsI(void *p);
   static void deleteArray_KVIDChIoCorrCsI(void *p);
   static void destruct_KVIDChIoCorrCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoCorrCsI*)
   {
      ::KVIDChIoCorrCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoCorrCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoCorrCsI", ::KVIDChIoCorrCsI::Class_Version(), "KVIDChIoCorrCsI.h", 18,
                  typeid(::KVIDChIoCorrCsI), DefineBehavior(ptr, ptr),
                  &::KVIDChIoCorrCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoCorrCsI) );
      instance.SetNew(&new_KVIDChIoCorrCsI);
      instance.SetNewArray(&newArray_KVIDChIoCorrCsI);
      instance.SetDelete(&delete_KVIDChIoCorrCsI);
      instance.SetDeleteArray(&deleteArray_KVIDChIoCorrCsI);
      instance.SetDestructor(&destruct_KVIDChIoCorrCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoCorrCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoCorrCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSi75SiLi_camp5(void *p = 0);
   static void *newArray_KVIDSi75SiLi_camp5(Long_t size, void *p);
   static void delete_KVIDSi75SiLi_camp5(void *p);
   static void deleteArray_KVIDSi75SiLi_camp5(void *p);
   static void destruct_KVIDSi75SiLi_camp5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSi75SiLi_camp5*)
   {
      ::KVIDSi75SiLi_camp5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSi75SiLi_camp5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSi75SiLi_camp5", ::KVIDSi75SiLi_camp5::Class_Version(), "KVIDSi75SiLi_camp5.h", 16,
                  typeid(::KVIDSi75SiLi_camp5), DefineBehavior(ptr, ptr),
                  &::KVIDSi75SiLi_camp5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSi75SiLi_camp5) );
      instance.SetNew(&new_KVIDSi75SiLi_camp5);
      instance.SetNewArray(&newArray_KVIDSi75SiLi_camp5);
      instance.SetDelete(&delete_KVIDSi75SiLi_camp5);
      instance.SetDeleteArray(&deleteArray_KVIDSi75SiLi_camp5);
      instance.SetDestructor(&destruct_KVIDSi75SiLi_camp5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSi75SiLi_camp5*)
   {
      return GenerateInitInstanceLocal((::KVIDSi75SiLi_camp5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSi75SiLi_camp5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiLiCsI_camp5(void *p = 0);
   static void *newArray_KVIDSiLiCsI_camp5(Long_t size, void *p);
   static void delete_KVIDSiLiCsI_camp5(void *p);
   static void deleteArray_KVIDSiLiCsI_camp5(void *p);
   static void destruct_KVIDSiLiCsI_camp5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiLiCsI_camp5*)
   {
      ::KVIDSiLiCsI_camp5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiLiCsI_camp5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiLiCsI_camp5", ::KVIDSiLiCsI_camp5::Class_Version(), "KVIDSiLiCsI_camp5.h", 16,
                  typeid(::KVIDSiLiCsI_camp5), DefineBehavior(ptr, ptr),
                  &::KVIDSiLiCsI_camp5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiLiCsI_camp5) );
      instance.SetNew(&new_KVIDSiLiCsI_camp5);
      instance.SetNewArray(&newArray_KVIDSiLiCsI_camp5);
      instance.SetDelete(&delete_KVIDSiLiCsI_camp5);
      instance.SetDeleteArray(&deleteArray_KVIDSiLiCsI_camp5);
      instance.SetDestructor(&destruct_KVIDSiLiCsI_camp5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiLiCsI_camp5*)
   {
      return GenerateInitInstanceLocal((::KVIDSiLiCsI_camp5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiLiCsI_camp5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDBlocking(void *p = 0);
   static void *newArray_KVIDBlocking(Long_t size, void *p);
   static void delete_KVIDBlocking(void *p);
   static void deleteArray_KVIDBlocking(void *p);
   static void destruct_KVIDBlocking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDBlocking*)
   {
      ::KVIDBlocking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDBlocking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDBlocking", ::KVIDBlocking::Class_Version(), "KVIDBlocking.h", 25,
                  typeid(::KVIDBlocking), DefineBehavior(ptr, ptr),
                  &::KVIDBlocking::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDBlocking) );
      instance.SetNew(&new_KVIDBlocking);
      instance.SetNewArray(&newArray_KVIDBlocking);
      instance.SetDelete(&delete_KVIDBlocking);
      instance.SetDeleteArray(&deleteArray_KVIDBlocking);
      instance.SetDestructor(&destruct_KVIDBlocking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDBlocking*)
   {
      return GenerateInitInstanceLocal((::KVIDBlocking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDBlocking*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi_e613(void *p = 0);
   static void *newArray_KVIDChIoSi_e613(Long_t size, void *p);
   static void delete_KVIDChIoSi_e613(void *p);
   static void deleteArray_KVIDChIoSi_e613(void *p);
   static void destruct_KVIDChIoSi_e613(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi_e613*)
   {
      ::KVIDChIoSi_e613 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi_e613 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi_e613", ::KVIDChIoSi_e613::Class_Version(), "KVIDChIoSi_e613.h", 9,
                  typeid(::KVIDChIoSi_e613), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi_e613::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi_e613) );
      instance.SetNew(&new_KVIDChIoSi_e613);
      instance.SetNewArray(&newArray_KVIDChIoSi_e613);
      instance.SetDelete(&delete_KVIDChIoSi_e613);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi_e613);
      instance.SetDestructor(&destruct_KVIDChIoSi_e613);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi_e613*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi_e613*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi_e613*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoCorrCsI_e494s(void *p = 0);
   static void *newArray_KVIDChIoCorrCsI_e494s(Long_t size, void *p);
   static void delete_KVIDChIoCorrCsI_e494s(void *p);
   static void deleteArray_KVIDChIoCorrCsI_e494s(void *p);
   static void destruct_KVIDChIoCorrCsI_e494s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoCorrCsI_e494s*)
   {
      ::KVIDChIoCorrCsI_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoCorrCsI_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoCorrCsI_e494s", ::KVIDChIoCorrCsI_e494s::Class_Version(), "KVIDChIoCorrCsI_e494s.h", 9,
                  typeid(::KVIDChIoCorrCsI_e494s), DefineBehavior(ptr, ptr),
                  &::KVIDChIoCorrCsI_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoCorrCsI_e494s) );
      instance.SetNew(&new_KVIDChIoCorrCsI_e494s);
      instance.SetNewArray(&newArray_KVIDChIoCorrCsI_e494s);
      instance.SetDelete(&delete_KVIDChIoCorrCsI_e494s);
      instance.SetDeleteArray(&deleteArray_KVIDChIoCorrCsI_e494s);
      instance.SetDestructor(&destruct_KVIDChIoCorrCsI_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoCorrCsI_e494s*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoCorrCsI_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDChIoSi75_e494s(void *p = 0);
   static void *newArray_KVIDChIoSi75_e494s(Long_t size, void *p);
   static void delete_KVIDChIoSi75_e494s(void *p);
   static void deleteArray_KVIDChIoSi75_e494s(void *p);
   static void destruct_KVIDChIoSi75_e494s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDChIoSi75_e494s*)
   {
      ::KVIDChIoSi75_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDChIoSi75_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDChIoSi75_e494s", ::KVIDChIoSi75_e494s::Class_Version(), "KVIDChIoSi75_e494s.h", 9,
                  typeid(::KVIDChIoSi75_e494s), DefineBehavior(ptr, ptr),
                  &::KVIDChIoSi75_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDChIoSi75_e494s) );
      instance.SetNew(&new_KVIDChIoSi75_e494s);
      instance.SetNewArray(&newArray_KVIDChIoSi75_e494s);
      instance.SetDelete(&delete_KVIDChIoSi75_e494s);
      instance.SetDeleteArray(&deleteArray_KVIDChIoSi75_e494s);
      instance.SetDestructor(&destruct_KVIDChIoSi75_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDChIoSi75_e494s*)
   {
      return GenerateInitInstanceLocal((::KVIDChIoSi75_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDChIoSi75_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCsI5(void *p = 0);
   static void *newArray_KVIDSiCsI5(Long_t size, void *p);
   static void delete_KVIDSiCsI5(void *p);
   static void deleteArray_KVIDSiCsI5(void *p);
   static void destruct_KVIDSiCsI5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCsI5*)
   {
      ::KVIDSiCsI5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCsI5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCsI5", ::KVIDSiCsI5::Class_Version(), "KVIDSiCsI5.h", 26,
                  typeid(::KVIDSiCsI5), DefineBehavior(ptr, ptr),
                  &::KVIDSiCsI5::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCsI5) );
      instance.SetNew(&new_KVIDSiCsI5);
      instance.SetNewArray(&newArray_KVIDSiCsI5);
      instance.SetDelete(&delete_KVIDSiCsI5);
      instance.SetDeleteArray(&deleteArray_KVIDSiCsI5);
      instance.SetDestructor(&destruct_KVIDSiCsI5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCsI5*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCsI5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCsI5*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCorrCsI(void *p = 0);
   static void *newArray_KVIDSiCorrCsI(Long_t size, void *p);
   static void delete_KVIDSiCorrCsI(void *p);
   static void deleteArray_KVIDSiCorrCsI(void *p);
   static void destruct_KVIDSiCorrCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCorrCsI*)
   {
      ::KVIDSiCorrCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCorrCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCorrCsI", ::KVIDSiCorrCsI::Class_Version(), "KVIDSiCorrCsI.h", 26,
                  typeid(::KVIDSiCorrCsI), DefineBehavior(ptr, ptr),
                  &::KVIDSiCorrCsI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCorrCsI) );
      instance.SetNew(&new_KVIDSiCorrCsI);
      instance.SetNewArray(&newArray_KVIDSiCorrCsI);
      instance.SetDelete(&delete_KVIDSiCorrCsI);
      instance.SetDeleteArray(&deleteArray_KVIDSiCorrCsI);
      instance.SetDestructor(&destruct_KVIDSiCorrCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCorrCsI*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCorrCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCorrCsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSi75SiLi_e494s(void *p = 0);
   static void *newArray_KVIDSi75SiLi_e494s(Long_t size, void *p);
   static void delete_KVIDSi75SiLi_e494s(void *p);
   static void deleteArray_KVIDSi75SiLi_e494s(void *p);
   static void destruct_KVIDSi75SiLi_e494s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSi75SiLi_e494s*)
   {
      ::KVIDSi75SiLi_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSi75SiLi_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSi75SiLi_e494s", ::KVIDSi75SiLi_e494s::Class_Version(), "KVIDSi75SiLi_e494s.h", 11,
                  typeid(::KVIDSi75SiLi_e494s), DefineBehavior(ptr, ptr),
                  &::KVIDSi75SiLi_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSi75SiLi_e494s) );
      instance.SetNew(&new_KVIDSi75SiLi_e494s);
      instance.SetNewArray(&newArray_KVIDSi75SiLi_e494s);
      instance.SetDelete(&delete_KVIDSi75SiLi_e494s);
      instance.SetDeleteArray(&deleteArray_KVIDSi75SiLi_e494s);
      instance.SetDestructor(&destruct_KVIDSi75SiLi_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSi75SiLi_e494s*)
   {
      return GenerateInitInstanceLocal((::KVIDSi75SiLi_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSi75SiLi_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiLiCsI_e494s(void *p = 0);
   static void *newArray_KVIDSiLiCsI_e494s(Long_t size, void *p);
   static void delete_KVIDSiLiCsI_e494s(void *p);
   static void deleteArray_KVIDSiLiCsI_e494s(void *p);
   static void destruct_KVIDSiLiCsI_e494s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiLiCsI_e494s*)
   {
      ::KVIDSiLiCsI_e494s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiLiCsI_e494s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiLiCsI_e494s", ::KVIDSiLiCsI_e494s::Class_Version(), "KVIDSiLiCsI_e494s.h", 12,
                  typeid(::KVIDSiLiCsI_e494s), DefineBehavior(ptr, ptr),
                  &::KVIDSiLiCsI_e494s::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiLiCsI_e494s) );
      instance.SetNew(&new_KVIDSiLiCsI_e494s);
      instance.SetNewArray(&newArray_KVIDSiLiCsI_e494s);
      instance.SetDelete(&delete_KVIDSiLiCsI_e494s);
      instance.SetDeleteArray(&deleteArray_KVIDSiLiCsI_e494s);
      instance.SetDestructor(&destruct_KVIDSiLiCsI_e494s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiLiCsI_e494s*)
   {
      return GenerateInitInstanceLocal((::KVIDSiLiCsI_e494s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiLiCsI_e494s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRARRMValidator(void *p = 0);
   static void *newArray_KVINDRARRMValidator(Long_t size, void *p);
   static void delete_KVINDRARRMValidator(void *p);
   static void deleteArray_KVINDRARRMValidator(void *p);
   static void destruct_KVINDRARRMValidator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARRMValidator*)
   {
      ::KVINDRARRMValidator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARRMValidator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARRMValidator", ::KVINDRARRMValidator::Class_Version(), "KVINDRARRMValidator.h", 13,
                  typeid(::KVINDRARRMValidator), DefineBehavior(ptr, ptr),
                  &::KVINDRARRMValidator::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRARRMValidator) );
      instance.SetNew(&new_KVINDRARRMValidator);
      instance.SetNewArray(&newArray_KVINDRARRMValidator);
      instance.SetDelete(&delete_KVINDRARRMValidator);
      instance.SetDeleteArray(&deleteArray_KVINDRARRMValidator);
      instance.SetDestructor(&destruct_KVINDRARRMValidator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARRMValidator*)
   {
      return GenerateInitInstanceLocal((::KVINDRARRMValidator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARRMValidator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRACodes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRACodes::Class_Name()
{
   return "KVINDRACodes";
}

//______________________________________________________________________________
const char *KVINDRACodes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRACodes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRACodes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRACodes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRACodeMask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRACodeMask::Class_Name()
{
   return "KVINDRACodeMask";
}

//______________________________________________________________________________
const char *KVINDRACodeMask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodeMask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRACodeMask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodeMask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRACodeMask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodeMask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRACodeMask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRACodeMask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDP2toCsIGridConvertor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDP2toCsIGridConvertor::Class_Name()
{
   return "KVDP2toCsIGridConvertor";
}

//______________________________________________________________________________
const char *KVDP2toCsIGridConvertor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toCsIGridConvertor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDP2toCsIGridConvertor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toCsIGridConvertor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDP2toCsIGridConvertor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toCsIGridConvertor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDP2toCsIGridConvertor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toCsIGridConvertor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDCsIRLLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDCsIRLLine::Class_Name()
{
   return "KVIDCsIRLLine";
}

//______________________________________________________________________________
const char *KVIDCsIRLLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsIRLLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDCsIRLLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsIRLLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDCsIRLLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsIRLLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDCsIRLLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsIRLLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGCsI::Class_Name()
{
   return "KVIDGCsI";
}

//______________________________________________________________________________
const char *KVIDGCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGChIoSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGChIoSi::Class_Name()
{
   return "KVIDGChIoSi";
}

//______________________________________________________________________________
const char *KVIDGChIoSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGChIoSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGChIoSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGChIoSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGChIoSi_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGChIoSi_e494s::Class_Name()
{
   return "KVIDGChIoSi_e494s";
}

//______________________________________________________________________________
const char *KVIDGChIoSi_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGChIoSi_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGChIoSi_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGChIoSi_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGChIoSi_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAIDTelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAIDTelescope::Class_Name()
{
   return "KVINDRAIDTelescope";
}

//______________________________________________________________________________
const char *KVINDRAIDTelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIDTelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAIDTelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIDTelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAIDTelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIDTelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAIDTelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAIDTelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCsI::Class_Name()
{
   return "KVIDSiCsI";
}

//______________________________________________________________________________
const char *KVIDSiCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCsI_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCsI_e475s::Class_Name()
{
   return "KVIDSiCsI_e475s";
}

//______________________________________________________________________________
const char *KVIDSiCsI_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCsI_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCsI_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCsI_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCsI_e613::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCsI_e613::Class_Name()
{
   return "KVIDSiCsI_e613";
}

//______________________________________________________________________________
const char *KVIDSiCsI_e613::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e613*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCsI_e613::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e613*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCsI_e613::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e613*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCsI_e613::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI_e613*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiLiCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiLiCsI::Class_Name()
{
   return "KVIDSiLiCsI";
}

//______________________________________________________________________________
const char *KVIDSiLiCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiLiCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSi75SiLi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSi75SiLi::Class_Name()
{
   return "KVIDSi75SiLi";
}

//______________________________________________________________________________
const char *KVIDSi75SiLi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSi75SiLi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi::Class_Name()
{
   return "KVIDChIoSi";
}

//______________________________________________________________________________
const char *KVIDChIoSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi75::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi75::Class_Name()
{
   return "KVIDChIoSi75";
}

//______________________________________________________________________________
const char *KVIDChIoSi75::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi75::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi75::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi75::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSiLi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSiLi::Class_Name()
{
   return "KVIDChIoSiLi";
}

//______________________________________________________________________________
const char *KVIDChIoSiLi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiLi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSiLi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiLi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSiLi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiLi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSiLi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiLi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi_e475s::Class_Name()
{
   return "KVIDChIoSi_e475s";
}

//______________________________________________________________________________
const char *KVIDChIoSi_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoCsI_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoCsI_e475s::Class_Name()
{
   return "KVIDChIoCsI_e475s";
}

//______________________________________________________________________________
const char *KVIDChIoCsI_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoCsI_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoCsI_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoCsI_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDCsI_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDCsI_e475s::Class_Name()
{
   return "KVIDCsI_e475s";
}

//______________________________________________________________________________
const char *KVIDCsI_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDCsI_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDCsI_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDCsI_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDCsI::Class_Name()
{
   return "KVIDCsI";
}

//______________________________________________________________________________
const char *KVIDCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDPhoswich::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDPhoswich::Class_Name()
{
   return "KVIDPhoswich";
}

//______________________________________________________________________________
const char *KVIDPhoswich::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDPhoswich*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDPhoswich::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDPhoswich*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDPhoswich::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDPhoswich*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDPhoswich::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDPhoswich*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoCsI::Class_Name()
{
   return "KVIDChIoCsI";
}

//______________________________________________________________________________
const char *KVIDChIoCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSi150CsI_camp5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSi150CsI_camp5::Class_Name()
{
   return "KVIDSi150CsI_camp5";
}

//______________________________________________________________________________
const char *KVIDSi150CsI_camp5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi150CsI_camp5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSi150CsI_camp5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi150CsI_camp5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSi150CsI_camp5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi150CsI_camp5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSi150CsI_camp5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi150CsI_camp5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi5::Class_Name()
{
   return "KVIDChIoSi5";
}

//______________________________________________________________________________
const char *KVIDChIoSi5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSiCorr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSiCorr::Class_Name()
{
   return "KVIDChIoSiCorr";
}

//______________________________________________________________________________
const char *KVIDChIoSiCorr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiCorr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSiCorr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiCorr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSiCorr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiCorr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSiCorr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSiCorr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi75_camp5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi75_camp5::Class_Name()
{
   return "KVIDChIoSi75_camp5";
}

//______________________________________________________________________________
const char *KVIDChIoSi75_camp5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_camp5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi75_camp5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_camp5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi75_camp5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_camp5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi75_camp5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_camp5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoCsI_camp5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoCsI_camp5::Class_Name()
{
   return "KVIDChIoCsI_camp5";
}

//______________________________________________________________________________
const char *KVIDChIoCsI_camp5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_camp5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoCsI_camp5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_camp5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoCsI_camp5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_camp5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoCsI_camp5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCsI_camp5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoCorrCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoCorrCsI::Class_Name()
{
   return "KVIDChIoCorrCsI";
}

//______________________________________________________________________________
const char *KVIDChIoCorrCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoCorrCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoCorrCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoCorrCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSi75SiLi_camp5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSi75SiLi_camp5::Class_Name()
{
   return "KVIDSi75SiLi_camp5";
}

//______________________________________________________________________________
const char *KVIDSi75SiLi_camp5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_camp5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSi75SiLi_camp5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_camp5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi_camp5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_camp5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi_camp5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_camp5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiLiCsI_camp5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiLiCsI_camp5::Class_Name()
{
   return "KVIDSiLiCsI_camp5";
}

//______________________________________________________________________________
const char *KVIDSiLiCsI_camp5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_camp5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiLiCsI_camp5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_camp5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI_camp5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_camp5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI_camp5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_camp5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDBlocking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDBlocking::Class_Name()
{
   return "KVIDBlocking";
}

//______________________________________________________________________________
const char *KVIDBlocking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDBlocking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDBlocking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDBlocking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDBlocking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDBlocking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDBlocking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDBlocking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi_e613::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi_e613::Class_Name()
{
   return "KVIDChIoSi_e613";
}

//______________________________________________________________________________
const char *KVIDChIoSi_e613::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e613*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi_e613::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e613*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi_e613::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e613*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi_e613::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi_e613*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoCorrCsI_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoCorrCsI_e494s::Class_Name()
{
   return "KVIDChIoCorrCsI_e494s";
}

//______________________________________________________________________________
const char *KVIDChIoCorrCsI_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoCorrCsI_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoCorrCsI_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoCorrCsI_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoCorrCsI_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDChIoSi75_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDChIoSi75_e494s::Class_Name()
{
   return "KVIDChIoSi75_e494s";
}

//______________________________________________________________________________
const char *KVIDChIoSi75_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDChIoSi75_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDChIoSi75_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDChIoSi75_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDChIoSi75_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCsI5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCsI5::Class_Name()
{
   return "KVIDSiCsI5";
}

//______________________________________________________________________________
const char *KVIDSiCsI5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCsI5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCsI5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCsI5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsI5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCorrCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCorrCsI::Class_Name()
{
   return "KVIDSiCorrCsI";
}

//______________________________________________________________________________
const char *KVIDSiCorrCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCorrCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCorrCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCorrCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCorrCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCorrCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCorrCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCorrCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSi75SiLi_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSi75SiLi_e494s::Class_Name()
{
   return "KVIDSi75SiLi_e494s";
}

//______________________________________________________________________________
const char *KVIDSi75SiLi_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSi75SiLi_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSi75SiLi_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSi75SiLi_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiLiCsI_e494s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiLiCsI_e494s::Class_Name()
{
   return "KVIDSiLiCsI_e494s";
}

//______________________________________________________________________________
const char *KVIDSiLiCsI_e494s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_e494s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiLiCsI_e494s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_e494s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI_e494s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_e494s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiLiCsI_e494s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiLiCsI_e494s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARRMValidator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARRMValidator::Class_Name()
{
   return "KVINDRARRMValidator";
}

//______________________________________________________________________________
const char *KVINDRARRMValidator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARRMValidator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARRMValidator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARRMValidator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARRMValidator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARRMValidator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARRMValidator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARRMValidator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRACodes::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRACodes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRACodes::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRACodes::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRACodes(void *p) {
      return  p ? new(p) ::KVINDRACodes : new ::KVINDRACodes;
   }
   static void *newArray_KVINDRACodes(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRACodes[nElements] : new ::KVINDRACodes[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRACodes(void *p) {
      delete ((::KVINDRACodes*)p);
   }
   static void deleteArray_KVINDRACodes(void *p) {
      delete [] ((::KVINDRACodes*)p);
   }
   static void destruct_KVINDRACodes(void *p) {
      typedef ::KVINDRACodes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRACodes

//______________________________________________________________________________
void KVINDRACodeMask::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRACodeMask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRACodeMask::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRACodeMask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRACodeMask(void *p) {
      return  p ? new(p) ::KVINDRACodeMask : new ::KVINDRACodeMask;
   }
   static void *newArray_KVINDRACodeMask(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRACodeMask[nElements] : new ::KVINDRACodeMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRACodeMask(void *p) {
      delete ((::KVINDRACodeMask*)p);
   }
   static void deleteArray_KVINDRACodeMask(void *p) {
      delete [] ((::KVINDRACodeMask*)p);
   }
   static void destruct_KVINDRACodeMask(void *p) {
      typedef ::KVINDRACodeMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRACodeMask

//______________________________________________________________________________
void KVDP2toCsIGridConvertor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDP2toCsIGridConvertor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDP2toCsIGridConvertor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDP2toCsIGridConvertor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDP2toCsIGridConvertor(void *p) {
      return  p ? new(p) ::KVDP2toCsIGridConvertor : new ::KVDP2toCsIGridConvertor;
   }
   static void *newArray_KVDP2toCsIGridConvertor(Long_t nElements, void *p) {
      return p ? new(p) ::KVDP2toCsIGridConvertor[nElements] : new ::KVDP2toCsIGridConvertor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDP2toCsIGridConvertor(void *p) {
      delete ((::KVDP2toCsIGridConvertor*)p);
   }
   static void deleteArray_KVDP2toCsIGridConvertor(void *p) {
      delete [] ((::KVDP2toCsIGridConvertor*)p);
   }
   static void destruct_KVDP2toCsIGridConvertor(void *p) {
      typedef ::KVDP2toCsIGridConvertor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDP2toCsIGridConvertor

//______________________________________________________________________________
void KVIDCsIRLLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDCsIRLLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDCsIRLLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDCsIRLLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDCsIRLLine(void *p) {
      return  p ? new(p) ::KVIDCsIRLLine : new ::KVIDCsIRLLine;
   }
   static void *newArray_KVIDCsIRLLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDCsIRLLine[nElements] : new ::KVIDCsIRLLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDCsIRLLine(void *p) {
      delete ((::KVIDCsIRLLine*)p);
   }
   static void deleteArray_KVIDCsIRLLine(void *p) {
      delete [] ((::KVIDCsIRLLine*)p);
   }
   static void destruct_KVIDCsIRLLine(void *p) {
      typedef ::KVIDCsIRLLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDCsIRLLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDCsIRLLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDCsIRLLine

//______________________________________________________________________________
void KVIDGCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGCsI(void *p) {
      return  p ? new(p) ::KVIDGCsI : new ::KVIDGCsI;
   }
   static void *newArray_KVIDGCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGCsI[nElements] : new ::KVIDGCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGCsI(void *p) {
      delete ((::KVIDGCsI*)p);
   }
   static void deleteArray_KVIDGCsI(void *p) {
      delete [] ((::KVIDGCsI*)p);
   }
   static void destruct_KVIDGCsI(void *p) {
      typedef ::KVIDGCsI current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDGCsI(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDGCsI*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDGCsI

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGChIoSi(void *p) {
      return  p ? new(p) ::KVIDGChIoSi : new ::KVIDGChIoSi;
   }
   static void *newArray_KVIDGChIoSi(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGChIoSi[nElements] : new ::KVIDGChIoSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGChIoSi(void *p) {
      delete ((::KVIDGChIoSi*)p);
   }
   static void deleteArray_KVIDGChIoSi(void *p) {
      delete [] ((::KVIDGChIoSi*)p);
   }
   static void destruct_KVIDGChIoSi(void *p) {
      typedef ::KVIDGChIoSi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDGChIoSi(TBuffer &buf, void *obj) {
      ((::KVIDGChIoSi*)obj)->::KVIDGChIoSi::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDGChIoSi(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDGChIoSi*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDGChIoSi

//______________________________________________________________________________
void KVIDGChIoSi_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGChIoSi_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGChIoSi_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGChIoSi_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGChIoSi_e494s(void *p) {
      return  p ? new(p) ::KVIDGChIoSi_e494s : new ::KVIDGChIoSi_e494s;
   }
   static void *newArray_KVIDGChIoSi_e494s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGChIoSi_e494s[nElements] : new ::KVIDGChIoSi_e494s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGChIoSi_e494s(void *p) {
      delete ((::KVIDGChIoSi_e494s*)p);
   }
   static void deleteArray_KVIDGChIoSi_e494s(void *p) {
      delete [] ((::KVIDGChIoSi_e494s*)p);
   }
   static void destruct_KVIDGChIoSi_e494s(void *p) {
      typedef ::KVIDGChIoSi_e494s current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDGChIoSi_e494s(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDGChIoSi_e494s*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDGChIoSi_e494s

//______________________________________________________________________________
void KVINDRAIDTelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAIDTelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAIDTelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAIDTelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAIDTelescope(void *p) {
      return  p ? new(p) ::KVINDRAIDTelescope : new ::KVINDRAIDTelescope;
   }
   static void *newArray_KVINDRAIDTelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAIDTelescope[nElements] : new ::KVINDRAIDTelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAIDTelescope(void *p) {
      delete ((::KVINDRAIDTelescope*)p);
   }
   static void deleteArray_KVINDRAIDTelescope(void *p) {
      delete [] ((::KVINDRAIDTelescope*)p);
   }
   static void destruct_KVINDRAIDTelescope(void *p) {
      typedef ::KVINDRAIDTelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAIDTelescope

//______________________________________________________________________________
void KVIDSiCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCsI(void *p) {
      return  p ? new(p) ::KVIDSiCsI : new ::KVIDSiCsI;
   }
   static void *newArray_KVIDSiCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCsI[nElements] : new ::KVIDSiCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCsI(void *p) {
      delete ((::KVIDSiCsI*)p);
   }
   static void deleteArray_KVIDSiCsI(void *p) {
      delete [] ((::KVIDSiCsI*)p);
   }
   static void destruct_KVIDSiCsI(void *p) {
      typedef ::KVIDSiCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCsI

//______________________________________________________________________________
void KVIDSiCsI_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCsI_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCsI_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCsI_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCsI_e475s(void *p) {
      return  p ? new(p) ::KVIDSiCsI_e475s : new ::KVIDSiCsI_e475s;
   }
   static void *newArray_KVIDSiCsI_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCsI_e475s[nElements] : new ::KVIDSiCsI_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCsI_e475s(void *p) {
      delete ((::KVIDSiCsI_e475s*)p);
   }
   static void deleteArray_KVIDSiCsI_e475s(void *p) {
      delete [] ((::KVIDSiCsI_e475s*)p);
   }
   static void destruct_KVIDSiCsI_e475s(void *p) {
      typedef ::KVIDSiCsI_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCsI_e475s

//______________________________________________________________________________
void KVIDSiCsI_e613::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCsI_e613.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCsI_e613::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCsI_e613::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCsI_e613(void *p) {
      return  p ? new(p) ::KVIDSiCsI_e613 : new ::KVIDSiCsI_e613;
   }
   static void *newArray_KVIDSiCsI_e613(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCsI_e613[nElements] : new ::KVIDSiCsI_e613[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCsI_e613(void *p) {
      delete ((::KVIDSiCsI_e613*)p);
   }
   static void deleteArray_KVIDSiCsI_e613(void *p) {
      delete [] ((::KVIDSiCsI_e613*)p);
   }
   static void destruct_KVIDSiCsI_e613(void *p) {
      typedef ::KVIDSiCsI_e613 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCsI_e613

//______________________________________________________________________________
void KVIDSiLiCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiLiCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiLiCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiLiCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiLiCsI(void *p) {
      return  p ? new(p) ::KVIDSiLiCsI : new ::KVIDSiLiCsI;
   }
   static void *newArray_KVIDSiLiCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiLiCsI[nElements] : new ::KVIDSiLiCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiLiCsI(void *p) {
      delete ((::KVIDSiLiCsI*)p);
   }
   static void deleteArray_KVIDSiLiCsI(void *p) {
      delete [] ((::KVIDSiLiCsI*)p);
   }
   static void destruct_KVIDSiLiCsI(void *p) {
      typedef ::KVIDSiLiCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiLiCsI

//______________________________________________________________________________
void KVIDSi75SiLi::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSi75SiLi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSi75SiLi::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSi75SiLi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSi75SiLi(void *p) {
      return  p ? new(p) ::KVIDSi75SiLi : new ::KVIDSi75SiLi;
   }
   static void *newArray_KVIDSi75SiLi(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSi75SiLi[nElements] : new ::KVIDSi75SiLi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSi75SiLi(void *p) {
      delete ((::KVIDSi75SiLi*)p);
   }
   static void deleteArray_KVIDSi75SiLi(void *p) {
      delete [] ((::KVIDSi75SiLi*)p);
   }
   static void destruct_KVIDSi75SiLi(void *p) {
      typedef ::KVIDSi75SiLi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSi75SiLi

//______________________________________________________________________________
void KVIDChIoSi::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi(void *p) {
      return  p ? new(p) ::KVIDChIoSi : new ::KVIDChIoSi;
   }
   static void *newArray_KVIDChIoSi(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi[nElements] : new ::KVIDChIoSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi(void *p) {
      delete ((::KVIDChIoSi*)p);
   }
   static void deleteArray_KVIDChIoSi(void *p) {
      delete [] ((::KVIDChIoSi*)p);
   }
   static void destruct_KVIDChIoSi(void *p) {
      typedef ::KVIDChIoSi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi

//______________________________________________________________________________
void KVIDChIoSi75::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi75.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi75::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi75::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi75(void *p) {
      return  p ? new(p) ::KVIDChIoSi75 : new ::KVIDChIoSi75;
   }
   static void *newArray_KVIDChIoSi75(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi75[nElements] : new ::KVIDChIoSi75[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi75(void *p) {
      delete ((::KVIDChIoSi75*)p);
   }
   static void deleteArray_KVIDChIoSi75(void *p) {
      delete [] ((::KVIDChIoSi75*)p);
   }
   static void destruct_KVIDChIoSi75(void *p) {
      typedef ::KVIDChIoSi75 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi75

//______________________________________________________________________________
void KVIDChIoSiLi::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSiLi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSiLi::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSiLi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSiLi(void *p) {
      return  p ? new(p) ::KVIDChIoSiLi : new ::KVIDChIoSiLi;
   }
   static void *newArray_KVIDChIoSiLi(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSiLi[nElements] : new ::KVIDChIoSiLi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSiLi(void *p) {
      delete ((::KVIDChIoSiLi*)p);
   }
   static void deleteArray_KVIDChIoSiLi(void *p) {
      delete [] ((::KVIDChIoSiLi*)p);
   }
   static void destruct_KVIDChIoSiLi(void *p) {
      typedef ::KVIDChIoSiLi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSiLi

//______________________________________________________________________________
void KVIDChIoSi_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi_e475s(void *p) {
      return  p ? new(p) ::KVIDChIoSi_e475s : new ::KVIDChIoSi_e475s;
   }
   static void *newArray_KVIDChIoSi_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi_e475s[nElements] : new ::KVIDChIoSi_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi_e475s(void *p) {
      delete ((::KVIDChIoSi_e475s*)p);
   }
   static void deleteArray_KVIDChIoSi_e475s(void *p) {
      delete [] ((::KVIDChIoSi_e475s*)p);
   }
   static void destruct_KVIDChIoSi_e475s(void *p) {
      typedef ::KVIDChIoSi_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi_e475s

//______________________________________________________________________________
void KVIDChIoCsI_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoCsI_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoCsI_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoCsI_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoCsI_e475s(void *p) {
      return  p ? new(p) ::KVIDChIoCsI_e475s : new ::KVIDChIoCsI_e475s;
   }
   static void *newArray_KVIDChIoCsI_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoCsI_e475s[nElements] : new ::KVIDChIoCsI_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoCsI_e475s(void *p) {
      delete ((::KVIDChIoCsI_e475s*)p);
   }
   static void deleteArray_KVIDChIoCsI_e475s(void *p) {
      delete [] ((::KVIDChIoCsI_e475s*)p);
   }
   static void destruct_KVIDChIoCsI_e475s(void *p) {
      typedef ::KVIDChIoCsI_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoCsI_e475s

//______________________________________________________________________________
void KVIDCsI_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDCsI_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDCsI_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDCsI_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDCsI_e475s(void *p) {
      return  p ? new(p) ::KVIDCsI_e475s : new ::KVIDCsI_e475s;
   }
   static void *newArray_KVIDCsI_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDCsI_e475s[nElements] : new ::KVIDCsI_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDCsI_e475s(void *p) {
      delete ((::KVIDCsI_e475s*)p);
   }
   static void deleteArray_KVIDCsI_e475s(void *p) {
      delete [] ((::KVIDCsI_e475s*)p);
   }
   static void destruct_KVIDCsI_e475s(void *p) {
      typedef ::KVIDCsI_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDCsI_e475s

//______________________________________________________________________________
void KVIDCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDCsI(void *p) {
      return  p ? new(p) ::KVIDCsI : new ::KVIDCsI;
   }
   static void *newArray_KVIDCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDCsI[nElements] : new ::KVIDCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDCsI(void *p) {
      delete ((::KVIDCsI*)p);
   }
   static void deleteArray_KVIDCsI(void *p) {
      delete [] ((::KVIDCsI*)p);
   }
   static void destruct_KVIDCsI(void *p) {
      typedef ::KVIDCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDCsI

//______________________________________________________________________________
void KVIDPhoswich::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDPhoswich.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDPhoswich::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDPhoswich::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDPhoswich(void *p) {
      return  p ? new(p) ::KVIDPhoswich : new ::KVIDPhoswich;
   }
   static void *newArray_KVIDPhoswich(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDPhoswich[nElements] : new ::KVIDPhoswich[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDPhoswich(void *p) {
      delete ((::KVIDPhoswich*)p);
   }
   static void deleteArray_KVIDPhoswich(void *p) {
      delete [] ((::KVIDPhoswich*)p);
   }
   static void destruct_KVIDPhoswich(void *p) {
      typedef ::KVIDPhoswich current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDPhoswich

//______________________________________________________________________________
void KVIDChIoCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoCsI(void *p) {
      return  p ? new(p) ::KVIDChIoCsI : new ::KVIDChIoCsI;
   }
   static void *newArray_KVIDChIoCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoCsI[nElements] : new ::KVIDChIoCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoCsI(void *p) {
      delete ((::KVIDChIoCsI*)p);
   }
   static void deleteArray_KVIDChIoCsI(void *p) {
      delete [] ((::KVIDChIoCsI*)p);
   }
   static void destruct_KVIDChIoCsI(void *p) {
      typedef ::KVIDChIoCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoCsI

//______________________________________________________________________________
void KVIDSi150CsI_camp5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSi150CsI_camp5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSi150CsI_camp5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSi150CsI_camp5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSi150CsI_camp5(void *p) {
      return  p ? new(p) ::KVIDSi150CsI_camp5 : new ::KVIDSi150CsI_camp5;
   }
   static void *newArray_KVIDSi150CsI_camp5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSi150CsI_camp5[nElements] : new ::KVIDSi150CsI_camp5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSi150CsI_camp5(void *p) {
      delete ((::KVIDSi150CsI_camp5*)p);
   }
   static void deleteArray_KVIDSi150CsI_camp5(void *p) {
      delete [] ((::KVIDSi150CsI_camp5*)p);
   }
   static void destruct_KVIDSi150CsI_camp5(void *p) {
      typedef ::KVIDSi150CsI_camp5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSi150CsI_camp5

//______________________________________________________________________________
void KVIDChIoSi5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi5(void *p) {
      return  p ? new(p) ::KVIDChIoSi5 : new ::KVIDChIoSi5;
   }
   static void *newArray_KVIDChIoSi5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi5[nElements] : new ::KVIDChIoSi5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi5(void *p) {
      delete ((::KVIDChIoSi5*)p);
   }
   static void deleteArray_KVIDChIoSi5(void *p) {
      delete [] ((::KVIDChIoSi5*)p);
   }
   static void destruct_KVIDChIoSi5(void *p) {
      typedef ::KVIDChIoSi5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi5

//______________________________________________________________________________
void KVIDChIoSiCorr::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSiCorr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSiCorr::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSiCorr::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSiCorr(void *p) {
      return  p ? new(p) ::KVIDChIoSiCorr : new ::KVIDChIoSiCorr;
   }
   static void *newArray_KVIDChIoSiCorr(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSiCorr[nElements] : new ::KVIDChIoSiCorr[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSiCorr(void *p) {
      delete ((::KVIDChIoSiCorr*)p);
   }
   static void deleteArray_KVIDChIoSiCorr(void *p) {
      delete [] ((::KVIDChIoSiCorr*)p);
   }
   static void destruct_KVIDChIoSiCorr(void *p) {
      typedef ::KVIDChIoSiCorr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSiCorr

//______________________________________________________________________________
void KVIDChIoSi75_camp5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi75_camp5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi75_camp5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi75_camp5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi75_camp5(void *p) {
      return  p ? new(p) ::KVIDChIoSi75_camp5 : new ::KVIDChIoSi75_camp5;
   }
   static void *newArray_KVIDChIoSi75_camp5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi75_camp5[nElements] : new ::KVIDChIoSi75_camp5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi75_camp5(void *p) {
      delete ((::KVIDChIoSi75_camp5*)p);
   }
   static void deleteArray_KVIDChIoSi75_camp5(void *p) {
      delete [] ((::KVIDChIoSi75_camp5*)p);
   }
   static void destruct_KVIDChIoSi75_camp5(void *p) {
      typedef ::KVIDChIoSi75_camp5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi75_camp5

//______________________________________________________________________________
void KVIDChIoCsI_camp5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoCsI_camp5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoCsI_camp5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoCsI_camp5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoCsI_camp5(void *p) {
      return  p ? new(p) ::KVIDChIoCsI_camp5 : new ::KVIDChIoCsI_camp5;
   }
   static void *newArray_KVIDChIoCsI_camp5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoCsI_camp5[nElements] : new ::KVIDChIoCsI_camp5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoCsI_camp5(void *p) {
      delete ((::KVIDChIoCsI_camp5*)p);
   }
   static void deleteArray_KVIDChIoCsI_camp5(void *p) {
      delete [] ((::KVIDChIoCsI_camp5*)p);
   }
   static void destruct_KVIDChIoCsI_camp5(void *p) {
      typedef ::KVIDChIoCsI_camp5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoCsI_camp5

//______________________________________________________________________________
void KVIDChIoCorrCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoCorrCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoCorrCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoCorrCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoCorrCsI(void *p) {
      return  p ? new(p) ::KVIDChIoCorrCsI : new ::KVIDChIoCorrCsI;
   }
   static void *newArray_KVIDChIoCorrCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoCorrCsI[nElements] : new ::KVIDChIoCorrCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoCorrCsI(void *p) {
      delete ((::KVIDChIoCorrCsI*)p);
   }
   static void deleteArray_KVIDChIoCorrCsI(void *p) {
      delete [] ((::KVIDChIoCorrCsI*)p);
   }
   static void destruct_KVIDChIoCorrCsI(void *p) {
      typedef ::KVIDChIoCorrCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoCorrCsI

//______________________________________________________________________________
void KVIDSi75SiLi_camp5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSi75SiLi_camp5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSi75SiLi_camp5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSi75SiLi_camp5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSi75SiLi_camp5(void *p) {
      return  p ? new(p) ::KVIDSi75SiLi_camp5 : new ::KVIDSi75SiLi_camp5;
   }
   static void *newArray_KVIDSi75SiLi_camp5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSi75SiLi_camp5[nElements] : new ::KVIDSi75SiLi_camp5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSi75SiLi_camp5(void *p) {
      delete ((::KVIDSi75SiLi_camp5*)p);
   }
   static void deleteArray_KVIDSi75SiLi_camp5(void *p) {
      delete [] ((::KVIDSi75SiLi_camp5*)p);
   }
   static void destruct_KVIDSi75SiLi_camp5(void *p) {
      typedef ::KVIDSi75SiLi_camp5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSi75SiLi_camp5

//______________________________________________________________________________
void KVIDSiLiCsI_camp5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiLiCsI_camp5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiLiCsI_camp5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiLiCsI_camp5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiLiCsI_camp5(void *p) {
      return  p ? new(p) ::KVIDSiLiCsI_camp5 : new ::KVIDSiLiCsI_camp5;
   }
   static void *newArray_KVIDSiLiCsI_camp5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiLiCsI_camp5[nElements] : new ::KVIDSiLiCsI_camp5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiLiCsI_camp5(void *p) {
      delete ((::KVIDSiLiCsI_camp5*)p);
   }
   static void deleteArray_KVIDSiLiCsI_camp5(void *p) {
      delete [] ((::KVIDSiLiCsI_camp5*)p);
   }
   static void destruct_KVIDSiLiCsI_camp5(void *p) {
      typedef ::KVIDSiLiCsI_camp5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiLiCsI_camp5

//______________________________________________________________________________
void KVIDBlocking::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDBlocking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDBlocking::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDBlocking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDBlocking(void *p) {
      return  p ? new(p) ::KVIDBlocking : new ::KVIDBlocking;
   }
   static void *newArray_KVIDBlocking(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDBlocking[nElements] : new ::KVIDBlocking[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDBlocking(void *p) {
      delete ((::KVIDBlocking*)p);
   }
   static void deleteArray_KVIDBlocking(void *p) {
      delete [] ((::KVIDBlocking*)p);
   }
   static void destruct_KVIDBlocking(void *p) {
      typedef ::KVIDBlocking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDBlocking

//______________________________________________________________________________
void KVIDChIoSi_e613::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi_e613.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi_e613::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi_e613::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi_e613(void *p) {
      return  p ? new(p) ::KVIDChIoSi_e613 : new ::KVIDChIoSi_e613;
   }
   static void *newArray_KVIDChIoSi_e613(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi_e613[nElements] : new ::KVIDChIoSi_e613[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi_e613(void *p) {
      delete ((::KVIDChIoSi_e613*)p);
   }
   static void deleteArray_KVIDChIoSi_e613(void *p) {
      delete [] ((::KVIDChIoSi_e613*)p);
   }
   static void destruct_KVIDChIoSi_e613(void *p) {
      typedef ::KVIDChIoSi_e613 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi_e613

//______________________________________________________________________________
void KVIDChIoCorrCsI_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoCorrCsI_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoCorrCsI_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoCorrCsI_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoCorrCsI_e494s(void *p) {
      return  p ? new(p) ::KVIDChIoCorrCsI_e494s : new ::KVIDChIoCorrCsI_e494s;
   }
   static void *newArray_KVIDChIoCorrCsI_e494s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoCorrCsI_e494s[nElements] : new ::KVIDChIoCorrCsI_e494s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoCorrCsI_e494s(void *p) {
      delete ((::KVIDChIoCorrCsI_e494s*)p);
   }
   static void deleteArray_KVIDChIoCorrCsI_e494s(void *p) {
      delete [] ((::KVIDChIoCorrCsI_e494s*)p);
   }
   static void destruct_KVIDChIoCorrCsI_e494s(void *p) {
      typedef ::KVIDChIoCorrCsI_e494s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoCorrCsI_e494s

//______________________________________________________________________________
void KVIDChIoSi75_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDChIoSi75_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDChIoSi75_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDChIoSi75_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDChIoSi75_e494s(void *p) {
      return  p ? new(p) ::KVIDChIoSi75_e494s : new ::KVIDChIoSi75_e494s;
   }
   static void *newArray_KVIDChIoSi75_e494s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDChIoSi75_e494s[nElements] : new ::KVIDChIoSi75_e494s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDChIoSi75_e494s(void *p) {
      delete ((::KVIDChIoSi75_e494s*)p);
   }
   static void deleteArray_KVIDChIoSi75_e494s(void *p) {
      delete [] ((::KVIDChIoSi75_e494s*)p);
   }
   static void destruct_KVIDChIoSi75_e494s(void *p) {
      typedef ::KVIDChIoSi75_e494s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDChIoSi75_e494s

//______________________________________________________________________________
void KVIDSiCsI5::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCsI5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCsI5::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCsI5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCsI5(void *p) {
      return  p ? new(p) ::KVIDSiCsI5 : new ::KVIDSiCsI5;
   }
   static void *newArray_KVIDSiCsI5(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCsI5[nElements] : new ::KVIDSiCsI5[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCsI5(void *p) {
      delete ((::KVIDSiCsI5*)p);
   }
   static void deleteArray_KVIDSiCsI5(void *p) {
      delete [] ((::KVIDSiCsI5*)p);
   }
   static void destruct_KVIDSiCsI5(void *p) {
      typedef ::KVIDSiCsI5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCsI5

//______________________________________________________________________________
void KVIDSiCorrCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCorrCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCorrCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCorrCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCorrCsI(void *p) {
      return  p ? new(p) ::KVIDSiCorrCsI : new ::KVIDSiCorrCsI;
   }
   static void *newArray_KVIDSiCorrCsI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCorrCsI[nElements] : new ::KVIDSiCorrCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCorrCsI(void *p) {
      delete ((::KVIDSiCorrCsI*)p);
   }
   static void deleteArray_KVIDSiCorrCsI(void *p) {
      delete [] ((::KVIDSiCorrCsI*)p);
   }
   static void destruct_KVIDSiCorrCsI(void *p) {
      typedef ::KVIDSiCorrCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCorrCsI

//______________________________________________________________________________
void KVIDSi75SiLi_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSi75SiLi_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSi75SiLi_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSi75SiLi_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSi75SiLi_e494s(void *p) {
      return  p ? new(p) ::KVIDSi75SiLi_e494s : new ::KVIDSi75SiLi_e494s;
   }
   static void *newArray_KVIDSi75SiLi_e494s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSi75SiLi_e494s[nElements] : new ::KVIDSi75SiLi_e494s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSi75SiLi_e494s(void *p) {
      delete ((::KVIDSi75SiLi_e494s*)p);
   }
   static void deleteArray_KVIDSi75SiLi_e494s(void *p) {
      delete [] ((::KVIDSi75SiLi_e494s*)p);
   }
   static void destruct_KVIDSi75SiLi_e494s(void *p) {
      typedef ::KVIDSi75SiLi_e494s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSi75SiLi_e494s

//______________________________________________________________________________
void KVIDSiLiCsI_e494s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiLiCsI_e494s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiLiCsI_e494s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiLiCsI_e494s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiLiCsI_e494s(void *p) {
      return  p ? new(p) ::KVIDSiLiCsI_e494s : new ::KVIDSiLiCsI_e494s;
   }
   static void *newArray_KVIDSiLiCsI_e494s(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiLiCsI_e494s[nElements] : new ::KVIDSiLiCsI_e494s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiLiCsI_e494s(void *p) {
      delete ((::KVIDSiLiCsI_e494s*)p);
   }
   static void deleteArray_KVIDSiLiCsI_e494s(void *p) {
      delete [] ((::KVIDSiLiCsI_e494s*)p);
   }
   static void destruct_KVIDSiLiCsI_e494s(void *p) {
      typedef ::KVIDSiLiCsI_e494s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiLiCsI_e494s

//______________________________________________________________________________
void KVINDRARRMValidator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARRMValidator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRARRMValidator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRARRMValidator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRARRMValidator(void *p) {
      return  p ? new(p) ::KVINDRARRMValidator : new ::KVINDRARRMValidator;
   }
   static void *newArray_KVINDRARRMValidator(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRARRMValidator[nElements] : new ::KVINDRARRMValidator[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRARRMValidator(void *p) {
      delete ((::KVINDRARRMValidator*)p);
   }
   static void deleteArray_KVINDRARRMValidator(void *p) {
      delete [] ((::KVINDRARRMValidator*)p);
   }
   static void destruct_KVINDRARRMValidator(void *p) {
      typedef ::KVINDRARRMValidator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRARRMValidator

namespace {
  void TriggerDictionaryInitialization_libKVIndraidentification_Impl() {
    static const char* headers[] = {
"KVIDChIoSiCorr.h",
"KVIDChIoSi75_camp5.h",
"KVIDSiCorrCsI.h",
"KVIDChIoCsI.h",
"KVIDChIoSi_e613.h",
"KVINDRACodeMask.h",
"KVIDGChIoSi_e494s.h",
"KVIDSiLiCsI_e494s.h",
"KVIDSi75SiLi_e494s.h",
"KVIDCsI.h",
"KVIDChIoSiLi.h",
"KVIDSiLiCsI_camp5.h",
"KVINDRAIDTelescope.h",
"KVIDChIoSi.h",
"KVIDSiCsI_e613.h",
"KVIDCsIRLLine.h",
"KVIDSiCsI5.h",
"KVIDSi75SiLi_camp5.h",
"KVIDSiCsI.h",
"KVDP2toCsIGridConvertor.h",
"KVIDChIoCorrCsI.h",
"KVIDGCsI.h",
"KVIDCsI_e475s.h",
"KVIDGChIoSi.h",
"KVIDChIoSi75_e494s.h",
"KVIDChIoCorrCsI_e494s.h",
"KVIDChIoSi_e475s.h",
"KVIDSi75SiLi.h",
"KVINDRACodes.h",
"KVIDChIoCsI_camp5.h",
"KVIDSiLiCsI.h",
"KVIDSi150CsI_camp5.h",
"KVIDChIoSi75.h",
"KVIDPhoswich.h",
"KVIDChIoCsI_e475s.h",
"KVINDRARRMValidator.h",
"KVIDChIoSi5.h",
"KVIDSiCsI_e475s.h",
"KVIDBlocking.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/identification/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/identification/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Particle identification and calibration status (Veda6))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiLi.h")))  KVINDRACodes;
class __attribute__((annotate(R"ATTRDUMP(Handles setting and testing code masks for particle calibration quality control)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handles setting and testing code masks for particle calibration quality control)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRACodeMask.h")))  KVINDRACodeMask;
class __attribute__((annotate(R"ATTRDUMP(Converts dp2-format CsI R-L grids to KVIDGrids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDP2toCsIGridConvertor.h")))  KVDP2toCsIGridConvertor;
class __attribute__((annotate(R"ATTRDUMP(Base class for CsI R-L identification lines)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCsIRLLine.h")))  KVIDCsIRLLine;
class __attribute__((annotate(R"ATTRDUMP(CsI Rapide-Lente grid & identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCsI.h")))  KVIDGCsI;
class __attribute__((annotate(R"ATTRDUMP(ChIo-Si dE-E Z-identification grid)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiCorr.h")))  KVIDGChIoSi;
class __attribute__((annotate(R"ATTRDUMP(Specific identification grid for e494s)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiCorr.h")))  KVIDGChIoSi_e494s;
class __attribute__((annotate(R"ATTRDUMP(A delta-E - E identification telescope in INDRA)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiCorr.h")))  KVINDRAIDTelescope;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using Si-CsI matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCorrCsI.h")))  KVIDSiCsI;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVIDSiCsI class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCsI_e475s.h")))  KVIDSiCsI_e475s;
class __attribute__((annotate(R"ATTRDUMP(Si-CsI id with grids for INDRA_e613)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCsI_e613.h")))  KVIDSiCsI_e613;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using SiLi-CsI matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiLiCsI_e494s.h")))  KVIDSiLiCsI;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using Si75-Si(Li) matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSi75SiLi_e494s.h")))  KVIDSi75SiLi;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using ChIo-Si matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiCorr.h")))  KVIDChIoSi;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using ChIo-Si75 matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi75_camp5.h")))  KVIDChIoSi75;
class __attribute__((annotate(R"ATTRDUMP(Identification in ChIo-SiLi matrices of INDRA)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiLi.h")))  KVIDChIoSiLi;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVIDChIoSi class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi_e475s.h")))  KVIDChIoSi_e475s;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVIDChIoCsI class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoCsI_e475s.h")))  KVIDChIoCsI_e475s;
class __attribute__((annotate(R"ATTRDUMP(derivation of KVIDCsI class for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCsI_e475s.h")))  KVIDCsI_e475s;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using CsI R-L matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCsI.h")))  KVIDCsI;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using Phoswich R-L matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDPhoswich.h")))  KVIDPhoswich;
class __attribute__((annotate(R"ATTRDUMP(INDRA identification using ChIo-CsI matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoCsI.h")))  KVIDChIoCsI;
class __attribute__((annotate(R"ATTRDUMP(Si(150)-CsI identifications for 5th campaign INDRA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSi150CsI_camp5.h")))  KVIDSi150CsI_camp5;
class __attribute__((annotate(R"ATTRDUMP(INDRA 5th campaign ChIo-Si identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi5.h")))  KVIDChIoSi5;
class __attribute__((annotate(R"ATTRDUMP(INDRA E503/E494s ChIo-Si identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSiCorr.h")))  KVIDChIoSiCorr;
class __attribute__((annotate(R"ATTRDUMP(ChIo-Si(75) identification for INDRA 5th campaign data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi75_camp5.h")))  KVIDChIoSi75_camp5;
class __attribute__((annotate(R"ATTRDUMP(ChIo-CsI id with grids for INDRA_camp5)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoCsI_camp5.h")))  KVIDChIoCsI_camp5;
class __attribute__((annotate(R"ATTRDUMP(ChIo-CsI identification with grids for E503)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoCorrCsI.h")))  KVIDChIoCorrCsI;
class __attribute__((annotate(R"ATTRDUMP(Identification in Si75-SiLi telescopes for INDRA_camp5 dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSi75SiLi_camp5.h")))  KVIDSi75SiLi_camp5;
class __attribute__((annotate(R"ATTRDUMP(SiLi-CsI identification for INDRA_camp5 dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiLiCsI_camp5.h")))  KVIDSiLiCsI_camp5;
class __attribute__((annotate(R"ATTRDUMP(Identification in FNL blocking telescopes BIC-SiB)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDBlocking.h")))  KVIDBlocking;
class __attribute__((annotate(R"ATTRDUMP(modification of the sequence of identification for e613)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi_e613.h")))  KVIDChIoSi_e613;
class __attribute__((annotate(R"ATTRDUMP(ChIo-CsI identification with grids for E494S)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoCorrCsI_e494s.h")))  KVIDChIoCorrCsI_e494s;
class __attribute__((annotate(R"ATTRDUMP(E503/E494S experiment INDRA identification using ChIo-Si75 matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDChIoSi75_e494s.h")))  KVIDChIoSi75_e494s;
class __attribute__((annotate(R"ATTRDUMP(5th campaign INDRA identification using Si-CsI matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCsI5.h")))  KVIDSiCsI5;
class __attribute__((annotate(R"ATTRDUMP(Si-CsI identification with TGID functions for E494S/E503)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCorrCsI.h")))  KVIDSiCorrCsI;
class __attribute__((annotate(R"ATTRDUMP(E503/E494S experiment INDRA identification using Si75-SiLi matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSi75SiLi_e494s.h")))  KVIDSi75SiLi_e494s;
class __attribute__((annotate(R"ATTRDUMP(E503/E494S experiment INDRA identification using SiLi-CsI matrices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiLiCsI_e494s.h")))  KVIDSiLiCsI_e494s;
class __attribute__((annotate(R"ATTRDUMP(Defines validity of e.g. an ID grid in terms of lists of runs, rings and modules (INDRA detectors))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARRMValidator.h")))  KVINDRARRMValidator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVIDChIoSiCorr.h"
#include "KVIDChIoSi75_camp5.h"
#include "KVIDSiCorrCsI.h"
#include "KVIDChIoCsI.h"
#include "KVIDChIoSi_e613.h"
#include "KVINDRACodeMask.h"
#include "KVIDGChIoSi_e494s.h"
#include "KVIDSiLiCsI_e494s.h"
#include "KVIDSi75SiLi_e494s.h"
#include "KVIDCsI.h"
#include "KVIDChIoSiLi.h"
#include "KVIDSiLiCsI_camp5.h"
#include "KVINDRAIDTelescope.h"
#include "KVIDChIoSi.h"
#include "KVIDSiCsI_e613.h"
#include "KVIDCsIRLLine.h"
#include "KVIDSiCsI5.h"
#include "KVIDSi75SiLi_camp5.h"
#include "KVIDSiCsI.h"
#include "KVDP2toCsIGridConvertor.h"
#include "KVIDChIoCorrCsI.h"
#include "KVIDGCsI.h"
#include "KVIDCsI_e475s.h"
#include "KVIDGChIoSi.h"
#include "KVIDChIoSi75_e494s.h"
#include "KVIDChIoCorrCsI_e494s.h"
#include "KVIDChIoSi_e475s.h"
#include "KVIDSi75SiLi.h"
#include "KVINDRACodes.h"
#include "KVIDChIoCsI_camp5.h"
#include "KVIDSiLiCsI.h"
#include "KVIDSi150CsI_camp5.h"
#include "KVIDChIoSi75.h"
#include "KVIDPhoswich.h"
#include "KVIDChIoCsI_e475s.h"
#include "KVINDRARRMValidator.h"
#include "KVIDChIoSi5.h"
#include "KVIDSiCsI_e475s.h"
#include "KVIDBlocking.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EIDCodes", payloadCode, "@",
"EVedaCodes", payloadCode, "@",
"KVDP2toCsIGridConvertor", payloadCode, "@",
"KVIDBlocking", payloadCode, "@",
"KVIDChIoCorrCsI", payloadCode, "@",
"KVIDChIoCorrCsI_e494s", payloadCode, "@",
"KVIDChIoCsI", payloadCode, "@",
"KVIDChIoCsI_camp5", payloadCode, "@",
"KVIDChIoCsI_e475s", payloadCode, "@",
"KVIDChIoSi", payloadCode, "@",
"KVIDChIoSi5", payloadCode, "@",
"KVIDChIoSi75", payloadCode, "@",
"KVIDChIoSi75_camp5", payloadCode, "@",
"KVIDChIoSi75_e494s", payloadCode, "@",
"KVIDChIoSiCorr", payloadCode, "@",
"KVIDChIoSiLi", payloadCode, "@",
"KVIDChIoSi_e475s", payloadCode, "@",
"KVIDChIoSi_e613", payloadCode, "@",
"KVIDCsI", payloadCode, "@",
"KVIDCsIRLLine", payloadCode, "@",
"KVIDCsI_e475s", payloadCode, "@",
"KVIDGChIoSi", payloadCode, "@",
"KVIDGChIoSi_e494s", payloadCode, "@",
"KVIDGCsI", payloadCode, "@",
"KVIDPhoswich", payloadCode, "@",
"KVIDSi150CsI_camp5", payloadCode, "@",
"KVIDSi75SiLi", payloadCode, "@",
"KVIDSi75SiLi_camp5", payloadCode, "@",
"KVIDSi75SiLi_e494s", payloadCode, "@",
"KVIDSiCorrCsI", payloadCode, "@",
"KVIDSiCsI", payloadCode, "@",
"KVIDSiCsI5", payloadCode, "@",
"KVIDSiCsI_e475s", payloadCode, "@",
"KVIDSiCsI_e613", payloadCode, "@",
"KVIDSiLiCsI", payloadCode, "@",
"KVIDSiLiCsI_camp5", payloadCode, "@",
"KVIDSiLiCsI_e494s", payloadCode, "@",
"KVINDRACodeMask", payloadCode, "@",
"KVINDRACodes", payloadCode, "@",
"KVINDRAIDTelescope", payloadCode, "@",
"KVINDRARRMValidator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndraidentification",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndraidentification_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndraidentification_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndraidentification() {
  TriggerDictionaryInitialization_libKVIndraidentification_Impl();
}
