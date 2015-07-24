// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetdata_management

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
#include "KVDataRepository.h"
#include "KVDataAnalysisTask.h"
#include "KVDMSDataRepository.h"
#include "KVDataSet.h"
#include "SRB.h"
#include "IRODSDataRepository.h"
#include "KVDataSetManager.h"
#include "DMSAvailableRunsFile.h"
#include "SRBDataRepository.h"
#include "KVDataRepositoryManager.h"
#include "KVRemoteAvailableRunsFile.h"
#include "IRODS.h"
#include "KVDMS.h"
#include "KVRemoteDataRepository.h"
#include "KVRemoteDataSetManager.h"
#include "KVSimDir.h"
#include "KVSimFile.h"
#include "KVAvailableRunsFile.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVDataAnalysisTask(void *p = 0);
   static void *newArray_KVDataAnalysisTask(Long_t size, void *p);
   static void delete_KVDataAnalysisTask(void *p);
   static void deleteArray_KVDataAnalysisTask(void *p);
   static void destruct_KVDataAnalysisTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataAnalysisTask*)
   {
      ::KVDataAnalysisTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataAnalysisTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataAnalysisTask", ::KVDataAnalysisTask::Class_Version(), "KVDataAnalysisTask.h", 17,
                  typeid(::KVDataAnalysisTask), DefineBehavior(ptr, ptr),
                  &::KVDataAnalysisTask::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataAnalysisTask) );
      instance.SetNew(&new_KVDataAnalysisTask);
      instance.SetNewArray(&newArray_KVDataAnalysisTask);
      instance.SetDelete(&delete_KVDataAnalysisTask);
      instance.SetDeleteArray(&deleteArray_KVDataAnalysisTask);
      instance.SetDestructor(&destruct_KVDataAnalysisTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataAnalysisTask*)
   {
      return GenerateInitInstanceLocal((::KVDataAnalysisTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataAnalysisTask*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVAvailableRunsFile(void *p = 0);
   static void *newArray_KVAvailableRunsFile(Long_t size, void *p);
   static void delete_KVAvailableRunsFile(void *p);
   static void deleteArray_KVAvailableRunsFile(void *p);
   static void destruct_KVAvailableRunsFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVAvailableRunsFile*)
   {
      ::KVAvailableRunsFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVAvailableRunsFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVAvailableRunsFile", ::KVAvailableRunsFile::Class_Version(), "KVAvailableRunsFile.h", 29,
                  typeid(::KVAvailableRunsFile), DefineBehavior(ptr, ptr),
                  &::KVAvailableRunsFile::Dictionary, isa_proxy, 4,
                  sizeof(::KVAvailableRunsFile) );
      instance.SetNew(&new_KVAvailableRunsFile);
      instance.SetNewArray(&newArray_KVAvailableRunsFile);
      instance.SetDelete(&delete_KVAvailableRunsFile);
      instance.SetDeleteArray(&deleteArray_KVAvailableRunsFile);
      instance.SetDestructor(&destruct_KVAvailableRunsFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVAvailableRunsFile*)
   {
      return GenerateInitInstanceLocal((::KVAvailableRunsFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVAvailableRunsFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRemoteAvailableRunsFile(void *p = 0);
   static void *newArray_KVRemoteAvailableRunsFile(Long_t size, void *p);
   static void delete_KVRemoteAvailableRunsFile(void *p);
   static void deleteArray_KVRemoteAvailableRunsFile(void *p);
   static void destruct_KVRemoteAvailableRunsFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRemoteAvailableRunsFile*)
   {
      ::KVRemoteAvailableRunsFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRemoteAvailableRunsFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRemoteAvailableRunsFile", ::KVRemoteAvailableRunsFile::Class_Version(), "KVRemoteAvailableRunsFile.h", 15,
                  typeid(::KVRemoteAvailableRunsFile), DefineBehavior(ptr, ptr),
                  &::KVRemoteAvailableRunsFile::Dictionary, isa_proxy, 4,
                  sizeof(::KVRemoteAvailableRunsFile) );
      instance.SetNew(&new_KVRemoteAvailableRunsFile);
      instance.SetNewArray(&newArray_KVRemoteAvailableRunsFile);
      instance.SetDelete(&delete_KVRemoteAvailableRunsFile);
      instance.SetDeleteArray(&deleteArray_KVRemoteAvailableRunsFile);
      instance.SetDestructor(&destruct_KVRemoteAvailableRunsFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRemoteAvailableRunsFile*)
   {
      return GenerateInitInstanceLocal((::KVRemoteAvailableRunsFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRemoteAvailableRunsFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataSet(void *p = 0);
   static void *newArray_KVDataSet(Long_t size, void *p);
   static void delete_KVDataSet(void *p);
   static void deleteArray_KVDataSet(void *p);
   static void destruct_KVDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataSet*)
   {
      ::KVDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataSet", ::KVDataSet::Class_Version(), "KVDataSet.h", 29,
                  typeid(::KVDataSet), DefineBehavior(ptr, ptr),
                  &::KVDataSet::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataSet) );
      instance.SetNew(&new_KVDataSet);
      instance.SetNewArray(&newArray_KVDataSet);
      instance.SetDelete(&delete_KVDataSet);
      instance.SetDeleteArray(&deleteArray_KVDataSet);
      instance.SetDestructor(&destruct_KVDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataSet*)
   {
      return GenerateInitInstanceLocal((::KVDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataSet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataRepository(void *p = 0);
   static void *newArray_KVDataRepository(Long_t size, void *p);
   static void delete_KVDataRepository(void *p);
   static void deleteArray_KVDataRepository(void *p);
   static void destruct_KVDataRepository(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataRepository*)
   {
      ::KVDataRepository *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataRepository >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataRepository", ::KVDataRepository::Class_Version(), "KVDataRepository.h", 25,
                  typeid(::KVDataRepository), DefineBehavior(ptr, ptr),
                  &::KVDataRepository::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataRepository) );
      instance.SetNew(&new_KVDataRepository);
      instance.SetNewArray(&newArray_KVDataRepository);
      instance.SetDelete(&delete_KVDataRepository);
      instance.SetDeleteArray(&deleteArray_KVDataRepository);
      instance.SetDestructor(&destruct_KVDataRepository);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataRepository*)
   {
      return GenerateInitInstanceLocal((::KVDataRepository*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataRepository*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DMSFile_t(void *p = 0);
   static void *newArray_DMSFile_t(Long_t size, void *p);
   static void delete_DMSFile_t(void *p);
   static void deleteArray_DMSFile_t(void *p);
   static void destruct_DMSFile_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DMSFile_t*)
   {
      ::DMSFile_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DMSFile_t >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DMSFile_t", ::DMSFile_t::Class_Version(), "KVDMS.h", 12,
                  typeid(::DMSFile_t), DefineBehavior(ptr, ptr),
                  &::DMSFile_t::Dictionary, isa_proxy, 4,
                  sizeof(::DMSFile_t) );
      instance.SetNew(&new_DMSFile_t);
      instance.SetNewArray(&newArray_DMSFile_t);
      instance.SetDelete(&delete_DMSFile_t);
      instance.SetDeleteArray(&deleteArray_DMSFile_t);
      instance.SetDestructor(&destruct_DMSFile_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DMSFile_t*)
   {
      return GenerateInitInstanceLocal((::DMSFile_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DMSFile_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDMS(void *p);
   static void deleteArray_KVDMS(void *p);
   static void destruct_KVDMS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDMS*)
   {
      ::KVDMS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDMS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDMS", ::KVDMS::Class_Version(), "KVDMS.h", 34,
                  typeid(::KVDMS), DefineBehavior(ptr, ptr),
                  &::KVDMS::Dictionary, isa_proxy, 4,
                  sizeof(::KVDMS) );
      instance.SetDelete(&delete_KVDMS);
      instance.SetDeleteArray(&deleteArray_KVDMS);
      instance.SetDestructor(&destruct_KVDMS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDMS*)
   {
      return GenerateInitInstanceLocal((::KVDMS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDMS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDMSDataRepository(void *p = 0);
   static void *newArray_KVDMSDataRepository(Long_t size, void *p);
   static void delete_KVDMSDataRepository(void *p);
   static void deleteArray_KVDMSDataRepository(void *p);
   static void destruct_KVDMSDataRepository(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDMSDataRepository*)
   {
      ::KVDMSDataRepository *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDMSDataRepository >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDMSDataRepository", ::KVDMSDataRepository::Class_Version(), "KVDMSDataRepository.h", 10,
                  typeid(::KVDMSDataRepository), DefineBehavior(ptr, ptr),
                  &::KVDMSDataRepository::Dictionary, isa_proxy, 4,
                  sizeof(::KVDMSDataRepository) );
      instance.SetNew(&new_KVDMSDataRepository);
      instance.SetNewArray(&newArray_KVDMSDataRepository);
      instance.SetDelete(&delete_KVDMSDataRepository);
      instance.SetDeleteArray(&deleteArray_KVDMSDataRepository);
      instance.SetDestructor(&destruct_KVDMSDataRepository);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDMSDataRepository*)
   {
      return GenerateInitInstanceLocal((::KVDMSDataRepository*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDMSDataRepository*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRemoteDataRepository(void *p = 0);
   static void *newArray_KVRemoteDataRepository(Long_t size, void *p);
   static void delete_KVRemoteDataRepository(void *p);
   static void deleteArray_KVRemoteDataRepository(void *p);
   static void destruct_KVRemoteDataRepository(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRemoteDataRepository*)
   {
      ::KVRemoteDataRepository *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRemoteDataRepository >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRemoteDataRepository", ::KVRemoteDataRepository::Class_Version(), "KVRemoteDataRepository.h", 17,
                  typeid(::KVRemoteDataRepository), DefineBehavior(ptr, ptr),
                  &::KVRemoteDataRepository::Dictionary, isa_proxy, 4,
                  sizeof(::KVRemoteDataRepository) );
      instance.SetNew(&new_KVRemoteDataRepository);
      instance.SetNewArray(&newArray_KVRemoteDataRepository);
      instance.SetDelete(&delete_KVRemoteDataRepository);
      instance.SetDeleteArray(&deleteArray_KVRemoteDataRepository);
      instance.SetDestructor(&destruct_KVRemoteDataRepository);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRemoteDataRepository*)
   {
      return GenerateInitInstanceLocal((::KVRemoteDataRepository*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRemoteDataRepository*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRemoteDataSetManager(void *p = 0);
   static void *newArray_KVRemoteDataSetManager(Long_t size, void *p);
   static void delete_KVRemoteDataSetManager(void *p);
   static void deleteArray_KVRemoteDataSetManager(void *p);
   static void destruct_KVRemoteDataSetManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRemoteDataSetManager*)
   {
      ::KVRemoteDataSetManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRemoteDataSetManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRemoteDataSetManager", ::KVRemoteDataSetManager::Class_Version(), "KVRemoteDataSetManager.h", 16,
                  typeid(::KVRemoteDataSetManager), DefineBehavior(ptr, ptr),
                  &::KVRemoteDataSetManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVRemoteDataSetManager) );
      instance.SetNew(&new_KVRemoteDataSetManager);
      instance.SetNewArray(&newArray_KVRemoteDataSetManager);
      instance.SetDelete(&delete_KVRemoteDataSetManager);
      instance.SetDeleteArray(&deleteArray_KVRemoteDataSetManager);
      instance.SetDestructor(&destruct_KVRemoteDataSetManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRemoteDataSetManager*)
   {
      return GenerateInitInstanceLocal((::KVRemoteDataSetManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRemoteDataSetManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataRepositoryManager(void *p = 0);
   static void *newArray_KVDataRepositoryManager(Long_t size, void *p);
   static void delete_KVDataRepositoryManager(void *p);
   static void deleteArray_KVDataRepositoryManager(void *p);
   static void destruct_KVDataRepositoryManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataRepositoryManager*)
   {
      ::KVDataRepositoryManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataRepositoryManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataRepositoryManager", ::KVDataRepositoryManager::Class_Version(), "KVDataRepositoryManager.h", 17,
                  typeid(::KVDataRepositoryManager), DefineBehavior(ptr, ptr),
                  &::KVDataRepositoryManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataRepositoryManager) );
      instance.SetNew(&new_KVDataRepositoryManager);
      instance.SetNewArray(&newArray_KVDataRepositoryManager);
      instance.SetDelete(&delete_KVDataRepositoryManager);
      instance.SetDeleteArray(&deleteArray_KVDataRepositoryManager);
      instance.SetDestructor(&destruct_KVDataRepositoryManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataRepositoryManager*)
   {
      return GenerateInitInstanceLocal((::KVDataRepositoryManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataRepositoryManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDataSetManager(void *p = 0);
   static void *newArray_KVDataSetManager(Long_t size, void *p);
   static void delete_KVDataSetManager(void *p);
   static void deleteArray_KVDataSetManager(void *p);
   static void destruct_KVDataSetManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataSetManager*)
   {
      ::KVDataSetManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataSetManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataSetManager", ::KVDataSetManager::Class_Version(), "KVDataSetManager.h", 18,
                  typeid(::KVDataSetManager), DefineBehavior(ptr, ptr),
                  &::KVDataSetManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataSetManager) );
      instance.SetNew(&new_KVDataSetManager);
      instance.SetNewArray(&newArray_KVDataSetManager);
      instance.SetDelete(&delete_KVDataSetManager);
      instance.SetDeleteArray(&deleteArray_KVDataSetManager);
      instance.SetDestructor(&destruct_KVDataSetManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataSetManager*)
   {
      return GenerateInitInstanceLocal((::KVDataSetManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataSetManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SRB(void *p = 0);
   static void *newArray_SRB(Long_t size, void *p);
   static void delete_SRB(void *p);
   static void deleteArray_SRB(void *p);
   static void destruct_SRB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SRB*)
   {
      ::SRB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SRB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SRB", ::SRB::Class_Version(), "SRB.h", 9,
                  typeid(::SRB), DefineBehavior(ptr, ptr),
                  &::SRB::Dictionary, isa_proxy, 4,
                  sizeof(::SRB) );
      instance.SetNew(&new_SRB);
      instance.SetNewArray(&newArray_SRB);
      instance.SetDelete(&delete_SRB);
      instance.SetDeleteArray(&deleteArray_SRB);
      instance.SetDestructor(&destruct_SRB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SRB*)
   {
      return GenerateInitInstanceLocal((::SRB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SRB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IRODS(void *p = 0);
   static void *newArray_IRODS(Long_t size, void *p);
   static void delete_IRODS(void *p);
   static void deleteArray_IRODS(void *p);
   static void destruct_IRODS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IRODS*)
   {
      ::IRODS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IRODS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IRODS", ::IRODS::Class_Version(), "IRODS.h", 9,
                  typeid(::IRODS), DefineBehavior(ptr, ptr),
                  &::IRODS::Dictionary, isa_proxy, 4,
                  sizeof(::IRODS) );
      instance.SetNew(&new_IRODS);
      instance.SetNewArray(&newArray_IRODS);
      instance.SetDelete(&delete_IRODS);
      instance.SetDeleteArray(&deleteArray_IRODS);
      instance.SetDestructor(&destruct_IRODS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IRODS*)
   {
      return GenerateInitInstanceLocal((::IRODS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IRODS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IRODSDataRepository(void *p = 0);
   static void *newArray_IRODSDataRepository(Long_t size, void *p);
   static void delete_IRODSDataRepository(void *p);
   static void deleteArray_IRODSDataRepository(void *p);
   static void destruct_IRODSDataRepository(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IRODSDataRepository*)
   {
      ::IRODSDataRepository *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IRODSDataRepository >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IRODSDataRepository", ::IRODSDataRepository::Class_Version(), "IRODSDataRepository.h", 9,
                  typeid(::IRODSDataRepository), DefineBehavior(ptr, ptr),
                  &::IRODSDataRepository::Dictionary, isa_proxy, 4,
                  sizeof(::IRODSDataRepository) );
      instance.SetNew(&new_IRODSDataRepository);
      instance.SetNewArray(&newArray_IRODSDataRepository);
      instance.SetDelete(&delete_IRODSDataRepository);
      instance.SetDeleteArray(&deleteArray_IRODSDataRepository);
      instance.SetDestructor(&destruct_IRODSDataRepository);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IRODSDataRepository*)
   {
      return GenerateInitInstanceLocal((::IRODSDataRepository*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IRODSDataRepository*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SRBDataRepository(void *p = 0);
   static void *newArray_SRBDataRepository(Long_t size, void *p);
   static void delete_SRBDataRepository(void *p);
   static void deleteArray_SRBDataRepository(void *p);
   static void destruct_SRBDataRepository(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SRBDataRepository*)
   {
      ::SRBDataRepository *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SRBDataRepository >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SRBDataRepository", ::SRBDataRepository::Class_Version(), "SRBDataRepository.h", 9,
                  typeid(::SRBDataRepository), DefineBehavior(ptr, ptr),
                  &::SRBDataRepository::Dictionary, isa_proxy, 4,
                  sizeof(::SRBDataRepository) );
      instance.SetNew(&new_SRBDataRepository);
      instance.SetNewArray(&newArray_SRBDataRepository);
      instance.SetDelete(&delete_SRBDataRepository);
      instance.SetDeleteArray(&deleteArray_SRBDataRepository);
      instance.SetDestructor(&destruct_SRBDataRepository);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SRBDataRepository*)
   {
      return GenerateInitInstanceLocal((::SRBDataRepository*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SRBDataRepository*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DMSAvailableRunsFile(void *p = 0);
   static void *newArray_DMSAvailableRunsFile(Long_t size, void *p);
   static void delete_DMSAvailableRunsFile(void *p);
   static void deleteArray_DMSAvailableRunsFile(void *p);
   static void destruct_DMSAvailableRunsFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DMSAvailableRunsFile*)
   {
      ::DMSAvailableRunsFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DMSAvailableRunsFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DMSAvailableRunsFile", ::DMSAvailableRunsFile::Class_Version(), "DMSAvailableRunsFile.h", 9,
                  typeid(::DMSAvailableRunsFile), DefineBehavior(ptr, ptr),
                  &::DMSAvailableRunsFile::Dictionary, isa_proxy, 4,
                  sizeof(::DMSAvailableRunsFile) );
      instance.SetNew(&new_DMSAvailableRunsFile);
      instance.SetNewArray(&newArray_DMSAvailableRunsFile);
      instance.SetDelete(&delete_DMSAvailableRunsFile);
      instance.SetDeleteArray(&deleteArray_DMSAvailableRunsFile);
      instance.SetDestructor(&destruct_DMSAvailableRunsFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DMSAvailableRunsFile*)
   {
      return GenerateInitInstanceLocal((::DMSAvailableRunsFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DMSAvailableRunsFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimDir(void *p = 0);
   static void *newArray_KVSimDir(Long_t size, void *p);
   static void delete_KVSimDir(void *p);
   static void deleteArray_KVSimDir(void *p);
   static void destruct_KVSimDir(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimDir*)
   {
      ::KVSimDir *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimDir >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimDir", ::KVSimDir::Class_Version(), "KVSimDir.h", 10,
                  typeid(::KVSimDir), DefineBehavior(ptr, ptr),
                  &::KVSimDir::Dictionary, isa_proxy, 4,
                  sizeof(::KVSimDir) );
      instance.SetNew(&new_KVSimDir);
      instance.SetNewArray(&newArray_KVSimDir);
      instance.SetDelete(&delete_KVSimDir);
      instance.SetDeleteArray(&deleteArray_KVSimDir);
      instance.SetDestructor(&destruct_KVSimDir);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimDir*)
   {
      return GenerateInitInstanceLocal((::KVSimDir*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimDir*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimFile(void *p = 0);
   static void *newArray_KVSimFile(Long_t size, void *p);
   static void delete_KVSimFile(void *p);
   static void deleteArray_KVSimFile(void *p);
   static void destruct_KVSimFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimFile*)
   {
      ::KVSimFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimFile", ::KVSimFile::Class_Version(), "KVSimFile.h", 12,
                  typeid(::KVSimFile), DefineBehavior(ptr, ptr),
                  &::KVSimFile::Dictionary, isa_proxy, 4,
                  sizeof(::KVSimFile) );
      instance.SetNew(&new_KVSimFile);
      instance.SetNewArray(&newArray_KVSimFile);
      instance.SetDelete(&delete_KVSimFile);
      instance.SetDeleteArray(&deleteArray_KVSimFile);
      instance.SetDestructor(&destruct_KVSimFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimFile*)
   {
      return GenerateInitInstanceLocal((::KVSimFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVDataAnalysisTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataAnalysisTask::Class_Name()
{
   return "KVDataAnalysisTask";
}

//______________________________________________________________________________
const char *KVDataAnalysisTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataAnalysisTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataAnalysisTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataAnalysisTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVAvailableRunsFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVAvailableRunsFile::Class_Name()
{
   return "KVAvailableRunsFile";
}

//______________________________________________________________________________
const char *KVAvailableRunsFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAvailableRunsFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVAvailableRunsFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVAvailableRunsFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVAvailableRunsFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAvailableRunsFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVAvailableRunsFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVAvailableRunsFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRemoteAvailableRunsFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRemoteAvailableRunsFile::Class_Name()
{
   return "KVRemoteAvailableRunsFile";
}

//______________________________________________________________________________
const char *KVRemoteAvailableRunsFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteAvailableRunsFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRemoteAvailableRunsFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteAvailableRunsFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRemoteAvailableRunsFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteAvailableRunsFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRemoteAvailableRunsFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteAvailableRunsFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataSet::Class_Name()
{
   return "KVDataSet";
}

//______________________________________________________________________________
const char *KVDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataRepository::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataRepository::Class_Name()
{
   return "KVDataRepository";
}

//______________________________________________________________________________
const char *KVDataRepository::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepository*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataRepository::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepository*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataRepository::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepository*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataRepository::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepository*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DMSFile_t::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DMSFile_t::Class_Name()
{
   return "DMSFile_t";
}

//______________________________________________________________________________
const char *DMSFile_t::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DMSFile_t*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DMSFile_t::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DMSFile_t*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DMSFile_t::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DMSFile_t*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DMSFile_t::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DMSFile_t*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDMS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDMS::Class_Name()
{
   return "KVDMS";
}

//______________________________________________________________________________
const char *KVDMS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDMS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDMS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDMS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDMS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDMS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDMS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDMS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDMSDataRepository::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDMSDataRepository::Class_Name()
{
   return "KVDMSDataRepository";
}

//______________________________________________________________________________
const char *KVDMSDataRepository::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDMSDataRepository*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDMSDataRepository::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDMSDataRepository*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDMSDataRepository::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDMSDataRepository*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDMSDataRepository::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDMSDataRepository*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRemoteDataRepository::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRemoteDataRepository::Class_Name()
{
   return "KVRemoteDataRepository";
}

//______________________________________________________________________________
const char *KVRemoteDataRepository::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataRepository*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRemoteDataRepository::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataRepository*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRemoteDataRepository::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataRepository*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRemoteDataRepository::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataRepository*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRemoteDataSetManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRemoteDataSetManager::Class_Name()
{
   return "KVRemoteDataSetManager";
}

//______________________________________________________________________________
const char *KVRemoteDataSetManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataSetManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRemoteDataSetManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataSetManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRemoteDataSetManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataSetManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRemoteDataSetManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRemoteDataSetManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataRepositoryManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataRepositoryManager::Class_Name()
{
   return "KVDataRepositoryManager";
}

//______________________________________________________________________________
const char *KVDataRepositoryManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepositoryManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataRepositoryManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepositoryManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataRepositoryManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepositoryManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataRepositoryManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataRepositoryManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataSetManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataSetManager::Class_Name()
{
   return "KVDataSetManager";
}

//______________________________________________________________________________
const char *KVDataSetManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSetManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataSetManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataSetManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataSetManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSetManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataSetManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataSetManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SRB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SRB::Class_Name()
{
   return "SRB";
}

//______________________________________________________________________________
const char *SRB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SRB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SRB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SRB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SRB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SRB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SRB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SRB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IRODS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IRODS::Class_Name()
{
   return "IRODS";
}

//______________________________________________________________________________
const char *IRODS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IRODS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IRODS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IRODS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IRODS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IRODS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IRODS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IRODS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IRODSDataRepository::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IRODSDataRepository::Class_Name()
{
   return "IRODSDataRepository";
}

//______________________________________________________________________________
const char *IRODSDataRepository::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IRODSDataRepository*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IRODSDataRepository::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IRODSDataRepository*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IRODSDataRepository::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IRODSDataRepository*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IRODSDataRepository::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IRODSDataRepository*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SRBDataRepository::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SRBDataRepository::Class_Name()
{
   return "SRBDataRepository";
}

//______________________________________________________________________________
const char *SRBDataRepository::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SRBDataRepository*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SRBDataRepository::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SRBDataRepository*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SRBDataRepository::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SRBDataRepository*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SRBDataRepository::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SRBDataRepository*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DMSAvailableRunsFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DMSAvailableRunsFile::Class_Name()
{
   return "DMSAvailableRunsFile";
}

//______________________________________________________________________________
const char *DMSAvailableRunsFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DMSAvailableRunsFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DMSAvailableRunsFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DMSAvailableRunsFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DMSAvailableRunsFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DMSAvailableRunsFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DMSAvailableRunsFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DMSAvailableRunsFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimDir::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimDir::Class_Name()
{
   return "KVSimDir";
}

//______________________________________________________________________________
const char *KVSimDir::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimDir*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimDir::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimDir*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimDir::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimDir*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimDir::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimDir*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimFile::Class_Name()
{
   return "KVSimFile";
}

//______________________________________________________________________________
const char *KVSimFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVDataAnalysisTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataAnalysisTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataAnalysisTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataAnalysisTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataAnalysisTask(void *p) {
      return  p ? new(p) ::KVDataAnalysisTask : new ::KVDataAnalysisTask;
   }
   static void *newArray_KVDataAnalysisTask(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataAnalysisTask[nElements] : new ::KVDataAnalysisTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataAnalysisTask(void *p) {
      delete ((::KVDataAnalysisTask*)p);
   }
   static void deleteArray_KVDataAnalysisTask(void *p) {
      delete [] ((::KVDataAnalysisTask*)p);
   }
   static void destruct_KVDataAnalysisTask(void *p) {
      typedef ::KVDataAnalysisTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataAnalysisTask

//______________________________________________________________________________
void KVAvailableRunsFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVAvailableRunsFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVAvailableRunsFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVAvailableRunsFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVAvailableRunsFile(void *p) {
      return  p ? new(p) ::KVAvailableRunsFile : new ::KVAvailableRunsFile;
   }
   static void *newArray_KVAvailableRunsFile(Long_t nElements, void *p) {
      return p ? new(p) ::KVAvailableRunsFile[nElements] : new ::KVAvailableRunsFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVAvailableRunsFile(void *p) {
      delete ((::KVAvailableRunsFile*)p);
   }
   static void deleteArray_KVAvailableRunsFile(void *p) {
      delete [] ((::KVAvailableRunsFile*)p);
   }
   static void destruct_KVAvailableRunsFile(void *p) {
      typedef ::KVAvailableRunsFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVAvailableRunsFile

//______________________________________________________________________________
void KVRemoteAvailableRunsFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRemoteAvailableRunsFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRemoteAvailableRunsFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRemoteAvailableRunsFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRemoteAvailableRunsFile(void *p) {
      return  p ? new(p) ::KVRemoteAvailableRunsFile : new ::KVRemoteAvailableRunsFile;
   }
   static void *newArray_KVRemoteAvailableRunsFile(Long_t nElements, void *p) {
      return p ? new(p) ::KVRemoteAvailableRunsFile[nElements] : new ::KVRemoteAvailableRunsFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRemoteAvailableRunsFile(void *p) {
      delete ((::KVRemoteAvailableRunsFile*)p);
   }
   static void deleteArray_KVRemoteAvailableRunsFile(void *p) {
      delete [] ((::KVRemoteAvailableRunsFile*)p);
   }
   static void destruct_KVRemoteAvailableRunsFile(void *p) {
      typedef ::KVRemoteAvailableRunsFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRemoteAvailableRunsFile

//______________________________________________________________________________
void KVDataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataSet(void *p) {
      return  p ? new(p) ::KVDataSet : new ::KVDataSet;
   }
   static void *newArray_KVDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataSet[nElements] : new ::KVDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataSet(void *p) {
      delete ((::KVDataSet*)p);
   }
   static void deleteArray_KVDataSet(void *p) {
      delete [] ((::KVDataSet*)p);
   }
   static void destruct_KVDataSet(void *p) {
      typedef ::KVDataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataSet

//______________________________________________________________________________
void KVDataRepository::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataRepository.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataRepository::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataRepository::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataRepository(void *p) {
      return  p ? new(p) ::KVDataRepository : new ::KVDataRepository;
   }
   static void *newArray_KVDataRepository(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataRepository[nElements] : new ::KVDataRepository[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataRepository(void *p) {
      delete ((::KVDataRepository*)p);
   }
   static void deleteArray_KVDataRepository(void *p) {
      delete [] ((::KVDataRepository*)p);
   }
   static void destruct_KVDataRepository(void *p) {
      typedef ::KVDataRepository current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataRepository

//______________________________________________________________________________
void DMSFile_t::Streamer(TBuffer &R__b)
{
   // Stream an object of class DMSFile_t.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DMSFile_t::Class(),this);
   } else {
      R__b.WriteClassBuffer(DMSFile_t::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DMSFile_t(void *p) {
      return  p ? new(p) ::DMSFile_t : new ::DMSFile_t;
   }
   static void *newArray_DMSFile_t(Long_t nElements, void *p) {
      return p ? new(p) ::DMSFile_t[nElements] : new ::DMSFile_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_DMSFile_t(void *p) {
      delete ((::DMSFile_t*)p);
   }
   static void deleteArray_DMSFile_t(void *p) {
      delete [] ((::DMSFile_t*)p);
   }
   static void destruct_DMSFile_t(void *p) {
      typedef ::DMSFile_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DMSFile_t

//______________________________________________________________________________
void KVDMS::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDMS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDMS::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDMS::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDMS(void *p) {
      delete ((::KVDMS*)p);
   }
   static void deleteArray_KVDMS(void *p) {
      delete [] ((::KVDMS*)p);
   }
   static void destruct_KVDMS(void *p) {
      typedef ::KVDMS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDMS

//______________________________________________________________________________
void KVDMSDataRepository::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDMSDataRepository.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDMSDataRepository::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDMSDataRepository::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDMSDataRepository(void *p) {
      return  p ? new(p) ::KVDMSDataRepository : new ::KVDMSDataRepository;
   }
   static void *newArray_KVDMSDataRepository(Long_t nElements, void *p) {
      return p ? new(p) ::KVDMSDataRepository[nElements] : new ::KVDMSDataRepository[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDMSDataRepository(void *p) {
      delete ((::KVDMSDataRepository*)p);
   }
   static void deleteArray_KVDMSDataRepository(void *p) {
      delete [] ((::KVDMSDataRepository*)p);
   }
   static void destruct_KVDMSDataRepository(void *p) {
      typedef ::KVDMSDataRepository current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDMSDataRepository

//______________________________________________________________________________
void KVRemoteDataRepository::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRemoteDataRepository.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRemoteDataRepository::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRemoteDataRepository::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRemoteDataRepository(void *p) {
      return  p ? new(p) ::KVRemoteDataRepository : new ::KVRemoteDataRepository;
   }
   static void *newArray_KVRemoteDataRepository(Long_t nElements, void *p) {
      return p ? new(p) ::KVRemoteDataRepository[nElements] : new ::KVRemoteDataRepository[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRemoteDataRepository(void *p) {
      delete ((::KVRemoteDataRepository*)p);
   }
   static void deleteArray_KVRemoteDataRepository(void *p) {
      delete [] ((::KVRemoteDataRepository*)p);
   }
   static void destruct_KVRemoteDataRepository(void *p) {
      typedef ::KVRemoteDataRepository current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRemoteDataRepository

//______________________________________________________________________________
void KVRemoteDataSetManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRemoteDataSetManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRemoteDataSetManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRemoteDataSetManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRemoteDataSetManager(void *p) {
      return  p ? new(p) ::KVRemoteDataSetManager : new ::KVRemoteDataSetManager;
   }
   static void *newArray_KVRemoteDataSetManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVRemoteDataSetManager[nElements] : new ::KVRemoteDataSetManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRemoteDataSetManager(void *p) {
      delete ((::KVRemoteDataSetManager*)p);
   }
   static void deleteArray_KVRemoteDataSetManager(void *p) {
      delete [] ((::KVRemoteDataSetManager*)p);
   }
   static void destruct_KVRemoteDataSetManager(void *p) {
      typedef ::KVRemoteDataSetManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRemoteDataSetManager

//______________________________________________________________________________
void KVDataRepositoryManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataRepositoryManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataRepositoryManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataRepositoryManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataRepositoryManager(void *p) {
      return  p ? new(p) ::KVDataRepositoryManager : new ::KVDataRepositoryManager;
   }
   static void *newArray_KVDataRepositoryManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataRepositoryManager[nElements] : new ::KVDataRepositoryManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataRepositoryManager(void *p) {
      delete ((::KVDataRepositoryManager*)p);
   }
   static void deleteArray_KVDataRepositoryManager(void *p) {
      delete [] ((::KVDataRepositoryManager*)p);
   }
   static void destruct_KVDataRepositoryManager(void *p) {
      typedef ::KVDataRepositoryManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataRepositoryManager

//______________________________________________________________________________
void KVDataSetManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataSetManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataSetManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataSetManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataSetManager(void *p) {
      return  p ? new(p) ::KVDataSetManager : new ::KVDataSetManager;
   }
   static void *newArray_KVDataSetManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataSetManager[nElements] : new ::KVDataSetManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataSetManager(void *p) {
      delete ((::KVDataSetManager*)p);
   }
   static void deleteArray_KVDataSetManager(void *p) {
      delete [] ((::KVDataSetManager*)p);
   }
   static void destruct_KVDataSetManager(void *p) {
      typedef ::KVDataSetManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataSetManager

//______________________________________________________________________________
void SRB::Streamer(TBuffer &R__b)
{
   // Stream an object of class SRB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SRB::Class(),this);
   } else {
      R__b.WriteClassBuffer(SRB::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SRB(void *p) {
      return  p ? new(p) ::SRB : new ::SRB;
   }
   static void *newArray_SRB(Long_t nElements, void *p) {
      return p ? new(p) ::SRB[nElements] : new ::SRB[nElements];
   }
   // Wrapper around operator delete
   static void delete_SRB(void *p) {
      delete ((::SRB*)p);
   }
   static void deleteArray_SRB(void *p) {
      delete [] ((::SRB*)p);
   }
   static void destruct_SRB(void *p) {
      typedef ::SRB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SRB

//______________________________________________________________________________
void IRODS::Streamer(TBuffer &R__b)
{
   // Stream an object of class IRODS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IRODS::Class(),this);
   } else {
      R__b.WriteClassBuffer(IRODS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IRODS(void *p) {
      return  p ? new(p) ::IRODS : new ::IRODS;
   }
   static void *newArray_IRODS(Long_t nElements, void *p) {
      return p ? new(p) ::IRODS[nElements] : new ::IRODS[nElements];
   }
   // Wrapper around operator delete
   static void delete_IRODS(void *p) {
      delete ((::IRODS*)p);
   }
   static void deleteArray_IRODS(void *p) {
      delete [] ((::IRODS*)p);
   }
   static void destruct_IRODS(void *p) {
      typedef ::IRODS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IRODS

//______________________________________________________________________________
void IRODSDataRepository::Streamer(TBuffer &R__b)
{
   // Stream an object of class IRODSDataRepository.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IRODSDataRepository::Class(),this);
   } else {
      R__b.WriteClassBuffer(IRODSDataRepository::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IRODSDataRepository(void *p) {
      return  p ? new(p) ::IRODSDataRepository : new ::IRODSDataRepository;
   }
   static void *newArray_IRODSDataRepository(Long_t nElements, void *p) {
      return p ? new(p) ::IRODSDataRepository[nElements] : new ::IRODSDataRepository[nElements];
   }
   // Wrapper around operator delete
   static void delete_IRODSDataRepository(void *p) {
      delete ((::IRODSDataRepository*)p);
   }
   static void deleteArray_IRODSDataRepository(void *p) {
      delete [] ((::IRODSDataRepository*)p);
   }
   static void destruct_IRODSDataRepository(void *p) {
      typedef ::IRODSDataRepository current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IRODSDataRepository

//______________________________________________________________________________
void SRBDataRepository::Streamer(TBuffer &R__b)
{
   // Stream an object of class SRBDataRepository.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SRBDataRepository::Class(),this);
   } else {
      R__b.WriteClassBuffer(SRBDataRepository::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SRBDataRepository(void *p) {
      return  p ? new(p) ::SRBDataRepository : new ::SRBDataRepository;
   }
   static void *newArray_SRBDataRepository(Long_t nElements, void *p) {
      return p ? new(p) ::SRBDataRepository[nElements] : new ::SRBDataRepository[nElements];
   }
   // Wrapper around operator delete
   static void delete_SRBDataRepository(void *p) {
      delete ((::SRBDataRepository*)p);
   }
   static void deleteArray_SRBDataRepository(void *p) {
      delete [] ((::SRBDataRepository*)p);
   }
   static void destruct_SRBDataRepository(void *p) {
      typedef ::SRBDataRepository current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SRBDataRepository

//______________________________________________________________________________
void DMSAvailableRunsFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class DMSAvailableRunsFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DMSAvailableRunsFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(DMSAvailableRunsFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DMSAvailableRunsFile(void *p) {
      return  p ? new(p) ::DMSAvailableRunsFile : new ::DMSAvailableRunsFile;
   }
   static void *newArray_DMSAvailableRunsFile(Long_t nElements, void *p) {
      return p ? new(p) ::DMSAvailableRunsFile[nElements] : new ::DMSAvailableRunsFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_DMSAvailableRunsFile(void *p) {
      delete ((::DMSAvailableRunsFile*)p);
   }
   static void deleteArray_DMSAvailableRunsFile(void *p) {
      delete [] ((::DMSAvailableRunsFile*)p);
   }
   static void destruct_DMSAvailableRunsFile(void *p) {
      typedef ::DMSAvailableRunsFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DMSAvailableRunsFile

//______________________________________________________________________________
void KVSimDir::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimDir.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSimDir::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSimDir::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimDir(void *p) {
      return  p ? new(p) ::KVSimDir : new ::KVSimDir;
   }
   static void *newArray_KVSimDir(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimDir[nElements] : new ::KVSimDir[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimDir(void *p) {
      delete ((::KVSimDir*)p);
   }
   static void deleteArray_KVSimDir(void *p) {
      delete [] ((::KVSimDir*)p);
   }
   static void destruct_KVSimDir(void *p) {
      typedef ::KVSimDir current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSimDir

//______________________________________________________________________________
void KVSimFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSimFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSimFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimFile(void *p) {
      return  p ? new(p) ::KVSimFile : new ::KVSimFile;
   }
   static void *newArray_KVSimFile(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimFile[nElements] : new ::KVSimFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimFile(void *p) {
      delete ((::KVSimFile*)p);
   }
   static void deleteArray_KVSimFile(void *p) {
      delete [] ((::KVSimFile*)p);
   }
   static void destruct_KVSimFile(void *p) {
      typedef ::KVSimFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSimFile

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetdata_management_Impl() {
    static const char* headers[] = {
"KVDataRepository.h",
"KVDataAnalysisTask.h",
"KVDMSDataRepository.h",
"KVDataSet.h",
"SRB.h",
"IRODSDataRepository.h",
"KVDataSetManager.h",
"DMSAvailableRunsFile.h",
"SRBDataRepository.h",
"KVDataRepositoryManager.h",
"KVRemoteAvailableRunsFile.h",
"IRODS.h",
"KVDMS.h",
"KVRemoteDataRepository.h",
"KVRemoteDataSetManager.h",
"KVSimDir.h",
"KVSimFile.h",
"KVAvailableRunsFile.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/data_management/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A data analysis task)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataAnalysisTask.h")))  KVDataAnalysisTask;
class __attribute__((annotate(R"ATTRDUMP(Handles text files containing list of available runs for different datasets and types of data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataRepository.h")))  KVAvailableRunsFile;
class __attribute__((annotate(R"ATTRDUMP(Access to lists of available runfiles in remote data repository via HTTP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRemoteAvailableRunsFile.h")))  KVRemoteAvailableRunsFile;
class __attribute__((annotate(R"ATTRDUMP(Describes a set of experimental data which may be analysed with KaliVeda)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataRepository.h")))  KVDataSet;
class __attribute__((annotate(R"ATTRDUMP(Base class handling files in data repository)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataRepository.h")))  KVDataRepository;
class __attribute__((annotate(R"ATTRDUMP(Attributes of Data Management Service file/container)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$SRB.h")))  DMSFile_t;
class __attribute__((annotate(R"ATTRDUMP(Interface to Data Management Service (SRB, IRODS, etc.))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$SRB.h")))  KVDMS;
class __attribute__((annotate(R"ATTRDUMP(Remote data repository using Data Management Systems)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDMSDataRepository.h")))  KVDMSDataRepository;
class __attribute__((annotate(R"ATTRDUMP(Class handling data repositories on distant machines)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRemoteDataRepository.h")))  KVRemoteDataRepository;
class __attribute__((annotate(R"ATTRDUMP(Handles data sets in remote data repository)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRemoteDataSetManager.h")))  KVRemoteDataSetManager;
class __attribute__((annotate(R"ATTRDUMP(Handles available data repositories)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataRepositoryManager.h")))  KVDataRepositoryManager;
class __attribute__((annotate(R"ATTRDUMP(Handles datasets in a data repository)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataSetManager.h")))  KVDataSetManager;
class __attribute__((annotate(R"ATTRDUMP(Interface to SRB commands)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$SRB.h")))  SRB;
class __attribute__((annotate(R"ATTRDUMP(Interface to IRODS commands)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$IRODS.h")))  IRODS;
class __attribute__((annotate(R"ATTRDUMP(Remote data repository using IRODS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$IRODSDataRepository.h")))  IRODSDataRepository;
class __attribute__((annotate(R"ATTRDUMP(Remote data repository using SRB)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$SRBDataRepository.h")))  SRBDataRepository;
class __attribute__((annotate(R"ATTRDUMP(Handles list of available runs using Data Management Systems)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DMSAvailableRunsFile.h")))  DMSAvailableRunsFile;
class __attribute__((annotate(R"ATTRDUMP(Handle directory containing simulated and/or filtered simulated data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimDir.h")))  KVSimDir;
class __attribute__((annotate(R"ATTRDUMP(Handle file containing simulated or filtered simulated data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimFile.h")))  KVSimFile;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVDataRepository.h"
#include "KVDataAnalysisTask.h"
#include "KVDMSDataRepository.h"
#include "KVDataSet.h"
#include "SRB.h"
#include "IRODSDataRepository.h"
#include "KVDataSetManager.h"
#include "DMSAvailableRunsFile.h"
#include "SRBDataRepository.h"
#include "KVDataRepositoryManager.h"
#include "KVRemoteAvailableRunsFile.h"
#include "IRODS.h"
#include "KVDMS.h"
#include "KVRemoteDataRepository.h"
#include "KVRemoteDataSetManager.h"
#include "KVSimDir.h"
#include "KVSimFile.h"
#include "KVAvailableRunsFile.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"DMSAvailableRunsFile", payloadCode, "@",
"DMSFile_t", payloadCode, "@",
"IRODS", payloadCode, "@",
"IRODSDataRepository", payloadCode, "@",
"KVAvailableRunsFile", payloadCode, "@",
"KVDMS", payloadCode, "@",
"KVDMSDataRepository", payloadCode, "@",
"KVDataAnalysisTask", payloadCode, "@",
"KVDataRepository", payloadCode, "@",
"KVDataRepositoryManager", payloadCode, "@",
"KVDataSet", payloadCode, "@",
"KVDataSetManager", payloadCode, "@",
"KVRemoteAvailableRunsFile", payloadCode, "@",
"KVRemoteDataRepository", payloadCode, "@",
"KVRemoteDataSetManager", payloadCode, "@",
"KVSimDir", payloadCode, "@",
"KVSimFile", payloadCode, "@",
"SRB", payloadCode, "@",
"SRBDataRepository", payloadCode, "@",
"gDataRepository", payloadCode, "@",
"gDataRepositoryManager", payloadCode, "@",
"gDataSet", payloadCode, "@",
"gDataSetManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetdata_management",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetdata_management_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetdata_management_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetdata_management() {
  TriggerDictionaryInitialization_libKVMultiDetdata_management_Impl();
}
