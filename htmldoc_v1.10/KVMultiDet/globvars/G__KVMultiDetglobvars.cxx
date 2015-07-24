// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetglobvars

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
#include "KVEkin.h"
#include "KVQuadMoment.h"
#include "KVZtotAv.h"
#include "KVTensPCM.h"
#include "KVFlowTensor.h"
#include "KVTensE.h"
#include "KVMultIMFAv.h"
#include "KVMultAv.h"
#include "KVVarGlobMean.h"
#include "KVPtot.h"
#include "KVCalorimetry.h"
#include "KVZmean.h"
#include "KVEtransLCP.h"
#include "KVSource.h"
#include "KVMultLeg.h"
#include "KVCaloBase.h"
#include "KVZmax.h"
#include "KVMultLegAv.h"
#include "KVVarGlob.h"
#include "KVZtot.h"
#include "KVTenseur3.h"
#include "KVZbound.h"
#include "KVEtrans.h"
#include "KVFoxH2.h"
#include "KVZBoundMean.h"
#include "KVVarGlob1.h"
#include "KVMultIMF.h"
#include "KVRiso.h"
#include "KVRisoAv.h"
#include "KVVGSum.h"
#include "KVGVList.h"
#include "KVRelativeVelocity.h"
#include "KVZboundAv.h"
#include "KVZVtot.h"
#include "KVTensP.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVVarGlob(void *p = 0);
   static void *newArray_KVVarGlob(Long_t size, void *p);
   static void delete_KVVarGlob(void *p);
   static void deleteArray_KVVarGlob(void *p);
   static void destruct_KVVarGlob(void *p);
   static void streamer_KVVarGlob(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVarGlob*)
   {
      ::KVVarGlob *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVarGlob >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVarGlob", ::KVVarGlob::Class_Version(), "KVVarGlob.h", 22,
                  typeid(::KVVarGlob), DefineBehavior(ptr, ptr),
                  &::KVVarGlob::Dictionary, isa_proxy, 16,
                  sizeof(::KVVarGlob) );
      instance.SetNew(&new_KVVarGlob);
      instance.SetNewArray(&newArray_KVVarGlob);
      instance.SetDelete(&delete_KVVarGlob);
      instance.SetDeleteArray(&deleteArray_KVVarGlob);
      instance.SetDestructor(&destruct_KVVarGlob);
      instance.SetStreamerFunc(&streamer_KVVarGlob);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVarGlob*)
   {
      return GenerateInitInstanceLocal((::KVVarGlob*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVarGlob*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVarGlob1(void *p = 0);
   static void *newArray_KVVarGlob1(Long_t size, void *p);
   static void delete_KVVarGlob1(void *p);
   static void deleteArray_KVVarGlob1(void *p);
   static void destruct_KVVarGlob1(void *p);
   static void streamer_KVVarGlob1(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVarGlob1*)
   {
      ::KVVarGlob1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVarGlob1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVarGlob1", ::KVVarGlob1::Class_Version(), "KVVarGlob1.h", 14,
                  typeid(::KVVarGlob1), DefineBehavior(ptr, ptr),
                  &::KVVarGlob1::Dictionary, isa_proxy, 16,
                  sizeof(::KVVarGlob1) );
      instance.SetNew(&new_KVVarGlob1);
      instance.SetNewArray(&newArray_KVVarGlob1);
      instance.SetDelete(&delete_KVVarGlob1);
      instance.SetDeleteArray(&deleteArray_KVVarGlob1);
      instance.SetDestructor(&destruct_KVVarGlob1);
      instance.SetStreamerFunc(&streamer_KVVarGlob1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVarGlob1*)
   {
      return GenerateInitInstanceLocal((::KVVarGlob1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVarGlob1*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVarGlobMean(void *p = 0);
   static void *newArray_KVVarGlobMean(Long_t size, void *p);
   static void delete_KVVarGlobMean(void *p);
   static void deleteArray_KVVarGlobMean(void *p);
   static void destruct_KVVarGlobMean(void *p);
   static void streamer_KVVarGlobMean(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVarGlobMean*)
   {
      ::KVVarGlobMean *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVarGlobMean >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVarGlobMean", ::KVVarGlobMean::Class_Version(), "KVVarGlobMean.h", 14,
                  typeid(::KVVarGlobMean), DefineBehavior(ptr, ptr),
                  &::KVVarGlobMean::Dictionary, isa_proxy, 16,
                  sizeof(::KVVarGlobMean) );
      instance.SetNew(&new_KVVarGlobMean);
      instance.SetNewArray(&newArray_KVVarGlobMean);
      instance.SetDelete(&delete_KVVarGlobMean);
      instance.SetDeleteArray(&deleteArray_KVVarGlobMean);
      instance.SetDestructor(&destruct_KVVarGlobMean);
      instance.SetStreamerFunc(&streamer_KVVarGlobMean);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVarGlobMean*)
   {
      return GenerateInitInstanceLocal((::KVVarGlobMean*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVarGlobMean*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVGSum(void *p = 0);
   static void *newArray_KVVGSum(Long_t size, void *p);
   static void delete_KVVGSum(void *p);
   static void deleteArray_KVVGSum(void *p);
   static void destruct_KVVGSum(void *p);
   static void streamer_KVVGSum(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVGSum*)
   {
      ::KVVGSum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVGSum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVGSum", ::KVVGSum::Class_Version(), "KVVGSum.h", 18,
                  typeid(::KVVGSum), DefineBehavior(ptr, ptr),
                  &::KVVGSum::Dictionary, isa_proxy, 16,
                  sizeof(::KVVGSum) );
      instance.SetNew(&new_KVVGSum);
      instance.SetNewArray(&newArray_KVVGSum);
      instance.SetDelete(&delete_KVVGSum);
      instance.SetDeleteArray(&deleteArray_KVVGSum);
      instance.SetDestructor(&destruct_KVVGSum);
      instance.SetStreamerFunc(&streamer_KVVGSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVGSum*)
   {
      return GenerateInitInstanceLocal((::KVVGSum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVGSum*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGVList(void *p = 0);
   static void *newArray_KVGVList(Long_t size, void *p);
   static void delete_KVGVList(void *p);
   static void deleteArray_KVGVList(void *p);
   static void destruct_KVGVList(void *p);
   static void streamer_KVGVList(TBuffer &buf, void *obj);
   static Long64_t merge_KVGVList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGVList*)
   {
      ::KVGVList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGVList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGVList", ::KVGVList::Class_Version(), "KVGVList.h", 19,
                  typeid(::KVGVList), DefineBehavior(ptr, ptr),
                  &::KVGVList::Dictionary, isa_proxy, 16,
                  sizeof(::KVGVList) );
      instance.SetNew(&new_KVGVList);
      instance.SetNewArray(&newArray_KVGVList);
      instance.SetDelete(&delete_KVGVList);
      instance.SetDeleteArray(&deleteArray_KVGVList);
      instance.SetDestructor(&destruct_KVGVList);
      instance.SetStreamerFunc(&streamer_KVGVList);
      instance.SetMerge(&merge_KVGVList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGVList*)
   {
      return GenerateInitInstanceLocal((::KVGVList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGVList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZtot(void *p = 0);
   static void *newArray_KVZtot(Long_t size, void *p);
   static void delete_KVZtot(void *p);
   static void deleteArray_KVZtot(void *p);
   static void destruct_KVZtot(void *p);
   static void streamer_KVZtot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZtot*)
   {
      ::KVZtot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZtot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZtot", ::KVZtot::Class_Version(), "KVZtot.h", 14,
                  typeid(::KVZtot), DefineBehavior(ptr, ptr),
                  &::KVZtot::Dictionary, isa_proxy, 16,
                  sizeof(::KVZtot) );
      instance.SetNew(&new_KVZtot);
      instance.SetNewArray(&newArray_KVZtot);
      instance.SetDelete(&delete_KVZtot);
      instance.SetDeleteArray(&deleteArray_KVZtot);
      instance.SetDestructor(&destruct_KVZtot);
      instance.SetStreamerFunc(&streamer_KVZtot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZtot*)
   {
      return GenerateInitInstanceLocal((::KVZtot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZtot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZmean(void *p = 0);
   static void *newArray_KVZmean(Long_t size, void *p);
   static void delete_KVZmean(void *p);
   static void deleteArray_KVZmean(void *p);
   static void destruct_KVZmean(void *p);
   static void streamer_KVZmean(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZmean*)
   {
      ::KVZmean *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZmean >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZmean", ::KVZmean::Class_Version(), "KVZmean.h", 14,
                  typeid(::KVZmean), DefineBehavior(ptr, ptr),
                  &::KVZmean::Dictionary, isa_proxy, 16,
                  sizeof(::KVZmean) );
      instance.SetNew(&new_KVZmean);
      instance.SetNewArray(&newArray_KVZmean);
      instance.SetDelete(&delete_KVZmean);
      instance.SetDeleteArray(&deleteArray_KVZmean);
      instance.SetDestructor(&destruct_KVZmean);
      instance.SetStreamerFunc(&streamer_KVZmean);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZmean*)
   {
      return GenerateInitInstanceLocal((::KVZmean*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZmean*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZbound(void *p = 0);
   static void *newArray_KVZbound(Long_t size, void *p);
   static void delete_KVZbound(void *p);
   static void deleteArray_KVZbound(void *p);
   static void destruct_KVZbound(void *p);
   static void streamer_KVZbound(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZbound*)
   {
      ::KVZbound *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZbound >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZbound", ::KVZbound::Class_Version(), "KVZbound.h", 14,
                  typeid(::KVZbound), DefineBehavior(ptr, ptr),
                  &::KVZbound::Dictionary, isa_proxy, 16,
                  sizeof(::KVZbound) );
      instance.SetNew(&new_KVZbound);
      instance.SetNewArray(&newArray_KVZbound);
      instance.SetDelete(&delete_KVZbound);
      instance.SetDeleteArray(&deleteArray_KVZbound);
      instance.SetDestructor(&destruct_KVZbound);
      instance.SetStreamerFunc(&streamer_KVZbound);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZbound*)
   {
      return GenerateInitInstanceLocal((::KVZbound*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZbound*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZBoundMean(void *p = 0);
   static void *newArray_KVZBoundMean(Long_t size, void *p);
   static void delete_KVZBoundMean(void *p);
   static void deleteArray_KVZBoundMean(void *p);
   static void destruct_KVZBoundMean(void *p);
   static void streamer_KVZBoundMean(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZBoundMean*)
   {
      ::KVZBoundMean *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZBoundMean >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZBoundMean", ::KVZBoundMean::Class_Version(), "KVZBoundMean.h", 15,
                  typeid(::KVZBoundMean), DefineBehavior(ptr, ptr),
                  &::KVZBoundMean::Dictionary, isa_proxy, 16,
                  sizeof(::KVZBoundMean) );
      instance.SetNew(&new_KVZBoundMean);
      instance.SetNewArray(&newArray_KVZBoundMean);
      instance.SetDelete(&delete_KVZBoundMean);
      instance.SetDeleteArray(&deleteArray_KVZBoundMean);
      instance.SetDestructor(&destruct_KVZBoundMean);
      instance.SetStreamerFunc(&streamer_KVZBoundMean);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZBoundMean*)
   {
      return GenerateInitInstanceLocal((::KVZBoundMean*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZBoundMean*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZtotAv(void *p = 0);
   static void *newArray_KVZtotAv(Long_t size, void *p);
   static void delete_KVZtotAv(void *p);
   static void deleteArray_KVZtotAv(void *p);
   static void destruct_KVZtotAv(void *p);
   static void streamer_KVZtotAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZtotAv*)
   {
      ::KVZtotAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZtotAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZtotAv", ::KVZtotAv::Class_Version(), "KVZtotAv.h", 14,
                  typeid(::KVZtotAv), DefineBehavior(ptr, ptr),
                  &::KVZtotAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVZtotAv) );
      instance.SetNew(&new_KVZtotAv);
      instance.SetNewArray(&newArray_KVZtotAv);
      instance.SetDelete(&delete_KVZtotAv);
      instance.SetDeleteArray(&deleteArray_KVZtotAv);
      instance.SetDestructor(&destruct_KVZtotAv);
      instance.SetStreamerFunc(&streamer_KVZtotAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZtotAv*)
   {
      return GenerateInitInstanceLocal((::KVZtotAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZtotAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZboundAv(void *p = 0);
   static void *newArray_KVZboundAv(Long_t size, void *p);
   static void delete_KVZboundAv(void *p);
   static void deleteArray_KVZboundAv(void *p);
   static void destruct_KVZboundAv(void *p);
   static void streamer_KVZboundAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZboundAv*)
   {
      ::KVZboundAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZboundAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZboundAv", ::KVZboundAv::Class_Version(), "KVZboundAv.h", 14,
                  typeid(::KVZboundAv), DefineBehavior(ptr, ptr),
                  &::KVZboundAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVZboundAv) );
      instance.SetNew(&new_KVZboundAv);
      instance.SetNewArray(&newArray_KVZboundAv);
      instance.SetDelete(&delete_KVZboundAv);
      instance.SetDeleteArray(&deleteArray_KVZboundAv);
      instance.SetDestructor(&destruct_KVZboundAv);
      instance.SetStreamerFunc(&streamer_KVZboundAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZboundAv*)
   {
      return GenerateInitInstanceLocal((::KVZboundAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZboundAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZmax(void *p = 0);
   static void *newArray_KVZmax(Long_t size, void *p);
   static void delete_KVZmax(void *p);
   static void deleteArray_KVZmax(void *p);
   static void destruct_KVZmax(void *p);
   static void streamer_KVZmax(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZmax*)
   {
      ::KVZmax *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZmax >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZmax", ::KVZmax::Class_Version(), "KVZmax.h", 14,
                  typeid(::KVZmax), DefineBehavior(ptr, ptr),
                  &::KVZmax::Dictionary, isa_proxy, 16,
                  sizeof(::KVZmax) );
      instance.SetNew(&new_KVZmax);
      instance.SetNewArray(&newArray_KVZmax);
      instance.SetDelete(&delete_KVZmax);
      instance.SetDeleteArray(&deleteArray_KVZmax);
      instance.SetDestructor(&destruct_KVZmax);
      instance.SetStreamerFunc(&streamer_KVZmax);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZmax*)
   {
      return GenerateInitInstanceLocal((::KVZmax*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZmax*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEtrans(void *p = 0);
   static void *newArray_KVEtrans(Long_t size, void *p);
   static void delete_KVEtrans(void *p);
   static void deleteArray_KVEtrans(void *p);
   static void destruct_KVEtrans(void *p);
   static void streamer_KVEtrans(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEtrans*)
   {
      ::KVEtrans *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEtrans >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEtrans", ::KVEtrans::Class_Version(), "KVEtrans.h", 14,
                  typeid(::KVEtrans), DefineBehavior(ptr, ptr),
                  &::KVEtrans::Dictionary, isa_proxy, 16,
                  sizeof(::KVEtrans) );
      instance.SetNew(&new_KVEtrans);
      instance.SetNewArray(&newArray_KVEtrans);
      instance.SetDelete(&delete_KVEtrans);
      instance.SetDeleteArray(&deleteArray_KVEtrans);
      instance.SetDestructor(&destruct_KVEtrans);
      instance.SetStreamerFunc(&streamer_KVEtrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEtrans*)
   {
      return GenerateInitInstanceLocal((::KVEtrans*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEtrans*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEtransLCP(void *p = 0);
   static void *newArray_KVEtransLCP(Long_t size, void *p);
   static void delete_KVEtransLCP(void *p);
   static void deleteArray_KVEtransLCP(void *p);
   static void destruct_KVEtransLCP(void *p);
   static void streamer_KVEtransLCP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEtransLCP*)
   {
      ::KVEtransLCP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEtransLCP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEtransLCP", ::KVEtransLCP::Class_Version(), "KVEtransLCP.h", 6,
                  typeid(::KVEtransLCP), DefineBehavior(ptr, ptr),
                  &::KVEtransLCP::Dictionary, isa_proxy, 16,
                  sizeof(::KVEtransLCP) );
      instance.SetNew(&new_KVEtransLCP);
      instance.SetNewArray(&newArray_KVEtransLCP);
      instance.SetDelete(&delete_KVEtransLCP);
      instance.SetDeleteArray(&deleteArray_KVEtransLCP);
      instance.SetDestructor(&destruct_KVEtransLCP);
      instance.SetStreamerFunc(&streamer_KVEtransLCP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEtransLCP*)
   {
      return GenerateInitInstanceLocal((::KVEtransLCP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEtransLCP*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEkin(void *p = 0);
   static void *newArray_KVEkin(Long_t size, void *p);
   static void delete_KVEkin(void *p);
   static void deleteArray_KVEkin(void *p);
   static void destruct_KVEkin(void *p);
   static void streamer_KVEkin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEkin*)
   {
      ::KVEkin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEkin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEkin", ::KVEkin::Class_Version(), "KVEkin.h", 14,
                  typeid(::KVEkin), DefineBehavior(ptr, ptr),
                  &::KVEkin::Dictionary, isa_proxy, 16,
                  sizeof(::KVEkin) );
      instance.SetNew(&new_KVEkin);
      instance.SetNewArray(&newArray_KVEkin);
      instance.SetDelete(&delete_KVEkin);
      instance.SetDeleteArray(&deleteArray_KVEkin);
      instance.SetDestructor(&destruct_KVEkin);
      instance.SetStreamerFunc(&streamer_KVEkin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEkin*)
   {
      return GenerateInitInstanceLocal((::KVEkin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEkin*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCaloBase(void *p = 0);
   static void *newArray_KVCaloBase(Long_t size, void *p);
   static void delete_KVCaloBase(void *p);
   static void deleteArray_KVCaloBase(void *p);
   static void destruct_KVCaloBase(void *p);
   static void streamer_KVCaloBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCaloBase*)
   {
      ::KVCaloBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCaloBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCaloBase", ::KVCaloBase::Class_Version(), "KVCaloBase.h", 17,
                  typeid(::KVCaloBase), DefineBehavior(ptr, ptr),
                  &::KVCaloBase::Dictionary, isa_proxy, 16,
                  sizeof(::KVCaloBase) );
      instance.SetNew(&new_KVCaloBase);
      instance.SetNewArray(&newArray_KVCaloBase);
      instance.SetDelete(&delete_KVCaloBase);
      instance.SetDeleteArray(&deleteArray_KVCaloBase);
      instance.SetDestructor(&destruct_KVCaloBase);
      instance.SetStreamerFunc(&streamer_KVCaloBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCaloBase*)
   {
      return GenerateInitInstanceLocal((::KVCaloBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCaloBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCalorimetry(void *p = 0);
   static void *newArray_KVCalorimetry(Long_t size, void *p);
   static void delete_KVCalorimetry(void *p);
   static void deleteArray_KVCalorimetry(void *p);
   static void destruct_KVCalorimetry(void *p);
   static void streamer_KVCalorimetry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCalorimetry*)
   {
      ::KVCalorimetry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCalorimetry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCalorimetry", ::KVCalorimetry::Class_Version(), "KVCalorimetry.h", 15,
                  typeid(::KVCalorimetry), DefineBehavior(ptr, ptr),
                  &::KVCalorimetry::Dictionary, isa_proxy, 16,
                  sizeof(::KVCalorimetry) );
      instance.SetNew(&new_KVCalorimetry);
      instance.SetNewArray(&newArray_KVCalorimetry);
      instance.SetDelete(&delete_KVCalorimetry);
      instance.SetDeleteArray(&deleteArray_KVCalorimetry);
      instance.SetDestructor(&destruct_KVCalorimetry);
      instance.SetStreamerFunc(&streamer_KVCalorimetry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCalorimetry*)
   {
      return GenerateInitInstanceLocal((::KVCalorimetry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCalorimetry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPtot(void *p = 0);
   static void *newArray_KVPtot(Long_t size, void *p);
   static void delete_KVPtot(void *p);
   static void deleteArray_KVPtot(void *p);
   static void destruct_KVPtot(void *p);
   static void streamer_KVPtot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPtot*)
   {
      ::KVPtot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPtot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPtot", ::KVPtot::Class_Version(), "KVPtot.h", 14,
                  typeid(::KVPtot), DefineBehavior(ptr, ptr),
                  &::KVPtot::Dictionary, isa_proxy, 16,
                  sizeof(::KVPtot) );
      instance.SetNew(&new_KVPtot);
      instance.SetNewArray(&newArray_KVPtot);
      instance.SetDelete(&delete_KVPtot);
      instance.SetDeleteArray(&deleteArray_KVPtot);
      instance.SetDestructor(&destruct_KVPtot);
      instance.SetStreamerFunc(&streamer_KVPtot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPtot*)
   {
      return GenerateInitInstanceLocal((::KVPtot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPtot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZVtot(void *p = 0);
   static void *newArray_KVZVtot(Long_t size, void *p);
   static void delete_KVZVtot(void *p);
   static void deleteArray_KVZVtot(void *p);
   static void destruct_KVZVtot(void *p);
   static void streamer_KVZVtot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZVtot*)
   {
      ::KVZVtot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZVtot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZVtot", ::KVZVtot::Class_Version(), "KVZVtot.h", 14,
                  typeid(::KVZVtot), DefineBehavior(ptr, ptr),
                  &::KVZVtot::Dictionary, isa_proxy, 16,
                  sizeof(::KVZVtot) );
      instance.SetNew(&new_KVZVtot);
      instance.SetNewArray(&newArray_KVZVtot);
      instance.SetDelete(&delete_KVZVtot);
      instance.SetDeleteArray(&deleteArray_KVZVtot);
      instance.SetDestructor(&destruct_KVZVtot);
      instance.SetStreamerFunc(&streamer_KVZVtot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZVtot*)
   {
      return GenerateInitInstanceLocal((::KVZVtot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZVtot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSource(void *p = 0);
   static void *newArray_KVSource(Long_t size, void *p);
   static void delete_KVSource(void *p);
   static void deleteArray_KVSource(void *p);
   static void destruct_KVSource(void *p);
   static void streamer_KVSource(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSource*)
   {
      ::KVSource *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSource >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSource", ::KVSource::Class_Version(), "KVSource.h", 16,
                  typeid(::KVSource), DefineBehavior(ptr, ptr),
                  &::KVSource::Dictionary, isa_proxy, 16,
                  sizeof(::KVSource) );
      instance.SetNew(&new_KVSource);
      instance.SetNewArray(&newArray_KVSource);
      instance.SetDelete(&delete_KVSource);
      instance.SetDeleteArray(&deleteArray_KVSource);
      instance.SetDestructor(&destruct_KVSource);
      instance.SetStreamerFunc(&streamer_KVSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSource*)
   {
      return GenerateInitInstanceLocal((::KVSource*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSource*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultIMF(void *p = 0);
   static void *newArray_KVMultIMF(Long_t size, void *p);
   static void delete_KVMultIMF(void *p);
   static void deleteArray_KVMultIMF(void *p);
   static void destruct_KVMultIMF(void *p);
   static void streamer_KVMultIMF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultIMF*)
   {
      ::KVMultIMF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultIMF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultIMF", ::KVMultIMF::Class_Version(), "KVMultIMF.h", 14,
                  typeid(::KVMultIMF), DefineBehavior(ptr, ptr),
                  &::KVMultIMF::Dictionary, isa_proxy, 16,
                  sizeof(::KVMultIMF) );
      instance.SetNew(&new_KVMultIMF);
      instance.SetNewArray(&newArray_KVMultIMF);
      instance.SetDelete(&delete_KVMultIMF);
      instance.SetDeleteArray(&deleteArray_KVMultIMF);
      instance.SetDestructor(&destruct_KVMultIMF);
      instance.SetStreamerFunc(&streamer_KVMultIMF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultIMF*)
   {
      return GenerateInitInstanceLocal((::KVMultIMF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultIMF*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultLeg(void *p = 0);
   static void *newArray_KVMultLeg(Long_t size, void *p);
   static void delete_KVMultLeg(void *p);
   static void deleteArray_KVMultLeg(void *p);
   static void destruct_KVMultLeg(void *p);
   static void streamer_KVMultLeg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultLeg*)
   {
      ::KVMultLeg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultLeg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultLeg", ::KVMultLeg::Class_Version(), "KVMultLeg.h", 14,
                  typeid(::KVMultLeg), DefineBehavior(ptr, ptr),
                  &::KVMultLeg::Dictionary, isa_proxy, 16,
                  sizeof(::KVMultLeg) );
      instance.SetNew(&new_KVMultLeg);
      instance.SetNewArray(&newArray_KVMultLeg);
      instance.SetDelete(&delete_KVMultLeg);
      instance.SetDeleteArray(&deleteArray_KVMultLeg);
      instance.SetDestructor(&destruct_KVMultLeg);
      instance.SetStreamerFunc(&streamer_KVMultLeg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultLeg*)
   {
      return GenerateInitInstanceLocal((::KVMultLeg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultLeg*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultAv(void *p = 0);
   static void *newArray_KVMultAv(Long_t size, void *p);
   static void delete_KVMultAv(void *p);
   static void deleteArray_KVMultAv(void *p);
   static void destruct_KVMultAv(void *p);
   static void streamer_KVMultAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultAv*)
   {
      ::KVMultAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultAv", ::KVMultAv::Class_Version(), "KVMultAv.h", 14,
                  typeid(::KVMultAv), DefineBehavior(ptr, ptr),
                  &::KVMultAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVMultAv) );
      instance.SetNew(&new_KVMultAv);
      instance.SetNewArray(&newArray_KVMultAv);
      instance.SetDelete(&delete_KVMultAv);
      instance.SetDeleteArray(&deleteArray_KVMultAv);
      instance.SetDestructor(&destruct_KVMultAv);
      instance.SetStreamerFunc(&streamer_KVMultAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultAv*)
   {
      return GenerateInitInstanceLocal((::KVMultAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultIMFAv(void *p = 0);
   static void *newArray_KVMultIMFAv(Long_t size, void *p);
   static void delete_KVMultIMFAv(void *p);
   static void deleteArray_KVMultIMFAv(void *p);
   static void destruct_KVMultIMFAv(void *p);
   static void streamer_KVMultIMFAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultIMFAv*)
   {
      ::KVMultIMFAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultIMFAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultIMFAv", ::KVMultIMFAv::Class_Version(), "KVMultIMFAv.h", 14,
                  typeid(::KVMultIMFAv), DefineBehavior(ptr, ptr),
                  &::KVMultIMFAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVMultIMFAv) );
      instance.SetNew(&new_KVMultIMFAv);
      instance.SetNewArray(&newArray_KVMultIMFAv);
      instance.SetDelete(&delete_KVMultIMFAv);
      instance.SetDeleteArray(&deleteArray_KVMultIMFAv);
      instance.SetDestructor(&destruct_KVMultIMFAv);
      instance.SetStreamerFunc(&streamer_KVMultIMFAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultIMFAv*)
   {
      return GenerateInitInstanceLocal((::KVMultIMFAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultIMFAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMultLegAv(void *p = 0);
   static void *newArray_KVMultLegAv(Long_t size, void *p);
   static void delete_KVMultLegAv(void *p);
   static void deleteArray_KVMultLegAv(void *p);
   static void destruct_KVMultLegAv(void *p);
   static void streamer_KVMultLegAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMultLegAv*)
   {
      ::KVMultLegAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMultLegAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMultLegAv", ::KVMultLegAv::Class_Version(), "KVMultLegAv.h", 14,
                  typeid(::KVMultLegAv), DefineBehavior(ptr, ptr),
                  &::KVMultLegAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVMultLegAv) );
      instance.SetNew(&new_KVMultLegAv);
      instance.SetNewArray(&newArray_KVMultLegAv);
      instance.SetDelete(&delete_KVMultLegAv);
      instance.SetDeleteArray(&deleteArray_KVMultLegAv);
      instance.SetDestructor(&destruct_KVMultLegAv);
      instance.SetStreamerFunc(&streamer_KVMultLegAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMultLegAv*)
   {
      return GenerateInitInstanceLocal((::KVMultLegAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMultLegAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTenseur3(void *p = 0);
   static void *newArray_KVTenseur3(Long_t size, void *p);
   static void delete_KVTenseur3(void *p);
   static void deleteArray_KVTenseur3(void *p);
   static void destruct_KVTenseur3(void *p);
   static void streamer_KVTenseur3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTenseur3*)
   {
      ::KVTenseur3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTenseur3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTenseur3", ::KVTenseur3::Class_Version(), "KVTenseur3.h", 15,
                  typeid(::KVTenseur3), DefineBehavior(ptr, ptr),
                  &::KVTenseur3::Dictionary, isa_proxy, 16,
                  sizeof(::KVTenseur3) );
      instance.SetNew(&new_KVTenseur3);
      instance.SetNewArray(&newArray_KVTenseur3);
      instance.SetDelete(&delete_KVTenseur3);
      instance.SetDeleteArray(&deleteArray_KVTenseur3);
      instance.SetDestructor(&destruct_KVTenseur3);
      instance.SetStreamerFunc(&streamer_KVTenseur3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTenseur3*)
   {
      return GenerateInitInstanceLocal((::KVTenseur3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTenseur3*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTensP(void *p = 0);
   static void *newArray_KVTensP(Long_t size, void *p);
   static void delete_KVTensP(void *p);
   static void deleteArray_KVTensP(void *p);
   static void destruct_KVTensP(void *p);
   static void streamer_KVTensP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTensP*)
   {
      ::KVTensP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTensP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTensP", ::KVTensP::Class_Version(), "KVTensP.h", 16,
                  typeid(::KVTensP), DefineBehavior(ptr, ptr),
                  &::KVTensP::Dictionary, isa_proxy, 16,
                  sizeof(::KVTensP) );
      instance.SetNew(&new_KVTensP);
      instance.SetNewArray(&newArray_KVTensP);
      instance.SetDelete(&delete_KVTensP);
      instance.SetDeleteArray(&deleteArray_KVTensP);
      instance.SetDestructor(&destruct_KVTensP);
      instance.SetStreamerFunc(&streamer_KVTensP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTensP*)
   {
      return GenerateInitInstanceLocal((::KVTensP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTensP*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTensE(void *p = 0);
   static void *newArray_KVTensE(Long_t size, void *p);
   static void delete_KVTensE(void *p);
   static void deleteArray_KVTensE(void *p);
   static void destruct_KVTensE(void *p);
   static void streamer_KVTensE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTensE*)
   {
      ::KVTensE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTensE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTensE", ::KVTensE::Class_Version(), "KVTensE.h", 15,
                  typeid(::KVTensE), DefineBehavior(ptr, ptr),
                  &::KVTensE::Dictionary, isa_proxy, 16,
                  sizeof(::KVTensE) );
      instance.SetNew(&new_KVTensE);
      instance.SetNewArray(&newArray_KVTensE);
      instance.SetDelete(&delete_KVTensE);
      instance.SetDeleteArray(&deleteArray_KVTensE);
      instance.SetDestructor(&destruct_KVTensE);
      instance.SetStreamerFunc(&streamer_KVTensE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTensE*)
   {
      return GenerateInitInstanceLocal((::KVTensE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTensE*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTensPCM(void *p = 0);
   static void *newArray_KVTensPCM(Long_t size, void *p);
   static void delete_KVTensPCM(void *p);
   static void deleteArray_KVTensPCM(void *p);
   static void destruct_KVTensPCM(void *p);
   static void streamer_KVTensPCM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTensPCM*)
   {
      ::KVTensPCM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTensPCM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTensPCM", ::KVTensPCM::Class_Version(), "KVTensPCM.h", 11,
                  typeid(::KVTensPCM), DefineBehavior(ptr, ptr),
                  &::KVTensPCM::Dictionary, isa_proxy, 16,
                  sizeof(::KVTensPCM) );
      instance.SetNew(&new_KVTensPCM);
      instance.SetNewArray(&newArray_KVTensPCM);
      instance.SetDelete(&delete_KVTensPCM);
      instance.SetDeleteArray(&deleteArray_KVTensPCM);
      instance.SetDestructor(&destruct_KVTensPCM);
      instance.SetStreamerFunc(&streamer_KVTensPCM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTensPCM*)
   {
      return GenerateInitInstanceLocal((::KVTensPCM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTensPCM*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRiso(void *p = 0);
   static void *newArray_KVRiso(Long_t size, void *p);
   static void delete_KVRiso(void *p);
   static void deleteArray_KVRiso(void *p);
   static void destruct_KVRiso(void *p);
   static void streamer_KVRiso(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRiso*)
   {
      ::KVRiso *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRiso >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRiso", ::KVRiso::Class_Version(), "KVRiso.h", 14,
                  typeid(::KVRiso), DefineBehavior(ptr, ptr),
                  &::KVRiso::Dictionary, isa_proxy, 16,
                  sizeof(::KVRiso) );
      instance.SetNew(&new_KVRiso);
      instance.SetNewArray(&newArray_KVRiso);
      instance.SetDelete(&delete_KVRiso);
      instance.SetDeleteArray(&deleteArray_KVRiso);
      instance.SetDestructor(&destruct_KVRiso);
      instance.SetStreamerFunc(&streamer_KVRiso);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRiso*)
   {
      return GenerateInitInstanceLocal((::KVRiso*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRiso*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFoxH2(void *p = 0);
   static void *newArray_KVFoxH2(Long_t size, void *p);
   static void delete_KVFoxH2(void *p);
   static void deleteArray_KVFoxH2(void *p);
   static void destruct_KVFoxH2(void *p);
   static void streamer_KVFoxH2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFoxH2*)
   {
      ::KVFoxH2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFoxH2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFoxH2", ::KVFoxH2::Class_Version(), "KVFoxH2.h", 15,
                  typeid(::KVFoxH2), DefineBehavior(ptr, ptr),
                  &::KVFoxH2::Dictionary, isa_proxy, 16,
                  sizeof(::KVFoxH2) );
      instance.SetNew(&new_KVFoxH2);
      instance.SetNewArray(&newArray_KVFoxH2);
      instance.SetDelete(&delete_KVFoxH2);
      instance.SetDeleteArray(&deleteArray_KVFoxH2);
      instance.SetDestructor(&destruct_KVFoxH2);
      instance.SetStreamerFunc(&streamer_KVFoxH2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFoxH2*)
   {
      return GenerateInitInstanceLocal((::KVFoxH2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFoxH2*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRisoAv(void *p = 0);
   static void *newArray_KVRisoAv(Long_t size, void *p);
   static void delete_KVRisoAv(void *p);
   static void deleteArray_KVRisoAv(void *p);
   static void destruct_KVRisoAv(void *p);
   static void streamer_KVRisoAv(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRisoAv*)
   {
      ::KVRisoAv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRisoAv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRisoAv", ::KVRisoAv::Class_Version(), "KVRisoAv.h", 14,
                  typeid(::KVRisoAv), DefineBehavior(ptr, ptr),
                  &::KVRisoAv::Dictionary, isa_proxy, 16,
                  sizeof(::KVRisoAv) );
      instance.SetNew(&new_KVRisoAv);
      instance.SetNewArray(&newArray_KVRisoAv);
      instance.SetDelete(&delete_KVRisoAv);
      instance.SetDeleteArray(&deleteArray_KVRisoAv);
      instance.SetDestructor(&destruct_KVRisoAv);
      instance.SetStreamerFunc(&streamer_KVRisoAv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRisoAv*)
   {
      return GenerateInitInstanceLocal((::KVRisoAv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRisoAv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRelativeVelocity(void *p = 0);
   static void *newArray_KVRelativeVelocity(Long_t size, void *p);
   static void delete_KVRelativeVelocity(void *p);
   static void deleteArray_KVRelativeVelocity(void *p);
   static void destruct_KVRelativeVelocity(void *p);
   static void streamer_KVRelativeVelocity(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRelativeVelocity*)
   {
      ::KVRelativeVelocity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRelativeVelocity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRelativeVelocity", ::KVRelativeVelocity::Class_Version(), "KVRelativeVelocity.h", 15,
                  typeid(::KVRelativeVelocity), DefineBehavior(ptr, ptr),
                  &::KVRelativeVelocity::Dictionary, isa_proxy, 16,
                  sizeof(::KVRelativeVelocity) );
      instance.SetNew(&new_KVRelativeVelocity);
      instance.SetNewArray(&newArray_KVRelativeVelocity);
      instance.SetDelete(&delete_KVRelativeVelocity);
      instance.SetDeleteArray(&deleteArray_KVRelativeVelocity);
      instance.SetDestructor(&destruct_KVRelativeVelocity);
      instance.SetStreamerFunc(&streamer_KVRelativeVelocity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRelativeVelocity*)
   {
      return GenerateInitInstanceLocal((::KVRelativeVelocity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRelativeVelocity*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVQuadMoment(void *p = 0);
   static void *newArray_KVQuadMoment(Long_t size, void *p);
   static void delete_KVQuadMoment(void *p);
   static void deleteArray_KVQuadMoment(void *p);
   static void destruct_KVQuadMoment(void *p);
   static void streamer_KVQuadMoment(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVQuadMoment*)
   {
      ::KVQuadMoment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVQuadMoment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVQuadMoment", ::KVQuadMoment::Class_Version(), "KVQuadMoment.h", 9,
                  typeid(::KVQuadMoment), DefineBehavior(ptr, ptr),
                  &::KVQuadMoment::Dictionary, isa_proxy, 16,
                  sizeof(::KVQuadMoment) );
      instance.SetNew(&new_KVQuadMoment);
      instance.SetNewArray(&newArray_KVQuadMoment);
      instance.SetDelete(&delete_KVQuadMoment);
      instance.SetDeleteArray(&deleteArray_KVQuadMoment);
      instance.SetDestructor(&destruct_KVQuadMoment);
      instance.SetStreamerFunc(&streamer_KVQuadMoment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVQuadMoment*)
   {
      return GenerateInitInstanceLocal((::KVQuadMoment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVQuadMoment*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFlowTensor(void *p = 0);
   static void *newArray_KVFlowTensor(Long_t size, void *p);
   static void delete_KVFlowTensor(void *p);
   static void deleteArray_KVFlowTensor(void *p);
   static void destruct_KVFlowTensor(void *p);
   static void streamer_KVFlowTensor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFlowTensor*)
   {
      ::KVFlowTensor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFlowTensor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFlowTensor", ::KVFlowTensor::Class_Version(), "KVFlowTensor.h", 11,
                  typeid(::KVFlowTensor), DefineBehavior(ptr, ptr),
                  &::KVFlowTensor::Dictionary, isa_proxy, 16,
                  sizeof(::KVFlowTensor) );
      instance.SetNew(&new_KVFlowTensor);
      instance.SetNewArray(&newArray_KVFlowTensor);
      instance.SetDelete(&delete_KVFlowTensor);
      instance.SetDeleteArray(&deleteArray_KVFlowTensor);
      instance.SetDestructor(&destruct_KVFlowTensor);
      instance.SetStreamerFunc(&streamer_KVFlowTensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFlowTensor*)
   {
      return GenerateInitInstanceLocal((::KVFlowTensor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFlowTensor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVVarGlob::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVarGlob::Class_Name()
{
   return "KVVarGlob";
}

//______________________________________________________________________________
const char *KVVarGlob::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVarGlob::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVarGlob::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVarGlob::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVarGlob1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVarGlob1::Class_Name()
{
   return "KVVarGlob1";
}

//______________________________________________________________________________
const char *KVVarGlob1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVarGlob1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVarGlob1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVarGlob1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlob1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVarGlobMean::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVarGlobMean::Class_Name()
{
   return "KVVarGlobMean";
}

//______________________________________________________________________________
const char *KVVarGlobMean::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlobMean*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVarGlobMean::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlobMean*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVarGlobMean::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlobMean*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVarGlobMean::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVarGlobMean*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVGSum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVGSum::Class_Name()
{
   return "KVVGSum";
}

//______________________________________________________________________________
const char *KVVGSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVGSum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVGSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVGSum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVGSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVGSum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVGSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVGSum*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGVList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGVList::Class_Name()
{
   return "KVGVList";
}

//______________________________________________________________________________
const char *KVGVList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGVList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGVList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGVList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGVList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGVList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGVList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGVList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZtot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZtot::Class_Name()
{
   return "KVZtot";
}

//______________________________________________________________________________
const char *KVZtot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZtot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZtot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZtot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZtot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZtot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZtot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZtot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZmean::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZmean::Class_Name()
{
   return "KVZmean";
}

//______________________________________________________________________________
const char *KVZmean::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZmean*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZmean::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZmean*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZmean::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZmean*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZmean::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZmean*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZbound::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZbound::Class_Name()
{
   return "KVZbound";
}

//______________________________________________________________________________
const char *KVZbound::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZbound*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZbound::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZbound*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZbound::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZbound*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZbound::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZbound*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZBoundMean::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZBoundMean::Class_Name()
{
   return "KVZBoundMean";
}

//______________________________________________________________________________
const char *KVZBoundMean::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZBoundMean*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZBoundMean::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZBoundMean*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZBoundMean::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZBoundMean*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZBoundMean::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZBoundMean*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZtotAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZtotAv::Class_Name()
{
   return "KVZtotAv";
}

//______________________________________________________________________________
const char *KVZtotAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZtotAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZtotAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZtotAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZtotAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZtotAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZtotAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZtotAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZboundAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZboundAv::Class_Name()
{
   return "KVZboundAv";
}

//______________________________________________________________________________
const char *KVZboundAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZboundAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZboundAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZboundAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZboundAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZboundAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZboundAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZboundAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZmax::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZmax::Class_Name()
{
   return "KVZmax";
}

//______________________________________________________________________________
const char *KVZmax::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZmax*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZmax::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZmax*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZmax::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZmax*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZmax::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZmax*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEtrans::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEtrans::Class_Name()
{
   return "KVEtrans";
}

//______________________________________________________________________________
const char *KVEtrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEtrans*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEtrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEtrans*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEtrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEtrans*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEtrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEtrans*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEtransLCP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEtransLCP::Class_Name()
{
   return "KVEtransLCP";
}

//______________________________________________________________________________
const char *KVEtransLCP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEtransLCP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEtransLCP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEtransLCP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEtransLCP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEtransLCP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEtransLCP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEtransLCP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEkin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEkin::Class_Name()
{
   return "KVEkin";
}

//______________________________________________________________________________
const char *KVEkin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEkin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEkin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEkin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEkin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEkin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEkin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEkin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCaloBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCaloBase::Class_Name()
{
   return "KVCaloBase";
}

//______________________________________________________________________________
const char *KVCaloBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCaloBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCaloBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCaloBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCaloBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCaloBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCaloBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCaloBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCalorimetry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCalorimetry::Class_Name()
{
   return "KVCalorimetry";
}

//______________________________________________________________________________
const char *KVCalorimetry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalorimetry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCalorimetry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalorimetry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCalorimetry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalorimetry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCalorimetry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalorimetry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPtot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPtot::Class_Name()
{
   return "KVPtot";
}

//______________________________________________________________________________
const char *KVPtot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPtot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPtot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPtot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPtot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPtot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPtot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPtot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZVtot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZVtot::Class_Name()
{
   return "KVZVtot";
}

//______________________________________________________________________________
const char *KVZVtot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZVtot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZVtot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZVtot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZVtot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZVtot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZVtot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZVtot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSource::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSource::Class_Name()
{
   return "KVSource";
}

//______________________________________________________________________________
const char *KVSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSource*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSource*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSource*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSource*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultIMF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultIMF::Class_Name()
{
   return "KVMultIMF";
}

//______________________________________________________________________________
const char *KVMultIMF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultIMF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultIMF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultIMF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultLeg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultLeg::Class_Name()
{
   return "KVMultLeg";
}

//______________________________________________________________________________
const char *KVMultLeg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultLeg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultLeg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultLeg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultLeg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultLeg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultLeg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultLeg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultAv::Class_Name()
{
   return "KVMultAv";
}

//______________________________________________________________________________
const char *KVMultAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultIMFAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultIMFAv::Class_Name()
{
   return "KVMultIMFAv";
}

//______________________________________________________________________________
const char *KVMultIMFAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMFAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultIMFAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMFAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultIMFAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMFAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultIMFAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultIMFAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMultLegAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMultLegAv::Class_Name()
{
   return "KVMultLegAv";
}

//______________________________________________________________________________
const char *KVMultLegAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultLegAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMultLegAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMultLegAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMultLegAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultLegAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMultLegAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMultLegAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTenseur3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTenseur3::Class_Name()
{
   return "KVTenseur3";
}

//______________________________________________________________________________
const char *KVTenseur3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTenseur3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTenseur3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTenseur3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTenseur3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTenseur3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTenseur3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTenseur3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTensP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTensP::Class_Name()
{
   return "KVTensP";
}

//______________________________________________________________________________
const char *KVTensP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTensP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTensP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTensP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTensE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTensE::Class_Name()
{
   return "KVTensE";
}

//______________________________________________________________________________
const char *KVTensE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTensE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTensE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTensE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTensPCM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTensPCM::Class_Name()
{
   return "KVTensPCM";
}

//______________________________________________________________________________
const char *KVTensPCM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensPCM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTensPCM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTensPCM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTensPCM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensPCM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTensPCM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTensPCM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRiso::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRiso::Class_Name()
{
   return "KVRiso";
}

//______________________________________________________________________________
const char *KVRiso::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRiso*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRiso::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRiso*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRiso::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRiso*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRiso::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRiso*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFoxH2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFoxH2::Class_Name()
{
   return "KVFoxH2";
}

//______________________________________________________________________________
const char *KVFoxH2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFoxH2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFoxH2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFoxH2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFoxH2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFoxH2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFoxH2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFoxH2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRisoAv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRisoAv::Class_Name()
{
   return "KVRisoAv";
}

//______________________________________________________________________________
const char *KVRisoAv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRisoAv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRisoAv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRisoAv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRisoAv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRisoAv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRisoAv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRisoAv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRelativeVelocity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRelativeVelocity::Class_Name()
{
   return "KVRelativeVelocity";
}

//______________________________________________________________________________
const char *KVRelativeVelocity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRelativeVelocity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRelativeVelocity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRelativeVelocity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRelativeVelocity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRelativeVelocity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRelativeVelocity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRelativeVelocity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVQuadMoment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVQuadMoment::Class_Name()
{
   return "KVQuadMoment";
}

//______________________________________________________________________________
const char *KVQuadMoment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVQuadMoment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVQuadMoment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVQuadMoment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVQuadMoment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVQuadMoment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVQuadMoment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVQuadMoment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFlowTensor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFlowTensor::Class_Name()
{
   return "KVFlowTensor";
}

//______________________________________________________________________________
const char *KVFlowTensor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFlowTensor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFlowTensor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFlowTensor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFlowTensor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFlowTensor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFlowTensor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFlowTensor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVVarGlob::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVarGlob.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      nameList.Streamer(R__b);
      fFrame.Streamer(R__b);
      fOptions.Streamer(R__b);
      fParameters.Streamer(R__b);
      R__b >> fSelection;
      R__b >> fType;
      R__b >> fValueType;
      R__b >> fMaxNumBranches;
      R__b.CheckByteCount(R__s, R__c, KVVarGlob::IsA());
   } else {
      R__c = R__b.WriteVersion(KVVarGlob::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      nameList.Streamer(R__b);
      fFrame.Streamer(R__b);
      fOptions.Streamer(R__b);
      fParameters.Streamer(R__b);
      R__b << fSelection;
      R__b << fType;
      R__b << fValueType;
      R__b << fMaxNumBranches;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVarGlob(void *p) {
      return  p ? new(p) ::KVVarGlob : new ::KVVarGlob;
   }
   static void *newArray_KVVarGlob(Long_t nElements, void *p) {
      return p ? new(p) ::KVVarGlob[nElements] : new ::KVVarGlob[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVarGlob(void *p) {
      delete ((::KVVarGlob*)p);
   }
   static void deleteArray_KVVarGlob(void *p) {
      delete [] ((::KVVarGlob*)p);
   }
   static void destruct_KVVarGlob(void *p) {
      typedef ::KVVarGlob current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVarGlob(TBuffer &buf, void *obj) {
      ((::KVVarGlob*)obj)->::KVVarGlob::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVarGlob

//______________________________________________________________________________
void KVVarGlob1::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVarGlob1.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      R__b >> var;
      R__b.CheckByteCount(R__s, R__c, KVVarGlob1::IsA());
   } else {
      R__c = R__b.WriteVersion(KVVarGlob1::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b << var;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVarGlob1(void *p) {
      return  p ? new(p) ::KVVarGlob1 : new ::KVVarGlob1;
   }
   static void *newArray_KVVarGlob1(Long_t nElements, void *p) {
      return p ? new(p) ::KVVarGlob1[nElements] : new ::KVVarGlob1[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVarGlob1(void *p) {
      delete ((::KVVarGlob1*)p);
   }
   static void deleteArray_KVVarGlob1(void *p) {
      delete [] ((::KVVarGlob1*)p);
   }
   static void destruct_KVVarGlob1(void *p) {
      typedef ::KVVarGlob1 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVarGlob1(TBuffer &buf, void *obj) {
      ((::KVVarGlob1*)obj)->::KVVarGlob1::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVarGlob1

//______________________________________________________________________________
void KVVarGlobMean::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVarGlobMean.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b >> ect;
      R__b >> svar2;
      R__b >> svar;
      R__b >> sw;
      R__b >> min;
      R__b >> max;
      R__b >> calc;
      R__b.CheckByteCount(R__s, R__c, KVVarGlobMean::IsA());
   } else {
      R__c = R__b.WriteVersion(KVVarGlobMean::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b << ect;
      R__b << svar2;
      R__b << svar;
      R__b << sw;
      R__b << min;
      R__b << max;
      R__b << calc;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVarGlobMean(void *p) {
      return  p ? new(p) ::KVVarGlobMean : new ::KVVarGlobMean;
   }
   static void *newArray_KVVarGlobMean(Long_t nElements, void *p) {
      return p ? new(p) ::KVVarGlobMean[nElements] : new ::KVVarGlobMean[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVarGlobMean(void *p) {
      delete ((::KVVarGlobMean*)p);
   }
   static void deleteArray_KVVarGlobMean(void *p) {
      delete [] ((::KVVarGlobMean*)p);
   }
   static void destruct_KVVarGlobMean(void *p) {
      typedef ::KVVarGlobMean current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVarGlobMean(TBuffer &buf, void *obj) {
      ((::KVVarGlobMean*)obj)->::KVVarGlobMean::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVarGlobMean

//______________________________________________________________________________
void KVVGSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVGSum.

   KVVarGlobMean::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVGSum(void *p) {
      return  p ? new(p) ::KVVGSum : new ::KVVGSum;
   }
   static void *newArray_KVVGSum(Long_t nElements, void *p) {
      return p ? new(p) ::KVVGSum[nElements] : new ::KVVGSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVGSum(void *p) {
      delete ((::KVVGSum*)p);
   }
   static void deleteArray_KVVGSum(void *p) {
      delete [] ((::KVVGSum*)p);
   }
   static void destruct_KVVGSum(void *p) {
      typedef ::KVVGSum current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVVGSum(TBuffer &buf, void *obj) {
      ((::KVVGSum*)obj)->::KVVGSum::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVVGSum

//______________________________________________________________________________
void KVGVList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGVList.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVList::Streamer(R__b);
      R__b >> fNbBranch;
      R__b >> fNbIBranch;
      fVG1.Streamer(R__b);
      fVG2.Streamer(R__b);
      fVGN.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVGVList::IsA());
   } else {
      R__c = R__b.WriteVersion(KVGVList::IsA(), kTRUE);
      KVList::Streamer(R__b);
      R__b << fNbBranch;
      R__b << fNbIBranch;
      fVG1.Streamer(R__b);
      fVG2.Streamer(R__b);
      fVGN.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGVList(void *p) {
      return  p ? new(p) ::KVGVList : new ::KVGVList;
   }
   static void *newArray_KVGVList(Long_t nElements, void *p) {
      return p ? new(p) ::KVGVList[nElements] : new ::KVGVList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGVList(void *p) {
      delete ((::KVGVList*)p);
   }
   static void deleteArray_KVGVList(void *p) {
      delete [] ((::KVGVList*)p);
   }
   static void destruct_KVGVList(void *p) {
      typedef ::KVGVList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGVList(TBuffer &buf, void *obj) {
      ((::KVGVList*)obj)->::KVGVList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVGVList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVGVList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVGVList

//______________________________________________________________________________
void KVZtot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZtot.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZtot::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZtot::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZtot(void *p) {
      return  p ? new(p) ::KVZtot : new ::KVZtot;
   }
   static void *newArray_KVZtot(Long_t nElements, void *p) {
      return p ? new(p) ::KVZtot[nElements] : new ::KVZtot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZtot(void *p) {
      delete ((::KVZtot*)p);
   }
   static void deleteArray_KVZtot(void *p) {
      delete [] ((::KVZtot*)p);
   }
   static void destruct_KVZtot(void *p) {
      typedef ::KVZtot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZtot(TBuffer &buf, void *obj) {
      ((::KVZtot*)obj)->::KVZtot::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZtot

//______________________________________________________________________________
void KVZmean::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZmean.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlobMean::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZmean::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZmean::IsA(), kTRUE);
      KVVarGlobMean::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZmean(void *p) {
      return  p ? new(p) ::KVZmean : new ::KVZmean;
   }
   static void *newArray_KVZmean(Long_t nElements, void *p) {
      return p ? new(p) ::KVZmean[nElements] : new ::KVZmean[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZmean(void *p) {
      delete ((::KVZmean*)p);
   }
   static void deleteArray_KVZmean(void *p) {
      delete [] ((::KVZmean*)p);
   }
   static void destruct_KVZmean(void *p) {
      typedef ::KVZmean current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZmean(TBuffer &buf, void *obj) {
      ((::KVZmean*)obj)->::KVZmean::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZmean

//______________________________________________________________________________
void KVZbound::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZbound.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b >> zmin;
      R__b >> zmax;
      R__b >> vmin;
      R__b >> vmax;
      R__b.CheckByteCount(R__s, R__c, KVZbound::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZbound::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b << zmin;
      R__b << zmax;
      R__b << vmin;
      R__b << vmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZbound(void *p) {
      return  p ? new(p) ::KVZbound : new ::KVZbound;
   }
   static void *newArray_KVZbound(Long_t nElements, void *p) {
      return p ? new(p) ::KVZbound[nElements] : new ::KVZbound[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZbound(void *p) {
      delete ((::KVZbound*)p);
   }
   static void deleteArray_KVZbound(void *p) {
      delete [] ((::KVZbound*)p);
   }
   static void destruct_KVZbound(void *p) {
      typedef ::KVZbound current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZbound(TBuffer &buf, void *obj) {
      ((::KVZbound*)obj)->::KVZbound::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZbound

//______________________________________________________________________________
void KVZBoundMean::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZBoundMean.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlobMean::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZBoundMean::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZBoundMean::IsA(), kTRUE);
      KVVarGlobMean::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZBoundMean(void *p) {
      return  p ? new(p) ::KVZBoundMean : new ::KVZBoundMean;
   }
   static void *newArray_KVZBoundMean(Long_t nElements, void *p) {
      return p ? new(p) ::KVZBoundMean[nElements] : new ::KVZBoundMean[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZBoundMean(void *p) {
      delete ((::KVZBoundMean*)p);
   }
   static void deleteArray_KVZBoundMean(void *p) {
      delete [] ((::KVZBoundMean*)p);
   }
   static void destruct_KVZBoundMean(void *p) {
      typedef ::KVZBoundMean current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZBoundMean(TBuffer &buf, void *obj) {
      ((::KVZBoundMean*)obj)->::KVZBoundMean::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZBoundMean

//______________________________________________________________________________
void KVZtotAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZtotAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVZtot::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZtotAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZtotAv::IsA(), kTRUE);
      KVZtot::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZtotAv(void *p) {
      return  p ? new(p) ::KVZtotAv : new ::KVZtotAv;
   }
   static void *newArray_KVZtotAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVZtotAv[nElements] : new ::KVZtotAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZtotAv(void *p) {
      delete ((::KVZtotAv*)p);
   }
   static void deleteArray_KVZtotAv(void *p) {
      delete [] ((::KVZtotAv*)p);
   }
   static void destruct_KVZtotAv(void *p) {
      typedef ::KVZtotAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZtotAv(TBuffer &buf, void *obj) {
      ((::KVZtotAv*)obj)->::KVZtotAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZtotAv

//______________________________________________________________________________
void KVZboundAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZboundAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVZbound::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZboundAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZboundAv::IsA(), kTRUE);
      KVZbound::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZboundAv(void *p) {
      return  p ? new(p) ::KVZboundAv : new ::KVZboundAv;
   }
   static void *newArray_KVZboundAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVZboundAv[nElements] : new ::KVZboundAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZboundAv(void *p) {
      delete ((::KVZboundAv*)p);
   }
   static void deleteArray_KVZboundAv(void *p) {
      delete [] ((::KVZboundAv*)p);
   }
   static void destruct_KVZboundAv(void *p) {
      typedef ::KVZboundAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZboundAv(TBuffer &buf, void *obj) {
      ((::KVZboundAv*)obj)->::KVZboundAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZboundAv

//______________________________________________________________________________
void KVZmax::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZmax.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b >> heaviest;
      R__b >> fSorted;
      R__b.CheckByteCount(R__s, R__c, KVZmax::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZmax::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b << heaviest;
      R__b << fSorted;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZmax(void *p) {
      return  p ? new(p) ::KVZmax : new ::KVZmax;
   }
   static void *newArray_KVZmax(Long_t nElements, void *p) {
      return p ? new(p) ::KVZmax[nElements] : new ::KVZmax[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZmax(void *p) {
      delete ((::KVZmax*)p);
   }
   static void deleteArray_KVZmax(void *p) {
      delete [] ((::KVZmax*)p);
   }
   static void destruct_KVZmax(void *p) {
      typedef ::KVZmax current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZmax(TBuffer &buf, void *obj) {
      ((::KVZmax*)obj)->::KVZmax::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZmax

//______________________________________________________________________________
void KVEtrans::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEtrans.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVEtrans::IsA());
   } else {
      R__c = R__b.WriteVersion(KVEtrans::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEtrans(void *p) {
      return  p ? new(p) ::KVEtrans : new ::KVEtrans;
   }
   static void *newArray_KVEtrans(Long_t nElements, void *p) {
      return p ? new(p) ::KVEtrans[nElements] : new ::KVEtrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEtrans(void *p) {
      delete ((::KVEtrans*)p);
   }
   static void deleteArray_KVEtrans(void *p) {
      delete [] ((::KVEtrans*)p);
   }
   static void destruct_KVEtrans(void *p) {
      typedef ::KVEtrans current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVEtrans(TBuffer &buf, void *obj) {
      ((::KVEtrans*)obj)->::KVEtrans::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVEtrans

//______________________________________________________________________________
void KVEtransLCP::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEtransLCP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVEtrans::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVEtransLCP::IsA());
   } else {
      R__c = R__b.WriteVersion(KVEtransLCP::IsA(), kTRUE);
      KVEtrans::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEtransLCP(void *p) {
      return  p ? new(p) ::KVEtransLCP : new ::KVEtransLCP;
   }
   static void *newArray_KVEtransLCP(Long_t nElements, void *p) {
      return p ? new(p) ::KVEtransLCP[nElements] : new ::KVEtransLCP[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEtransLCP(void *p) {
      delete ((::KVEtransLCP*)p);
   }
   static void deleteArray_KVEtransLCP(void *p) {
      delete [] ((::KVEtransLCP*)p);
   }
   static void destruct_KVEtransLCP(void *p) {
      typedef ::KVEtransLCP current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVEtransLCP(TBuffer &buf, void *obj) {
      ((::KVEtransLCP*)obj)->::KVEtransLCP::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVEtransLCP

//______________________________________________________________________________
void KVEkin::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEkin.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVEkin::IsA());
   } else {
      R__c = R__b.WriteVersion(KVEkin::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEkin(void *p) {
      return  p ? new(p) ::KVEkin : new ::KVEkin;
   }
   static void *newArray_KVEkin(Long_t nElements, void *p) {
      return p ? new(p) ::KVEkin[nElements] : new ::KVEkin[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEkin(void *p) {
      delete ((::KVEkin*)p);
   }
   static void deleteArray_KVEkin(void *p) {
      delete [] ((::KVEkin*)p);
   }
   static void destruct_KVEkin(void *p) {
      typedef ::KVEkin current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVEkin(TBuffer &buf, void *obj) {
      ((::KVEkin*)obj)->::KVEkin::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVEkin

//______________________________________________________________________________
void KVCaloBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCaloBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      R__b >> kIsModified;
      R__b >> kracine_max;
      R__b >> kracine_min;
      R__b >> kroot_status;
      R__b.CheckByteCount(R__s, R__c, KVCaloBase::IsA());
   } else {
      R__c = R__b.WriteVersion(KVCaloBase::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b << kIsModified;
      R__b << kracine_max;
      R__b << kracine_min;
      R__b << kroot_status;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCaloBase(void *p) {
      return  p ? new(p) ::KVCaloBase : new ::KVCaloBase;
   }
   static void *newArray_KVCaloBase(Long_t nElements, void *p) {
      return p ? new(p) ::KVCaloBase[nElements] : new ::KVCaloBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCaloBase(void *p) {
      delete ((::KVCaloBase*)p);
   }
   static void deleteArray_KVCaloBase(void *p) {
      delete [] ((::KVCaloBase*)p);
   }
   static void destruct_KVCaloBase(void *p) {
      typedef ::KVCaloBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCaloBase(TBuffer &buf, void *obj) {
      ((::KVCaloBase*)obj)->::KVCaloBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCaloBase

//______________________________________________________________________________
void KVCalorimetry::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCalorimetry.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVCaloBase::Streamer(R__b);
      R__b >> kfree_neutrons_included;
      R__b >> kchargediff;
      R__b >> ktempdeduced;
      R__b.CheckByteCount(R__s, R__c, KVCalorimetry::IsA());
   } else {
      R__c = R__b.WriteVersion(KVCalorimetry::IsA(), kTRUE);
      KVCaloBase::Streamer(R__b);
      R__b << kfree_neutrons_included;
      R__b << kchargediff;
      R__b << ktempdeduced;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCalorimetry(void *p) {
      return  p ? new(p) ::KVCalorimetry : new ::KVCalorimetry;
   }
   static void *newArray_KVCalorimetry(Long_t nElements, void *p) {
      return p ? new(p) ::KVCalorimetry[nElements] : new ::KVCalorimetry[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCalorimetry(void *p) {
      delete ((::KVCalorimetry*)p);
   }
   static void deleteArray_KVCalorimetry(void *p) {
      delete [] ((::KVCalorimetry*)p);
   }
   static void destruct_KVCalorimetry(void *p) {
      typedef ::KVCalorimetry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCalorimetry(TBuffer &buf, void *obj) {
      ((::KVCalorimetry*)obj)->::KVCalorimetry::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCalorimetry

//______________________________________________________________________________
void KVPtot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPtot.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      ptot.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVPtot::IsA());
   } else {
      R__c = R__b.WriteVersion(KVPtot::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      ptot.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPtot(void *p) {
      return  p ? new(p) ::KVPtot : new ::KVPtot;
   }
   static void *newArray_KVPtot(Long_t nElements, void *p) {
      return p ? new(p) ::KVPtot[nElements] : new ::KVPtot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPtot(void *p) {
      delete ((::KVPtot*)p);
   }
   static void deleteArray_KVPtot(void *p) {
      delete [] ((::KVPtot*)p);
   }
   static void destruct_KVPtot(void *p) {
      typedef ::KVPtot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVPtot(TBuffer &buf, void *obj) {
      ((::KVPtot*)obj)->::KVPtot::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVPtot

//______________________________________________________________________________
void KVZVtot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZVtot.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVPtot::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVZVtot::IsA());
   } else {
      R__c = R__b.WriteVersion(KVZVtot::IsA(), kTRUE);
      KVPtot::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZVtot(void *p) {
      return  p ? new(p) ::KVZVtot : new ::KVZVtot;
   }
   static void *newArray_KVZVtot(Long_t nElements, void *p) {
      return p ? new(p) ::KVZVtot[nElements] : new ::KVZVtot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZVtot(void *p) {
      delete ((::KVZVtot*)p);
   }
   static void deleteArray_KVZVtot(void *p) {
      delete [] ((::KVZVtot*)p);
   }
   static void destruct_KVZVtot(void *p) {
      typedef ::KVZVtot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVZVtot(TBuffer &buf, void *obj) {
      ((::KVZVtot*)obj)->::KVZVtot::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVZVtot

//______________________________________________________________________________
void KVSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSource.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      fSource.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVSource::IsA());
   } else {
      R__c = R__b.WriteVersion(KVSource::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      fSource.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSource(void *p) {
      return  p ? new(p) ::KVSource : new ::KVSource;
   }
   static void *newArray_KVSource(Long_t nElements, void *p) {
      return p ? new(p) ::KVSource[nElements] : new ::KVSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSource(void *p) {
      delete ((::KVSource*)p);
   }
   static void deleteArray_KVSource(void *p) {
      delete [] ((::KVSource*)p);
   }
   static void destruct_KVSource(void *p) {
      typedef ::KVSource current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSource(TBuffer &buf, void *obj) {
      ((::KVSource*)obj)->::KVSource::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVSource

//______________________________________________________________________________
void KVMultIMF::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultIMF.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVZbound::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVMultIMF::IsA());
   } else {
      R__c = R__b.WriteVersion(KVMultIMF::IsA(), kTRUE);
      KVZbound::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultIMF(void *p) {
      return  p ? new(p) ::KVMultIMF : new ::KVMultIMF;
   }
   static void *newArray_KVMultIMF(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultIMF[nElements] : new ::KVMultIMF[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultIMF(void *p) {
      delete ((::KVMultIMF*)p);
   }
   static void deleteArray_KVMultIMF(void *p) {
      delete [] ((::KVMultIMF*)p);
   }
   static void destruct_KVMultIMF(void *p) {
      typedef ::KVMultIMF current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVMultIMF(TBuffer &buf, void *obj) {
      ((::KVMultIMF*)obj)->::KVMultIMF::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVMultIMF

//______________________________________________________________________________
void KVMultLeg::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultLeg.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b >> zmax;
      R__b.CheckByteCount(R__s, R__c, KVMultLeg::IsA());
   } else {
      R__c = R__b.WriteVersion(KVMultLeg::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b << zmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultLeg(void *p) {
      return  p ? new(p) ::KVMultLeg : new ::KVMultLeg;
   }
   static void *newArray_KVMultLeg(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultLeg[nElements] : new ::KVMultLeg[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultLeg(void *p) {
      delete ((::KVMultLeg*)p);
   }
   static void deleteArray_KVMultLeg(void *p) {
      delete [] ((::KVMultLeg*)p);
   }
   static void destruct_KVMultLeg(void *p) {
      typedef ::KVMultLeg current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVMultLeg(TBuffer &buf, void *obj) {
      ((::KVMultLeg*)obj)->::KVMultLeg::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVMultLeg

//______________________________________________________________________________
void KVMultAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVMultAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVMultAv::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultAv(void *p) {
      return  p ? new(p) ::KVMultAv : new ::KVMultAv;
   }
   static void *newArray_KVMultAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultAv[nElements] : new ::KVMultAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultAv(void *p) {
      delete ((::KVMultAv*)p);
   }
   static void deleteArray_KVMultAv(void *p) {
      delete [] ((::KVMultAv*)p);
   }
   static void destruct_KVMultAv(void *p) {
      typedef ::KVMultAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVMultAv(TBuffer &buf, void *obj) {
      ((::KVMultAv*)obj)->::KVMultAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVMultAv

//______________________________________________________________________________
void KVMultIMFAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultIMFAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVMultIMF::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVMultIMFAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVMultIMFAv::IsA(), kTRUE);
      KVMultIMF::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultIMFAv(void *p) {
      return  p ? new(p) ::KVMultIMFAv : new ::KVMultIMFAv;
   }
   static void *newArray_KVMultIMFAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultIMFAv[nElements] : new ::KVMultIMFAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultIMFAv(void *p) {
      delete ((::KVMultIMFAv*)p);
   }
   static void deleteArray_KVMultIMFAv(void *p) {
      delete [] ((::KVMultIMFAv*)p);
   }
   static void destruct_KVMultIMFAv(void *p) {
      typedef ::KVMultIMFAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVMultIMFAv(TBuffer &buf, void *obj) {
      ((::KVMultIMFAv*)obj)->::KVMultIMFAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVMultIMFAv

//______________________________________________________________________________
void KVMultLegAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMultLegAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVMultLeg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVMultLegAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVMultLegAv::IsA(), kTRUE);
      KVMultLeg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMultLegAv(void *p) {
      return  p ? new(p) ::KVMultLegAv : new ::KVMultLegAv;
   }
   static void *newArray_KVMultLegAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVMultLegAv[nElements] : new ::KVMultLegAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMultLegAv(void *p) {
      delete ((::KVMultLegAv*)p);
   }
   static void deleteArray_KVMultLegAv(void *p) {
      delete [] ((::KVMultLegAv*)p);
   }
   static void destruct_KVMultLegAv(void *p) {
      typedef ::KVMultLegAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVMultLegAv(TBuffer &buf, void *obj) {
      ((::KVMultLegAv*)obj)->::KVMultLegAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVMultLegAv

//______________________________________________________________________________
void KVTenseur3::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTenseur3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b.ReadStaticArray((double*)tenseur);
      R__b.ReadStaticArray((double*)vap);
      R__b.ReadStaticArray((double*)vep);
      R__b >> is_diago;
      R__b.CheckByteCount(R__s, R__c, KVTenseur3::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTenseur3::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b.WriteArray(tenseur, 9);
      R__b.WriteArray(vap, 3);
      R__b.WriteArray(vep, 9);
      R__b << is_diago;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTenseur3(void *p) {
      return  p ? new(p) ::KVTenseur3 : new ::KVTenseur3;
   }
   static void *newArray_KVTenseur3(Long_t nElements, void *p) {
      return p ? new(p) ::KVTenseur3[nElements] : new ::KVTenseur3[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTenseur3(void *p) {
      delete ((::KVTenseur3*)p);
   }
   static void deleteArray_KVTenseur3(void *p) {
      delete [] ((::KVTenseur3*)p);
   }
   static void destruct_KVTenseur3(void *p) {
      typedef ::KVTenseur3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTenseur3(TBuffer &buf, void *obj) {
      ((::KVTenseur3*)obj)->::KVTenseur3::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTenseur3

//______________________________________________________________________________
void KVTensP::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTensP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      R__b >> tenseurP;
      R__b.CheckByteCount(R__s, R__c, KVTensP::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTensP::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b << tenseurP;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTensP(void *p) {
      return  p ? new(p) ::KVTensP : new ::KVTensP;
   }
   static void *newArray_KVTensP(Long_t nElements, void *p) {
      return p ? new(p) ::KVTensP[nElements] : new ::KVTensP[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTensP(void *p) {
      delete ((::KVTensP*)p);
   }
   static void deleteArray_KVTensP(void *p) {
      delete [] ((::KVTensP*)p);
   }
   static void destruct_KVTensP(void *p) {
      typedef ::KVTensP current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTensP(TBuffer &buf, void *obj) {
      ((::KVTensP*)obj)->::KVTensP::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTensP

//______________________________________________________________________________
void KVTensE::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTensE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVTensP::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVTensE::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTensE::IsA(), kTRUE);
      KVTensP::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTensE(void *p) {
      return  p ? new(p) ::KVTensE : new ::KVTensE;
   }
   static void *newArray_KVTensE(Long_t nElements, void *p) {
      return p ? new(p) ::KVTensE[nElements] : new ::KVTensE[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTensE(void *p) {
      delete ((::KVTensE*)p);
   }
   static void deleteArray_KVTensE(void *p) {
      delete [] ((::KVTensE*)p);
   }
   static void destruct_KVTensE(void *p) {
      typedef ::KVTensE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTensE(TBuffer &buf, void *obj) {
      ((::KVTensE*)obj)->::KVTensE::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTensE

//______________________________________________________________________________
void KVTensPCM::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTensPCM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVTensP::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVTensPCM::IsA());
   } else {
      R__c = R__b.WriteVersion(KVTensPCM::IsA(), kTRUE);
      KVTensP::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTensPCM(void *p) {
      return  p ? new(p) ::KVTensPCM : new ::KVTensPCM;
   }
   static void *newArray_KVTensPCM(Long_t nElements, void *p) {
      return p ? new(p) ::KVTensPCM[nElements] : new ::KVTensPCM[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTensPCM(void *p) {
      delete ((::KVTensPCM*)p);
   }
   static void deleteArray_KVTensPCM(void *p) {
      delete [] ((::KVTensPCM*)p);
   }
   static void destruct_KVTensPCM(void *p) {
      typedef ::KVTensPCM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTensPCM(TBuffer &buf, void *obj) {
      ((::KVTensPCM*)obj)->::KVTensPCM::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTensPCM

//______________________________________________________________________________
void KVRiso::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRiso.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      R__b >> Riso;
      R__b >> Epar;
      R__b >> Etrans;
      R__b.CheckByteCount(R__s, R__c, KVRiso::IsA());
   } else {
      R__c = R__b.WriteVersion(KVRiso::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b << Riso;
      R__b << Epar;
      R__b << Etrans;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRiso(void *p) {
      return  p ? new(p) ::KVRiso : new ::KVRiso;
   }
   static void *newArray_KVRiso(Long_t nElements, void *p) {
      return p ? new(p) ::KVRiso[nElements] : new ::KVRiso[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRiso(void *p) {
      delete ((::KVRiso*)p);
   }
   static void deleteArray_KVRiso(void *p) {
      delete [] ((::KVRiso*)p);
   }
   static void destruct_KVRiso(void *p) {
      typedef ::KVRiso current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVRiso(TBuffer &buf, void *obj) {
      ((::KVRiso*)obj)->::KVRiso::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVRiso

//______________________________________________________________________________
void KVFoxH2::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFoxH2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob1::Streamer(R__b);
      R__b >> num;
      R__b >> den;
      R__b.CheckByteCount(R__s, R__c, KVFoxH2::IsA());
   } else {
      R__c = R__b.WriteVersion(KVFoxH2::IsA(), kTRUE);
      KVVarGlob1::Streamer(R__b);
      R__b << num;
      R__b << den;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFoxH2(void *p) {
      return  p ? new(p) ::KVFoxH2 : new ::KVFoxH2;
   }
   static void *newArray_KVFoxH2(Long_t nElements, void *p) {
      return p ? new(p) ::KVFoxH2[nElements] : new ::KVFoxH2[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFoxH2(void *p) {
      delete ((::KVFoxH2*)p);
   }
   static void deleteArray_KVFoxH2(void *p) {
      delete [] ((::KVFoxH2*)p);
   }
   static void destruct_KVFoxH2(void *p) {
      typedef ::KVFoxH2 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVFoxH2(TBuffer &buf, void *obj) {
      ((::KVFoxH2*)obj)->::KVFoxH2::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVFoxH2

//______________________________________________________________________________
void KVRisoAv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRisoAv.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVRiso::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVRisoAv::IsA());
   } else {
      R__c = R__b.WriteVersion(KVRisoAv::IsA(), kTRUE);
      KVRiso::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRisoAv(void *p) {
      return  p ? new(p) ::KVRisoAv : new ::KVRisoAv;
   }
   static void *newArray_KVRisoAv(Long_t nElements, void *p) {
      return p ? new(p) ::KVRisoAv[nElements] : new ::KVRisoAv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRisoAv(void *p) {
      delete ((::KVRisoAv*)p);
   }
   static void deleteArray_KVRisoAv(void *p) {
      delete [] ((::KVRisoAv*)p);
   }
   static void destruct_KVRisoAv(void *p) {
      typedef ::KVRisoAv current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVRisoAv(TBuffer &buf, void *obj) {
      ((::KVRisoAv*)obj)->::KVRisoAv::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVRisoAv

//______________________________________________________________________________
void KVRelativeVelocity::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRelativeVelocity.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlobMean::Streamer(R__b);
      R__b >> heaviest;
      R__b.CheckByteCount(R__s, R__c, KVRelativeVelocity::IsA());
   } else {
      R__c = R__b.WriteVersion(KVRelativeVelocity::IsA(), kTRUE);
      KVVarGlobMean::Streamer(R__b);
      R__b << heaviest;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRelativeVelocity(void *p) {
      return  p ? new(p) ::KVRelativeVelocity : new ::KVRelativeVelocity;
   }
   static void *newArray_KVRelativeVelocity(Long_t nElements, void *p) {
      return p ? new(p) ::KVRelativeVelocity[nElements] : new ::KVRelativeVelocity[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRelativeVelocity(void *p) {
      delete ((::KVRelativeVelocity*)p);
   }
   static void deleteArray_KVRelativeVelocity(void *p) {
      delete [] ((::KVRelativeVelocity*)p);
   }
   static void destruct_KVRelativeVelocity(void *p) {
      typedef ::KVRelativeVelocity current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVRelativeVelocity(TBuffer &buf, void *obj) {
      ((::KVRelativeVelocity*)obj)->::KVRelativeVelocity::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVRelativeVelocity

//______________________________________________________________________________
void KVQuadMoment::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVQuadMoment.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVQuadMoment::IsA());
   } else {
      R__c = R__b.WriteVersion(KVQuadMoment::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVQuadMoment(void *p) {
      return  p ? new(p) ::KVQuadMoment : new ::KVQuadMoment;
   }
   static void *newArray_KVQuadMoment(Long_t nElements, void *p) {
      return p ? new(p) ::KVQuadMoment[nElements] : new ::KVQuadMoment[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVQuadMoment(void *p) {
      delete ((::KVQuadMoment*)p);
   }
   static void deleteArray_KVQuadMoment(void *p) {
      delete [] ((::KVQuadMoment*)p);
   }
   static void destruct_KVQuadMoment(void *p) {
      typedef ::KVQuadMoment current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVQuadMoment(TBuffer &buf, void *obj) {
      ((::KVQuadMoment*)obj)->::KVQuadMoment::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVQuadMoment

//______________________________________________________________________________
void KVFlowTensor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFlowTensor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVVarGlob::Streamer(R__b);
      void *ptr_weight = (void*)&weight;
      R__b >> *reinterpret_cast<Int_t*>(ptr_weight);
      R__b >> fCalculated;
      R__b.CheckByteCount(R__s, R__c, KVFlowTensor::IsA());
   } else {
      R__c = R__b.WriteVersion(KVFlowTensor::IsA(), kTRUE);
      KVVarGlob::Streamer(R__b);
      R__b << (Int_t)weight;
      R__b << fCalculated;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFlowTensor(void *p) {
      return  p ? new(p) ::KVFlowTensor : new ::KVFlowTensor;
   }
   static void *newArray_KVFlowTensor(Long_t nElements, void *p) {
      return p ? new(p) ::KVFlowTensor[nElements] : new ::KVFlowTensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFlowTensor(void *p) {
      delete ((::KVFlowTensor*)p);
   }
   static void deleteArray_KVFlowTensor(void *p) {
      delete [] ((::KVFlowTensor*)p);
   }
   static void destruct_KVFlowTensor(void *p) {
      typedef ::KVFlowTensor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVFlowTensor(TBuffer &buf, void *obj) {
      ((::KVFlowTensor*)obj)->::KVFlowTensor::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVFlowTensor

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetglobvars_Impl() {
    static const char* headers[] = {
"KVEkin.h",
"KVQuadMoment.h",
"KVZtotAv.h",
"KVTensPCM.h",
"KVFlowTensor.h",
"KVTensE.h",
"KVMultIMFAv.h",
"KVMultAv.h",
"KVVarGlobMean.h",
"KVPtot.h",
"KVCalorimetry.h",
"KVZmean.h",
"KVEtransLCP.h",
"KVSource.h",
"KVMultLeg.h",
"KVCaloBase.h",
"KVZmax.h",
"KVMultLegAv.h",
"KVVarGlob.h",
"KVZtot.h",
"KVTenseur3.h",
"KVZbound.h",
"KVEtrans.h",
"KVFoxH2.h",
"KVZBoundMean.h",
"KVVarGlob1.h",
"KVMultIMF.h",
"KVRiso.h",
"KVRisoAv.h",
"KVVGSum.h",
"KVGVList.h",
"KVRelativeVelocity.h",
"KVZboundAv.h",
"KVZVtot.h",
"KVTensP.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/globvars/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base class for global variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEkin.h")))  KVVarGlob;
class __attribute__((annotate(R"ATTRDUMP(Base class for global variables with one value)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEkin.h")))  KVVarGlob1;
class __attribute__((annotate(R"ATTRDUMP(Base class for global variables computing mean values)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVarGlobMean.h")))  KVVarGlobMean;
class __attribute__((annotate(R"ATTRDUMP(General global variable for calculating sums of various quantities)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVGSum.h")))  KVVGSum;
class __attribute__((annotate(R"ATTRDUMP(List of global variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGVList.h")))  KVGVList;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Z))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZtotAv.h")))  KVZtot;
class __attribute__((annotate(R"ATTRDUMP(Global variable <Z>)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZmean.h")))  KVZmean;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Z) for Z >= Zmin and/or Z <= Zmax)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultIMFAv.h")))  KVZbound;
class __attribute__((annotate(R"ATTRDUMP(Global variable returning the mean charge of products in a selected range of Z)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZBoundMean.h")))  KVZBoundMean;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Z) for Vz > Vcm)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZtotAv.h")))  KVZtotAv;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Z) for Z>=Zmin and/or Z<=Zmax and Vz > 0)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZboundAv.h")))  KVZboundAv;
class __attribute__((annotate(R"ATTRDUMP(Rank fragments by charge and return Z or pointer of i_th heaviest fragment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZmax.h")))  KVZmax;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Etrans))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEtransLCP.h")))  KVEtrans;
class __attribute__((annotate(R"ATTRDUMP(Global variable total transverse energy of LCP (Z < 3))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEtransLCP.h")))  KVEtransLCP;
class __attribute__((annotate(R"ATTRDUMP(Global variable Sum(Ekin))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEkin.h")))  KVEkin;
class __attribute__((annotate(R"ATTRDUMP(compute CaloBase)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCalorimetry.h")))  KVCaloBase;
class __attribute__((annotate(R"ATTRDUMP(compute calorimetry)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCalorimetry.h")))  KVCalorimetry;
class __attribute__((annotate(R"ATTRDUMP(Global variable Ptot=Sum(p(i)))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPtot.h")))  KVPtot;
class __attribute__((annotate(R"ATTRDUMP(Global variable ZVtot=Sum(Z(i)*v(i)) (units: cm/ns))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZVtot.h")))  KVZVtot;
class __attribute__((annotate(R"ATTRDUMP(Simple source reconstruction global variable)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSource.h")))  KVSource;
class __attribute__((annotate(R"ATTRDUMP(Multiplicity for fragments with Z >= Zmin)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultIMFAv.h")))  KVMultIMF;
class __attribute__((annotate(R"ATTRDUMP(Multiplicity for particules with Z <= Zmax)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultLeg.h")))  KVMultLeg;
class __attribute__((annotate(R"ATTRDUMP(Multiplicity for particules and fragments with V z> 0)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultAv.h")))  KVMultAv;
class __attribute__((annotate(R"ATTRDUMP(Multiplicity for fragments with Z >= Zmin and Vz > Vcm)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultIMFAv.h")))  KVMultIMFAv;
class __attribute__((annotate(R"ATTRDUMP(Multiplicity for particules with Z <= Zmax and Vz > Vcm)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMultLegAv.h")))  KVMultLegAv;
class __attribute__((annotate(R"ATTRDUMP(Base class for tensor management)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTensPCM.h")))  KVTenseur3;
class __attribute__((annotate(R"ATTRDUMP(Global variable Momentum tensor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTensPCM.h")))  KVTensP;
class __attribute__((annotate(R"ATTRDUMP(Kinetic energy tensor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTensE.h")))  KVTensE;
class __attribute__((annotate(R"ATTRDUMP(Global variable CM Momentum tensor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTensPCM.h")))  KVTensPCM;
class __attribute__((annotate(R"ATTRDUMP(Global variable Riso=Sum(epar)/2*Sum(eper))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRiso.h")))  KVRiso;
class __attribute__((annotate(R"ATTRDUMP(Event shape global variable : second Fox-Wolfram moment, H(2))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFoxH2.h")))  KVFoxH2;
class __attribute__((annotate(R"ATTRDUMP(Global variable Riso)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRisoAv.h")))  KVRisoAv;
class __attribute__((annotate(R"ATTRDUMP(calculate for a given a couple of particles the magnitude of relative velocity)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRelativeVelocity.h")))  KVRelativeVelocity;
class __attribute__((annotate(R"ATTRDUMP(Quadrupole moment tensor of particle momenta)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVQuadMoment.h")))  KVQuadMoment;
class __attribute__((annotate(R"ATTRDUMP(Kinetic energy flow tensor of Gyulassy et al)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFlowTensor.h")))  KVFlowTensor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVEkin.h"
#include "KVQuadMoment.h"
#include "KVZtotAv.h"
#include "KVTensPCM.h"
#include "KVFlowTensor.h"
#include "KVTensE.h"
#include "KVMultIMFAv.h"
#include "KVMultAv.h"
#include "KVVarGlobMean.h"
#include "KVPtot.h"
#include "KVCalorimetry.h"
#include "KVZmean.h"
#include "KVEtransLCP.h"
#include "KVSource.h"
#include "KVMultLeg.h"
#include "KVCaloBase.h"
#include "KVZmax.h"
#include "KVMultLegAv.h"
#include "KVVarGlob.h"
#include "KVZtot.h"
#include "KVTenseur3.h"
#include "KVZbound.h"
#include "KVEtrans.h"
#include "KVFoxH2.h"
#include "KVZBoundMean.h"
#include "KVVarGlob1.h"
#include "KVMultIMF.h"
#include "KVRiso.h"
#include "KVRisoAv.h"
#include "KVVGSum.h"
#include "KVGVList.h"
#include "KVRelativeVelocity.h"
#include "KVZboundAv.h"
#include "KVZVtot.h"
#include "KVTensP.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVCaloBase", payloadCode, "@",
"KVCalorimetry", payloadCode, "@",
"KVEkin", payloadCode, "@",
"KVEtrans", payloadCode, "@",
"KVEtransLCP", payloadCode, "@",
"KVFlowTensor", payloadCode, "@",
"KVFoxH2", payloadCode, "@",
"KVGVList", payloadCode, "@",
"KVMultAv", payloadCode, "@",
"KVMultIMF", payloadCode, "@",
"KVMultIMFAv", payloadCode, "@",
"KVMultLeg", payloadCode, "@",
"KVMultLegAv", payloadCode, "@",
"KVPtot", payloadCode, "@",
"KVQuadMoment", payloadCode, "@",
"KVRelativeVelocity", payloadCode, "@",
"KVRiso", payloadCode, "@",
"KVRisoAv", payloadCode, "@",
"KVSource", payloadCode, "@",
"KVTensE", payloadCode, "@",
"KVTensP", payloadCode, "@",
"KVTensPCM", payloadCode, "@",
"KVTenseur3", payloadCode, "@",
"KVVGSum", payloadCode, "@",
"KVVarGlob", payloadCode, "@",
"KVVarGlob1", payloadCode, "@",
"KVVarGlobMean", payloadCode, "@",
"KVZBoundMean", payloadCode, "@",
"KVZVtot", payloadCode, "@",
"KVZbound", payloadCode, "@",
"KVZboundAv", payloadCode, "@",
"KVZmax", payloadCode, "@",
"KVZmean", payloadCode, "@",
"KVZtot", payloadCode, "@",
"KVZtotAv", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetglobvars",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetglobvars_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetglobvars_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetglobvars() {
  TriggerDictionaryInitialization_libKVMultiDetglobvars_Impl();
}
