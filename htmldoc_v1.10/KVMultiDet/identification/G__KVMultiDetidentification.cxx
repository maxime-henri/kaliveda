// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetidentification

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
#include "KVTGIDFunctions.h"
#include "KVIDLine.h"
#include "KVSpiderPSALine.h"
#include "KVSpiderLine.h"
#include "KVIdentificationResult.h"
#include "KVIDContour.h"
#include "KVTGIDZA.h"
#include "KVTGIDFitter.h"
#include "KVIDCutContour.h"
#include "KVIDGrid.h"
#include "KVTGIDManager.h"
#include "KVIDZAGrid.h"
#include "KVIDentifier.h"
#include "KVTGIDZ.h"
#include "KVVirtualIDFitter.h"
#include "KVIDZALine.h"
#include "KVDroite.h"
#include "KVDP2toIDGridConvertor.h"
#include "KVIDZAContour.h"
#include "KVIDMap.h"
#include "KVTGID.h"
#include "KVTGIDGrid.h"
#include "KVIDGraph.h"
#include "KVIDSubCodeManager.h"
#include "KVIDGridManager.h"
#include "KVIDCutLine.h"

// Header files passed via #pragma extra_include

namespace KVTGIDFunctions {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *KVTGIDFunctions_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("KVTGIDFunctions", 0 /*version*/, "KVTGIDFunctions.h", 16,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &KVTGIDFunctions_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *KVTGIDFunctions_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_KVTGIDFitter(void *p = 0);
   static void *newArray_KVTGIDFitter(Long_t size, void *p);
   static void delete_KVTGIDFitter(void *p);
   static void deleteArray_KVTGIDFitter(void *p);
   static void destruct_KVTGIDFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGIDFitter*)
   {
      ::KVTGIDFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGIDFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGIDFitter", ::KVTGIDFitter::Class_Version(), "KVTGIDFitter.h", 16,
                  typeid(::KVTGIDFitter), DefineBehavior(ptr, ptr),
                  &::KVTGIDFitter::Dictionary, isa_proxy, 4,
                  sizeof(::KVTGIDFitter) );
      instance.SetNew(&new_KVTGIDFitter);
      instance.SetNewArray(&newArray_KVTGIDFitter);
      instance.SetDelete(&delete_KVTGIDFitter);
      instance.SetDeleteArray(&deleteArray_KVTGIDFitter);
      instance.SetDestructor(&destruct_KVTGIDFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGIDFitter*)
   {
      return GenerateInitInstanceLocal((::KVTGIDFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGIDFitter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVTGID(void *p);
   static void deleteArray_KVTGID(void *p);
   static void destruct_KVTGID(void *p);
   static void streamer_KVTGID(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGID*)
   {
      ::KVTGID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGID", ::KVTGID::Class_Version(), "KVTGID.h", 19,
                  typeid(::KVTGID), DefineBehavior(ptr, ptr),
                  &::KVTGID::Dictionary, isa_proxy, 17,
                  sizeof(::KVTGID) );
      instance.SetDelete(&delete_KVTGID);
      instance.SetDeleteArray(&deleteArray_KVTGID);
      instance.SetDestructor(&destruct_KVTGID);
      instance.SetStreamerFunc(&streamer_KVTGID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGID*)
   {
      return GenerateInitInstanceLocal((::KVTGID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGID*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTGIDZ(void *p = 0);
   static void *newArray_KVTGIDZ(Long_t size, void *p);
   static void delete_KVTGIDZ(void *p);
   static void deleteArray_KVTGIDZ(void *p);
   static void destruct_KVTGIDZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGIDZ*)
   {
      ::KVTGIDZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGIDZ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGIDZ", ::KVTGIDZ::Class_Version(), "KVTGIDZ.h", 16,
                  typeid(::KVTGIDZ), DefineBehavior(ptr, ptr),
                  &::KVTGIDZ::Dictionary, isa_proxy, 4,
                  sizeof(::KVTGIDZ) );
      instance.SetNew(&new_KVTGIDZ);
      instance.SetNewArray(&newArray_KVTGIDZ);
      instance.SetDelete(&delete_KVTGIDZ);
      instance.SetDeleteArray(&deleteArray_KVTGIDZ);
      instance.SetDestructor(&destruct_KVTGIDZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGIDZ*)
   {
      return GenerateInitInstanceLocal((::KVTGIDZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGIDZ*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTGIDZA(void *p = 0);
   static void *newArray_KVTGIDZA(Long_t size, void *p);
   static void delete_KVTGIDZA(void *p);
   static void deleteArray_KVTGIDZA(void *p);
   static void destruct_KVTGIDZA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGIDZA*)
   {
      ::KVTGIDZA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGIDZA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGIDZA", ::KVTGIDZA::Class_Version(), "KVTGIDZA.h", 16,
                  typeid(::KVTGIDZA), DefineBehavior(ptr, ptr),
                  &::KVTGIDZA::Dictionary, isa_proxy, 4,
                  sizeof(::KVTGIDZA) );
      instance.SetNew(&new_KVTGIDZA);
      instance.SetNewArray(&newArray_KVTGIDZA);
      instance.SetDelete(&delete_KVTGIDZA);
      instance.SetDeleteArray(&deleteArray_KVTGIDZA);
      instance.SetDestructor(&destruct_KVTGIDZA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGIDZA*)
   {
      return GenerateInitInstanceLocal((::KVTGIDZA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGIDZA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTGIDManager(void *p = 0);
   static void *newArray_KVTGIDManager(Long_t size, void *p);
   static void delete_KVTGIDManager(void *p);
   static void deleteArray_KVTGIDManager(void *p);
   static void destruct_KVTGIDManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGIDManager*)
   {
      ::KVTGIDManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGIDManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGIDManager", ::KVTGIDManager::Class_Version(), "KVTGIDManager.h", 20,
                  typeid(::KVTGIDManager), DefineBehavior(ptr, ptr),
                  &::KVTGIDManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVTGIDManager) );
      instance.SetNew(&new_KVTGIDManager);
      instance.SetNewArray(&newArray_KVTGIDManager);
      instance.SetDelete(&delete_KVTGIDManager);
      instance.SetDeleteArray(&deleteArray_KVTGIDManager);
      instance.SetDestructor(&destruct_KVTGIDManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGIDManager*)
   {
      return GenerateInitInstanceLocal((::KVTGIDManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGIDManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTGIDGrid(void *p = 0);
   static void *newArray_KVTGIDGrid(Long_t size, void *p);
   static void delete_KVTGIDGrid(void *p);
   static void deleteArray_KVTGIDGrid(void *p);
   static void destruct_KVTGIDGrid(void *p);
   static Long64_t merge_KVTGIDGrid(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTGIDGrid*)
   {
      ::KVTGIDGrid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTGIDGrid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTGIDGrid", ::KVTGIDGrid::Class_Version(), "KVTGIDGrid.h", 17,
                  typeid(::KVTGIDGrid), DefineBehavior(ptr, ptr),
                  &::KVTGIDGrid::Dictionary, isa_proxy, 4,
                  sizeof(::KVTGIDGrid) );
      instance.SetNew(&new_KVTGIDGrid);
      instance.SetNewArray(&newArray_KVTGIDGrid);
      instance.SetDelete(&delete_KVTGIDGrid);
      instance.SetDeleteArray(&deleteArray_KVTGIDGrid);
      instance.SetDestructor(&destruct_KVTGIDGrid);
      instance.SetMerge(&merge_KVTGIDGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTGIDGrid*)
   {
      return GenerateInitInstanceLocal((::KVTGIDGrid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTGIDGrid*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIdentificationResult(void *p = 0);
   static void *newArray_KVIdentificationResult(Long_t size, void *p);
   static void delete_KVIdentificationResult(void *p);
   static void deleteArray_KVIdentificationResult(void *p);
   static void destruct_KVIdentificationResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIdentificationResult*)
   {
      ::KVIdentificationResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIdentificationResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIdentificationResult", ::KVIdentificationResult::Class_Version(), "KVIdentificationResult.h", 7,
                  typeid(::KVIdentificationResult), DefineBehavior(ptr, ptr),
                  &::KVIdentificationResult::Dictionary, isa_proxy, 4,
                  sizeof(::KVIdentificationResult) );
      instance.SetNew(&new_KVIdentificationResult);
      instance.SetNewArray(&newArray_KVIdentificationResult);
      instance.SetDelete(&delete_KVIdentificationResult);
      instance.SetDeleteArray(&deleteArray_KVIdentificationResult);
      instance.SetDestructor(&destruct_KVIdentificationResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIdentificationResult*)
   {
      return GenerateInitInstanceLocal((::KVIdentificationResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIdentificationResult*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSubCodeManager(void *p = 0);
   static void *newArray_KVIDSubCodeManager(Long_t size, void *p);
   static void delete_KVIDSubCodeManager(void *p);
   static void deleteArray_KVIDSubCodeManager(void *p);
   static void destruct_KVIDSubCodeManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSubCodeManager*)
   {
      ::KVIDSubCodeManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSubCodeManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSubCodeManager", ::KVIDSubCodeManager::Class_Version(), "KVIDSubCodeManager.h", 12,
                  typeid(::KVIDSubCodeManager), DefineBehavior(ptr, ptr),
                  &::KVIDSubCodeManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSubCodeManager) );
      instance.SetNew(&new_KVIDSubCodeManager);
      instance.SetNewArray(&newArray_KVIDSubCodeManager);
      instance.SetDelete(&delete_KVIDSubCodeManager);
      instance.SetDeleteArray(&deleteArray_KVIDSubCodeManager);
      instance.SetDestructor(&destruct_KVIDSubCodeManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSubCodeManager*)
   {
      return GenerateInitInstanceLocal((::KVIDSubCodeManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSubCodeManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVVirtualIDFitter(void *p);
   static void deleteArray_KVVirtualIDFitter(void *p);
   static void destruct_KVVirtualIDFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVirtualIDFitter*)
   {
      ::KVVirtualIDFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVirtualIDFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVirtualIDFitter", ::KVVirtualIDFitter::Class_Version(), "KVVirtualIDFitter.h", 17,
                  typeid(::KVVirtualIDFitter), DefineBehavior(ptr, ptr),
                  &::KVVirtualIDFitter::Dictionary, isa_proxy, 4,
                  sizeof(::KVVirtualIDFitter) );
      instance.SetDelete(&delete_KVVirtualIDFitter);
      instance.SetDeleteArray(&deleteArray_KVVirtualIDFitter);
      instance.SetDestructor(&destruct_KVVirtualIDFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVirtualIDFitter*)
   {
      return GenerateInitInstanceLocal((::KVVirtualIDFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVirtualIDFitter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDroite(void *p = 0);
   static void *newArray_KVDroite(Long_t size, void *p);
   static void delete_KVDroite(void *p);
   static void deleteArray_KVDroite(void *p);
   static void destruct_KVDroite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDroite*)
   {
      ::KVDroite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDroite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDroite", ::KVDroite::Class_Version(), "KVDroite.h", 12,
                  typeid(::KVDroite), DefineBehavior(ptr, ptr),
                  &::KVDroite::Dictionary, isa_proxy, 4,
                  sizeof(::KVDroite) );
      instance.SetNew(&new_KVDroite);
      instance.SetNewArray(&newArray_KVDroite);
      instance.SetDelete(&delete_KVDroite);
      instance.SetDeleteArray(&deleteArray_KVDroite);
      instance.SetDestructor(&destruct_KVDroite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDroite*)
   {
      return GenerateInitInstanceLocal((::KVDroite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDroite*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSpiderLine(void *p = 0);
   static void *newArray_KVSpiderLine(Long_t size, void *p);
   static void delete_KVSpiderLine(void *p);
   static void deleteArray_KVSpiderLine(void *p);
   static void destruct_KVSpiderLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSpiderLine*)
   {
      ::KVSpiderLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSpiderLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSpiderLine", ::KVSpiderLine::Class_Version(), "KVSpiderLine.h", 13,
                  typeid(::KVSpiderLine), DefineBehavior(ptr, ptr),
                  &::KVSpiderLine::Dictionary, isa_proxy, 4,
                  sizeof(::KVSpiderLine) );
      instance.SetNew(&new_KVSpiderLine);
      instance.SetNewArray(&newArray_KVSpiderLine);
      instance.SetDelete(&delete_KVSpiderLine);
      instance.SetDeleteArray(&deleteArray_KVSpiderLine);
      instance.SetDestructor(&destruct_KVSpiderLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSpiderLine*)
   {
      return GenerateInitInstanceLocal((::KVSpiderLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSpiderLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSpiderPSALine(void *p = 0);
   static void *newArray_KVSpiderPSALine(Long_t size, void *p);
   static void delete_KVSpiderPSALine(void *p);
   static void deleteArray_KVSpiderPSALine(void *p);
   static void destruct_KVSpiderPSALine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSpiderPSALine*)
   {
      ::KVSpiderPSALine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSpiderPSALine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSpiderPSALine", ::KVSpiderPSALine::Class_Version(), "KVSpiderPSALine.h", 9,
                  typeid(::KVSpiderPSALine), DefineBehavior(ptr, ptr),
                  &::KVSpiderPSALine::Dictionary, isa_proxy, 4,
                  sizeof(::KVSpiderPSALine) );
      instance.SetNew(&new_KVSpiderPSALine);
      instance.SetNewArray(&newArray_KVSpiderPSALine);
      instance.SetDelete(&delete_KVSpiderPSALine);
      instance.SetDeleteArray(&deleteArray_KVSpiderPSALine);
      instance.SetDestructor(&destruct_KVSpiderPSALine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSpiderPSALine*)
   {
      return GenerateInitInstanceLocal((::KVSpiderPSALine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSpiderPSALine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDP2toIDGridConvertor(void *p = 0);
   static void *newArray_KVDP2toIDGridConvertor(Long_t size, void *p);
   static void delete_KVDP2toIDGridConvertor(void *p);
   static void deleteArray_KVDP2toIDGridConvertor(void *p);
   static void destruct_KVDP2toIDGridConvertor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDP2toIDGridConvertor*)
   {
      ::KVDP2toIDGridConvertor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDP2toIDGridConvertor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDP2toIDGridConvertor", ::KVDP2toIDGridConvertor::Class_Version(), "KVDP2toIDGridConvertor.h", 20,
                  typeid(::KVDP2toIDGridConvertor), DefineBehavior(ptr, ptr),
                  &::KVDP2toIDGridConvertor::Dictionary, isa_proxy, 4,
                  sizeof(::KVDP2toIDGridConvertor) );
      instance.SetNew(&new_KVDP2toIDGridConvertor);
      instance.SetNewArray(&newArray_KVDP2toIDGridConvertor);
      instance.SetDelete(&delete_KVDP2toIDGridConvertor);
      instance.SetDeleteArray(&deleteArray_KVDP2toIDGridConvertor);
      instance.SetDestructor(&destruct_KVDP2toIDGridConvertor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDP2toIDGridConvertor*)
   {
      return GenerateInitInstanceLocal((::KVDP2toIDGridConvertor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDP2toIDGridConvertor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDentifier(void *p = 0);
   static void *newArray_KVIDentifier(Long_t size, void *p);
   static void delete_KVIDentifier(void *p);
   static void deleteArray_KVIDentifier(void *p);
   static void destruct_KVIDentifier(void *p);
   static Long64_t merge_KVIDentifier(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDentifier*)
   {
      ::KVIDentifier *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDentifier >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDentifier", ::KVIDentifier::Class_Version(), "KVIDentifier.h", 21,
                  typeid(::KVIDentifier), DefineBehavior(ptr, ptr),
                  &::KVIDentifier::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDentifier) );
      instance.SetNew(&new_KVIDentifier);
      instance.SetNewArray(&newArray_KVIDentifier);
      instance.SetDelete(&delete_KVIDentifier);
      instance.SetDeleteArray(&deleteArray_KVIDentifier);
      instance.SetDestructor(&destruct_KVIDentifier);
      instance.SetMerge(&merge_KVIDentifier);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDentifier*)
   {
      return GenerateInitInstanceLocal((::KVIDentifier*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDentifier*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIDGraph(void *p);
   static void deleteArray_KVIDGraph(void *p);
   static void destruct_KVIDGraph(void *p);
   static void streamer_KVIDGraph(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDGraph(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGraph*)
   {
      ::KVIDGraph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGraph >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGraph", ::KVIDGraph::Class_Version(), "KVIDGraph.h", 24,
                  typeid(::KVIDGraph), DefineBehavior(ptr, ptr),
                  &::KVIDGraph::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDGraph) );
      instance.SetDelete(&delete_KVIDGraph);
      instance.SetDeleteArray(&deleteArray_KVIDGraph);
      instance.SetDestructor(&destruct_KVIDGraph);
      instance.SetStreamerFunc(&streamer_KVIDGraph);
      instance.SetMerge(&merge_KVIDGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGraph*)
   {
      return GenerateInitInstanceLocal((::KVIDGraph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGraph*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDLine(void *p = 0);
   static void *newArray_KVIDLine(Long_t size, void *p);
   static void delete_KVIDLine(void *p);
   static void deleteArray_KVIDLine(void *p);
   static void destruct_KVIDLine(void *p);
   static void streamer_KVIDLine(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDLine*)
   {
      ::KVIDLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDLine", ::KVIDLine::Class_Version(), "KVIDLine.h", 19,
                  typeid(::KVIDLine), DefineBehavior(ptr, ptr),
                  &::KVIDLine::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDLine) );
      instance.SetNew(&new_KVIDLine);
      instance.SetNewArray(&newArray_KVIDLine);
      instance.SetDelete(&delete_KVIDLine);
      instance.SetDeleteArray(&deleteArray_KVIDLine);
      instance.SetDestructor(&destruct_KVIDLine);
      instance.SetStreamerFunc(&streamer_KVIDLine);
      instance.SetMerge(&merge_KVIDLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDLine*)
   {
      return GenerateInitInstanceLocal((::KVIDLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDContour(void *p = 0);
   static void *newArray_KVIDContour(Long_t size, void *p);
   static void delete_KVIDContour(void *p);
   static void deleteArray_KVIDContour(void *p);
   static void destruct_KVIDContour(void *p);
   static Long64_t merge_KVIDContour(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDContour*)
   {
      ::KVIDContour *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDContour >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDContour", ::KVIDContour::Class_Version(), "KVIDContour.h", 16,
                  typeid(::KVIDContour), DefineBehavior(ptr, ptr),
                  &::KVIDContour::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDContour) );
      instance.SetNew(&new_KVIDContour);
      instance.SetNewArray(&newArray_KVIDContour);
      instance.SetDelete(&delete_KVIDContour);
      instance.SetDeleteArray(&deleteArray_KVIDContour);
      instance.SetDestructor(&destruct_KVIDContour);
      instance.SetMerge(&merge_KVIDContour);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDContour*)
   {
      return GenerateInitInstanceLocal((::KVIDContour*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDContour*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDCutContour(void *p = 0);
   static void *newArray_KVIDCutContour(Long_t size, void *p);
   static void delete_KVIDCutContour(void *p);
   static void deleteArray_KVIDCutContour(void *p);
   static void destruct_KVIDCutContour(void *p);
   static Long64_t merge_KVIDCutContour(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDCutContour*)
   {
      ::KVIDCutContour *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDCutContour >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDCutContour", ::KVIDCutContour::Class_Version(), "KVIDCutContour.h", 15,
                  typeid(::KVIDCutContour), DefineBehavior(ptr, ptr),
                  &::KVIDCutContour::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDCutContour) );
      instance.SetNew(&new_KVIDCutContour);
      instance.SetNewArray(&newArray_KVIDCutContour);
      instance.SetDelete(&delete_KVIDCutContour);
      instance.SetDeleteArray(&deleteArray_KVIDCutContour);
      instance.SetDestructor(&destruct_KVIDCutContour);
      instance.SetMerge(&merge_KVIDCutContour);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDCutContour*)
   {
      return GenerateInitInstanceLocal((::KVIDCutContour*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDCutContour*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDCutLine(void *p = 0);
   static void *newArray_KVIDCutLine(Long_t size, void *p);
   static void delete_KVIDCutLine(void *p);
   static void deleteArray_KVIDCutLine(void *p);
   static void destruct_KVIDCutLine(void *p);
   static Long64_t merge_KVIDCutLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDCutLine*)
   {
      ::KVIDCutLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDCutLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDCutLine", ::KVIDCutLine::Class_Version(), "KVIDCutLine.h", 16,
                  typeid(::KVIDCutLine), DefineBehavior(ptr, ptr),
                  &::KVIDCutLine::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDCutLine) );
      instance.SetNew(&new_KVIDCutLine);
      instance.SetNewArray(&newArray_KVIDCutLine);
      instance.SetDelete(&delete_KVIDCutLine);
      instance.SetDeleteArray(&deleteArray_KVIDCutLine);
      instance.SetDestructor(&destruct_KVIDCutLine);
      instance.SetMerge(&merge_KVIDCutLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDCutLine*)
   {
      return GenerateInitInstanceLocal((::KVIDCutLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDCutLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDZAContour(void *p = 0);
   static void *newArray_KVIDZAContour(Long_t size, void *p);
   static void delete_KVIDZAContour(void *p);
   static void deleteArray_KVIDZAContour(void *p);
   static void destruct_KVIDZAContour(void *p);
   static Long64_t merge_KVIDZAContour(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDZAContour*)
   {
      ::KVIDZAContour *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDZAContour >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDZAContour", ::KVIDZAContour::Class_Version(), "KVIDZAContour.h", 15,
                  typeid(::KVIDZAContour), DefineBehavior(ptr, ptr),
                  &::KVIDZAContour::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDZAContour) );
      instance.SetNew(&new_KVIDZAContour);
      instance.SetNewArray(&newArray_KVIDZAContour);
      instance.SetDelete(&delete_KVIDZAContour);
      instance.SetDeleteArray(&deleteArray_KVIDZAContour);
      instance.SetDestructor(&destruct_KVIDZAContour);
      instance.SetMerge(&merge_KVIDZAContour);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDZAContour*)
   {
      return GenerateInitInstanceLocal((::KVIDZAContour*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDZAContour*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDZALine(void *p = 0);
   static void *newArray_KVIDZALine(Long_t size, void *p);
   static void delete_KVIDZALine(void *p);
   static void deleteArray_KVIDZALine(void *p);
   static void destruct_KVIDZALine(void *p);
   static void streamer_KVIDZALine(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDZALine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDZALine*)
   {
      ::KVIDZALine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDZALine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDZALine", ::KVIDZALine::Class_Version(), "KVIDZALine.h", 18,
                  typeid(::KVIDZALine), DefineBehavior(ptr, ptr),
                  &::KVIDZALine::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDZALine) );
      instance.SetNew(&new_KVIDZALine);
      instance.SetNewArray(&newArray_KVIDZALine);
      instance.SetDelete(&delete_KVIDZALine);
      instance.SetDeleteArray(&deleteArray_KVIDZALine);
      instance.SetDestructor(&destruct_KVIDZALine);
      instance.SetStreamerFunc(&streamer_KVIDZALine);
      instance.SetMerge(&merge_KVIDZALine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDZALine*)
   {
      return GenerateInitInstanceLocal((::KVIDZALine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDZALine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDZLine(void *p = 0);
   static void *newArray_KVIDZLine(Long_t size, void *p);
   static void delete_KVIDZLine(void *p);
   static void deleteArray_KVIDZLine(void *p);
   static void destruct_KVIDZLine(void *p);
   static void streamer_KVIDZLine(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDZLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDZLine*)
   {
      ::KVIDZLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDZLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDZLine", ::KVIDZLine::Class_Version(), "KVIDZALine.h", 85,
                  typeid(::KVIDZLine), DefineBehavior(ptr, ptr),
                  &::KVIDZLine::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDZLine) );
      instance.SetNew(&new_KVIDZLine);
      instance.SetNewArray(&newArray_KVIDZLine);
      instance.SetDelete(&delete_KVIDZLine);
      instance.SetDeleteArray(&deleteArray_KVIDZLine);
      instance.SetDestructor(&destruct_KVIDZLine);
      instance.SetStreamerFunc(&streamer_KVIDZLine);
      instance.SetMerge(&merge_KVIDZLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDZLine*)
   {
      return GenerateInitInstanceLocal((::KVIDZLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDZLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIDMap(void *p);
   static void deleteArray_KVIDMap(void *p);
   static void destruct_KVIDMap(void *p);
   static Long64_t merge_KVIDMap(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDMap*)
   {
      ::KVIDMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDMap", ::KVIDMap::Class_Version(), "KVIDMap.h", 15,
                  typeid(::KVIDMap), DefineBehavior(ptr, ptr),
                  &::KVIDMap::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDMap) );
      instance.SetDelete(&delete_KVIDMap);
      instance.SetDeleteArray(&deleteArray_KVIDMap);
      instance.SetDestructor(&destruct_KVIDMap);
      instance.SetMerge(&merge_KVIDMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDMap*)
   {
      return GenerateInitInstanceLocal((::KVIDMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIDGrid(void *p);
   static void deleteArray_KVIDGrid(void *p);
   static void destruct_KVIDGrid(void *p);
   static Long64_t merge_KVIDGrid(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGrid*)
   {
      ::KVIDGrid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGrid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGrid", ::KVIDGrid::Class_Version(), "KVIDGrid.h", 24,
                  typeid(::KVIDGrid), DefineBehavior(ptr, ptr),
                  &::KVIDGrid::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGrid) );
      instance.SetDelete(&delete_KVIDGrid);
      instance.SetDeleteArray(&deleteArray_KVIDGrid);
      instance.SetDestructor(&destruct_KVIDGrid);
      instance.SetMerge(&merge_KVIDGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGrid*)
   {
      return GenerateInitInstanceLocal((::KVIDGrid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGrid*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGridManager(void *p = 0);
   static void *newArray_KVIDGridManager(Long_t size, void *p);
   static void delete_KVIDGridManager(void *p);
   static void deleteArray_KVIDGridManager(void *p);
   static void destruct_KVIDGridManager(void *p);
   static void streamer_KVIDGridManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGridManager*)
   {
      ::KVIDGridManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGridManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGridManager", ::KVIDGridManager::Class_Version(), "KVIDGridManager.h", 20,
                  typeid(::KVIDGridManager), DefineBehavior(ptr, ptr),
                  &::KVIDGridManager::Dictionary, isa_proxy, 16,
                  sizeof(::KVIDGridManager) );
      instance.SetNew(&new_KVIDGridManager);
      instance.SetNewArray(&newArray_KVIDGridManager);
      instance.SetDelete(&delete_KVIDGridManager);
      instance.SetDeleteArray(&deleteArray_KVIDGridManager);
      instance.SetDestructor(&destruct_KVIDGridManager);
      instance.SetStreamerFunc(&streamer_KVIDGridManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGridManager*)
   {
      return GenerateInitInstanceLocal((::KVIDGridManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGridManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDZAGrid(void *p = 0);
   static void *newArray_KVIDZAGrid(Long_t size, void *p);
   static void delete_KVIDZAGrid(void *p);
   static void deleteArray_KVIDZAGrid(void *p);
   static void destruct_KVIDZAGrid(void *p);
   static void streamer_KVIDZAGrid(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDZAGrid(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDZAGrid*)
   {
      ::KVIDZAGrid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDZAGrid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDZAGrid", ::KVIDZAGrid::Class_Version(), "KVIDZAGrid.h", 19,
                  typeid(::KVIDZAGrid), DefineBehavior(ptr, ptr),
                  &::KVIDZAGrid::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDZAGrid) );
      instance.SetNew(&new_KVIDZAGrid);
      instance.SetNewArray(&newArray_KVIDZAGrid);
      instance.SetDelete(&delete_KVIDZAGrid);
      instance.SetDeleteArray(&deleteArray_KVIDZAGrid);
      instance.SetDestructor(&destruct_KVIDZAGrid);
      instance.SetStreamerFunc(&streamer_KVIDZAGrid);
      instance.SetMerge(&merge_KVIDZAGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDZAGrid*)
   {
      return GenerateInitInstanceLocal((::KVIDZAGrid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDZAGrid*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDZGrid(void *p = 0);
   static void *newArray_KVIDZGrid(Long_t size, void *p);
   static void delete_KVIDZGrid(void *p);
   static void deleteArray_KVIDZGrid(void *p);
   static void destruct_KVIDZGrid(void *p);
   static void streamer_KVIDZGrid(TBuffer &buf, void *obj);
   static Long64_t merge_KVIDZGrid(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDZGrid*)
   {
      ::KVIDZGrid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDZGrid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDZGrid", ::KVIDZGrid::Class_Version(), "KVIDZAGrid.h", 155,
                  typeid(::KVIDZGrid), DefineBehavior(ptr, ptr),
                  &::KVIDZGrid::Dictionary, isa_proxy, 17,
                  sizeof(::KVIDZGrid) );
      instance.SetNew(&new_KVIDZGrid);
      instance.SetNewArray(&newArray_KVIDZGrid);
      instance.SetDelete(&delete_KVIDZGrid);
      instance.SetDeleteArray(&deleteArray_KVIDZGrid);
      instance.SetDestructor(&destruct_KVIDZGrid);
      instance.SetStreamerFunc(&streamer_KVIDZGrid);
      instance.SetMerge(&merge_KVIDZGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDZGrid*)
   {
      return GenerateInitInstanceLocal((::KVIDZGrid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDZGrid*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVTGIDFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGIDFitter::Class_Name()
{
   return "KVTGIDFitter";
}

//______________________________________________________________________________
const char *KVTGIDFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGIDFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGIDFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGIDFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTGID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGID::Class_Name()
{
   return "KVTGID";
}

//______________________________________________________________________________
const char *KVTGID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTGIDZ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGIDZ::Class_Name()
{
   return "KVTGIDZ";
}

//______________________________________________________________________________
const char *KVTGIDZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGIDZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGIDZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGIDZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTGIDZA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGIDZA::Class_Name()
{
   return "KVTGIDZA";
}

//______________________________________________________________________________
const char *KVTGIDZA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGIDZA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGIDZA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGIDZA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDZA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTGIDManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGIDManager::Class_Name()
{
   return "KVTGIDManager";
}

//______________________________________________________________________________
const char *KVTGIDManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGIDManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGIDManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGIDManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTGIDGrid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTGIDGrid::Class_Name()
{
   return "KVTGIDGrid";
}

//______________________________________________________________________________
const char *KVTGIDGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDGrid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTGIDGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDGrid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTGIDGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDGrid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTGIDGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTGIDGrid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIdentificationResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIdentificationResult::Class_Name()
{
   return "KVIdentificationResult";
}

//______________________________________________________________________________
const char *KVIdentificationResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIdentificationResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIdentificationResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIdentificationResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIdentificationResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIdentificationResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIdentificationResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIdentificationResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSubCodeManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSubCodeManager::Class_Name()
{
   return "KVIDSubCodeManager";
}

//______________________________________________________________________________
const char *KVIDSubCodeManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSubCodeManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSubCodeManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSubCodeManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSubCodeManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSubCodeManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSubCodeManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSubCodeManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVirtualIDFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVirtualIDFitter::Class_Name()
{
   return "KVVirtualIDFitter";
}

//______________________________________________________________________________
const char *KVVirtualIDFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVirtualIDFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVirtualIDFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVirtualIDFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVirtualIDFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVirtualIDFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVirtualIDFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVirtualIDFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDroite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDroite::Class_Name()
{
   return "KVDroite";
}

//______________________________________________________________________________
const char *KVDroite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDroite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDroite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDroite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDroite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDroite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDroite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDroite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSpiderLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSpiderLine::Class_Name()
{
   return "KVSpiderLine";
}

//______________________________________________________________________________
const char *KVSpiderLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSpiderLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSpiderLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSpiderLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSpiderPSALine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSpiderPSALine::Class_Name()
{
   return "KVSpiderPSALine";
}

//______________________________________________________________________________
const char *KVSpiderPSALine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderPSALine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSpiderPSALine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderPSALine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSpiderPSALine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderPSALine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSpiderPSALine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderPSALine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDP2toIDGridConvertor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDP2toIDGridConvertor::Class_Name()
{
   return "KVDP2toIDGridConvertor";
}

//______________________________________________________________________________
const char *KVDP2toIDGridConvertor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toIDGridConvertor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDP2toIDGridConvertor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toIDGridConvertor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDP2toIDGridConvertor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toIDGridConvertor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDP2toIDGridConvertor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDP2toIDGridConvertor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDentifier::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDentifier::Class_Name()
{
   return "KVIDentifier";
}

//______________________________________________________________________________
const char *KVIDentifier::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDentifier*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDentifier::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDentifier*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDentifier::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDentifier*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDentifier::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDentifier*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGraph::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGraph::Class_Name()
{
   return "KVIDGraph";
}

//______________________________________________________________________________
const char *KVIDGraph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGraph*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGraph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGraph*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGraph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGraph*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGraph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGraph*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDLine::Class_Name()
{
   return "KVIDLine";
}

//______________________________________________________________________________
const char *KVIDLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDContour::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDContour::Class_Name()
{
   return "KVIDContour";
}

//______________________________________________________________________________
const char *KVIDContour::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDContour*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDContour::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDContour*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDContour::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDContour*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDContour::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDContour*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDCutContour::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDCutContour::Class_Name()
{
   return "KVIDCutContour";
}

//______________________________________________________________________________
const char *KVIDCutContour::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutContour*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDCutContour::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutContour*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDCutContour::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutContour*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDCutContour::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutContour*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDCutLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDCutLine::Class_Name()
{
   return "KVIDCutLine";
}

//______________________________________________________________________________
const char *KVIDCutLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDCutLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDCutLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDCutLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDCutLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDZAContour::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDZAContour::Class_Name()
{
   return "KVIDZAContour";
}

//______________________________________________________________________________
const char *KVIDZAContour::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAContour*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDZAContour::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAContour*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDZAContour::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAContour*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDZAContour::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAContour*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDZALine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDZALine::Class_Name()
{
   return "KVIDZALine";
}

//______________________________________________________________________________
const char *KVIDZALine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZALine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDZALine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZALine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDZALine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZALine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDZALine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZALine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDZLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDZLine::Class_Name()
{
   return "KVIDZLine";
}

//______________________________________________________________________________
const char *KVIDZLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDZLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDZLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDZLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDMap::Class_Name()
{
   return "KVIDMap";
}

//______________________________________________________________________________
const char *KVIDMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGrid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGrid::Class_Name()
{
   return "KVIDGrid";
}

//______________________________________________________________________________
const char *KVIDGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGrid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGrid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGrid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGrid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGridManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGridManager::Class_Name()
{
   return "KVIDGridManager";
}

//______________________________________________________________________________
const char *KVIDGridManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGridManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGridManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGridManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDZAGrid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDZAGrid::Class_Name()
{
   return "KVIDZAGrid";
}

//______________________________________________________________________________
const char *KVIDZAGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAGrid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDZAGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAGrid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDZAGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAGrid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDZAGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZAGrid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDZGrid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDZGrid::Class_Name()
{
   return "KVIDZGrid";
}

//______________________________________________________________________________
const char *KVIDZGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZGrid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDZGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDZGrid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDZGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZGrid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDZGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDZGrid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVTGIDFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTGIDFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTGIDFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTGIDFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTGIDFitter(void *p) {
      return  p ? new(p) ::KVTGIDFitter : new ::KVTGIDFitter;
   }
   static void *newArray_KVTGIDFitter(Long_t nElements, void *p) {
      return p ? new(p) ::KVTGIDFitter[nElements] : new ::KVTGIDFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTGIDFitter(void *p) {
      delete ((::KVTGIDFitter*)p);
   }
   static void deleteArray_KVTGIDFitter(void *p) {
      delete [] ((::KVTGIDFitter*)p);
   }
   static void destruct_KVTGIDFitter(void *p) {
      typedef ::KVTGIDFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTGIDFitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVTGID(void *p) {
      delete ((::KVTGID*)p);
   }
   static void deleteArray_KVTGID(void *p) {
      delete [] ((::KVTGID*)p);
   }
   static void destruct_KVTGID(void *p) {
      typedef ::KVTGID current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTGID(TBuffer &buf, void *obj) {
      ((::KVTGID*)obj)->::KVTGID::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTGID

//______________________________________________________________________________
void KVTGIDZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTGIDZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTGIDZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTGIDZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTGIDZ(void *p) {
      return  p ? new(p) ::KVTGIDZ : new ::KVTGIDZ;
   }
   static void *newArray_KVTGIDZ(Long_t nElements, void *p) {
      return p ? new(p) ::KVTGIDZ[nElements] : new ::KVTGIDZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTGIDZ(void *p) {
      delete ((::KVTGIDZ*)p);
   }
   static void deleteArray_KVTGIDZ(void *p) {
      delete [] ((::KVTGIDZ*)p);
   }
   static void destruct_KVTGIDZ(void *p) {
      typedef ::KVTGIDZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTGIDZ

//______________________________________________________________________________
void KVTGIDZA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTGIDZA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTGIDZA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTGIDZA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTGIDZA(void *p) {
      return  p ? new(p) ::KVTGIDZA : new ::KVTGIDZA;
   }
   static void *newArray_KVTGIDZA(Long_t nElements, void *p) {
      return p ? new(p) ::KVTGIDZA[nElements] : new ::KVTGIDZA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTGIDZA(void *p) {
      delete ((::KVTGIDZA*)p);
   }
   static void deleteArray_KVTGIDZA(void *p) {
      delete [] ((::KVTGIDZA*)p);
   }
   static void destruct_KVTGIDZA(void *p) {
      typedef ::KVTGIDZA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTGIDZA

//______________________________________________________________________________
void KVTGIDManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTGIDManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTGIDManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTGIDManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTGIDManager(void *p) {
      return  p ? new(p) ::KVTGIDManager : new ::KVTGIDManager;
   }
   static void *newArray_KVTGIDManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVTGIDManager[nElements] : new ::KVTGIDManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTGIDManager(void *p) {
      delete ((::KVTGIDManager*)p);
   }
   static void deleteArray_KVTGIDManager(void *p) {
      delete [] ((::KVTGIDManager*)p);
   }
   static void destruct_KVTGIDManager(void *p) {
      typedef ::KVTGIDManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTGIDManager

//______________________________________________________________________________
void KVTGIDGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTGIDGrid.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTGIDGrid::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTGIDGrid::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTGIDGrid(void *p) {
      return  p ? new(p) ::KVTGIDGrid : new ::KVTGIDGrid;
   }
   static void *newArray_KVTGIDGrid(Long_t nElements, void *p) {
      return p ? new(p) ::KVTGIDGrid[nElements] : new ::KVTGIDGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTGIDGrid(void *p) {
      delete ((::KVTGIDGrid*)p);
   }
   static void deleteArray_KVTGIDGrid(void *p) {
      delete [] ((::KVTGIDGrid*)p);
   }
   static void destruct_KVTGIDGrid(void *p) {
      typedef ::KVTGIDGrid current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVTGIDGrid(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVTGIDGrid*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVTGIDGrid

//______________________________________________________________________________
void KVIdentificationResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIdentificationResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIdentificationResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIdentificationResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIdentificationResult(void *p) {
      return  p ? new(p) ::KVIdentificationResult : new ::KVIdentificationResult;
   }
   static void *newArray_KVIdentificationResult(Long_t nElements, void *p) {
      return p ? new(p) ::KVIdentificationResult[nElements] : new ::KVIdentificationResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIdentificationResult(void *p) {
      delete ((::KVIdentificationResult*)p);
   }
   static void deleteArray_KVIdentificationResult(void *p) {
      delete [] ((::KVIdentificationResult*)p);
   }
   static void destruct_KVIdentificationResult(void *p) {
      typedef ::KVIdentificationResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIdentificationResult

//______________________________________________________________________________
void KVIDSubCodeManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSubCodeManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSubCodeManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSubCodeManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSubCodeManager(void *p) {
      return  p ? new(p) ::KVIDSubCodeManager : new ::KVIDSubCodeManager;
   }
   static void *newArray_KVIDSubCodeManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSubCodeManager[nElements] : new ::KVIDSubCodeManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSubCodeManager(void *p) {
      delete ((::KVIDSubCodeManager*)p);
   }
   static void deleteArray_KVIDSubCodeManager(void *p) {
      delete [] ((::KVIDSubCodeManager*)p);
   }
   static void destruct_KVIDSubCodeManager(void *p) {
      typedef ::KVIDSubCodeManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSubCodeManager

//______________________________________________________________________________
void KVVirtualIDFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVirtualIDFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVirtualIDFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVirtualIDFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVVirtualIDFitter(void *p) {
      delete ((::KVVirtualIDFitter*)p);
   }
   static void deleteArray_KVVirtualIDFitter(void *p) {
      delete [] ((::KVVirtualIDFitter*)p);
   }
   static void destruct_KVVirtualIDFitter(void *p) {
      typedef ::KVVirtualIDFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVirtualIDFitter

//______________________________________________________________________________
void KVDroite::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDroite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDroite::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDroite::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDroite(void *p) {
      return  p ? new(p) ::KVDroite : new ::KVDroite;
   }
   static void *newArray_KVDroite(Long_t nElements, void *p) {
      return p ? new(p) ::KVDroite[nElements] : new ::KVDroite[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDroite(void *p) {
      delete ((::KVDroite*)p);
   }
   static void deleteArray_KVDroite(void *p) {
      delete [] ((::KVDroite*)p);
   }
   static void destruct_KVDroite(void *p) {
      typedef ::KVDroite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDroite

//______________________________________________________________________________
void KVSpiderLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSpiderLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSpiderLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSpiderLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSpiderLine(void *p) {
      return  p ? new(p) ::KVSpiderLine : new ::KVSpiderLine;
   }
   static void *newArray_KVSpiderLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVSpiderLine[nElements] : new ::KVSpiderLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSpiderLine(void *p) {
      delete ((::KVSpiderLine*)p);
   }
   static void deleteArray_KVSpiderLine(void *p) {
      delete [] ((::KVSpiderLine*)p);
   }
   static void destruct_KVSpiderLine(void *p) {
      typedef ::KVSpiderLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSpiderLine

//______________________________________________________________________________
void KVSpiderPSALine::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSpiderPSALine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSpiderPSALine::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSpiderPSALine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSpiderPSALine(void *p) {
      return  p ? new(p) ::KVSpiderPSALine : new ::KVSpiderPSALine;
   }
   static void *newArray_KVSpiderPSALine(Long_t nElements, void *p) {
      return p ? new(p) ::KVSpiderPSALine[nElements] : new ::KVSpiderPSALine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSpiderPSALine(void *p) {
      delete ((::KVSpiderPSALine*)p);
   }
   static void deleteArray_KVSpiderPSALine(void *p) {
      delete [] ((::KVSpiderPSALine*)p);
   }
   static void destruct_KVSpiderPSALine(void *p) {
      typedef ::KVSpiderPSALine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSpiderPSALine

//______________________________________________________________________________
void KVDP2toIDGridConvertor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDP2toIDGridConvertor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDP2toIDGridConvertor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDP2toIDGridConvertor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDP2toIDGridConvertor(void *p) {
      return  p ? new(p) ::KVDP2toIDGridConvertor : new ::KVDP2toIDGridConvertor;
   }
   static void *newArray_KVDP2toIDGridConvertor(Long_t nElements, void *p) {
      return p ? new(p) ::KVDP2toIDGridConvertor[nElements] : new ::KVDP2toIDGridConvertor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDP2toIDGridConvertor(void *p) {
      delete ((::KVDP2toIDGridConvertor*)p);
   }
   static void deleteArray_KVDP2toIDGridConvertor(void *p) {
      delete [] ((::KVDP2toIDGridConvertor*)p);
   }
   static void destruct_KVDP2toIDGridConvertor(void *p) {
      typedef ::KVDP2toIDGridConvertor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDP2toIDGridConvertor

//______________________________________________________________________________
void KVIDentifier::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDentifier.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDentifier::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDentifier::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDentifier(void *p) {
      return  p ? new(p) ::KVIDentifier : new ::KVIDentifier;
   }
   static void *newArray_KVIDentifier(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDentifier[nElements] : new ::KVIDentifier[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDentifier(void *p) {
      delete ((::KVIDentifier*)p);
   }
   static void deleteArray_KVIDentifier(void *p) {
      delete [] ((::KVIDentifier*)p);
   }
   static void destruct_KVIDentifier(void *p) {
      typedef ::KVIDentifier current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDentifier(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDentifier*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDentifier

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIDGraph(void *p) {
      delete ((::KVIDGraph*)p);
   }
   static void deleteArray_KVIDGraph(void *p) {
      delete [] ((::KVIDGraph*)p);
   }
   static void destruct_KVIDGraph(void *p) {
      typedef ::KVIDGraph current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDGraph(TBuffer &buf, void *obj) {
      ((::KVIDGraph*)obj)->::KVIDGraph::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDGraph(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDGraph*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDGraph

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDLine(void *p) {
      return  p ? new(p) ::KVIDLine : new ::KVIDLine;
   }
   static void *newArray_KVIDLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDLine[nElements] : new ::KVIDLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDLine(void *p) {
      delete ((::KVIDLine*)p);
   }
   static void deleteArray_KVIDLine(void *p) {
      delete [] ((::KVIDLine*)p);
   }
   static void destruct_KVIDLine(void *p) {
      typedef ::KVIDLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDLine(TBuffer &buf, void *obj) {
      ((::KVIDLine*)obj)->::KVIDLine::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDLine

//______________________________________________________________________________
void KVIDContour::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDContour.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDContour::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDContour::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDContour(void *p) {
      return  p ? new(p) ::KVIDContour : new ::KVIDContour;
   }
   static void *newArray_KVIDContour(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDContour[nElements] : new ::KVIDContour[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDContour(void *p) {
      delete ((::KVIDContour*)p);
   }
   static void deleteArray_KVIDContour(void *p) {
      delete [] ((::KVIDContour*)p);
   }
   static void destruct_KVIDContour(void *p) {
      typedef ::KVIDContour current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDContour(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDContour*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDContour

//______________________________________________________________________________
void KVIDCutContour::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDCutContour.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDCutContour::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDCutContour::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDCutContour(void *p) {
      return  p ? new(p) ::KVIDCutContour : new ::KVIDCutContour;
   }
   static void *newArray_KVIDCutContour(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDCutContour[nElements] : new ::KVIDCutContour[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDCutContour(void *p) {
      delete ((::KVIDCutContour*)p);
   }
   static void deleteArray_KVIDCutContour(void *p) {
      delete [] ((::KVIDCutContour*)p);
   }
   static void destruct_KVIDCutContour(void *p) {
      typedef ::KVIDCutContour current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDCutContour(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDCutContour*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDCutContour

//______________________________________________________________________________
void KVIDCutLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDCutLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDCutLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDCutLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDCutLine(void *p) {
      return  p ? new(p) ::KVIDCutLine : new ::KVIDCutLine;
   }
   static void *newArray_KVIDCutLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDCutLine[nElements] : new ::KVIDCutLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDCutLine(void *p) {
      delete ((::KVIDCutLine*)p);
   }
   static void deleteArray_KVIDCutLine(void *p) {
      delete [] ((::KVIDCutLine*)p);
   }
   static void destruct_KVIDCutLine(void *p) {
      typedef ::KVIDCutLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDCutLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDCutLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDCutLine

//______________________________________________________________________________
void KVIDZAContour::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDZAContour.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDZAContour::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDZAContour::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDZAContour(void *p) {
      return  p ? new(p) ::KVIDZAContour : new ::KVIDZAContour;
   }
   static void *newArray_KVIDZAContour(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDZAContour[nElements] : new ::KVIDZAContour[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDZAContour(void *p) {
      delete ((::KVIDZAContour*)p);
   }
   static void deleteArray_KVIDZAContour(void *p) {
      delete [] ((::KVIDZAContour*)p);
   }
   static void destruct_KVIDZAContour(void *p) {
      typedef ::KVIDZAContour current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDZAContour(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDZAContour*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDZAContour

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDZALine(void *p) {
      return  p ? new(p) ::KVIDZALine : new ::KVIDZALine;
   }
   static void *newArray_KVIDZALine(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDZALine[nElements] : new ::KVIDZALine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDZALine(void *p) {
      delete ((::KVIDZALine*)p);
   }
   static void deleteArray_KVIDZALine(void *p) {
      delete [] ((::KVIDZALine*)p);
   }
   static void destruct_KVIDZALine(void *p) {
      typedef ::KVIDZALine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDZALine(TBuffer &buf, void *obj) {
      ((::KVIDZALine*)obj)->::KVIDZALine::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDZALine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDZALine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDZALine

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDZLine(void *p) {
      return  p ? new(p) ::KVIDZLine : new ::KVIDZLine;
   }
   static void *newArray_KVIDZLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDZLine[nElements] : new ::KVIDZLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDZLine(void *p) {
      delete ((::KVIDZLine*)p);
   }
   static void deleteArray_KVIDZLine(void *p) {
      delete [] ((::KVIDZLine*)p);
   }
   static void destruct_KVIDZLine(void *p) {
      typedef ::KVIDZLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDZLine(TBuffer &buf, void *obj) {
      ((::KVIDZLine*)obj)->::KVIDZLine::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDZLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDZLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDZLine

//______________________________________________________________________________
void KVIDMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIDMap(void *p) {
      delete ((::KVIDMap*)p);
   }
   static void deleteArray_KVIDMap(void *p) {
      delete [] ((::KVIDMap*)p);
   }
   static void destruct_KVIDMap(void *p) {
      typedef ::KVIDMap current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDMap(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDMap*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDMap

//______________________________________________________________________________
void KVIDGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGrid.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGrid::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGrid::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIDGrid(void *p) {
      delete ((::KVIDGrid*)p);
   }
   static void deleteArray_KVIDGrid(void *p) {
      delete [] ((::KVIDGrid*)p);
   }
   static void destruct_KVIDGrid(void *p) {
      typedef ::KVIDGrid current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDGrid(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDGrid*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDGrid

//______________________________________________________________________________
void KVIDGridManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGridManager.

   KVBase::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGridManager(void *p) {
      return  p ? new(p) ::KVIDGridManager : new ::KVIDGridManager;
   }
   static void *newArray_KVIDGridManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGridManager[nElements] : new ::KVIDGridManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGridManager(void *p) {
      delete ((::KVIDGridManager*)p);
   }
   static void deleteArray_KVIDGridManager(void *p) {
      delete [] ((::KVIDGridManager*)p);
   }
   static void destruct_KVIDGridManager(void *p) {
      typedef ::KVIDGridManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDGridManager(TBuffer &buf, void *obj) {
      ((::KVIDGridManager*)obj)->::KVIDGridManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVIDGridManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDZAGrid(void *p) {
      return  p ? new(p) ::KVIDZAGrid : new ::KVIDZAGrid;
   }
   static void *newArray_KVIDZAGrid(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDZAGrid[nElements] : new ::KVIDZAGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDZAGrid(void *p) {
      delete ((::KVIDZAGrid*)p);
   }
   static void deleteArray_KVIDZAGrid(void *p) {
      delete [] ((::KVIDZAGrid*)p);
   }
   static void destruct_KVIDZAGrid(void *p) {
      typedef ::KVIDZAGrid current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDZAGrid(TBuffer &buf, void *obj) {
      ((::KVIDZAGrid*)obj)->::KVIDZAGrid::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDZAGrid(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDZAGrid*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDZAGrid

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDZGrid(void *p) {
      return  p ? new(p) ::KVIDZGrid : new ::KVIDZGrid;
   }
   static void *newArray_KVIDZGrid(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDZGrid[nElements] : new ::KVIDZGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDZGrid(void *p) {
      delete ((::KVIDZGrid*)p);
   }
   static void deleteArray_KVIDZGrid(void *p) {
      delete [] ((::KVIDZGrid*)p);
   }
   static void destruct_KVIDZGrid(void *p) {
      typedef ::KVIDZGrid current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIDZGrid(TBuffer &buf, void *obj) {
      ((::KVIDZGrid*)obj)->::KVIDZGrid::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVIDZGrid(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVIDZGrid*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVIDZGrid

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetidentification_Impl() {
    static const char* headers[] = {
"KVTGIDFunctions.h",
"KVIDLine.h",
"KVSpiderPSALine.h",
"KVSpiderLine.h",
"KVIdentificationResult.h",
"KVIDContour.h",
"KVTGIDZA.h",
"KVTGIDFitter.h",
"KVIDCutContour.h",
"KVIDGrid.h",
"KVTGIDManager.h",
"KVIDZAGrid.h",
"KVIDentifier.h",
"KVTGIDZ.h",
"KVVirtualIDFitter.h",
"KVIDZALine.h",
"KVDroite.h",
"KVDP2toIDGridConvertor.h",
"KVIDZAContour.h",
"KVIDMap.h",
"KVTGID.h",
"KVTGIDGrid.h",
"KVIDGraph.h",
"KVIDSubCodeManager.h",
"KVIDGridManager.h",
"KVIDCutLine.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification",
"/home/john/software/sources/kaliveda.git/fitltg-0.1/src",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/identification/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(For fitting ID grids with LTG functionals)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDFitter.h")))  KVTGIDFitter;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for particle identfication using functionals developed by L. Tassan-Got (IPN Orsay))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDZA.h")))  KVTGID;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for Z identification functionals by L. Tassan-Got)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDZA.h")))  KVTGIDZ;
class __attribute__((annotate(R"ATTRDUMP(Base class for Z & A identification functionals by L. Tassan-Got)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDZA.h")))  KVTGIDZA;
class __attribute__((annotate(R"ATTRDUMP(Handles a set of Tassan-Got Z & A identification functionals)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDManager.h")))  KVTGIDManager;
class __attribute__((annotate(R"ATTRDUMP(Grid representing result of fit)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDGrid.h")))  KVTGIDGrid;
class __attribute__((annotate(R"ATTRDUMP(Full result of one attempted particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIdentificationResult.h")))  KVIdentificationResult;
class __attribute__((annotate(R"ATTRDUMP(Handles the concatenation of identification routine codes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSubCodeManager.h")))  KVIDSubCodeManager;
class __attribute__((annotate(R"ATTRDUMP(ABC for fitting ID grids with functionals)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDFitter.h")))  KVVirtualIDFitter;
class __attribute__((annotate(R"ATTRDUMP(a faire !)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDroite.h")))  KVDroite;
class __attribute__((annotate("$clingAutoload$KVSpiderPSALine.h")))  KVSpiderLine;
class __attribute__((annotate(R"ATTRDUMP(KVSpiderLine specialized for PSA matrix)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSpiderPSALine.h")))  KVSpiderPSALine;
class __attribute__((annotate(R"ATTRDUMP(Converts dp2-format grids to KVIDGrids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDP2toIDGridConvertor.h")))  KVDP2toIDGridConvertor;
class __attribute__((annotate(R"ATTRDUMP(Base class for graphical cuts used in particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDLine.h")))  KVIDentifier;
class __attribute__((annotate(R"ATTRDUMP(Base class for particle identification in a 2D map)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDZA.h")))  KVIDGraph;
class __attribute__((annotate(R"ATTRDUMP(Base class for lines/cuts used for particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDLine.h")))  KVIDLine;
class __attribute__((annotate(R"ATTRDUMP(Basic graphical contour class for use in particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDContour.h")))  KVIDContour;
class __attribute__((annotate(R"ATTRDUMP(Graphical contour for excluding/including regions in particle identification maps)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCutContour.h")))  KVIDCutContour;
class __attribute__((annotate(R"ATTRDUMP(Line in ID grid used to delimit regions where identification is possible)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDCutLine.h")))  KVIDCutLine;
class __attribute__((annotate(R"ATTRDUMP(Graphical contour associated with a given nucleus for use in particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDZAContour.h")))  KVIDZAContour;
class __attribute__((annotate(R"ATTRDUMP(Base class for identification ridge lines corresponding to different nuclear species)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDZALine.h")))  KVIDZALine;
class __attribute__((annotate(R"ATTRDUMP(FOR BACKWARDS COMPATIBILITY ONLY. OBSOLETE.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDZALine.h")))  KVIDZLine;
class __attribute__((annotate(R"ATTRDUMP(Collection of graphical contours used for particle identification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDMap.h")))  KVIDMap;
class __attribute__((annotate(R"ATTRDUMP(Base class for 2D identification grids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTGIDZA.h")))  KVIDGrid;
class __attribute__((annotate(R"ATTRDUMP(Handles a collection of identification grids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridManager.h")))  KVIDGridManager;
class __attribute__((annotate(R"ATTRDUMP(Base class for 2D Z & A identification grids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDZAGrid.h")))  KVIDZAGrid;
class __attribute__((annotate(R"ATTRDUMP(FOR BACKWARDS COMPATIBILITY ONLY. OBSOLETE.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDZAGrid.h")))  KVIDZGrid;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVTGIDFunctions.h"
#include "KVIDLine.h"
#include "KVSpiderPSALine.h"
#include "KVSpiderLine.h"
#include "KVIdentificationResult.h"
#include "KVIDContour.h"
#include "KVTGIDZA.h"
#include "KVTGIDFitter.h"
#include "KVIDCutContour.h"
#include "KVIDGrid.h"
#include "KVTGIDManager.h"
#include "KVIDZAGrid.h"
#include "KVIDentifier.h"
#include "KVTGIDZ.h"
#include "KVVirtualIDFitter.h"
#include "KVIDZALine.h"
#include "KVDroite.h"
#include "KVDP2toIDGridConvertor.h"
#include "KVIDZAContour.h"
#include "KVIDMap.h"
#include "KVTGID.h"
#include "KVTGIDGrid.h"
#include "KVIDGraph.h"
#include "KVIDSubCodeManager.h"
#include "KVIDGridManager.h"
#include "KVIDCutLine.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDP2toIDGridConvertor", payloadCode, "@",
"KVDroite", payloadCode, "@",
"KVIDContour", payloadCode, "@",
"KVIDCutContour", payloadCode, "@",
"KVIDCutLine", payloadCode, "@",
"KVIDGraph", payloadCode, "@",
"KVIDGrid", payloadCode, "@",
"KVIDGridManager", payloadCode, "@",
"KVIDLine", payloadCode, "@",
"KVIDMap", payloadCode, "@",
"KVIDSubCodeManager", payloadCode, "@",
"KVIDZAContour", payloadCode, "@",
"KVIDZAGrid", payloadCode, "@",
"KVIDZALine", payloadCode, "@",
"KVIDZGrid", payloadCode, "@",
"KVIDZLine", payloadCode, "@",
"KVIDentifier", payloadCode, "@",
"KVIdentificationResult", payloadCode, "@",
"KVSpiderLine", payloadCode, "@",
"KVSpiderPSALine", payloadCode, "@",
"KVTGID", payloadCode, "@",
"KVTGIDFitter", payloadCode, "@",
"KVTGIDGrid", payloadCode, "@",
"KVTGIDManager", payloadCode, "@",
"KVTGIDZ", payloadCode, "@",
"KVTGIDZA", payloadCode, "@",
"KVVirtualIDFitter", payloadCode, "@",
"gIDGridManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetidentification",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetidentification_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetidentification_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetidentification() {
  TriggerDictionaryInitialization_libKVMultiDetidentification_Impl();
}
