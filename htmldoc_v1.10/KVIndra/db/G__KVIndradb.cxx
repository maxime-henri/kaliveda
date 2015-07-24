// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndradb

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
#include "KVDBElasticPeak.h"
#include "KVINDRAUpDater_e475s.h"
#include "KVINDRADB_e503.h"
#include "KVDB_BIC_Pressures.h"
#include "KVDBPeak.h"
#include "KVINDRADB_e416a.h"
#include "KVINDRARunSheetReader.h"
#include "KVDBAlphaPeak.h"
#include "KVINDRAUpDater_e613.h"
#include "KVINDRADB4.h"
#include "KVDBTape.h"
#include "KVINDRADBRun.h"
#include "KVDBChIoPressures.h"
#include "KVINDRAPulserDataTree.h"
#include "KVINDRARunListReader.h"
#include "KVINDRAUpDater_e416a.h"
#include "KVINDRADB2.h"
#include "KVINDRADB_e475s.h"
#include "KVINDRAUpDater.h"
#include "KVINDRADB_e613.h"
#include "KVINDRADB.h"
#include "KVINDRADB1.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRADB(void *p = 0);
   static void *newArray_KVINDRADB(Long_t size, void *p);
   static void delete_KVINDRADB(void *p);
   static void deleteArray_KVINDRADB(void *p);
   static void destruct_KVINDRADB(void *p);
   static void streamer_KVINDRADB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB*)
   {
      ::KVINDRADB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB", ::KVINDRADB::Class_Version(), "KVINDRADB.h", 38,
                  typeid(::KVINDRADB), DefineBehavior(ptr, ptr),
                  &::KVINDRADB::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB) );
      instance.SetNew(&new_KVINDRADB);
      instance.SetNewArray(&newArray_KVINDRADB);
      instance.SetDelete(&delete_KVINDRADB);
      instance.SetDeleteArray(&deleteArray_KVINDRADB);
      instance.SetDestructor(&destruct_KVINDRADB);
      instance.SetStreamerFunc(&streamer_KVINDRADB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRARunListReader(void *p = 0);
   static void *newArray_KVINDRARunListReader(Long_t size, void *p);
   static void delete_KVINDRARunListReader(void *p);
   static void deleteArray_KVINDRARunListReader(void *p);
   static void destruct_KVINDRARunListReader(void *p);
   static void streamer_KVINDRARunListReader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARunListReader*)
   {
      ::KVINDRARunListReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARunListReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARunListReader", ::KVINDRARunListReader::Class_Version(), "KVINDRARunListReader.h", 8,
                  typeid(::KVINDRARunListReader), DefineBehavior(ptr, ptr),
                  &::KVINDRARunListReader::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRARunListReader) );
      instance.SetNew(&new_KVINDRARunListReader);
      instance.SetNewArray(&newArray_KVINDRARunListReader);
      instance.SetDelete(&delete_KVINDRARunListReader);
      instance.SetDeleteArray(&deleteArray_KVINDRARunListReader);
      instance.SetDestructor(&destruct_KVINDRARunListReader);
      instance.SetStreamerFunc(&streamer_KVINDRARunListReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARunListReader*)
   {
      return GenerateInitInstanceLocal((::KVINDRARunListReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARunListReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRARunSheetReader(void *p = 0);
   static void *newArray_KVINDRARunSheetReader(Long_t size, void *p);
   static void delete_KVINDRARunSheetReader(void *p);
   static void deleteArray_KVINDRARunSheetReader(void *p);
   static void destruct_KVINDRARunSheetReader(void *p);
   static void streamer_KVINDRARunSheetReader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARunSheetReader*)
   {
      ::KVINDRARunSheetReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARunSheetReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARunSheetReader", ::KVINDRARunSheetReader::Class_Version(), "KVINDRARunSheetReader.h", 17,
                  typeid(::KVINDRARunSheetReader), DefineBehavior(ptr, ptr),
                  &::KVINDRARunSheetReader::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRARunSheetReader) );
      instance.SetNew(&new_KVINDRARunSheetReader);
      instance.SetNewArray(&newArray_KVINDRARunSheetReader);
      instance.SetDelete(&delete_KVINDRARunSheetReader);
      instance.SetDeleteArray(&deleteArray_KVINDRARunSheetReader);
      instance.SetDestructor(&destruct_KVINDRARunSheetReader);
      instance.SetStreamerFunc(&streamer_KVINDRARunSheetReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARunSheetReader*)
   {
      return GenerateInitInstanceLocal((::KVINDRARunSheetReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARunSheetReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADBRun(void *p = 0);
   static void *newArray_KVINDRADBRun(Long_t size, void *p);
   static void delete_KVINDRADBRun(void *p);
   static void deleteArray_KVINDRADBRun(void *p);
   static void destruct_KVINDRADBRun(void *p);
   static void streamer_KVINDRADBRun(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADBRun*)
   {
      ::KVINDRADBRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADBRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADBRun", ::KVINDRADBRun::Class_Version(), "KVINDRADBRun.h", 15,
                  typeid(::KVINDRADBRun), DefineBehavior(ptr, ptr),
                  &::KVINDRADBRun::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADBRun) );
      instance.SetNew(&new_KVINDRADBRun);
      instance.SetNewArray(&newArray_KVINDRADBRun);
      instance.SetDelete(&delete_KVINDRADBRun);
      instance.SetDeleteArray(&deleteArray_KVINDRADBRun);
      instance.SetDestructor(&destruct_KVINDRADBRun);
      instance.SetStreamerFunc(&streamer_KVINDRADBRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADBRun*)
   {
      return GenerateInitInstanceLocal((::KVINDRADBRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADBRun*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBChIoPressures(void *p = 0);
   static void *newArray_KVDBChIoPressures(Long_t size, void *p);
   static void delete_KVDBChIoPressures(void *p);
   static void deleteArray_KVDBChIoPressures(void *p);
   static void destruct_KVDBChIoPressures(void *p);
   static void streamer_KVDBChIoPressures(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBChIoPressures*)
   {
      ::KVDBChIoPressures *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBChIoPressures >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBChIoPressures", ::KVDBChIoPressures::Class_Version(), "KVDBChIoPressures.h", 31,
                  typeid(::KVDBChIoPressures), DefineBehavior(ptr, ptr),
                  &::KVDBChIoPressures::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBChIoPressures) );
      instance.SetNew(&new_KVDBChIoPressures);
      instance.SetNewArray(&newArray_KVDBChIoPressures);
      instance.SetDelete(&delete_KVDBChIoPressures);
      instance.SetDeleteArray(&deleteArray_KVDBChIoPressures);
      instance.SetDestructor(&destruct_KVDBChIoPressures);
      instance.SetStreamerFunc(&streamer_KVDBChIoPressures);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBChIoPressures*)
   {
      return GenerateInitInstanceLocal((::KVDBChIoPressures*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBChIoPressures*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBTape(void *p = 0);
   static void *newArray_KVDBTape(Long_t size, void *p);
   static void delete_KVDBTape(void *p);
   static void deleteArray_KVDBTape(void *p);
   static void destruct_KVDBTape(void *p);
   static void streamer_KVDBTape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBTape*)
   {
      ::KVDBTape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBTape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBTape", ::KVDBTape::Class_Version(), "KVDBTape.h", 17,
                  typeid(::KVDBTape), DefineBehavior(ptr, ptr),
                  &::KVDBTape::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBTape) );
      instance.SetNew(&new_KVDBTape);
      instance.SetNewArray(&newArray_KVDBTape);
      instance.SetDelete(&delete_KVDBTape);
      instance.SetDeleteArray(&deleteArray_KVDBTape);
      instance.SetDestructor(&destruct_KVDBTape);
      instance.SetStreamerFunc(&streamer_KVDBTape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBTape*)
   {
      return GenerateInitInstanceLocal((::KVDBTape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBTape*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBPeak(void *p = 0);
   static void *newArray_KVDBPeak(Long_t size, void *p);
   static void delete_KVDBPeak(void *p);
   static void deleteArray_KVDBPeak(void *p);
   static void destruct_KVDBPeak(void *p);
   static void streamer_KVDBPeak(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBPeak*)
   {
      ::KVDBPeak *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBPeak >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBPeak", ::KVDBPeak::Class_Version(), "KVDBPeak.h", 26,
                  typeid(::KVDBPeak), DefineBehavior(ptr, ptr),
                  &::KVDBPeak::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBPeak) );
      instance.SetNew(&new_KVDBPeak);
      instance.SetNewArray(&newArray_KVDBPeak);
      instance.SetDelete(&delete_KVDBPeak);
      instance.SetDeleteArray(&deleteArray_KVDBPeak);
      instance.SetDestructor(&destruct_KVDBPeak);
      instance.SetStreamerFunc(&streamer_KVDBPeak);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBPeak*)
   {
      return GenerateInitInstanceLocal((::KVDBPeak*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBPeak*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBAlphaPeak(void *p = 0);
   static void *newArray_KVDBAlphaPeak(Long_t size, void *p);
   static void delete_KVDBAlphaPeak(void *p);
   static void deleteArray_KVDBAlphaPeak(void *p);
   static void destruct_KVDBAlphaPeak(void *p);
   static void streamer_KVDBAlphaPeak(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBAlphaPeak*)
   {
      ::KVDBAlphaPeak *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBAlphaPeak >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBAlphaPeak", ::KVDBAlphaPeak::Class_Version(), "KVDBAlphaPeak.h", 26,
                  typeid(::KVDBAlphaPeak), DefineBehavior(ptr, ptr),
                  &::KVDBAlphaPeak::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBAlphaPeak) );
      instance.SetNew(&new_KVDBAlphaPeak);
      instance.SetNewArray(&newArray_KVDBAlphaPeak);
      instance.SetDelete(&delete_KVDBAlphaPeak);
      instance.SetDeleteArray(&deleteArray_KVDBAlphaPeak);
      instance.SetDestructor(&destruct_KVDBAlphaPeak);
      instance.SetStreamerFunc(&streamer_KVDBAlphaPeak);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBAlphaPeak*)
   {
      return GenerateInitInstanceLocal((::KVDBAlphaPeak*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBAlphaPeak*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBElasticPeak(void *p = 0);
   static void *newArray_KVDBElasticPeak(Long_t size, void *p);
   static void delete_KVDBElasticPeak(void *p);
   static void deleteArray_KVDBElasticPeak(void *p);
   static void destruct_KVDBElasticPeak(void *p);
   static void streamer_KVDBElasticPeak(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBElasticPeak*)
   {
      ::KVDBElasticPeak *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBElasticPeak >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBElasticPeak", ::KVDBElasticPeak::Class_Version(), "KVDBElasticPeak.h", 23,
                  typeid(::KVDBElasticPeak), DefineBehavior(ptr, ptr),
                  &::KVDBElasticPeak::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBElasticPeak) );
      instance.SetNew(&new_KVDBElasticPeak);
      instance.SetNewArray(&newArray_KVDBElasticPeak);
      instance.SetDelete(&delete_KVDBElasticPeak);
      instance.SetDeleteArray(&deleteArray_KVDBElasticPeak);
      instance.SetDestructor(&destruct_KVDBElasticPeak);
      instance.SetStreamerFunc(&streamer_KVDBElasticPeak);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBElasticPeak*)
   {
      return GenerateInitInstanceLocal((::KVDBElasticPeak*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBElasticPeak*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB1(void *p = 0);
   static void *newArray_KVINDRADB1(Long_t size, void *p);
   static void delete_KVINDRADB1(void *p);
   static void deleteArray_KVINDRADB1(void *p);
   static void destruct_KVINDRADB1(void *p);
   static void streamer_KVINDRADB1(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB1*)
   {
      ::KVINDRADB1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB1", ::KVINDRADB1::Class_Version(), "KVINDRADB1.h", 26,
                  typeid(::KVINDRADB1), DefineBehavior(ptr, ptr),
                  &::KVINDRADB1::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB1) );
      instance.SetNew(&new_KVINDRADB1);
      instance.SetNewArray(&newArray_KVINDRADB1);
      instance.SetDelete(&delete_KVINDRADB1);
      instance.SetDeleteArray(&deleteArray_KVINDRADB1);
      instance.SetDestructor(&destruct_KVINDRADB1);
      instance.SetStreamerFunc(&streamer_KVINDRADB1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB1*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB1*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB2(void *p = 0);
   static void *newArray_KVINDRADB2(Long_t size, void *p);
   static void delete_KVINDRADB2(void *p);
   static void deleteArray_KVINDRADB2(void *p);
   static void destruct_KVINDRADB2(void *p);
   static void streamer_KVINDRADB2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB2*)
   {
      ::KVINDRADB2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB2", ::KVINDRADB2::Class_Version(), "KVINDRADB2.h", 26,
                  typeid(::KVINDRADB2), DefineBehavior(ptr, ptr),
                  &::KVINDRADB2::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB2) );
      instance.SetNew(&new_KVINDRADB2);
      instance.SetNewArray(&newArray_KVINDRADB2);
      instance.SetDelete(&delete_KVINDRADB2);
      instance.SetDeleteArray(&deleteArray_KVINDRADB2);
      instance.SetDestructor(&destruct_KVINDRADB2);
      instance.SetStreamerFunc(&streamer_KVINDRADB2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB2*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB2*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB4(void *p = 0);
   static void *newArray_KVINDRADB4(Long_t size, void *p);
   static void delete_KVINDRADB4(void *p);
   static void deleteArray_KVINDRADB4(void *p);
   static void destruct_KVINDRADB4(void *p);
   static void streamer_KVINDRADB4(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB4*)
   {
      ::KVINDRADB4 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB4 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB4", ::KVINDRADB4::Class_Version(), "KVINDRADB4.h", 27,
                  typeid(::KVINDRADB4), DefineBehavior(ptr, ptr),
                  &::KVINDRADB4::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB4) );
      instance.SetNew(&new_KVINDRADB4);
      instance.SetNewArray(&newArray_KVINDRADB4);
      instance.SetDelete(&delete_KVINDRADB4);
      instance.SetDeleteArray(&deleteArray_KVINDRADB4);
      instance.SetDestructor(&destruct_KVINDRADB4);
      instance.SetStreamerFunc(&streamer_KVINDRADB4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB4*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB4*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB4*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB_e475s(void *p = 0);
   static void *newArray_KVINDRADB_e475s(Long_t size, void *p);
   static void delete_KVINDRADB_e475s(void *p);
   static void deleteArray_KVINDRADB_e475s(void *p);
   static void destruct_KVINDRADB_e475s(void *p);
   static void streamer_KVINDRADB_e475s(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB_e475s*)
   {
      ::KVINDRADB_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB_e475s", ::KVINDRADB_e475s::Class_Version(), "KVINDRADB_e475s.h", 19,
                  typeid(::KVINDRADB_e475s), DefineBehavior(ptr, ptr),
                  &::KVINDRADB_e475s::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB_e475s) );
      instance.SetNew(&new_KVINDRADB_e475s);
      instance.SetNewArray(&newArray_KVINDRADB_e475s);
      instance.SetDelete(&delete_KVINDRADB_e475s);
      instance.SetDeleteArray(&deleteArray_KVINDRADB_e475s);
      instance.SetDestructor(&destruct_KVINDRADB_e475s);
      instance.SetStreamerFunc(&streamer_KVINDRADB_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB_e475s*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB_e503(void *p = 0);
   static void *newArray_KVINDRADB_e503(Long_t size, void *p);
   static void delete_KVINDRADB_e503(void *p);
   static void deleteArray_KVINDRADB_e503(void *p);
   static void destruct_KVINDRADB_e503(void *p);
   static void streamer_KVINDRADB_e503(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB_e503*)
   {
      ::KVINDRADB_e503 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB_e503 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB_e503", ::KVINDRADB_e503::Class_Version(), "KVINDRADB_e503.h", 16,
                  typeid(::KVINDRADB_e503), DefineBehavior(ptr, ptr),
                  &::KVINDRADB_e503::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB_e503) );
      instance.SetNew(&new_KVINDRADB_e503);
      instance.SetNewArray(&newArray_KVINDRADB_e503);
      instance.SetDelete(&delete_KVINDRADB_e503);
      instance.SetDeleteArray(&deleteArray_KVINDRADB_e503);
      instance.SetDestructor(&destruct_KVINDRADB_e503);
      instance.SetStreamerFunc(&streamer_KVINDRADB_e503);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB_e503*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB_e503*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB_e503*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB_e613(void *p = 0);
   static void *newArray_KVINDRADB_e613(Long_t size, void *p);
   static void delete_KVINDRADB_e613(void *p);
   static void deleteArray_KVINDRADB_e613(void *p);
   static void destruct_KVINDRADB_e613(void *p);
   static void streamer_KVINDRADB_e613(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB_e613*)
   {
      ::KVINDRADB_e613 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB_e613 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB_e613", ::KVINDRADB_e613::Class_Version(), "KVINDRADB_e613.h", 9,
                  typeid(::KVINDRADB_e613), DefineBehavior(ptr, ptr),
                  &::KVINDRADB_e613::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB_e613) );
      instance.SetNew(&new_KVINDRADB_e613);
      instance.SetNewArray(&newArray_KVINDRADB_e613);
      instance.SetDelete(&delete_KVINDRADB_e613);
      instance.SetDeleteArray(&deleteArray_KVINDRADB_e613);
      instance.SetDestructor(&destruct_KVINDRADB_e613);
      instance.SetStreamerFunc(&streamer_KVINDRADB_e613);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB_e613*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB_e613*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB_e613*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAPulserDataTree(void *p = 0);
   static void *newArray_KVINDRAPulserDataTree(Long_t size, void *p);
   static void delete_KVINDRAPulserDataTree(void *p);
   static void deleteArray_KVINDRAPulserDataTree(void *p);
   static void destruct_KVINDRAPulserDataTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAPulserDataTree*)
   {
      ::KVINDRAPulserDataTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAPulserDataTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAPulserDataTree", ::KVINDRAPulserDataTree::Class_Version(), "KVINDRAPulserDataTree.h", 22,
                  typeid(::KVINDRAPulserDataTree), DefineBehavior(ptr, ptr),
                  &::KVINDRAPulserDataTree::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAPulserDataTree) );
      instance.SetNew(&new_KVINDRAPulserDataTree);
      instance.SetNewArray(&newArray_KVINDRAPulserDataTree);
      instance.SetDelete(&delete_KVINDRAPulserDataTree);
      instance.SetDeleteArray(&deleteArray_KVINDRAPulserDataTree);
      instance.SetDestructor(&destruct_KVINDRAPulserDataTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAPulserDataTree*)
   {
      return GenerateInitInstanceLocal((::KVINDRAPulserDataTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAPulserDataTree*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAUpDater(void *p = 0);
   static void *newArray_KVINDRAUpDater(Long_t size, void *p);
   static void delete_KVINDRAUpDater(void *p);
   static void deleteArray_KVINDRAUpDater(void *p);
   static void destruct_KVINDRAUpDater(void *p);
   static void streamer_KVINDRAUpDater(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAUpDater*)
   {
      ::KVINDRAUpDater *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAUpDater >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAUpDater", ::KVINDRAUpDater::Class_Version(), "KVINDRAUpDater.h", 15,
                  typeid(::KVINDRAUpDater), DefineBehavior(ptr, ptr),
                  &::KVINDRAUpDater::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRAUpDater) );
      instance.SetNew(&new_KVINDRAUpDater);
      instance.SetNewArray(&newArray_KVINDRAUpDater);
      instance.SetDelete(&delete_KVINDRAUpDater);
      instance.SetDeleteArray(&deleteArray_KVINDRAUpDater);
      instance.SetDestructor(&destruct_KVINDRAUpDater);
      instance.SetStreamerFunc(&streamer_KVINDRAUpDater);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAUpDater*)
   {
      return GenerateInitInstanceLocal((::KVINDRAUpDater*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAUpDater*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAUpDater_e475s(void *p = 0);
   static void *newArray_KVINDRAUpDater_e475s(Long_t size, void *p);
   static void delete_KVINDRAUpDater_e475s(void *p);
   static void deleteArray_KVINDRAUpDater_e475s(void *p);
   static void destruct_KVINDRAUpDater_e475s(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAUpDater_e475s*)
   {
      ::KVINDRAUpDater_e475s *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAUpDater_e475s >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAUpDater_e475s", ::KVINDRAUpDater_e475s::Class_Version(), "KVINDRAUpDater_e475s.h", 16,
                  typeid(::KVINDRAUpDater_e475s), DefineBehavior(ptr, ptr),
                  &::KVINDRAUpDater_e475s::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAUpDater_e475s) );
      instance.SetNew(&new_KVINDRAUpDater_e475s);
      instance.SetNewArray(&newArray_KVINDRAUpDater_e475s);
      instance.SetDelete(&delete_KVINDRAUpDater_e475s);
      instance.SetDeleteArray(&deleteArray_KVINDRAUpDater_e475s);
      instance.SetDestructor(&destruct_KVINDRAUpDater_e475s);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAUpDater_e475s*)
   {
      return GenerateInitInstanceLocal((::KVINDRAUpDater_e475s*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAUpDater_e475s*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDB_BIC_Pressures(void *p = 0);
   static void *newArray_KVDB_BIC_Pressures(Long_t size, void *p);
   static void delete_KVDB_BIC_Pressures(void *p);
   static void deleteArray_KVDB_BIC_Pressures(void *p);
   static void destruct_KVDB_BIC_Pressures(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDB_BIC_Pressures*)
   {
      ::KVDB_BIC_Pressures *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDB_BIC_Pressures >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDB_BIC_Pressures", ::KVDB_BIC_Pressures::Class_Version(), "KVDB_BIC_Pressures.h", 19,
                  typeid(::KVDB_BIC_Pressures), DefineBehavior(ptr, ptr),
                  &::KVDB_BIC_Pressures::Dictionary, isa_proxy, 4,
                  sizeof(::KVDB_BIC_Pressures) );
      instance.SetNew(&new_KVDB_BIC_Pressures);
      instance.SetNewArray(&newArray_KVDB_BIC_Pressures);
      instance.SetDelete(&delete_KVDB_BIC_Pressures);
      instance.SetDeleteArray(&deleteArray_KVDB_BIC_Pressures);
      instance.SetDestructor(&destruct_KVDB_BIC_Pressures);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDB_BIC_Pressures*)
   {
      return GenerateInitInstanceLocal((::KVDB_BIC_Pressures*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDB_BIC_Pressures*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRADB_e416a(void *p = 0);
   static void *newArray_KVINDRADB_e416a(Long_t size, void *p);
   static void delete_KVINDRADB_e416a(void *p);
   static void deleteArray_KVINDRADB_e416a(void *p);
   static void destruct_KVINDRADB_e416a(void *p);
   static void streamer_KVINDRADB_e416a(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRADB_e416a*)
   {
      ::KVINDRADB_e416a *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRADB_e416a >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRADB_e416a", ::KVINDRADB_e416a::Class_Version(), "KVINDRADB_e416a.h", 15,
                  typeid(::KVINDRADB_e416a), DefineBehavior(ptr, ptr),
                  &::KVINDRADB_e416a::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRADB_e416a) );
      instance.SetNew(&new_KVINDRADB_e416a);
      instance.SetNewArray(&newArray_KVINDRADB_e416a);
      instance.SetDelete(&delete_KVINDRADB_e416a);
      instance.SetDeleteArray(&deleteArray_KVINDRADB_e416a);
      instance.SetDestructor(&destruct_KVINDRADB_e416a);
      instance.SetStreamerFunc(&streamer_KVINDRADB_e416a);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRADB_e416a*)
   {
      return GenerateInitInstanceLocal((::KVINDRADB_e416a*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRADB_e416a*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAUpDater_e416a(void *p = 0);
   static void *newArray_KVINDRAUpDater_e416a(Long_t size, void *p);
   static void delete_KVINDRAUpDater_e416a(void *p);
   static void deleteArray_KVINDRAUpDater_e416a(void *p);
   static void destruct_KVINDRAUpDater_e416a(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAUpDater_e416a*)
   {
      ::KVINDRAUpDater_e416a *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAUpDater_e416a >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAUpDater_e416a", ::KVINDRAUpDater_e416a::Class_Version(), "KVINDRAUpDater_e416a.h", 15,
                  typeid(::KVINDRAUpDater_e416a), DefineBehavior(ptr, ptr),
                  &::KVINDRAUpDater_e416a::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAUpDater_e416a) );
      instance.SetNew(&new_KVINDRAUpDater_e416a);
      instance.SetNewArray(&newArray_KVINDRAUpDater_e416a);
      instance.SetDelete(&delete_KVINDRAUpDater_e416a);
      instance.SetDeleteArray(&deleteArray_KVINDRAUpDater_e416a);
      instance.SetDestructor(&destruct_KVINDRAUpDater_e416a);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAUpDater_e416a*)
   {
      return GenerateInitInstanceLocal((::KVINDRAUpDater_e416a*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAUpDater_e416a*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAUpDater_e613(void *p = 0);
   static void *newArray_KVINDRAUpDater_e613(Long_t size, void *p);
   static void delete_KVINDRAUpDater_e613(void *p);
   static void deleteArray_KVINDRAUpDater_e613(void *p);
   static void destruct_KVINDRAUpDater_e613(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAUpDater_e613*)
   {
      ::KVINDRAUpDater_e613 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAUpDater_e613 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAUpDater_e613", ::KVINDRAUpDater_e613::Class_Version(), "KVINDRAUpDater_e613.h", 9,
                  typeid(::KVINDRAUpDater_e613), DefineBehavior(ptr, ptr),
                  &::KVINDRAUpDater_e613::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAUpDater_e613) );
      instance.SetNew(&new_KVINDRAUpDater_e613);
      instance.SetNewArray(&newArray_KVINDRAUpDater_e613);
      instance.SetDelete(&delete_KVINDRAUpDater_e613);
      instance.SetDeleteArray(&deleteArray_KVINDRAUpDater_e613);
      instance.SetDestructor(&destruct_KVINDRAUpDater_e613);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAUpDater_e613*)
   {
      return GenerateInitInstanceLocal((::KVINDRAUpDater_e613*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAUpDater_e613*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB::Class_Name()
{
   return "KVINDRADB";
}

//______________________________________________________________________________
const char *KVINDRADB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARunListReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARunListReader::Class_Name()
{
   return "KVINDRARunListReader";
}

//______________________________________________________________________________
const char *KVINDRARunListReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunListReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARunListReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunListReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARunListReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunListReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARunListReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunListReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARunSheetReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARunSheetReader::Class_Name()
{
   return "KVINDRARunSheetReader";
}

//______________________________________________________________________________
const char *KVINDRARunSheetReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARunSheetReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARunSheetReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARunSheetReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADBRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADBRun::Class_Name()
{
   return "KVINDRADBRun";
}

//______________________________________________________________________________
const char *KVINDRADBRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADBRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADBRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADBRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADBRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADBRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADBRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADBRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBChIoPressures::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBChIoPressures::Class_Name()
{
   return "KVDBChIoPressures";
}

//______________________________________________________________________________
const char *KVDBChIoPressures::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBChIoPressures*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBChIoPressures::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBChIoPressures*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBChIoPressures::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBChIoPressures*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBChIoPressures::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBChIoPressures*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBTape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBTape::Class_Name()
{
   return "KVDBTape";
}

//______________________________________________________________________________
const char *KVDBTape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBTape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBTape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBTape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBTape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBTape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBTape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBTape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBPeak::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBPeak::Class_Name()
{
   return "KVDBPeak";
}

//______________________________________________________________________________
const char *KVDBPeak::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBPeak*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBPeak::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBPeak*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBPeak::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBPeak*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBPeak::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBPeak*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBAlphaPeak::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBAlphaPeak::Class_Name()
{
   return "KVDBAlphaPeak";
}

//______________________________________________________________________________
const char *KVDBAlphaPeak::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBAlphaPeak*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBAlphaPeak::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBAlphaPeak*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBAlphaPeak::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBAlphaPeak*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBAlphaPeak::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBAlphaPeak*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBElasticPeak::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBElasticPeak::Class_Name()
{
   return "KVDBElasticPeak";
}

//______________________________________________________________________________
const char *KVDBElasticPeak::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBElasticPeak*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBElasticPeak::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBElasticPeak*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBElasticPeak::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBElasticPeak*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBElasticPeak::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBElasticPeak*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB1::Class_Name()
{
   return "KVINDRADB1";
}

//______________________________________________________________________________
const char *KVINDRADB1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB2::Class_Name()
{
   return "KVINDRADB2";
}

//______________________________________________________________________________
const char *KVINDRADB2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB4::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB4::Class_Name()
{
   return "KVINDRADB4";
}

//______________________________________________________________________________
const char *KVINDRADB4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB4*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB4*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB4*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB4*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB_e475s::Class_Name()
{
   return "KVINDRADB_e475s";
}

//______________________________________________________________________________
const char *KVINDRADB_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB_e503::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB_e503::Class_Name()
{
   return "KVINDRADB_e503";
}

//______________________________________________________________________________
const char *KVINDRADB_e503::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e503*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB_e503::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e503*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB_e503::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e503*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB_e503::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e503*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB_e613::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB_e613::Class_Name()
{
   return "KVINDRADB_e613";
}

//______________________________________________________________________________
const char *KVINDRADB_e613::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e613*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB_e613::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e613*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB_e613::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e613*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB_e613::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e613*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAPulserDataTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAPulserDataTree::Class_Name()
{
   return "KVINDRAPulserDataTree";
}

//______________________________________________________________________________
const char *KVINDRAPulserDataTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAPulserDataTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAPulserDataTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAPulserDataTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAPulserDataTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAPulserDataTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAPulserDataTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAPulserDataTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAUpDater::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAUpDater::Class_Name()
{
   return "KVINDRAUpDater";
}

//______________________________________________________________________________
const char *KVINDRAUpDater::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAUpDater::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAUpDater::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAUpDater::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAUpDater_e475s::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAUpDater_e475s::Class_Name()
{
   return "KVINDRAUpDater_e475s";
}

//______________________________________________________________________________
const char *KVINDRAUpDater_e475s::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e475s*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAUpDater_e475s::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e475s*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e475s::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e475s*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e475s::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e475s*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDB_BIC_Pressures::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDB_BIC_Pressures::Class_Name()
{
   return "KVDB_BIC_Pressures";
}

//______________________________________________________________________________
const char *KVDB_BIC_Pressures::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDB_BIC_Pressures*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDB_BIC_Pressures::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDB_BIC_Pressures*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDB_BIC_Pressures::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDB_BIC_Pressures*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDB_BIC_Pressures::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDB_BIC_Pressures*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRADB_e416a::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRADB_e416a::Class_Name()
{
   return "KVINDRADB_e416a";
}

//______________________________________________________________________________
const char *KVINDRADB_e416a::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e416a*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRADB_e416a::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e416a*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRADB_e416a::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e416a*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRADB_e416a::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRADB_e416a*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAUpDater_e416a::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAUpDater_e416a::Class_Name()
{
   return "KVINDRAUpDater_e416a";
}

//______________________________________________________________________________
const char *KVINDRAUpDater_e416a::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e416a*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAUpDater_e416a::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e416a*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e416a::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e416a*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e416a::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e416a*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAUpDater_e613::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAUpDater_e613::Class_Name()
{
   return "KVINDRAUpDater_e613";
}

//______________________________________________________________________________
const char *KVINDRAUpDater_e613::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e613*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAUpDater_e613::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e613*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e613::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e613*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAUpDater_e613::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAUpDater_e613*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRADB::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDataBase::Streamer(R__b);
      KVINDRARunListReader::Streamer(R__b);
      R__b >> kFirstRun;
      R__b >> kLastRun;
      R__b >> fRuns;
      R__b >> fSystems;
      R__b >> fChIoPressures;
      R__b >> fGains;
      R__b >> fTapes;
      R__b >> fCsILumCorr;
      R__b >> fPedestals;
      R__b >> fChanVolt;
      R__b >> fVoltMeVChIoSi;
      R__b >> fLitEnerCsI;
      R__b >> fLitEnerCsIZ1;
      R__b >> fAbsentDet;
      R__b >> fOoODet;
      R__b >> fOoOACQPar;
      R__b.CheckByteCount(R__s, R__c, KVINDRADB::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB::IsA(), kTRUE);
      KVDataBase::Streamer(R__b);
      KVINDRARunListReader::Streamer(R__b);
      R__b << kFirstRun;
      R__b << kLastRun;
      R__b << fRuns;
      R__b << fSystems;
      R__b << fChIoPressures;
      R__b << fGains;
      R__b << fTapes;
      R__b << fCsILumCorr;
      R__b << fPedestals;
      R__b << fChanVolt;
      R__b << fVoltMeVChIoSi;
      R__b << fLitEnerCsI;
      R__b << fLitEnerCsIZ1;
      R__b << fAbsentDet;
      R__b << fOoODet;
      R__b << fOoOACQPar;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB(void *p) {
      return  p ? new(p) ::KVINDRADB : new ::KVINDRADB;
   }
   static void *newArray_KVINDRADB(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB[nElements] : new ::KVINDRADB[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB(void *p) {
      delete ((::KVINDRADB*)p);
   }
   static void deleteArray_KVINDRADB(void *p) {
      delete [] ((::KVINDRADB*)p);
   }
   static void destruct_KVINDRADB(void *p) {
      typedef ::KVINDRADB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB(TBuffer &buf, void *obj) {
      ((::KVINDRADB*)obj)->::KVINDRADB::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB

//______________________________________________________________________________
void KVINDRARunListReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARunListReader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, KVINDRARunListReader::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRARunListReader::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRARunListReader(void *p) {
      return  p ? new(p) ::KVINDRARunListReader : new ::KVINDRARunListReader;
   }
   static void *newArray_KVINDRARunListReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRARunListReader[nElements] : new ::KVINDRARunListReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRARunListReader(void *p) {
      delete ((::KVINDRARunListReader*)p);
   }
   static void deleteArray_KVINDRARunListReader(void *p) {
      delete [] ((::KVINDRARunListReader*)p);
   }
   static void destruct_KVINDRARunListReader(void *p) {
      typedef ::KVINDRARunListReader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRARunListReader(TBuffer &buf, void *obj) {
      ((::KVINDRARunListReader*)obj)->::KVINDRARunListReader::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRARunListReader

//______________________________________________________________________________
void KVINDRARunSheetReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARunSheetReader.

   ::Error("KVINDRARunSheetReader::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRARunSheetReader(void *p) {
      return  p ? new(p) ::KVINDRARunSheetReader : new ::KVINDRARunSheetReader;
   }
   static void *newArray_KVINDRARunSheetReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRARunSheetReader[nElements] : new ::KVINDRARunSheetReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRARunSheetReader(void *p) {
      delete ((::KVINDRARunSheetReader*)p);
   }
   static void deleteArray_KVINDRARunSheetReader(void *p) {
      delete [] ((::KVINDRARunSheetReader*)p);
   }
   static void destruct_KVINDRARunSheetReader(void *p) {
      typedef ::KVINDRARunSheetReader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRARunSheetReader(TBuffer &buf, void *obj) {
      ((::KVINDRARunSheetReader*)obj)->::KVINDRARunSheetReader::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRARunSheetReader

//______________________________________________________________________________
void KVINDRADBRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADBRun.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRun::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADBRun::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADBRun::IsA(), kTRUE);
      KVDBRun::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADBRun(void *p) {
      return  p ? new(p) ::KVINDRADBRun : new ::KVINDRADBRun;
   }
   static void *newArray_KVINDRADBRun(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADBRun[nElements] : new ::KVINDRADBRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADBRun(void *p) {
      delete ((::KVINDRADBRun*)p);
   }
   static void deleteArray_KVINDRADBRun(void *p) {
      delete [] ((::KVINDRADBRun*)p);
   }
   static void destruct_KVINDRADBRun(void *p) {
      typedef ::KVINDRADBRun current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADBRun(TBuffer &buf, void *obj) {
      ((::KVINDRADBRun*)obj)->::KVINDRADBRun::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADBRun

//______________________________________________________________________________
void KVDBChIoPressures::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBChIoPressures.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRecord::Streamer(R__b);
      R__b.ReadStaticArray((float*)fPressures);
      R__b.CheckByteCount(R__s, R__c, KVDBChIoPressures::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBChIoPressures::IsA(), kTRUE);
      KVDBRecord::Streamer(R__b);
      R__b.WriteArray(fPressures, 5);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBChIoPressures(void *p) {
      return  p ? new(p) ::KVDBChIoPressures : new ::KVDBChIoPressures;
   }
   static void *newArray_KVDBChIoPressures(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBChIoPressures[nElements] : new ::KVDBChIoPressures[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBChIoPressures(void *p) {
      delete ((::KVDBChIoPressures*)p);
   }
   static void deleteArray_KVDBChIoPressures(void *p) {
      delete [] ((::KVDBChIoPressures*)p);
   }
   static void destruct_KVDBChIoPressures(void *p) {
      typedef ::KVDBChIoPressures current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBChIoPressures(TBuffer &buf, void *obj) {
      ((::KVDBChIoPressures*)obj)->::KVDBChIoPressures::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBChIoPressures

//______________________________________________________________________________
void KVDBTape::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBTape.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRecord::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVDBTape::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBTape::IsA(), kTRUE);
      KVDBRecord::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBTape(void *p) {
      return  p ? new(p) ::KVDBTape : new ::KVDBTape;
   }
   static void *newArray_KVDBTape(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBTape[nElements] : new ::KVDBTape[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBTape(void *p) {
      delete ((::KVDBTape*)p);
   }
   static void deleteArray_KVDBTape(void *p) {
      delete [] ((::KVDBTape*)p);
   }
   static void destruct_KVDBTape(void *p) {
      typedef ::KVDBTape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBTape(TBuffer &buf, void *obj) {
      ((::KVDBTape*)obj)->::KVDBTape::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBTape

//______________________________________________________________________________
void KVDBPeak::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBPeak.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBParameterSet::Streamer(R__b);
      KVINDRARRMValidator::Streamer(R__b);
      R__b >> fAvecGaz;
      fDetector.Streamer(R__b);
      fSignal.Streamer(R__b);
      R__b >> fGain;
      R__b >> fEnergy;
      R__b >> fRing;
      R__b >> fModule;
      R__b.CheckByteCount(R__s, R__c, KVDBPeak::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBPeak::IsA(), kTRUE);
      KVDBParameterSet::Streamer(R__b);
      KVINDRARRMValidator::Streamer(R__b);
      R__b << fAvecGaz;
      fDetector.Streamer(R__b);
      fSignal.Streamer(R__b);
      R__b << fGain;
      R__b << fEnergy;
      R__b << fRing;
      R__b << fModule;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBPeak(void *p) {
      return  p ? new(p) ::KVDBPeak : new ::KVDBPeak;
   }
   static void *newArray_KVDBPeak(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBPeak[nElements] : new ::KVDBPeak[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBPeak(void *p) {
      delete ((::KVDBPeak*)p);
   }
   static void deleteArray_KVDBPeak(void *p) {
      delete [] ((::KVDBPeak*)p);
   }
   static void destruct_KVDBPeak(void *p) {
      typedef ::KVDBPeak current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBPeak(TBuffer &buf, void *obj) {
      ((::KVDBPeak*)obj)->::KVDBPeak::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBPeak

//______________________________________________________________________________
void KVDBAlphaPeak::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBAlphaPeak.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBPeak::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVDBAlphaPeak::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBAlphaPeak::IsA(), kTRUE);
      KVDBPeak::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBAlphaPeak(void *p) {
      return  p ? new(p) ::KVDBAlphaPeak : new ::KVDBAlphaPeak;
   }
   static void *newArray_KVDBAlphaPeak(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBAlphaPeak[nElements] : new ::KVDBAlphaPeak[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBAlphaPeak(void *p) {
      delete ((::KVDBAlphaPeak*)p);
   }
   static void deleteArray_KVDBAlphaPeak(void *p) {
      delete [] ((::KVDBAlphaPeak*)p);
   }
   static void destruct_KVDBAlphaPeak(void *p) {
      typedef ::KVDBAlphaPeak current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBAlphaPeak(TBuffer &buf, void *obj) {
      ((::KVDBAlphaPeak*)obj)->::KVDBAlphaPeak::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBAlphaPeak

//______________________________________________________________________________
void KVDBElasticPeak::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBElasticPeak.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBPeak::Streamer(R__b);
      R__b >> fZbeam;
      R__b >> fAbeam;
      R__b.CheckByteCount(R__s, R__c, KVDBElasticPeak::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBElasticPeak::IsA(), kTRUE);
      KVDBPeak::Streamer(R__b);
      R__b << fZbeam;
      R__b << fAbeam;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBElasticPeak(void *p) {
      return  p ? new(p) ::KVDBElasticPeak : new ::KVDBElasticPeak;
   }
   static void *newArray_KVDBElasticPeak(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBElasticPeak[nElements] : new ::KVDBElasticPeak[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBElasticPeak(void *p) {
      delete ((::KVDBElasticPeak*)p);
   }
   static void deleteArray_KVDBElasticPeak(void *p) {
      delete [] ((::KVDBElasticPeak*)p);
   }
   static void destruct_KVDBElasticPeak(void *p) {
      typedef ::KVDBElasticPeak current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBElasticPeak(TBuffer &buf, void *obj) {
      ((::KVDBElasticPeak*)obj)->::KVDBElasticPeak::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBElasticPeak

//______________________________________________________________________________
void KVINDRADB1::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB1.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADB1::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB1::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB1(void *p) {
      return  p ? new(p) ::KVINDRADB1 : new ::KVINDRADB1;
   }
   static void *newArray_KVINDRADB1(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB1[nElements] : new ::KVINDRADB1[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB1(void *p) {
      delete ((::KVINDRADB1*)p);
   }
   static void deleteArray_KVINDRADB1(void *p) {
      delete [] ((::KVINDRADB1*)p);
   }
   static void destruct_KVINDRADB1(void *p) {
      typedef ::KVINDRADB1 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB1(TBuffer &buf, void *obj) {
      ((::KVINDRADB1*)obj)->::KVINDRADB1::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB1

//______________________________________________________________________________
void KVINDRADB2::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADB2::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB2::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB2(void *p) {
      return  p ? new(p) ::KVINDRADB2 : new ::KVINDRADB2;
   }
   static void *newArray_KVINDRADB2(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB2[nElements] : new ::KVINDRADB2[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB2(void *p) {
      delete ((::KVINDRADB2*)p);
   }
   static void deleteArray_KVINDRADB2(void *p) {
      delete [] ((::KVINDRADB2*)p);
   }
   static void destruct_KVINDRADB2(void *p) {
      typedef ::KVINDRADB2 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB2(TBuffer &buf, void *obj) {
      ((::KVINDRADB2*)obj)->::KVINDRADB2::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB2

//______________________________________________________________________________
void KVINDRADB4::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB4.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADB4::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB4::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB4(void *p) {
      return  p ? new(p) ::KVINDRADB4 : new ::KVINDRADB4;
   }
   static void *newArray_KVINDRADB4(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB4[nElements] : new ::KVINDRADB4[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB4(void *p) {
      delete ((::KVINDRADB4*)p);
   }
   static void deleteArray_KVINDRADB4(void *p) {
      delete [] ((::KVINDRADB4*)p);
   }
   static void destruct_KVINDRADB4(void *p) {
      typedef ::KVINDRADB4 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB4(TBuffer &buf, void *obj) {
      ((::KVINDRADB4*)obj)->::KVINDRADB4::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB4

//______________________________________________________________________________
void KVINDRADB_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB_e475s.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b >> fCalibrations;
      R__b.CheckByteCount(R__s, R__c, KVINDRADB_e475s::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB_e475s::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b << fCalibrations;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB_e475s(void *p) {
      return  p ? new(p) ::KVINDRADB_e475s : new ::KVINDRADB_e475s;
   }
   static void *newArray_KVINDRADB_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB_e475s[nElements] : new ::KVINDRADB_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB_e475s(void *p) {
      delete ((::KVINDRADB_e475s*)p);
   }
   static void deleteArray_KVINDRADB_e475s(void *p) {
      delete [] ((::KVINDRADB_e475s*)p);
   }
   static void destruct_KVINDRADB_e475s(void *p) {
      typedef ::KVINDRADB_e475s current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB_e475s(TBuffer &buf, void *obj) {
      ((::KVINDRADB_e475s*)obj)->::KVINDRADB_e475s::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB_e475s

//______________________________________________________________________________
void KVINDRADB_e503::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB_e503.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b >> fDeltaPed;
      R__b.CheckByteCount(R__s, R__c, KVINDRADB_e503::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB_e503::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b << fDeltaPed;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB_e503(void *p) {
      return  p ? new(p) ::KVINDRADB_e503 : new ::KVINDRADB_e503;
   }
   static void *newArray_KVINDRADB_e503(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB_e503[nElements] : new ::KVINDRADB_e503[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB_e503(void *p) {
      delete ((::KVINDRADB_e503*)p);
   }
   static void deleteArray_KVINDRADB_e503(void *p) {
      delete [] ((::KVINDRADB_e503*)p);
   }
   static void destruct_KVINDRADB_e503(void *p) {
      typedef ::KVINDRADB_e503 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB_e503(TBuffer &buf, void *obj) {
      ((::KVINDRADB_e503*)obj)->::KVINDRADB_e503::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB_e503

//______________________________________________________________________________
void KVINDRADB_e613::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB_e613.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVINDRADB_e613::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB_e613::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB_e613(void *p) {
      return  p ? new(p) ::KVINDRADB_e613 : new ::KVINDRADB_e613;
   }
   static void *newArray_KVINDRADB_e613(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB_e613[nElements] : new ::KVINDRADB_e613[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB_e613(void *p) {
      delete ((::KVINDRADB_e613*)p);
   }
   static void deleteArray_KVINDRADB_e613(void *p) {
      delete [] ((::KVINDRADB_e613*)p);
   }
   static void destruct_KVINDRADB_e613(void *p) {
      typedef ::KVINDRADB_e613 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB_e613(TBuffer &buf, void *obj) {
      ((::KVINDRADB_e613*)obj)->::KVINDRADB_e613::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB_e613

//______________________________________________________________________________
void KVINDRAPulserDataTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAPulserDataTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAPulserDataTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAPulserDataTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAPulserDataTree(void *p) {
      return  p ? new(p) ::KVINDRAPulserDataTree : new ::KVINDRAPulserDataTree;
   }
   static void *newArray_KVINDRAPulserDataTree(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAPulserDataTree[nElements] : new ::KVINDRAPulserDataTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAPulserDataTree(void *p) {
      delete ((::KVINDRAPulserDataTree*)p);
   }
   static void deleteArray_KVINDRAPulserDataTree(void *p) {
      delete [] ((::KVINDRAPulserDataTree*)p);
   }
   static void destruct_KVINDRAPulserDataTree(void *p) {
      typedef ::KVINDRAPulserDataTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAPulserDataTree

//______________________________________________________________________________
void KVINDRAUpDater::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAUpDater.

   KVUpDater::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAUpDater(void *p) {
      return  p ? new(p) ::KVINDRAUpDater : new ::KVINDRAUpDater;
   }
   static void *newArray_KVINDRAUpDater(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAUpDater[nElements] : new ::KVINDRAUpDater[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAUpDater(void *p) {
      delete ((::KVINDRAUpDater*)p);
   }
   static void deleteArray_KVINDRAUpDater(void *p) {
      delete [] ((::KVINDRAUpDater*)p);
   }
   static void destruct_KVINDRAUpDater(void *p) {
      typedef ::KVINDRAUpDater current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRAUpDater(TBuffer &buf, void *obj) {
      ((::KVINDRAUpDater*)obj)->::KVINDRAUpDater::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRAUpDater

//______________________________________________________________________________
void KVINDRAUpDater_e475s::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAUpDater_e475s.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAUpDater_e475s::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAUpDater_e475s::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAUpDater_e475s(void *p) {
      return  p ? new(p) ::KVINDRAUpDater_e475s : new ::KVINDRAUpDater_e475s;
   }
   static void *newArray_KVINDRAUpDater_e475s(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAUpDater_e475s[nElements] : new ::KVINDRAUpDater_e475s[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAUpDater_e475s(void *p) {
      delete ((::KVINDRAUpDater_e475s*)p);
   }
   static void deleteArray_KVINDRAUpDater_e475s(void *p) {
      delete [] ((::KVINDRAUpDater_e475s*)p);
   }
   static void destruct_KVINDRAUpDater_e475s(void *p) {
      typedef ::KVINDRAUpDater_e475s current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAUpDater_e475s

//______________________________________________________________________________
void KVDB_BIC_Pressures::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDB_BIC_Pressures.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDB_BIC_Pressures::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDB_BIC_Pressures::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDB_BIC_Pressures(void *p) {
      return  p ? new(p) ::KVDB_BIC_Pressures : new ::KVDB_BIC_Pressures;
   }
   static void *newArray_KVDB_BIC_Pressures(Long_t nElements, void *p) {
      return p ? new(p) ::KVDB_BIC_Pressures[nElements] : new ::KVDB_BIC_Pressures[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDB_BIC_Pressures(void *p) {
      delete ((::KVDB_BIC_Pressures*)p);
   }
   static void deleteArray_KVDB_BIC_Pressures(void *p) {
      delete [] ((::KVDB_BIC_Pressures*)p);
   }
   static void destruct_KVDB_BIC_Pressures(void *p) {
      typedef ::KVDB_BIC_Pressures current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDB_BIC_Pressures

//______________________________________________________________________________
void KVINDRADB_e416a::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRADB_e416a.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b >> fBICPressures;
      R__b.CheckByteCount(R__s, R__c, KVINDRADB_e416a::IsA());
   } else {
      R__c = R__b.WriteVersion(KVINDRADB_e416a::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b << fBICPressures;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRADB_e416a(void *p) {
      return  p ? new(p) ::KVINDRADB_e416a : new ::KVINDRADB_e416a;
   }
   static void *newArray_KVINDRADB_e416a(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRADB_e416a[nElements] : new ::KVINDRADB_e416a[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRADB_e416a(void *p) {
      delete ((::KVINDRADB_e416a*)p);
   }
   static void deleteArray_KVINDRADB_e416a(void *p) {
      delete [] ((::KVINDRADB_e416a*)p);
   }
   static void destruct_KVINDRADB_e416a(void *p) {
      typedef ::KVINDRADB_e416a current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRADB_e416a(TBuffer &buf, void *obj) {
      ((::KVINDRADB_e416a*)obj)->::KVINDRADB_e416a::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRADB_e416a

//______________________________________________________________________________
void KVINDRAUpDater_e416a::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAUpDater_e416a.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAUpDater_e416a::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAUpDater_e416a::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAUpDater_e416a(void *p) {
      return  p ? new(p) ::KVINDRAUpDater_e416a : new ::KVINDRAUpDater_e416a;
   }
   static void *newArray_KVINDRAUpDater_e416a(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAUpDater_e416a[nElements] : new ::KVINDRAUpDater_e416a[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAUpDater_e416a(void *p) {
      delete ((::KVINDRAUpDater_e416a*)p);
   }
   static void deleteArray_KVINDRAUpDater_e416a(void *p) {
      delete [] ((::KVINDRAUpDater_e416a*)p);
   }
   static void destruct_KVINDRAUpDater_e416a(void *p) {
      typedef ::KVINDRAUpDater_e416a current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAUpDater_e416a

//______________________________________________________________________________
void KVINDRAUpDater_e613::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAUpDater_e613.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAUpDater_e613::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAUpDater_e613::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAUpDater_e613(void *p) {
      return  p ? new(p) ::KVINDRAUpDater_e613 : new ::KVINDRAUpDater_e613;
   }
   static void *newArray_KVINDRAUpDater_e613(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAUpDater_e613[nElements] : new ::KVINDRAUpDater_e613[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAUpDater_e613(void *p) {
      delete ((::KVINDRAUpDater_e613*)p);
   }
   static void deleteArray_KVINDRAUpDater_e613(void *p) {
      delete [] ((::KVINDRAUpDater_e613*)p);
   }
   static void destruct_KVINDRAUpDater_e613(void *p) {
      typedef ::KVINDRAUpDater_e613 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAUpDater_e613

namespace {
  void TriggerDictionaryInitialization_libKVIndradb_Impl() {
    static const char* headers[] = {
"KVDBElasticPeak.h",
"KVINDRAUpDater_e475s.h",
"KVINDRADB_e503.h",
"KVDB_BIC_Pressures.h",
"KVDBPeak.h",
"KVINDRADB_e416a.h",
"KVINDRARunSheetReader.h",
"KVDBAlphaPeak.h",
"KVINDRAUpDater_e613.h",
"KVINDRADB4.h",
"KVDBTape.h",
"KVINDRADBRun.h",
"KVDBChIoPressures.h",
"KVINDRAPulserDataTree.h",
"KVINDRARunListReader.h",
"KVINDRAUpDater_e416a.h",
"KVINDRADB2.h",
"KVINDRADB_e475s.h",
"KVINDRAUpDater.h",
"KVINDRADB_e613.h",
"KVINDRADB.h",
"KVINDRADB1.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/db/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/db/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(DataBase of parameters for an INDRA campaign)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVINDRADB;
class __attribute__((annotate(R"ATTRDUMP(Utility base class for reading INDRA runlists)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVINDRARunListReader;
class __attribute__((annotate(R"ATTRDUMP(For reading run sheets of INDRA experiments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARunSheetReader.h")))  KVINDRARunSheetReader;
class __attribute__((annotate(R"ATTRDUMP(Class for storing information on INDRA runs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVINDRADBRun;
class __attribute__((annotate(R"ATTRDUMP(Database record with INDRA ChIo pressures for a set of runs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDB_BIC_Pressures.h")))  KVDBChIoPressures;
class __attribute__((annotate(R"ATTRDUMP(Class describing a DLT tape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVDBTape;
class __attribute__((annotate(R"ATTRDUMP(calibration points such as alpha, elastic, Brho)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBElasticPeak.h")))  KVDBPeak;
class __attribute__((annotate(R"ATTRDUMP(alpha peaks for calibration)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBAlphaPeak.h")))  KVDBAlphaPeak;
class __attribute__((annotate(R"ATTRDUMP(elastic peaks for calibration)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBElasticPeak.h")))  KVDBElasticPeak;
class __attribute__((annotate(R"ATTRDUMP(DataBase of parameters for 1st campaign of Indra)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB1.h")))  KVINDRADB1;
class __attribute__((annotate(R"ATTRDUMP(DataBase of parameters for 2nd campaign of Indra)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB2.h")))  KVINDRADB2;
class __attribute__((annotate(R"ATTRDUMP(DataBase of parameters for 4th campaign of Indra)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB4.h")))  KVINDRADB4;
class __attribute__((annotate(R"ATTRDUMP(Database for E475s experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e475s.h")))  KVINDRADB_e475s;
class __attribute__((annotate(R"ATTRDUMP(Database for e503 & e494s experiments with VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVINDRADB_e503;
class __attribute__((annotate(R"ATTRDUMP(Child class for e613 experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e613.h")))  KVINDRADB_e613;
class __attribute__((annotate(R"ATTRDUMP(Handles TTree with mean pulser data for every run)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e503.h")))  KVINDRAPulserDataTree;
class __attribute__((annotate(R"ATTRDUMP(Class handling setting of INDRA parameters for each run)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAUpDater_e475s.h")))  KVINDRAUpDater;
class __attribute__((annotate(R"ATTRDUMP(Sets run parameters for INDRA_e475s dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAUpDater_e475s.h")))  KVINDRAUpDater_e475s;
class __attribute__((annotate(R"ATTRDUMP(Database entry for BIC pressures (experiment E416A))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDB_BIC_Pressures.h")))  KVDB_BIC_Pressures;
class __attribute__((annotate(R"ATTRDUMP(Database for E416a experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRADB_e416a.h")))  KVINDRADB_e416a;
class __attribute__((annotate(R"ATTRDUMP(Sets run parameters for INDRA_e416a dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAUpDater_e416a.h")))  KVINDRAUpDater_e416a;
class __attribute__((annotate(R"ATTRDUMP(Sets run parameters for INDRA_e613 dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAUpDater_e613.h")))  KVINDRAUpDater_e613;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVDBElasticPeak.h"
#include "KVINDRAUpDater_e475s.h"
#include "KVINDRADB_e503.h"
#include "KVDB_BIC_Pressures.h"
#include "KVDBPeak.h"
#include "KVINDRADB_e416a.h"
#include "KVINDRARunSheetReader.h"
#include "KVDBAlphaPeak.h"
#include "KVINDRAUpDater_e613.h"
#include "KVINDRADB4.h"
#include "KVDBTape.h"
#include "KVINDRADBRun.h"
#include "KVDBChIoPressures.h"
#include "KVINDRAPulserDataTree.h"
#include "KVINDRARunListReader.h"
#include "KVINDRAUpDater_e416a.h"
#include "KVINDRADB2.h"
#include "KVINDRADB_e475s.h"
#include "KVINDRAUpDater.h"
#include "KVINDRADB_e613.h"
#include "KVINDRADB.h"
#include "KVINDRADB1.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDBAlphaPeak", payloadCode, "@",
"KVDBChIoPressures", payloadCode, "@",
"KVDBElasticPeak", payloadCode, "@",
"KVDBPeak", payloadCode, "@",
"KVDBTape", payloadCode, "@",
"KVDB_BIC_Pressures", payloadCode, "@",
"KVINDRADB", payloadCode, "@",
"KVINDRADB1", payloadCode, "@",
"KVINDRADB2", payloadCode, "@",
"KVINDRADB4", payloadCode, "@",
"KVINDRADBRun", payloadCode, "@",
"KVINDRADB_e416a", payloadCode, "@",
"KVINDRADB_e475s", payloadCode, "@",
"KVINDRADB_e503", payloadCode, "@",
"KVINDRADB_e613", payloadCode, "@",
"KVINDRAPulserDataTree", payloadCode, "@",
"KVINDRARunListReader", payloadCode, "@",
"KVINDRARunSheetReader", payloadCode, "@",
"KVINDRAUpDater", payloadCode, "@",
"KVINDRAUpDater_e416a", payloadCode, "@",
"KVINDRAUpDater_e475s", payloadCode, "@",
"KVINDRAUpDater_e613", payloadCode, "@",
"gIndraDB", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndradb",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndradb_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndradb_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndradb() {
  TriggerDictionaryInitialization_libKVIndradb_Impl();
}
