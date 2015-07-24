// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__BackTrackbase

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
#include "GenericModel.h"
#include "GenericPDFModel.h"

// Header files passed via #pragma extra_include

namespace BackTrack {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BackTrack_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BackTrack", 0 /*version*/, "GenericModel.h", 29,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &BackTrack_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BackTrack_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BackTrackcLcLGenericModel(void *p = 0);
   static void *newArray_BackTrackcLcLGenericModel(Long_t size, void *p);
   static void delete_BackTrackcLcLGenericModel(void *p);
   static void deleteArray_BackTrackcLcLGenericModel(void *p);
   static void destruct_BackTrackcLcLGenericModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BackTrack::GenericModel*)
   {
      ::BackTrack::GenericModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BackTrack::GenericModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BackTrack::GenericModel", ::BackTrack::GenericModel::Class_Version(), "GenericModel.h", 31,
                  typeid(::BackTrack::GenericModel), DefineBehavior(ptr, ptr),
                  &::BackTrack::GenericModel::Dictionary, isa_proxy, 4,
                  sizeof(::BackTrack::GenericModel) );
      instance.SetNew(&new_BackTrackcLcLGenericModel);
      instance.SetNewArray(&newArray_BackTrackcLcLGenericModel);
      instance.SetDelete(&delete_BackTrackcLcLGenericModel);
      instance.SetDeleteArray(&deleteArray_BackTrackcLcLGenericModel);
      instance.SetDestructor(&destruct_BackTrackcLcLGenericModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BackTrack::GenericModel*)
   {
      return GenerateInitInstanceLocal((::BackTrack::GenericModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BackTrack::GenericModel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BackTrackcLcLGenericPDFModel(void *p = 0);
   static void *newArray_BackTrackcLcLGenericPDFModel(Long_t size, void *p);
   static void delete_BackTrackcLcLGenericPDFModel(void *p);
   static void deleteArray_BackTrackcLcLGenericPDFModel(void *p);
   static void destruct_BackTrackcLcLGenericPDFModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BackTrack::GenericPDFModel*)
   {
      ::BackTrack::GenericPDFModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BackTrack::GenericPDFModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BackTrack::GenericPDFModel", ::BackTrack::GenericPDFModel::Class_Version(), "GenericPDFModel.h", 13,
                  typeid(::BackTrack::GenericPDFModel), DefineBehavior(ptr, ptr),
                  &::BackTrack::GenericPDFModel::Dictionary, isa_proxy, 4,
                  sizeof(::BackTrack::GenericPDFModel) );
      instance.SetNew(&new_BackTrackcLcLGenericPDFModel);
      instance.SetNewArray(&newArray_BackTrackcLcLGenericPDFModel);
      instance.SetDelete(&delete_BackTrackcLcLGenericPDFModel);
      instance.SetDeleteArray(&deleteArray_BackTrackcLcLGenericPDFModel);
      instance.SetDestructor(&destruct_BackTrackcLcLGenericPDFModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BackTrack::GenericPDFModel*)
   {
      return GenerateInitInstanceLocal((::BackTrack::GenericPDFModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BackTrack::GenericPDFModel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace BackTrack {
//______________________________________________________________________________
atomic_TClass_ptr GenericModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GenericModel::Class_Name()
{
   return "BackTrack::GenericModel";
}

//______________________________________________________________________________
const char *GenericModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GenericModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GenericModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GenericModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace BackTrack
namespace BackTrack {
//______________________________________________________________________________
atomic_TClass_ptr GenericPDFModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GenericPDFModel::Class_Name()
{
   return "BackTrack::GenericPDFModel";
}

//______________________________________________________________________________
const char *GenericPDFModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericPDFModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GenericPDFModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericPDFModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GenericPDFModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericPDFModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GenericPDFModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::GenericPDFModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace BackTrack
namespace BackTrack {
//______________________________________________________________________________
void GenericModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class BackTrack::GenericModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BackTrack::GenericModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(BackTrack::GenericModel::Class(),this);
   }
}

} // namespace BackTrack
namespace ROOT {
   // Wrappers around operator new
   static void *new_BackTrackcLcLGenericModel(void *p) {
      return  p ? new(p) ::BackTrack::GenericModel : new ::BackTrack::GenericModel;
   }
   static void *newArray_BackTrackcLcLGenericModel(Long_t nElements, void *p) {
      return p ? new(p) ::BackTrack::GenericModel[nElements] : new ::BackTrack::GenericModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BackTrackcLcLGenericModel(void *p) {
      delete ((::BackTrack::GenericModel*)p);
   }
   static void deleteArray_BackTrackcLcLGenericModel(void *p) {
      delete [] ((::BackTrack::GenericModel*)p);
   }
   static void destruct_BackTrackcLcLGenericModel(void *p) {
      typedef ::BackTrack::GenericModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BackTrack::GenericModel

namespace BackTrack {
//______________________________________________________________________________
void GenericPDFModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class BackTrack::GenericPDFModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BackTrack::GenericPDFModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(BackTrack::GenericPDFModel::Class(),this);
   }
}

} // namespace BackTrack
namespace ROOT {
   // Wrappers around operator new
   static void *new_BackTrackcLcLGenericPDFModel(void *p) {
      return  p ? new(p) ::BackTrack::GenericPDFModel : new ::BackTrack::GenericPDFModel;
   }
   static void *newArray_BackTrackcLcLGenericPDFModel(Long_t nElements, void *p) {
      return p ? new(p) ::BackTrack::GenericPDFModel[nElements] : new ::BackTrack::GenericPDFModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BackTrackcLcLGenericPDFModel(void *p) {
      delete ((::BackTrack::GenericPDFModel*)p);
   }
   static void deleteArray_BackTrackcLcLGenericPDFModel(void *p) {
      delete [] ((::BackTrack::GenericPDFModel*)p);
   }
   static void destruct_BackTrackcLcLGenericPDFModel(void *p) {
      typedef ::BackTrack::GenericPDFModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BackTrack::GenericPDFModel

namespace {
  void TriggerDictionaryInitialization_libBackTrackbase_Impl() {
    static const char* headers[] = {
"GenericModel.h",
"GenericPDFModel.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/BackTrack/base/inc",
"/home/john/software/sources/kaliveda.git/BackTrack/base",
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
"/home/john/software/build/kaliveda-build/1.10_R6/BackTrack/base/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace BackTrack{class __attribute__((annotate(R"ATTRDUMP(Generic model for backtracing studies)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GenericModel.h")))  GenericModel;}
namespace BackTrack{class __attribute__((annotate(R"ATTRDUMP(Generic model described by PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GenericPDFModel.h")))  GenericPDFModel;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "GenericModel.h"
#include "GenericPDFModel.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BackTrack::GenericModel", payloadCode, "@",
"BackTrack::GenericPDFModel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBackTrackbase",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBackTrackbase_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBackTrackbase_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBackTrackbase() {
  TriggerDictionaryInitialization_libBackTrackbase_Impl();
}
