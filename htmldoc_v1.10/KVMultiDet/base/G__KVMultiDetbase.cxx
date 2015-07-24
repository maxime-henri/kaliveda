// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetbase

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
#include "KVRungeKutta.h"
#include "KVDatime.h"
#include "KVPartition.h"
#include "KVNamedParameter.h"
#include "KVCouple.h"
#include "KVSystemDirectory.h"
#include "KVPartitionList.h"
#include "KVRList.h"
#include "KVDatedFileManager.h"
#include "KVClassMonitor.h"
#include "KVCVSUpdateChecker.h"
#include "KVBase.h"
#include "KVBQSLogReader.h"
#include "KVTarArchive.h"
#include "KVGELogReader.h"
#include "KVHistogram.h"
#include "KVMemoryChunk.h"
#include "KVLockfile.h"
#include "KVPartitionFunction.h"
#include "Hexa_t.h"
#include "KVValues.h"
#include "KVNameValueList.h"
#include "KVHistoManipulator.h"
#include "KVPosition.h"
#include "KVUnits.h"
#include "KVString.h"
#include "KVSeqCollection.h"
#include "Binary_t.h"
#include "KVColouredBase.h"
#include "KVUniqueNameList.h"
#include "KVUpdateChecker.h"
#include "KVDataBranchHandler.h"
#include "KVEnv.h"
#include "KVNumberList.h"
#include "KVIntegerList.h"
#include "KVEventListMaker.h"
#include "KVList.h"
#include "KVSystemFile.h"
#include "KVHashList.h"
#include "KVLogReader.h"
#include "KVFileReader.h"
#include "KVPartitionFromLeaf.h"
#include "KVMemoryPool.h"
#include "KVClassFactory.h"
#include "KVPartitionGenerator.h"

// Header files passed via #pragma extra_include
#include "Rtypes.h"

namespace KVUnits {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *KVUnits_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("KVUnits", 0 /*version*/, "KVUnits.h", 6,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &KVUnits_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *KVUnits_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *Binary_tlEunsignedsPchargR_Dictionary();
   static void Binary_tlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_Binary_tlEunsignedsPchargR(void *p = 0);
   static void *newArray_Binary_tlEunsignedsPchargR(Long_t size, void *p);
   static void delete_Binary_tlEunsignedsPchargR(void *p);
   static void deleteArray_Binary_tlEunsignedsPchargR(void *p);
   static void destruct_Binary_tlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Binary_t<unsigned char>*)
   {
      ::Binary_t<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Binary_t<unsigned char> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Binary_t<unsigned char>", ::Binary_t<unsigned char>::Class_Version(), "Binary_t.h", 12,
                  typeid(::Binary_t<unsigned char>), DefineBehavior(ptr, ptr),
                  &Binary_tlEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(::Binary_t<unsigned char>) );
      instance.SetNew(&new_Binary_tlEunsignedsPchargR);
      instance.SetNewArray(&newArray_Binary_tlEunsignedsPchargR);
      instance.SetDelete(&delete_Binary_tlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_Binary_tlEunsignedsPchargR);
      instance.SetDestructor(&destruct_Binary_tlEunsignedsPchargR);

      ::ROOT::AddClassAlternate("Binary_t<unsigned char>","Binary_t<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Binary_t<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::Binary_t<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Binary_tlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0)->GetClass();
      Binary_tlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void Binary_tlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Binary_tlEunsignedsPshortgR_Dictionary();
   static void Binary_tlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_Binary_tlEunsignedsPshortgR(void *p = 0);
   static void *newArray_Binary_tlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_Binary_tlEunsignedsPshortgR(void *p);
   static void deleteArray_Binary_tlEunsignedsPshortgR(void *p);
   static void destruct_Binary_tlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Binary_t<unsigned short>*)
   {
      ::Binary_t<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Binary_t<unsigned short> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Binary_t<unsigned short>", ::Binary_t<unsigned short>::Class_Version(), "Binary_t.h", 12,
                  typeid(::Binary_t<unsigned short>), DefineBehavior(ptr, ptr),
                  &Binary_tlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::Binary_t<unsigned short>) );
      instance.SetNew(&new_Binary_tlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_Binary_tlEunsignedsPshortgR);
      instance.SetDelete(&delete_Binary_tlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_Binary_tlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_Binary_tlEunsignedsPshortgR);

      ::ROOT::AddClassAlternate("Binary_t<unsigned short>","Binary_t<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Binary_t<unsigned short>*)
   {
      return GenerateInitInstanceLocal((::Binary_t<unsigned short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Binary_tlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0)->GetClass();
      Binary_tlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void Binary_tlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Binary_tlEunsignedsPintgR_Dictionary();
   static void Binary_tlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_Binary_tlEunsignedsPintgR(void *p = 0);
   static void *newArray_Binary_tlEunsignedsPintgR(Long_t size, void *p);
   static void delete_Binary_tlEunsignedsPintgR(void *p);
   static void deleteArray_Binary_tlEunsignedsPintgR(void *p);
   static void destruct_Binary_tlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Binary_t<unsigned int>*)
   {
      ::Binary_t<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Binary_t<unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Binary_t<unsigned int>", ::Binary_t<unsigned int>::Class_Version(), "Binary_t.h", 12,
                  typeid(::Binary_t<unsigned int>), DefineBehavior(ptr, ptr),
                  &Binary_tlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::Binary_t<unsigned int>) );
      instance.SetNew(&new_Binary_tlEunsignedsPintgR);
      instance.SetNewArray(&newArray_Binary_tlEunsignedsPintgR);
      instance.SetDelete(&delete_Binary_tlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_Binary_tlEunsignedsPintgR);
      instance.SetDestructor(&destruct_Binary_tlEunsignedsPintgR);

      ::ROOT::AddClassAlternate("Binary_t<unsigned int>","Binary_t<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Binary_t<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::Binary_t<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Binary_tlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0)->GetClass();
      Binary_tlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void Binary_tlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Binary_tlELong64_tgR_Dictionary();
   static void Binary_tlELong64_tgR_TClassManip(TClass*);
   static void *new_Binary_tlELong64_tgR(void *p = 0);
   static void *newArray_Binary_tlELong64_tgR(Long_t size, void *p);
   static void delete_Binary_tlELong64_tgR(void *p);
   static void deleteArray_Binary_tlELong64_tgR(void *p);
   static void destruct_Binary_tlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Binary_t<Long64_t>*)
   {
      ::Binary_t<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Binary_t<Long64_t> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Binary_t<Long64_t>", ::Binary_t<Long64_t>::Class_Version(), "Binary_t.h", 12,
                  typeid(::Binary_t<Long64_t>), DefineBehavior(ptr, ptr),
                  &Binary_tlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::Binary_t<Long64_t>) );
      instance.SetNew(&new_Binary_tlELong64_tgR);
      instance.SetNewArray(&newArray_Binary_tlELong64_tgR);
      instance.SetDelete(&delete_Binary_tlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_Binary_tlELong64_tgR);
      instance.SetDestructor(&destruct_Binary_tlELong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Binary_t<Long64_t>*)
   {
      return GenerateInitInstanceLocal((::Binary_t<Long64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Binary_tlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0)->GetClass();
      Binary_tlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void Binary_tlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_KVString(void *p = 0);
   static void *newArray_KVString(Long_t size, void *p);
   static void delete_KVString(void *p);
   static void deleteArray_KVString(void *p);
   static void destruct_KVString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVString*)
   {
      ::KVString *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVString >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVString", ::KVString::Class_Version(), "KVString.h", 24,
                  typeid(::KVString), DefineBehavior(ptr, ptr),
                  &::KVString::Dictionary, isa_proxy, 4,
                  sizeof(::KVString) );
      instance.SetNew(&new_KVString);
      instance.SetNewArray(&newArray_KVString);
      instance.SetDelete(&delete_KVString);
      instance.SetDeleteArray(&deleteArray_KVString);
      instance.SetDestructor(&destruct_KVString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVString*)
   {
      return GenerateInitInstanceLocal((::KVString*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVString*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVRungeKutta(void *p);
   static void deleteArray_KVRungeKutta(void *p);
   static void destruct_KVRungeKutta(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRungeKutta*)
   {
      ::KVRungeKutta *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRungeKutta >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRungeKutta", ::KVRungeKutta::Class_Version(), "KVRungeKutta.h", 18,
                  typeid(::KVRungeKutta), DefineBehavior(ptr, ptr),
                  &::KVRungeKutta::Dictionary, isa_proxy, 4,
                  sizeof(::KVRungeKutta) );
      instance.SetDelete(&delete_KVRungeKutta);
      instance.SetDeleteArray(&deleteArray_KVRungeKutta);
      instance.SetDestructor(&destruct_KVRungeKutta);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRungeKutta*)
   {
      return GenerateInitInstanceLocal((::KVRungeKutta*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRungeKutta*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Hexa_t(void *p = 0);
   static void *newArray_Hexa_t(Long_t size, void *p);
   static void delete_Hexa_t(void *p);
   static void deleteArray_Hexa_t(void *p);
   static void destruct_Hexa_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hexa_t*)
   {
      ::Hexa_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Hexa_t >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Hexa_t", ::Hexa_t::Class_Version(), "Hexa_t.h", 10,
                  typeid(::Hexa_t), DefineBehavior(ptr, ptr),
                  &::Hexa_t::Dictionary, isa_proxy, 4,
                  sizeof(::Hexa_t) );
      instance.SetNew(&new_Hexa_t);
      instance.SetNewArray(&newArray_Hexa_t);
      instance.SetDelete(&delete_Hexa_t);
      instance.SetDeleteArray(&deleteArray_Hexa_t);
      instance.SetDestructor(&destruct_Hexa_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hexa_t*)
   {
      return GenerateInitInstanceLocal((::Hexa_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Hexa_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNameValueList(void *p = 0);
   static void *newArray_KVNameValueList(Long_t size, void *p);
   static void delete_KVNameValueList(void *p);
   static void deleteArray_KVNameValueList(void *p);
   static void destruct_KVNameValueList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNameValueList*)
   {
      ::KVNameValueList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNameValueList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNameValueList", ::KVNameValueList::Class_Version(), "KVNameValueList.h", 13,
                  typeid(::KVNameValueList), DefineBehavior(ptr, ptr),
                  &::KVNameValueList::Dictionary, isa_proxy, 4,
                  sizeof(::KVNameValueList) );
      instance.SetNew(&new_KVNameValueList);
      instance.SetNewArray(&newArray_KVNameValueList);
      instance.SetDelete(&delete_KVNameValueList);
      instance.SetDeleteArray(&deleteArray_KVNameValueList);
      instance.SetDestructor(&destruct_KVNameValueList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNameValueList*)
   {
      return GenerateInitInstanceLocal((::KVNameValueList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNameValueList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBase(void *p = 0);
   static void *newArray_KVBase(Long_t size, void *p);
   static void delete_KVBase(void *p);
   static void deleteArray_KVBase(void *p);
   static void destruct_KVBase(void *p);
   static void streamer_KVBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBase*)
   {
      ::KVBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBase", ::KVBase::Class_Version(), "KVBase.h", 26,
                  typeid(::KVBase), DefineBehavior(ptr, ptr),
                  &::KVBase::Dictionary, isa_proxy, 17,
                  sizeof(::KVBase) );
      instance.SetNew(&new_KVBase);
      instance.SetNewArray(&newArray_KVBase);
      instance.SetDelete(&delete_KVBase);
      instance.SetDeleteArray(&deleteArray_KVBase);
      instance.SetDestructor(&destruct_KVBase);
      instance.SetStreamerFunc(&streamer_KVBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBase*)
   {
      return GenerateInitInstanceLocal((::KVBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVColouredBase(void *p = 0);
   static void *newArray_KVColouredBase(Long_t size, void *p);
   static void delete_KVColouredBase(void *p);
   static void deleteArray_KVColouredBase(void *p);
   static void destruct_KVColouredBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVColouredBase*)
   {
      ::KVColouredBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVColouredBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVColouredBase", ::KVColouredBase::Class_Version(), "KVColouredBase.h", 9,
                  typeid(::KVColouredBase), DefineBehavior(ptr, ptr),
                  &::KVColouredBase::Dictionary, isa_proxy, 4,
                  sizeof(::KVColouredBase) );
      instance.SetNew(&new_KVColouredBase);
      instance.SetNewArray(&newArray_KVColouredBase);
      instance.SetDelete(&delete_KVColouredBase);
      instance.SetDeleteArray(&deleteArray_KVColouredBase);
      instance.SetDestructor(&destruct_KVColouredBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVColouredBase*)
   {
      return GenerateInitInstanceLocal((::KVColouredBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVColouredBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVClassFactory(void *p = 0);
   static void *newArray_KVClassFactory(Long_t size, void *p);
   static void delete_KVClassFactory(void *p);
   static void deleteArray_KVClassFactory(void *p);
   static void destruct_KVClassFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVClassFactory*)
   {
      ::KVClassFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVClassFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVClassFactory", ::KVClassFactory::Class_Version(), "KVClassFactory.h", 150,
                  typeid(::KVClassFactory), DefineBehavior(ptr, ptr),
                  &::KVClassFactory::Dictionary, isa_proxy, 4,
                  sizeof(::KVClassFactory) );
      instance.SetNew(&new_KVClassFactory);
      instance.SetNewArray(&newArray_KVClassFactory);
      instance.SetDelete(&delete_KVClassFactory);
      instance.SetDeleteArray(&deleteArray_KVClassFactory);
      instance.SetDestructor(&destruct_KVClassFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVClassFactory*)
   {
      return GenerateInitInstanceLocal((::KVClassFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVClassFactory*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVClassMethod(void *p = 0);
   static void *newArray_KVClassMethod(Long_t size, void *p);
   static void delete_KVClassMethod(void *p);
   static void deleteArray_KVClassMethod(void *p);
   static void destruct_KVClassMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVClassMethod*)
   {
      ::KVClassMethod *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVClassMethod >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVClassMethod", ::KVClassMethod::Class_Version(), "KVClassFactory.h", 51,
                  typeid(::KVClassMethod), DefineBehavior(ptr, ptr),
                  &::KVClassMethod::Dictionary, isa_proxy, 4,
                  sizeof(::KVClassMethod) );
      instance.SetNew(&new_KVClassMethod);
      instance.SetNewArray(&newArray_KVClassMethod);
      instance.SetDelete(&delete_KVClassMethod);
      instance.SetDeleteArray(&deleteArray_KVClassMethod);
      instance.SetDestructor(&destruct_KVClassMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVClassMethod*)
   {
      return GenerateInitInstanceLocal((::KVClassMethod*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVClassMethod*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVClassMember(void *p = 0);
   static void *newArray_KVClassMember(Long_t size, void *p);
   static void delete_KVClassMember(void *p);
   static void deleteArray_KVClassMember(void *p);
   static void destruct_KVClassMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVClassMember*)
   {
      ::KVClassMember *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVClassMember >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVClassMember", ::KVClassMember::Class_Version(), "KVClassFactory.h", 18,
                  typeid(::KVClassMember), DefineBehavior(ptr, ptr),
                  &::KVClassMember::Dictionary, isa_proxy, 4,
                  sizeof(::KVClassMember) );
      instance.SetNew(&new_KVClassMember);
      instance.SetNewArray(&newArray_KVClassMember);
      instance.SetDelete(&delete_KVClassMember);
      instance.SetDeleteArray(&deleteArray_KVClassMember);
      instance.SetDestructor(&destruct_KVClassMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVClassMember*)
   {
      return GenerateInitInstanceLocal((::KVClassMember*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVClassMember*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVClassMonitor(void *p = 0);
   static void *newArray_KVClassMonitor(Long_t size, void *p);
   static void delete_KVClassMonitor(void *p);
   static void deleteArray_KVClassMonitor(void *p);
   static void destruct_KVClassMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVClassMonitor*)
   {
      ::KVClassMonitor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVClassMonitor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVClassMonitor", ::KVClassMonitor::Class_Version(), "KVClassMonitor.h", 10,
                  typeid(::KVClassMonitor), DefineBehavior(ptr, ptr),
                  &::KVClassMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::KVClassMonitor) );
      instance.SetNew(&new_KVClassMonitor);
      instance.SetNewArray(&newArray_KVClassMonitor);
      instance.SetDelete(&delete_KVClassMonitor);
      instance.SetDeleteArray(&deleteArray_KVClassMonitor);
      instance.SetDestructor(&destruct_KVClassMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVClassMonitor*)
   {
      return GenerateInitInstanceLocal((::KVClassMonitor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVClassMonitor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSeqCollection(void *p = 0);
   static void *newArray_KVSeqCollection(Long_t size, void *p);
   static void delete_KVSeqCollection(void *p);
   static void deleteArray_KVSeqCollection(void *p);
   static void destruct_KVSeqCollection(void *p);
   static void streamer_KVSeqCollection(TBuffer &buf, void *obj);
   static Long64_t merge_KVSeqCollection(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSeqCollection*)
   {
      ::KVSeqCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSeqCollection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSeqCollection", ::KVSeqCollection::Class_Version(), "KVSeqCollection.h", 12,
                  typeid(::KVSeqCollection), DefineBehavior(ptr, ptr),
                  &::KVSeqCollection::Dictionary, isa_proxy, 17,
                  sizeof(::KVSeqCollection) );
      instance.SetNew(&new_KVSeqCollection);
      instance.SetNewArray(&newArray_KVSeqCollection);
      instance.SetDelete(&delete_KVSeqCollection);
      instance.SetDeleteArray(&deleteArray_KVSeqCollection);
      instance.SetDestructor(&destruct_KVSeqCollection);
      instance.SetStreamerFunc(&streamer_KVSeqCollection);
      instance.SetMerge(&merge_KVSeqCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSeqCollection*)
   {
      return GenerateInitInstanceLocal((::KVSeqCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSeqCollection*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataBranchHandler(void *p);
   static void deleteArray_KVDataBranchHandler(void *p);
   static void destruct_KVDataBranchHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataBranchHandler*)
   {
      ::KVDataBranchHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataBranchHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataBranchHandler", ::KVDataBranchHandler::Class_Version(), "KVDataBranchHandler.h", 11,
                  typeid(::KVDataBranchHandler), DefineBehavior(ptr, ptr),
                  &::KVDataBranchHandler::Dictionary, isa_proxy, 4,
                  sizeof(::KVDataBranchHandler) );
      instance.SetDelete(&delete_KVDataBranchHandler);
      instance.SetDeleteArray(&deleteArray_KVDataBranchHandler);
      instance.SetDestructor(&destruct_KVDataBranchHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataBranchHandler*)
   {
      return GenerateInitInstanceLocal((::KVDataBranchHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataBranchHandler*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDatime(void *p = 0);
   static void *newArray_KVDatime(Long_t size, void *p);
   static void delete_KVDatime(void *p);
   static void deleteArray_KVDatime(void *p);
   static void destruct_KVDatime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDatime*)
   {
      ::KVDatime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDatime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDatime", ::KVDatime::Class_Version(), "KVDatime.h", 16,
                  typeid(::KVDatime), DefineBehavior(ptr, ptr),
                  &::KVDatime::Dictionary, isa_proxy, 4,
                  sizeof(::KVDatime) );
      instance.SetNew(&new_KVDatime);
      instance.SetNewArray(&newArray_KVDatime);
      instance.SetDelete(&delete_KVDatime);
      instance.SetDeleteArray(&deleteArray_KVDatime);
      instance.SetDestructor(&destruct_KVDatime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDatime*)
   {
      return GenerateInitInstanceLocal((::KVDatime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDatime*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDatedFileManager(void *p = 0);
   static void *newArray_KVDatedFileManager(Long_t size, void *p);
   static void delete_KVDatedFileManager(void *p);
   static void deleteArray_KVDatedFileManager(void *p);
   static void destruct_KVDatedFileManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDatedFileManager*)
   {
      ::KVDatedFileManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDatedFileManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDatedFileManager", ::KVDatedFileManager::Class_Version(), "KVDatedFileManager.h", 36,
                  typeid(::KVDatedFileManager), DefineBehavior(ptr, ptr),
                  &::KVDatedFileManager::Dictionary, isa_proxy, 4,
                  sizeof(::KVDatedFileManager) );
      instance.SetNew(&new_KVDatedFileManager);
      instance.SetNewArray(&newArray_KVDatedFileManager);
      instance.SetDelete(&delete_KVDatedFileManager);
      instance.SetDeleteArray(&deleteArray_KVDatedFileManager);
      instance.SetDestructor(&destruct_KVDatedFileManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDatedFileManager*)
   {
      return GenerateInitInstanceLocal((::KVDatedFileManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDatedFileManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVHashList(void *p = 0);
   static void *newArray_KVHashList(Long_t size, void *p);
   static void delete_KVHashList(void *p);
   static void deleteArray_KVHashList(void *p);
   static void destruct_KVHashList(void *p);
   static Long64_t merge_KVHashList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVHashList*)
   {
      ::KVHashList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVHashList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVHashList", ::KVHashList::Class_Version(), "KVHashList.h", 10,
                  typeid(::KVHashList), DefineBehavior(ptr, ptr),
                  &::KVHashList::Dictionary, isa_proxy, 4,
                  sizeof(::KVHashList) );
      instance.SetNew(&new_KVHashList);
      instance.SetNewArray(&newArray_KVHashList);
      instance.SetDelete(&delete_KVHashList);
      instance.SetDeleteArray(&deleteArray_KVHashList);
      instance.SetDestructor(&destruct_KVHashList);
      instance.SetMerge(&merge_KVHashList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVHashList*)
   {
      return GenerateInitInstanceLocal((::KVHashList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVHashList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVUniqueNameList(void *p = 0);
   static void *newArray_KVUniqueNameList(Long_t size, void *p);
   static void delete_KVUniqueNameList(void *p);
   static void deleteArray_KVUniqueNameList(void *p);
   static void destruct_KVUniqueNameList(void *p);
   static Long64_t merge_KVUniqueNameList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVUniqueNameList*)
   {
      ::KVUniqueNameList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVUniqueNameList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVUniqueNameList", ::KVUniqueNameList::Class_Version(), "KVUniqueNameList.h", 9,
                  typeid(::KVUniqueNameList), DefineBehavior(ptr, ptr),
                  &::KVUniqueNameList::Dictionary, isa_proxy, 4,
                  sizeof(::KVUniqueNameList) );
      instance.SetNew(&new_KVUniqueNameList);
      instance.SetNewArray(&newArray_KVUniqueNameList);
      instance.SetDelete(&delete_KVUniqueNameList);
      instance.SetDeleteArray(&deleteArray_KVUniqueNameList);
      instance.SetDestructor(&destruct_KVUniqueNameList);
      instance.SetMerge(&merge_KVUniqueNameList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVUniqueNameList*)
   {
      return GenerateInitInstanceLocal((::KVUniqueNameList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVUniqueNameList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVList(void *p = 0);
   static void *newArray_KVList(Long_t size, void *p);
   static void delete_KVList(void *p);
   static void deleteArray_KVList(void *p);
   static void destruct_KVList(void *p);
   static void streamer_KVList(TBuffer &buf, void *obj);
   static Long64_t merge_KVList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVList*)
   {
      ::KVList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVList", ::KVList::Class_Version(), "KVList.h", 7,
                  typeid(::KVList), DefineBehavior(ptr, ptr),
                  &::KVList::Dictionary, isa_proxy, 17,
                  sizeof(::KVList) );
      instance.SetNew(&new_KVList);
      instance.SetNewArray(&newArray_KVList);
      instance.SetDelete(&delete_KVList);
      instance.SetDeleteArray(&deleteArray_KVList);
      instance.SetDestructor(&destruct_KVList);
      instance.SetStreamerFunc(&streamer_KVList);
      instance.SetMerge(&merge_KVList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVList*)
   {
      return GenerateInitInstanceLocal((::KVList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLockfile(void *p = 0);
   static void *newArray_KVLockfile(Long_t size, void *p);
   static void delete_KVLockfile(void *p);
   static void deleteArray_KVLockfile(void *p);
   static void destruct_KVLockfile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLockfile*)
   {
      ::KVLockfile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLockfile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLockfile", ::KVLockfile::Class_Version(), "KVLockfile.h", 15,
                  typeid(::KVLockfile), DefineBehavior(ptr, ptr),
                  &::KVLockfile::Dictionary, isa_proxy, 4,
                  sizeof(::KVLockfile) );
      instance.SetNew(&new_KVLockfile);
      instance.SetNewArray(&newArray_KVLockfile);
      instance.SetDelete(&delete_KVLockfile);
      instance.SetDeleteArray(&deleteArray_KVLockfile);
      instance.SetDestructor(&destruct_KVLockfile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLockfile*)
   {
      return GenerateInitInstanceLocal((::KVLockfile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLockfile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNamedParameter(void *p = 0);
   static void *newArray_KVNamedParameter(Long_t size, void *p);
   static void delete_KVNamedParameter(void *p);
   static void deleteArray_KVNamedParameter(void *p);
   static void destruct_KVNamedParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNamedParameter*)
   {
      ::KVNamedParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNamedParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNamedParameter", ::KVNamedParameter::Class_Version(), "KVNamedParameter.h", 9,
                  typeid(::KVNamedParameter), DefineBehavior(ptr, ptr),
                  &::KVNamedParameter::Dictionary, isa_proxy, 4,
                  sizeof(::KVNamedParameter) );
      instance.SetNew(&new_KVNamedParameter);
      instance.SetNewArray(&newArray_KVNamedParameter);
      instance.SetDelete(&delete_KVNamedParameter);
      instance.SetDeleteArray(&deleteArray_KVNamedParameter);
      instance.SetDestructor(&destruct_KVNamedParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNamedParameter*)
   {
      return GenerateInitInstanceLocal((::KVNamedParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNamedParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVLogReader(void *p);
   static void deleteArray_KVLogReader(void *p);
   static void destruct_KVLogReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLogReader*)
   {
      ::KVLogReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLogReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLogReader", ::KVLogReader::Class_Version(), "KVLogReader.h", 10,
                  typeid(::KVLogReader), DefineBehavior(ptr, ptr),
                  &::KVLogReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVLogReader) );
      instance.SetDelete(&delete_KVLogReader);
      instance.SetDeleteArray(&deleteArray_KVLogReader);
      instance.SetDestructor(&destruct_KVLogReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLogReader*)
   {
      return GenerateInitInstanceLocal((::KVLogReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLogReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBQSLogReader(void *p = 0);
   static void *newArray_KVBQSLogReader(Long_t size, void *p);
   static void delete_KVBQSLogReader(void *p);
   static void deleteArray_KVBQSLogReader(void *p);
   static void destruct_KVBQSLogReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBQSLogReader*)
   {
      ::KVBQSLogReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBQSLogReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBQSLogReader", ::KVBQSLogReader::Class_Version(), "KVBQSLogReader.h", 9,
                  typeid(::KVBQSLogReader), DefineBehavior(ptr, ptr),
                  &::KVBQSLogReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVBQSLogReader) );
      instance.SetNew(&new_KVBQSLogReader);
      instance.SetNewArray(&newArray_KVBQSLogReader);
      instance.SetDelete(&delete_KVBQSLogReader);
      instance.SetDeleteArray(&deleteArray_KVBQSLogReader);
      instance.SetDestructor(&destruct_KVBQSLogReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBQSLogReader*)
   {
      return GenerateInitInstanceLocal((::KVBQSLogReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBQSLogReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVGELogReader(void *p = 0);
   static void *newArray_KVGELogReader(Long_t size, void *p);
   static void delete_KVGELogReader(void *p);
   static void deleteArray_KVGELogReader(void *p);
   static void destruct_KVGELogReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGELogReader*)
   {
      ::KVGELogReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGELogReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGELogReader", ::KVGELogReader::Class_Version(), "KVGELogReader.h", 9,
                  typeid(::KVGELogReader), DefineBehavior(ptr, ptr),
                  &::KVGELogReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVGELogReader) );
      instance.SetNew(&new_KVGELogReader);
      instance.SetNewArray(&newArray_KVGELogReader);
      instance.SetDelete(&delete_KVGELogReader);
      instance.SetDeleteArray(&deleteArray_KVGELogReader);
      instance.SetDestructor(&destruct_KVGELogReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGELogReader*)
   {
      return GenerateInitInstanceLocal((::KVGELogReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGELogReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVMemoryChunk(void *p = 0);
   static void *newArray_KVMemoryChunk(Long_t size, void *p);
   static void delete_KVMemoryChunk(void *p);
   static void deleteArray_KVMemoryChunk(void *p);
   static void destruct_KVMemoryChunk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMemoryChunk*)
   {
      ::KVMemoryChunk *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMemoryChunk >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMemoryChunk", ::KVMemoryChunk::Class_Version(), "KVMemoryChunk.h", 9,
                  typeid(::KVMemoryChunk), DefineBehavior(ptr, ptr),
                  &::KVMemoryChunk::Dictionary, isa_proxy, 4,
                  sizeof(::KVMemoryChunk) );
      instance.SetNew(&new_KVMemoryChunk);
      instance.SetNewArray(&newArray_KVMemoryChunk);
      instance.SetDelete(&delete_KVMemoryChunk);
      instance.SetDeleteArray(&deleteArray_KVMemoryChunk);
      instance.SetDestructor(&destruct_KVMemoryChunk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMemoryChunk*)
   {
      return GenerateInitInstanceLocal((::KVMemoryChunk*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMemoryChunk*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVMemoryPool(void *p);
   static void deleteArray_KVMemoryPool(void *p);
   static void destruct_KVMemoryPool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMemoryPool*)
   {
      ::KVMemoryPool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMemoryPool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMemoryPool", ::KVMemoryPool::Class_Version(), "KVMemoryPool.h", 9,
                  typeid(::KVMemoryPool), DefineBehavior(ptr, ptr),
                  &::KVMemoryPool::Dictionary, isa_proxy, 4,
                  sizeof(::KVMemoryPool) );
      instance.SetDelete(&delete_KVMemoryPool);
      instance.SetDeleteArray(&deleteArray_KVMemoryPool);
      instance.SetDestructor(&destruct_KVMemoryPool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMemoryPool*)
   {
      return GenerateInitInstanceLocal((::KVMemoryPool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMemoryPool*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNumberList(void *p = 0);
   static void *newArray_KVNumberList(Long_t size, void *p);
   static void delete_KVNumberList(void *p);
   static void deleteArray_KVNumberList(void *p);
   static void destruct_KVNumberList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNumberList*)
   {
      ::KVNumberList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNumberList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNumberList", ::KVNumberList::Class_Version(), "KVNumberList.h", 15,
                  typeid(::KVNumberList), DefineBehavior(ptr, ptr),
                  &::KVNumberList::Dictionary, isa_proxy, 4,
                  sizeof(::KVNumberList) );
      instance.SetNew(&new_KVNumberList);
      instance.SetNewArray(&newArray_KVNumberList);
      instance.SetDelete(&delete_KVNumberList);
      instance.SetDeleteArray(&deleteArray_KVNumberList);
      instance.SetDestructor(&destruct_KVNumberList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNumberList*)
   {
      return GenerateInitInstanceLocal((::KVNumberList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNumberList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFileReader(void *p = 0);
   static void *newArray_KVFileReader(Long_t size, void *p);
   static void delete_KVFileReader(void *p);
   static void deleteArray_KVFileReader(void *p);
   static void destruct_KVFileReader(void *p);
   static void streamer_KVFileReader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFileReader*)
   {
      ::KVFileReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFileReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFileReader", ::KVFileReader::Class_Version(), "KVFileReader.h", 14,
                  typeid(::KVFileReader), DefineBehavior(ptr, ptr),
                  &::KVFileReader::Dictionary, isa_proxy, 16,
                  sizeof(::KVFileReader) );
      instance.SetNew(&new_KVFileReader);
      instance.SetNewArray(&newArray_KVFileReader);
      instance.SetDelete(&delete_KVFileReader);
      instance.SetDeleteArray(&deleteArray_KVFileReader);
      instance.SetDestructor(&destruct_KVFileReader);
      instance.SetStreamerFunc(&streamer_KVFileReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFileReader*)
   {
      return GenerateInitInstanceLocal((::KVFileReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFileReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVValues(void *p = 0);
   static void *newArray_KVValues(Long_t size, void *p);
   static void delete_KVValues(void *p);
   static void deleteArray_KVValues(void *p);
   static void destruct_KVValues(void *p);
   static void streamer_KVValues(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVValues*)
   {
      ::KVValues *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVValues >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVValues", ::KVValues::Class_Version(), "KVValues.h", 18,
                  typeid(::KVValues), DefineBehavior(ptr, ptr),
                  &::KVValues::Dictionary, isa_proxy, 16,
                  sizeof(::KVValues) );
      instance.SetNew(&new_KVValues);
      instance.SetNewArray(&newArray_KVValues);
      instance.SetDelete(&delete_KVValues);
      instance.SetDeleteArray(&deleteArray_KVValues);
      instance.SetDestructor(&destruct_KVValues);
      instance.SetStreamerFunc(&streamer_KVValues);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVValues*)
   {
      return GenerateInitInstanceLocal((::KVValues*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVValues*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRList(void *p = 0);
   static void *newArray_KVRList(Long_t size, void *p);
   static void delete_KVRList(void *p);
   static void deleteArray_KVRList(void *p);
   static void destruct_KVRList(void *p);
   static Long64_t merge_KVRList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRList*)
   {
      ::KVRList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRList", ::KVRList::Class_Version(), "KVRList.h", 31,
                  typeid(::KVRList), DefineBehavior(ptr, ptr),
                  &::KVRList::Dictionary, isa_proxy, 4,
                  sizeof(::KVRList) );
      instance.SetNew(&new_KVRList);
      instance.SetNewArray(&newArray_KVRList);
      instance.SetDelete(&delete_KVRList);
      instance.SetDeleteArray(&deleteArray_KVRList);
      instance.SetDestructor(&destruct_KVRList);
      instance.SetMerge(&merge_KVRList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRList*)
   {
      return GenerateInitInstanceLocal((::KVRList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSortableDatedFile(void *p = 0);
   static void *newArray_KVSortableDatedFile(Long_t size, void *p);
   static void delete_KVSortableDatedFile(void *p);
   static void deleteArray_KVSortableDatedFile(void *p);
   static void destruct_KVSortableDatedFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSortableDatedFile*)
   {
      ::KVSortableDatedFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSortableDatedFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSortableDatedFile", ::KVSortableDatedFile::Class_Version(), "KVDatedFileManager.h", 18,
                  typeid(::KVSortableDatedFile), DefineBehavior(ptr, ptr),
                  &::KVSortableDatedFile::Dictionary, isa_proxy, 4,
                  sizeof(::KVSortableDatedFile) );
      instance.SetNew(&new_KVSortableDatedFile);
      instance.SetNewArray(&newArray_KVSortableDatedFile);
      instance.SetDelete(&delete_KVSortableDatedFile);
      instance.SetDeleteArray(&deleteArray_KVSortableDatedFile);
      instance.SetDestructor(&destruct_KVSortableDatedFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSortableDatedFile*)
   {
      return GenerateInitInstanceLocal((::KVSortableDatedFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSortableDatedFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTarArchive(void *p = 0);
   static void *newArray_KVTarArchive(Long_t size, void *p);
   static void delete_KVTarArchive(void *p);
   static void deleteArray_KVTarArchive(void *p);
   static void destruct_KVTarArchive(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTarArchive*)
   {
      ::KVTarArchive *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTarArchive >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTarArchive", ::KVTarArchive::Class_Version(), "KVTarArchive.h", 15,
                  typeid(::KVTarArchive), DefineBehavior(ptr, ptr),
                  &::KVTarArchive::Dictionary, isa_proxy, 4,
                  sizeof(::KVTarArchive) );
      instance.SetNew(&new_KVTarArchive);
      instance.SetNewArray(&newArray_KVTarArchive);
      instance.SetDelete(&delete_KVTarArchive);
      instance.SetDeleteArray(&deleteArray_KVTarArchive);
      instance.SetDestructor(&destruct_KVTarArchive);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTarArchive*)
   {
      return GenerateInitInstanceLocal((::KVTarArchive*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTarArchive*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVHistoManipulator(void *p = 0);
   static void *newArray_KVHistoManipulator(Long_t size, void *p);
   static void delete_KVHistoManipulator(void *p);
   static void deleteArray_KVHistoManipulator(void *p);
   static void destruct_KVHistoManipulator(void *p);
   static void streamer_KVHistoManipulator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVHistoManipulator*)
   {
      ::KVHistoManipulator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVHistoManipulator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVHistoManipulator", ::KVHistoManipulator::Class_Version(), "KVHistoManipulator.h", 28,
                  typeid(::KVHistoManipulator), DefineBehavior(ptr, ptr),
                  &::KVHistoManipulator::Dictionary, isa_proxy, 16,
                  sizeof(::KVHistoManipulator) );
      instance.SetNew(&new_KVHistoManipulator);
      instance.SetNewArray(&newArray_KVHistoManipulator);
      instance.SetDelete(&delete_KVHistoManipulator);
      instance.SetDeleteArray(&deleteArray_KVHistoManipulator);
      instance.SetDestructor(&destruct_KVHistoManipulator);
      instance.SetStreamerFunc(&streamer_KVHistoManipulator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVHistoManipulator*)
   {
      return GenerateInitInstanceLocal((::KVHistoManipulator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVHistoManipulator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEventListMaker(void *p = 0);
   static void *newArray_KVEventListMaker(Long_t size, void *p);
   static void delete_KVEventListMaker(void *p);
   static void deleteArray_KVEventListMaker(void *p);
   static void destruct_KVEventListMaker(void *p);
   static void streamer_KVEventListMaker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEventListMaker*)
   {
      ::KVEventListMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEventListMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEventListMaker", ::KVEventListMaker::Class_Version(), "KVEventListMaker.h", 16,
                  typeid(::KVEventListMaker), DefineBehavior(ptr, ptr),
                  &::KVEventListMaker::Dictionary, isa_proxy, 16,
                  sizeof(::KVEventListMaker) );
      instance.SetNew(&new_KVEventListMaker);
      instance.SetNewArray(&newArray_KVEventListMaker);
      instance.SetDelete(&delete_KVEventListMaker);
      instance.SetDeleteArray(&deleteArray_KVEventListMaker);
      instance.SetDestructor(&destruct_KVEventListMaker);
      instance.SetStreamerFunc(&streamer_KVEventListMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEventListMaker*)
   {
      return GenerateInitInstanceLocal((::KVEventListMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEventListMaker*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVUpdateChecker(void *p);
   static void deleteArray_KVUpdateChecker(void *p);
   static void destruct_KVUpdateChecker(void *p);
   static void streamer_KVUpdateChecker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVUpdateChecker*)
   {
      ::KVUpdateChecker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVUpdateChecker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVUpdateChecker", ::KVUpdateChecker::Class_Version(), "KVUpdateChecker.h", 15,
                  typeid(::KVUpdateChecker), DefineBehavior(ptr, ptr),
                  &::KVUpdateChecker::Dictionary, isa_proxy, 16,
                  sizeof(::KVUpdateChecker) );
      instance.SetDelete(&delete_KVUpdateChecker);
      instance.SetDeleteArray(&deleteArray_KVUpdateChecker);
      instance.SetDestructor(&destruct_KVUpdateChecker);
      instance.SetStreamerFunc(&streamer_KVUpdateChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVUpdateChecker*)
   {
      return GenerateInitInstanceLocal((::KVUpdateChecker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVUpdateChecker*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCVSUpdateChecker(void *p = 0);
   static void *newArray_KVCVSUpdateChecker(Long_t size, void *p);
   static void delete_KVCVSUpdateChecker(void *p);
   static void deleteArray_KVCVSUpdateChecker(void *p);
   static void destruct_KVCVSUpdateChecker(void *p);
   static void streamer_KVCVSUpdateChecker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCVSUpdateChecker*)
   {
      ::KVCVSUpdateChecker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCVSUpdateChecker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCVSUpdateChecker", ::KVCVSUpdateChecker::Class_Version(), "KVCVSUpdateChecker.h", 15,
                  typeid(::KVCVSUpdateChecker), DefineBehavior(ptr, ptr),
                  &::KVCVSUpdateChecker::Dictionary, isa_proxy, 16,
                  sizeof(::KVCVSUpdateChecker) );
      instance.SetNew(&new_KVCVSUpdateChecker);
      instance.SetNewArray(&newArray_KVCVSUpdateChecker);
      instance.SetDelete(&delete_KVCVSUpdateChecker);
      instance.SetDeleteArray(&deleteArray_KVCVSUpdateChecker);
      instance.SetDestructor(&destruct_KVCVSUpdateChecker);
      instance.SetStreamerFunc(&streamer_KVCVSUpdateChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCVSUpdateChecker*)
   {
      return GenerateInitInstanceLocal((::KVCVSUpdateChecker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCVSUpdateChecker*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSystemFile(void *p = 0);
   static void *newArray_KVSystemFile(Long_t size, void *p);
   static void delete_KVSystemFile(void *p);
   static void deleteArray_KVSystemFile(void *p);
   static void destruct_KVSystemFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSystemFile*)
   {
      ::KVSystemFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSystemFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSystemFile", ::KVSystemFile::Class_Version(), "KVSystemFile.h", 11,
                  typeid(::KVSystemFile), DefineBehavior(ptr, ptr),
                  &::KVSystemFile::Dictionary, isa_proxy, 4,
                  sizeof(::KVSystemFile) );
      instance.SetNew(&new_KVSystemFile);
      instance.SetNewArray(&newArray_KVSystemFile);
      instance.SetDelete(&delete_KVSystemFile);
      instance.SetDeleteArray(&deleteArray_KVSystemFile);
      instance.SetDestructor(&destruct_KVSystemFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSystemFile*)
   {
      return GenerateInitInstanceLocal((::KVSystemFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSystemFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSystemDirectory(void *p = 0);
   static void *newArray_KVSystemDirectory(Long_t size, void *p);
   static void delete_KVSystemDirectory(void *p);
   static void deleteArray_KVSystemDirectory(void *p);
   static void destruct_KVSystemDirectory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSystemDirectory*)
   {
      ::KVSystemDirectory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSystemDirectory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSystemDirectory", ::KVSystemDirectory::Class_Version(), "KVSystemDirectory.h", 9,
                  typeid(::KVSystemDirectory), DefineBehavior(ptr, ptr),
                  &::KVSystemDirectory::Dictionary, isa_proxy, 4,
                  sizeof(::KVSystemDirectory) );
      instance.SetNew(&new_KVSystemDirectory);
      instance.SetNewArray(&newArray_KVSystemDirectory);
      instance.SetDelete(&delete_KVSystemDirectory);
      instance.SetDeleteArray(&deleteArray_KVSystemDirectory);
      instance.SetDestructor(&destruct_KVSystemDirectory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSystemDirectory*)
   {
      return GenerateInitInstanceLocal((::KVSystemDirectory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSystemDirectory*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVEnv(void *p = 0);
   static void *newArray_KVEnv(Long_t size, void *p);
   static void delete_KVEnv(void *p);
   static void deleteArray_KVEnv(void *p);
   static void destruct_KVEnv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVEnv*)
   {
      ::KVEnv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVEnv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVEnv", ::KVEnv::Class_Version(), "KVEnv.h", 10,
                  typeid(::KVEnv), DefineBehavior(ptr, ptr),
                  &::KVEnv::Dictionary, isa_proxy, 4,
                  sizeof(::KVEnv) );
      instance.SetNew(&new_KVEnv);
      instance.SetNewArray(&newArray_KVEnv);
      instance.SetDelete(&delete_KVEnv);
      instance.SetDeleteArray(&deleteArray_KVEnv);
      instance.SetDestructor(&destruct_KVEnv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVEnv*)
   {
      return GenerateInitInstanceLocal((::KVEnv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVEnv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVHistogram(void *p = 0);
   static void *newArray_KVHistogram(Long_t size, void *p);
   static void delete_KVHistogram(void *p);
   static void deleteArray_KVHistogram(void *p);
   static void destruct_KVHistogram(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVHistogram*)
   {
      ::KVHistogram *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVHistogram >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVHistogram", ::KVHistogram::Class_Version(), "KVHistogram.h", 12,
                  typeid(::KVHistogram), DefineBehavior(ptr, ptr),
                  &::KVHistogram::Dictionary, isa_proxy, 4,
                  sizeof(::KVHistogram) );
      instance.SetNew(&new_KVHistogram);
      instance.SetNewArray(&newArray_KVHistogram);
      instance.SetDelete(&delete_KVHistogram);
      instance.SetDeleteArray(&deleteArray_KVHistogram);
      instance.SetDestructor(&destruct_KVHistogram);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVHistogram*)
   {
      return GenerateInitInstanceLocal((::KVHistogram*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVHistogram*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPosition(void *p = 0);
   static void *newArray_KVPosition(Long_t size, void *p);
   static void delete_KVPosition(void *p);
   static void deleteArray_KVPosition(void *p);
   static void destruct_KVPosition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPosition*)
   {
      ::KVPosition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPosition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPosition", ::KVPosition::Class_Version(), "KVPosition.h", 29,
                  typeid(::KVPosition), DefineBehavior(ptr, ptr),
                  &::KVPosition::Dictionary, isa_proxy, 4,
                  sizeof(::KVPosition) );
      instance.SetNew(&new_KVPosition);
      instance.SetNewArray(&newArray_KVPosition);
      instance.SetDelete(&delete_KVPosition);
      instance.SetDeleteArray(&deleteArray_KVPosition);
      instance.SetDestructor(&destruct_KVPosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPosition*)
   {
      return GenerateInitInstanceLocal((::KVPosition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPosition*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIntegerList(void *p = 0);
   static void *newArray_KVIntegerList(Long_t size, void *p);
   static void delete_KVIntegerList(void *p);
   static void deleteArray_KVIntegerList(void *p);
   static void destruct_KVIntegerList(void *p);
   static void streamer_KVIntegerList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIntegerList*)
   {
      ::KVIntegerList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIntegerList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIntegerList", ::KVIntegerList::Class_Version(), "KVIntegerList.h", 10,
                  typeid(::KVIntegerList), DefineBehavior(ptr, ptr),
                  &::KVIntegerList::Dictionary, isa_proxy, 17,
                  sizeof(::KVIntegerList) );
      instance.SetNew(&new_KVIntegerList);
      instance.SetNewArray(&newArray_KVIntegerList);
      instance.SetDelete(&delete_KVIntegerList);
      instance.SetDeleteArray(&deleteArray_KVIntegerList);
      instance.SetDestructor(&destruct_KVIntegerList);
      instance.SetStreamerFunc(&streamer_KVIntegerList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIntegerList*)
   {
      return GenerateInitInstanceLocal((::KVIntegerList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIntegerList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCouple(void *p = 0);
   static void *newArray_KVCouple(Long_t size, void *p);
   static void delete_KVCouple(void *p);
   static void deleteArray_KVCouple(void *p);
   static void destruct_KVCouple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCouple*)
   {
      ::KVCouple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCouple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCouple", ::KVCouple::Class_Version(), "KVCouple.h", 9,
                  typeid(::KVCouple), DefineBehavior(ptr, ptr),
                  &::KVCouple::Dictionary, isa_proxy, 4,
                  sizeof(::KVCouple) );
      instance.SetNew(&new_KVCouple);
      instance.SetNewArray(&newArray_KVCouple);
      instance.SetDelete(&delete_KVCouple);
      instance.SetDeleteArray(&deleteArray_KVCouple);
      instance.SetDestructor(&destruct_KVCouple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCouple*)
   {
      return GenerateInitInstanceLocal((::KVCouple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCouple*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPartitionGenerator(void *p = 0);
   static void *newArray_KVPartitionGenerator(Long_t size, void *p);
   static void delete_KVPartitionGenerator(void *p);
   static void deleteArray_KVPartitionGenerator(void *p);
   static void destruct_KVPartitionGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPartitionGenerator*)
   {
      ::KVPartitionGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPartitionGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPartitionGenerator", ::KVPartitionGenerator::Class_Version(), "KVPartitionGenerator.h", 11,
                  typeid(::KVPartitionGenerator), DefineBehavior(ptr, ptr),
                  &::KVPartitionGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::KVPartitionGenerator) );
      instance.SetNew(&new_KVPartitionGenerator);
      instance.SetNewArray(&newArray_KVPartitionGenerator);
      instance.SetDelete(&delete_KVPartitionGenerator);
      instance.SetDeleteArray(&deleteArray_KVPartitionGenerator);
      instance.SetDestructor(&destruct_KVPartitionGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPartitionGenerator*)
   {
      return GenerateInitInstanceLocal((::KVPartitionGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPartitionGenerator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPartition(void *p = 0);
   static void *newArray_KVPartition(Long_t size, void *p);
   static void delete_KVPartition(void *p);
   static void deleteArray_KVPartition(void *p);
   static void destruct_KVPartition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPartition*)
   {
      ::KVPartition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPartition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPartition", ::KVPartition::Class_Version(), "KVPartition.h", 10,
                  typeid(::KVPartition), DefineBehavior(ptr, ptr),
                  &::KVPartition::Dictionary, isa_proxy, 4,
                  sizeof(::KVPartition) );
      instance.SetNew(&new_KVPartition);
      instance.SetNewArray(&newArray_KVPartition);
      instance.SetDelete(&delete_KVPartition);
      instance.SetDeleteArray(&deleteArray_KVPartition);
      instance.SetDestructor(&destruct_KVPartition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPartition*)
   {
      return GenerateInitInstanceLocal((::KVPartition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPartition*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPartitionFromLeaf(void *p = 0);
   static void *newArray_KVPartitionFromLeaf(Long_t size, void *p);
   static void delete_KVPartitionFromLeaf(void *p);
   static void deleteArray_KVPartitionFromLeaf(void *p);
   static void destruct_KVPartitionFromLeaf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPartitionFromLeaf*)
   {
      ::KVPartitionFromLeaf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPartitionFromLeaf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPartitionFromLeaf", ::KVPartitionFromLeaf::Class_Version(), "KVPartitionFromLeaf.h", 10,
                  typeid(::KVPartitionFromLeaf), DefineBehavior(ptr, ptr),
                  &::KVPartitionFromLeaf::Dictionary, isa_proxy, 4,
                  sizeof(::KVPartitionFromLeaf) );
      instance.SetNew(&new_KVPartitionFromLeaf);
      instance.SetNewArray(&newArray_KVPartitionFromLeaf);
      instance.SetDelete(&delete_KVPartitionFromLeaf);
      instance.SetDeleteArray(&deleteArray_KVPartitionFromLeaf);
      instance.SetDestructor(&destruct_KVPartitionFromLeaf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPartitionFromLeaf*)
   {
      return GenerateInitInstanceLocal((::KVPartitionFromLeaf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPartitionFromLeaf*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPartitionList(void *p = 0);
   static void *newArray_KVPartitionList(Long_t size, void *p);
   static void delete_KVPartitionList(void *p);
   static void deleteArray_KVPartitionList(void *p);
   static void destruct_KVPartitionList(void *p);
   static Long64_t merge_KVPartitionList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPartitionList*)
   {
      ::KVPartitionList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPartitionList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPartitionList", ::KVPartitionList::Class_Version(), "KVPartitionList.h", 13,
                  typeid(::KVPartitionList), DefineBehavior(ptr, ptr),
                  &::KVPartitionList::Dictionary, isa_proxy, 4,
                  sizeof(::KVPartitionList) );
      instance.SetNew(&new_KVPartitionList);
      instance.SetNewArray(&newArray_KVPartitionList);
      instance.SetDelete(&delete_KVPartitionList);
      instance.SetDeleteArray(&deleteArray_KVPartitionList);
      instance.SetDestructor(&destruct_KVPartitionList);
      instance.SetMerge(&merge_KVPartitionList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPartitionList*)
   {
      return GenerateInitInstanceLocal((::KVPartitionList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPartitionList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPartitionFunction(void *p = 0);
   static void *newArray_KVPartitionFunction(Long_t size, void *p);
   static void delete_KVPartitionFunction(void *p);
   static void deleteArray_KVPartitionFunction(void *p);
   static void destruct_KVPartitionFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPartitionFunction*)
   {
      ::KVPartitionFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPartitionFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPartitionFunction", ::KVPartitionFunction::Class_Version(), "KVPartitionFunction.h", 11,
                  typeid(::KVPartitionFunction), DefineBehavior(ptr, ptr),
                  &::KVPartitionFunction::Dictionary, isa_proxy, 4,
                  sizeof(::KVPartitionFunction) );
      instance.SetNew(&new_KVPartitionFunction);
      instance.SetNewArray(&newArray_KVPartitionFunction);
      instance.SetDelete(&delete_KVPartitionFunction);
      instance.SetDeleteArray(&deleteArray_KVPartitionFunction);
      instance.SetDestructor(&destruct_KVPartitionFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPartitionFunction*)
   {
      return GenerateInitInstanceLocal((::KVPartitionFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPartitionFunction*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr Binary_t<unsigned char>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Binary_t<unsigned char>::Class_Name()
{
   return "Binary_t<unsigned char>";
}

//______________________________________________________________________________
template <> const char *Binary_t<unsigned char>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Binary_t<unsigned char>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned char>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned char>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned char>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr Binary_t<unsigned short>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Binary_t<unsigned short>::Class_Name()
{
   return "Binary_t<unsigned short>";
}

//______________________________________________________________________________
template <> const char *Binary_t<unsigned short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Binary_t<unsigned short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned short>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr Binary_t<unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Binary_t<unsigned int>::Class_Name()
{
   return "Binary_t<unsigned int>";
}

//______________________________________________________________________________
template <> const char *Binary_t<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Binary_t<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Binary_t<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr Binary_t<Long64_t>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Binary_t<Long64_t>::Class_Name()
{
   return "Binary_t<Long64_t>";
}

//______________________________________________________________________________
template <> const char *Binary_t<Long64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Binary_t<Long64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Binary_t<Long64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Binary_t<Long64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Binary_t<Long64_t>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVString::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVString::Class_Name()
{
   return "KVString";
}

//______________________________________________________________________________
const char *KVString::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVString*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVString::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVString*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVString::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVString*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVString*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRungeKutta::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRungeKutta::Class_Name()
{
   return "KVRungeKutta";
}

//______________________________________________________________________________
const char *KVRungeKutta::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRungeKutta*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRungeKutta::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRungeKutta*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRungeKutta::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRungeKutta*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRungeKutta::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRungeKutta*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Hexa_t::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Hexa_t::Class_Name()
{
   return "Hexa_t";
}

//______________________________________________________________________________
const char *Hexa_t::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hexa_t*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Hexa_t::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hexa_t*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hexa_t::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hexa_t*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hexa_t::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hexa_t*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNameValueList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNameValueList::Class_Name()
{
   return "KVNameValueList";
}

//______________________________________________________________________________
const char *KVNameValueList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNameValueList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNameValueList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNameValueList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNameValueList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNameValueList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNameValueList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNameValueList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBase::Class_Name()
{
   return "KVBase";
}

//______________________________________________________________________________
const char *KVBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVColouredBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVColouredBase::Class_Name()
{
   return "KVColouredBase";
}

//______________________________________________________________________________
const char *KVColouredBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVColouredBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVColouredBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVColouredBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVColouredBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVColouredBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVColouredBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVColouredBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVClassFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVClassFactory::Class_Name()
{
   return "KVClassFactory";
}

//______________________________________________________________________________
const char *KVClassFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVClassFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVClassFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVClassFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVClassMethod::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVClassMethod::Class_Name()
{
   return "KVClassMethod";
}

//______________________________________________________________________________
const char *KVClassMethod::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMethod*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVClassMethod::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMethod*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVClassMethod::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMethod*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVClassMethod::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMethod*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVClassMember::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVClassMember::Class_Name()
{
   return "KVClassMember";
}

//______________________________________________________________________________
const char *KVClassMember::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMember*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVClassMember::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMember*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVClassMember::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMember*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVClassMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMember*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVClassMonitor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVClassMonitor::Class_Name()
{
   return "KVClassMonitor";
}

//______________________________________________________________________________
const char *KVClassMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMonitor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVClassMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVClassMonitor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVClassMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMonitor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVClassMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVClassMonitor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSeqCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSeqCollection::Class_Name()
{
   return "KVSeqCollection";
}

//______________________________________________________________________________
const char *KVSeqCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeqCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSeqCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeqCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSeqCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeqCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSeqCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeqCollection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataBranchHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataBranchHandler::Class_Name()
{
   return "KVDataBranchHandler";
}

//______________________________________________________________________________
const char *KVDataBranchHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBranchHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataBranchHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBranchHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataBranchHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBranchHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataBranchHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBranchHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDatime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDatime::Class_Name()
{
   return "KVDatime";
}

//______________________________________________________________________________
const char *KVDatime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDatime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDatime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDatime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDatime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDatime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDatime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDatime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDatedFileManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDatedFileManager::Class_Name()
{
   return "KVDatedFileManager";
}

//______________________________________________________________________________
const char *KVDatedFileManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDatedFileManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDatedFileManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDatedFileManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDatedFileManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDatedFileManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDatedFileManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDatedFileManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVHashList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVHashList::Class_Name()
{
   return "KVHashList";
}

//______________________________________________________________________________
const char *KVHashList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHashList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVHashList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHashList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVHashList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHashList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVHashList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHashList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVUniqueNameList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVUniqueNameList::Class_Name()
{
   return "KVUniqueNameList";
}

//______________________________________________________________________________
const char *KVUniqueNameList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUniqueNameList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVUniqueNameList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUniqueNameList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVUniqueNameList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUniqueNameList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVUniqueNameList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUniqueNameList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVList::Class_Name()
{
   return "KVList";
}

//______________________________________________________________________________
const char *KVList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLockfile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLockfile::Class_Name()
{
   return "KVLockfile";
}

//______________________________________________________________________________
const char *KVLockfile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLockfile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLockfile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLockfile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLockfile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLockfile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLockfile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLockfile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNamedParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNamedParameter::Class_Name()
{
   return "KVNamedParameter";
}

//______________________________________________________________________________
const char *KVNamedParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNamedParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNamedParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNamedParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNamedParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNamedParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNamedParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNamedParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLogReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLogReader::Class_Name()
{
   return "KVLogReader";
}

//______________________________________________________________________________
const char *KVLogReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLogReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLogReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLogReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLogReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLogReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLogReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLogReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBQSLogReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBQSLogReader::Class_Name()
{
   return "KVBQSLogReader";
}

//______________________________________________________________________________
const char *KVBQSLogReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBQSLogReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBQSLogReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBQSLogReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBQSLogReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBQSLogReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBQSLogReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBQSLogReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGELogReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGELogReader::Class_Name()
{
   return "KVGELogReader";
}

//______________________________________________________________________________
const char *KVGELogReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGELogReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGELogReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGELogReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGELogReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGELogReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGELogReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGELogReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMemoryChunk::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMemoryChunk::Class_Name()
{
   return "KVMemoryChunk";
}

//______________________________________________________________________________
const char *KVMemoryChunk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryChunk*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMemoryChunk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryChunk*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMemoryChunk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryChunk*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMemoryChunk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryChunk*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMemoryPool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMemoryPool::Class_Name()
{
   return "KVMemoryPool";
}

//______________________________________________________________________________
const char *KVMemoryPool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryPool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMemoryPool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryPool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMemoryPool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryPool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMemoryPool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMemoryPool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNumberList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNumberList::Class_Name()
{
   return "KVNumberList";
}

//______________________________________________________________________________
const char *KVNumberList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNumberList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNumberList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNumberList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNumberList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNumberList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNumberList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNumberList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFileReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFileReader::Class_Name()
{
   return "KVFileReader";
}

//______________________________________________________________________________
const char *KVFileReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFileReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFileReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFileReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFileReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFileReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFileReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFileReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVValues::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVValues::Class_Name()
{
   return "KVValues";
}

//______________________________________________________________________________
const char *KVValues::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVValues*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVValues::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVValues*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVValues::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVValues*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVValues::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVValues*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRList::Class_Name()
{
   return "KVRList";
}

//______________________________________________________________________________
const char *KVRList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSortableDatedFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSortableDatedFile::Class_Name()
{
   return "KVSortableDatedFile";
}

//______________________________________________________________________________
const char *KVSortableDatedFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSortableDatedFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSortableDatedFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSortableDatedFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSortableDatedFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSortableDatedFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSortableDatedFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSortableDatedFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTarArchive::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTarArchive::Class_Name()
{
   return "KVTarArchive";
}

//______________________________________________________________________________
const char *KVTarArchive::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTarArchive*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTarArchive::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTarArchive*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTarArchive::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTarArchive*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTarArchive::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTarArchive*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVHistoManipulator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVHistoManipulator::Class_Name()
{
   return "KVHistoManipulator";
}

//______________________________________________________________________________
const char *KVHistoManipulator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHistoManipulator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVHistoManipulator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHistoManipulator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVHistoManipulator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHistoManipulator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVHistoManipulator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHistoManipulator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEventListMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEventListMaker::Class_Name()
{
   return "KVEventListMaker";
}

//______________________________________________________________________________
const char *KVEventListMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventListMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEventListMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEventListMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEventListMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventListMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEventListMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEventListMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVUpdateChecker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVUpdateChecker::Class_Name()
{
   return "KVUpdateChecker";
}

//______________________________________________________________________________
const char *KVUpdateChecker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUpdateChecker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVUpdateChecker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVUpdateChecker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVUpdateChecker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUpdateChecker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVUpdateChecker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVUpdateChecker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCVSUpdateChecker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCVSUpdateChecker::Class_Name()
{
   return "KVCVSUpdateChecker";
}

//______________________________________________________________________________
const char *KVCVSUpdateChecker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCVSUpdateChecker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCVSUpdateChecker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCVSUpdateChecker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCVSUpdateChecker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCVSUpdateChecker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCVSUpdateChecker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCVSUpdateChecker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSystemFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSystemFile::Class_Name()
{
   return "KVSystemFile";
}

//______________________________________________________________________________
const char *KVSystemFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSystemFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSystemFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSystemFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSystemFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSystemFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSystemFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSystemFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSystemDirectory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSystemDirectory::Class_Name()
{
   return "KVSystemDirectory";
}

//______________________________________________________________________________
const char *KVSystemDirectory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSystemDirectory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSystemDirectory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSystemDirectory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSystemDirectory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSystemDirectory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSystemDirectory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSystemDirectory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVEnv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVEnv::Class_Name()
{
   return "KVEnv";
}

//______________________________________________________________________________
const char *KVEnv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEnv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVEnv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVEnv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVEnv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEnv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVEnv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVEnv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVHistogram::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVHistogram::Class_Name()
{
   return "KVHistogram";
}

//______________________________________________________________________________
const char *KVHistogram::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHistogram*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVHistogram::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVHistogram*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVHistogram::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHistogram*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVHistogram::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVHistogram*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPosition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPosition::Class_Name()
{
   return "KVPosition";
}

//______________________________________________________________________________
const char *KVPosition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPosition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPosition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPosition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPosition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPosition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPosition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPosition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIntegerList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIntegerList::Class_Name()
{
   return "KVIntegerList";
}

//______________________________________________________________________________
const char *KVIntegerList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIntegerList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIntegerList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIntegerList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIntegerList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIntegerList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIntegerList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIntegerList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCouple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCouple::Class_Name()
{
   return "KVCouple";
}

//______________________________________________________________________________
const char *KVCouple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCouple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCouple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCouple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCouple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCouple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCouple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCouple*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPartitionGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPartitionGenerator::Class_Name()
{
   return "KVPartitionGenerator";
}

//______________________________________________________________________________
const char *KVPartitionGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPartitionGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPartitionGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPartitionGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPartition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPartition::Class_Name()
{
   return "KVPartition";
}

//______________________________________________________________________________
const char *KVPartition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPartition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPartition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPartition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPartitionFromLeaf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPartitionFromLeaf::Class_Name()
{
   return "KVPartitionFromLeaf";
}

//______________________________________________________________________________
const char *KVPartitionFromLeaf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFromLeaf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPartitionFromLeaf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFromLeaf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPartitionFromLeaf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFromLeaf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPartitionFromLeaf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFromLeaf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPartitionList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPartitionList::Class_Name()
{
   return "KVPartitionList";
}

//______________________________________________________________________________
const char *KVPartitionList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPartitionList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPartitionList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPartitionList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPartitionFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPartitionFunction::Class_Name()
{
   return "KVPartitionFunction";
}

//______________________________________________________________________________
const char *KVPartitionFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPartitionFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPartitionFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPartitionFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPartitionFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> void Binary_t<unsigned char>::Streamer(TBuffer &R__b)
{
   // Stream an object of class Binary_t<unsigned char>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Binary_t<unsigned char>::Class(),this);
   } else {
      R__b.WriteClassBuffer(Binary_t<unsigned char>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Binary_tlEunsignedsPchargR(void *p) {
      return  p ? new(p) ::Binary_t<unsigned char> : new ::Binary_t<unsigned char>;
   }
   static void *newArray_Binary_tlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? new(p) ::Binary_t<unsigned char>[nElements] : new ::Binary_t<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_Binary_tlEunsignedsPchargR(void *p) {
      delete ((::Binary_t<unsigned char>*)p);
   }
   static void deleteArray_Binary_tlEunsignedsPchargR(void *p) {
      delete [] ((::Binary_t<unsigned char>*)p);
   }
   static void destruct_Binary_tlEunsignedsPchargR(void *p) {
      typedef ::Binary_t<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Binary_t<unsigned char>

//______________________________________________________________________________
template <> void Binary_t<unsigned short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class Binary_t<unsigned short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Binary_t<unsigned short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(Binary_t<unsigned short>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Binary_tlEunsignedsPshortgR(void *p) {
      return  p ? new(p) ::Binary_t<unsigned short> : new ::Binary_t<unsigned short>;
   }
   static void *newArray_Binary_tlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? new(p) ::Binary_t<unsigned short>[nElements] : new ::Binary_t<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_Binary_tlEunsignedsPshortgR(void *p) {
      delete ((::Binary_t<unsigned short>*)p);
   }
   static void deleteArray_Binary_tlEunsignedsPshortgR(void *p) {
      delete [] ((::Binary_t<unsigned short>*)p);
   }
   static void destruct_Binary_tlEunsignedsPshortgR(void *p) {
      typedef ::Binary_t<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Binary_t<unsigned short>

//______________________________________________________________________________
template <> void Binary_t<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class Binary_t<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Binary_t<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(Binary_t<unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Binary_tlEunsignedsPintgR(void *p) {
      return  p ? new(p) ::Binary_t<unsigned int> : new ::Binary_t<unsigned int>;
   }
   static void *newArray_Binary_tlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::Binary_t<unsigned int>[nElements] : new ::Binary_t<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_Binary_tlEunsignedsPintgR(void *p) {
      delete ((::Binary_t<unsigned int>*)p);
   }
   static void deleteArray_Binary_tlEunsignedsPintgR(void *p) {
      delete [] ((::Binary_t<unsigned int>*)p);
   }
   static void destruct_Binary_tlEunsignedsPintgR(void *p) {
      typedef ::Binary_t<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Binary_t<unsigned int>

//______________________________________________________________________________
template <> void Binary_t<Long64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class Binary_t<Long64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Binary_t<Long64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(Binary_t<Long64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Binary_tlELong64_tgR(void *p) {
      return  p ? new(p) ::Binary_t<Long64_t> : new ::Binary_t<Long64_t>;
   }
   static void *newArray_Binary_tlELong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::Binary_t<Long64_t>[nElements] : new ::Binary_t<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_Binary_tlELong64_tgR(void *p) {
      delete ((::Binary_t<Long64_t>*)p);
   }
   static void deleteArray_Binary_tlELong64_tgR(void *p) {
      delete [] ((::Binary_t<Long64_t>*)p);
   }
   static void destruct_Binary_tlELong64_tgR(void *p) {
      typedef ::Binary_t<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Binary_t<Long64_t>

//______________________________________________________________________________
void KVString::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVString.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVString::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVString::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVString(void *p) {
      return  p ? new(p) ::KVString : new ::KVString;
   }
   static void *newArray_KVString(Long_t nElements, void *p) {
      return p ? new(p) ::KVString[nElements] : new ::KVString[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVString(void *p) {
      delete ((::KVString*)p);
   }
   static void deleteArray_KVString(void *p) {
      delete [] ((::KVString*)p);
   }
   static void destruct_KVString(void *p) {
      typedef ::KVString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVString

//______________________________________________________________________________
void KVRungeKutta::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRungeKutta.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRungeKutta::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRungeKutta::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVRungeKutta(void *p) {
      delete ((::KVRungeKutta*)p);
   }
   static void deleteArray_KVRungeKutta(void *p) {
      delete [] ((::KVRungeKutta*)p);
   }
   static void destruct_KVRungeKutta(void *p) {
      typedef ::KVRungeKutta current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRungeKutta

//______________________________________________________________________________
void Hexa_t::Streamer(TBuffer &R__b)
{
   // Stream an object of class Hexa_t.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Hexa_t::Class(),this);
   } else {
      R__b.WriteClassBuffer(Hexa_t::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Hexa_t(void *p) {
      return  p ? new(p) ::Hexa_t : new ::Hexa_t;
   }
   static void *newArray_Hexa_t(Long_t nElements, void *p) {
      return p ? new(p) ::Hexa_t[nElements] : new ::Hexa_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_Hexa_t(void *p) {
      delete ((::Hexa_t*)p);
   }
   static void deleteArray_Hexa_t(void *p) {
      delete [] ((::Hexa_t*)p);
   }
   static void destruct_Hexa_t(void *p) {
      typedef ::Hexa_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Hexa_t

//______________________________________________________________________________
void KVNameValueList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNameValueList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNameValueList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNameValueList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNameValueList(void *p) {
      return  p ? new(p) ::KVNameValueList : new ::KVNameValueList;
   }
   static void *newArray_KVNameValueList(Long_t nElements, void *p) {
      return p ? new(p) ::KVNameValueList[nElements] : new ::KVNameValueList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNameValueList(void *p) {
      delete ((::KVNameValueList*)p);
   }
   static void deleteArray_KVNameValueList(void *p) {
      delete [] ((::KVNameValueList*)p);
   }
   static void destruct_KVNameValueList(void *p) {
      typedef ::KVNameValueList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNameValueList

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBase(void *p) {
      return  p ? new(p) ::KVBase : new ::KVBase;
   }
   static void *newArray_KVBase(Long_t nElements, void *p) {
      return p ? new(p) ::KVBase[nElements] : new ::KVBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBase(void *p) {
      delete ((::KVBase*)p);
   }
   static void deleteArray_KVBase(void *p) {
      delete [] ((::KVBase*)p);
   }
   static void destruct_KVBase(void *p) {
      typedef ::KVBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBase(TBuffer &buf, void *obj) {
      ((::KVBase*)obj)->::KVBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBase

//______________________________________________________________________________
void KVColouredBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVColouredBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVColouredBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVColouredBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVColouredBase(void *p) {
      return  p ? new(p) ::KVColouredBase : new ::KVColouredBase;
   }
   static void *newArray_KVColouredBase(Long_t nElements, void *p) {
      return p ? new(p) ::KVColouredBase[nElements] : new ::KVColouredBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVColouredBase(void *p) {
      delete ((::KVColouredBase*)p);
   }
   static void deleteArray_KVColouredBase(void *p) {
      delete [] ((::KVColouredBase*)p);
   }
   static void destruct_KVColouredBase(void *p) {
      typedef ::KVColouredBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVColouredBase

//______________________________________________________________________________
void KVClassFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVClassFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVClassFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVClassFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVClassFactory(void *p) {
      return  p ? new(p) ::KVClassFactory : new ::KVClassFactory;
   }
   static void *newArray_KVClassFactory(Long_t nElements, void *p) {
      return p ? new(p) ::KVClassFactory[nElements] : new ::KVClassFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVClassFactory(void *p) {
      delete ((::KVClassFactory*)p);
   }
   static void deleteArray_KVClassFactory(void *p) {
      delete [] ((::KVClassFactory*)p);
   }
   static void destruct_KVClassFactory(void *p) {
      typedef ::KVClassFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVClassFactory

//______________________________________________________________________________
void KVClassMethod::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVClassMethod.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVClassMethod::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVClassMethod::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVClassMethod(void *p) {
      return  p ? new(p) ::KVClassMethod : new ::KVClassMethod;
   }
   static void *newArray_KVClassMethod(Long_t nElements, void *p) {
      return p ? new(p) ::KVClassMethod[nElements] : new ::KVClassMethod[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVClassMethod(void *p) {
      delete ((::KVClassMethod*)p);
   }
   static void deleteArray_KVClassMethod(void *p) {
      delete [] ((::KVClassMethod*)p);
   }
   static void destruct_KVClassMethod(void *p) {
      typedef ::KVClassMethod current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVClassMethod

//______________________________________________________________________________
void KVClassMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVClassMember.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVClassMember::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVClassMember::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVClassMember(void *p) {
      return  p ? new(p) ::KVClassMember : new ::KVClassMember;
   }
   static void *newArray_KVClassMember(Long_t nElements, void *p) {
      return p ? new(p) ::KVClassMember[nElements] : new ::KVClassMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVClassMember(void *p) {
      delete ((::KVClassMember*)p);
   }
   static void deleteArray_KVClassMember(void *p) {
      delete [] ((::KVClassMember*)p);
   }
   static void destruct_KVClassMember(void *p) {
      typedef ::KVClassMember current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVClassMember

//______________________________________________________________________________
void KVClassMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVClassMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVClassMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVClassMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVClassMonitor(void *p) {
      return  p ? new(p) ::KVClassMonitor : new ::KVClassMonitor;
   }
   static void *newArray_KVClassMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::KVClassMonitor[nElements] : new ::KVClassMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVClassMonitor(void *p) {
      delete ((::KVClassMonitor*)p);
   }
   static void deleteArray_KVClassMonitor(void *p) {
      delete [] ((::KVClassMonitor*)p);
   }
   static void destruct_KVClassMonitor(void *p) {
      typedef ::KVClassMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVClassMonitor

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSeqCollection(void *p) {
      return  p ? new(p) ::KVSeqCollection : new ::KVSeqCollection;
   }
   static void *newArray_KVSeqCollection(Long_t nElements, void *p) {
      return p ? new(p) ::KVSeqCollection[nElements] : new ::KVSeqCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSeqCollection(void *p) {
      delete ((::KVSeqCollection*)p);
   }
   static void deleteArray_KVSeqCollection(void *p) {
      delete [] ((::KVSeqCollection*)p);
   }
   static void destruct_KVSeqCollection(void *p) {
      typedef ::KVSeqCollection current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVSeqCollection(TBuffer &buf, void *obj) {
      ((::KVSeqCollection*)obj)->::KVSeqCollection::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVSeqCollection(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVSeqCollection*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVSeqCollection

//______________________________________________________________________________
void KVDataBranchHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataBranchHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDataBranchHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDataBranchHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataBranchHandler(void *p) {
      delete ((::KVDataBranchHandler*)p);
   }
   static void deleteArray_KVDataBranchHandler(void *p) {
      delete [] ((::KVDataBranchHandler*)p);
   }
   static void destruct_KVDataBranchHandler(void *p) {
      typedef ::KVDataBranchHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDataBranchHandler

//______________________________________________________________________________
void KVDatime::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDatime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDatime::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDatime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDatime(void *p) {
      return  p ? new(p) ::KVDatime : new ::KVDatime;
   }
   static void *newArray_KVDatime(Long_t nElements, void *p) {
      return p ? new(p) ::KVDatime[nElements] : new ::KVDatime[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDatime(void *p) {
      delete ((::KVDatime*)p);
   }
   static void deleteArray_KVDatime(void *p) {
      delete [] ((::KVDatime*)p);
   }
   static void destruct_KVDatime(void *p) {
      typedef ::KVDatime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDatime

//______________________________________________________________________________
void KVDatedFileManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDatedFileManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDatedFileManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDatedFileManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDatedFileManager(void *p) {
      return  p ? new(p) ::KVDatedFileManager : new ::KVDatedFileManager;
   }
   static void *newArray_KVDatedFileManager(Long_t nElements, void *p) {
      return p ? new(p) ::KVDatedFileManager[nElements] : new ::KVDatedFileManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDatedFileManager(void *p) {
      delete ((::KVDatedFileManager*)p);
   }
   static void deleteArray_KVDatedFileManager(void *p) {
      delete [] ((::KVDatedFileManager*)p);
   }
   static void destruct_KVDatedFileManager(void *p) {
      typedef ::KVDatedFileManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDatedFileManager

//______________________________________________________________________________
void KVHashList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVHashList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVHashList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVHashList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVHashList(void *p) {
      return  p ? new(p) ::KVHashList : new ::KVHashList;
   }
   static void *newArray_KVHashList(Long_t nElements, void *p) {
      return p ? new(p) ::KVHashList[nElements] : new ::KVHashList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVHashList(void *p) {
      delete ((::KVHashList*)p);
   }
   static void deleteArray_KVHashList(void *p) {
      delete [] ((::KVHashList*)p);
   }
   static void destruct_KVHashList(void *p) {
      typedef ::KVHashList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVHashList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVHashList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVHashList

//______________________________________________________________________________
void KVUniqueNameList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVUniqueNameList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVUniqueNameList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVUniqueNameList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVUniqueNameList(void *p) {
      return  p ? new(p) ::KVUniqueNameList : new ::KVUniqueNameList;
   }
   static void *newArray_KVUniqueNameList(Long_t nElements, void *p) {
      return p ? new(p) ::KVUniqueNameList[nElements] : new ::KVUniqueNameList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVUniqueNameList(void *p) {
      delete ((::KVUniqueNameList*)p);
   }
   static void deleteArray_KVUniqueNameList(void *p) {
      delete [] ((::KVUniqueNameList*)p);
   }
   static void destruct_KVUniqueNameList(void *p) {
      typedef ::KVUniqueNameList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVUniqueNameList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVUniqueNameList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVUniqueNameList

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVList(void *p) {
      return  p ? new(p) ::KVList : new ::KVList;
   }
   static void *newArray_KVList(Long_t nElements, void *p) {
      return p ? new(p) ::KVList[nElements] : new ::KVList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVList(void *p) {
      delete ((::KVList*)p);
   }
   static void deleteArray_KVList(void *p) {
      delete [] ((::KVList*)p);
   }
   static void destruct_KVList(void *p) {
      typedef ::KVList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVList(TBuffer &buf, void *obj) {
      ((::KVList*)obj)->::KVList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVList

//______________________________________________________________________________
void KVLockfile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLockfile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLockfile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLockfile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLockfile(void *p) {
      return  p ? new(p) ::KVLockfile : new ::KVLockfile;
   }
   static void *newArray_KVLockfile(Long_t nElements, void *p) {
      return p ? new(p) ::KVLockfile[nElements] : new ::KVLockfile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLockfile(void *p) {
      delete ((::KVLockfile*)p);
   }
   static void deleteArray_KVLockfile(void *p) {
      delete [] ((::KVLockfile*)p);
   }
   static void destruct_KVLockfile(void *p) {
      typedef ::KVLockfile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLockfile

//______________________________________________________________________________
void KVNamedParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNamedParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNamedParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNamedParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNamedParameter(void *p) {
      return  p ? new(p) ::KVNamedParameter : new ::KVNamedParameter;
   }
   static void *newArray_KVNamedParameter(Long_t nElements, void *p) {
      return p ? new(p) ::KVNamedParameter[nElements] : new ::KVNamedParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNamedParameter(void *p) {
      delete ((::KVNamedParameter*)p);
   }
   static void deleteArray_KVNamedParameter(void *p) {
      delete [] ((::KVNamedParameter*)p);
   }
   static void destruct_KVNamedParameter(void *p) {
      typedef ::KVNamedParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNamedParameter

//______________________________________________________________________________
void KVLogReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLogReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLogReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLogReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVLogReader(void *p) {
      delete ((::KVLogReader*)p);
   }
   static void deleteArray_KVLogReader(void *p) {
      delete [] ((::KVLogReader*)p);
   }
   static void destruct_KVLogReader(void *p) {
      typedef ::KVLogReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLogReader

//______________________________________________________________________________
void KVBQSLogReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBQSLogReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVBQSLogReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVBQSLogReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBQSLogReader(void *p) {
      return  p ? new(p) ::KVBQSLogReader : new ::KVBQSLogReader;
   }
   static void *newArray_KVBQSLogReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVBQSLogReader[nElements] : new ::KVBQSLogReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBQSLogReader(void *p) {
      delete ((::KVBQSLogReader*)p);
   }
   static void deleteArray_KVBQSLogReader(void *p) {
      delete [] ((::KVBQSLogReader*)p);
   }
   static void destruct_KVBQSLogReader(void *p) {
      typedef ::KVBQSLogReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVBQSLogReader

//______________________________________________________________________________
void KVGELogReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGELogReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVGELogReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVGELogReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVGELogReader(void *p) {
      return  p ? new(p) ::KVGELogReader : new ::KVGELogReader;
   }
   static void *newArray_KVGELogReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVGELogReader[nElements] : new ::KVGELogReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVGELogReader(void *p) {
      delete ((::KVGELogReader*)p);
   }
   static void deleteArray_KVGELogReader(void *p) {
      delete [] ((::KVGELogReader*)p);
   }
   static void destruct_KVGELogReader(void *p) {
      typedef ::KVGELogReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVGELogReader

//______________________________________________________________________________
void KVMemoryChunk::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMemoryChunk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMemoryChunk::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMemoryChunk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVMemoryChunk(void *p) {
      return  p ? new(p) ::KVMemoryChunk : new ::KVMemoryChunk;
   }
   static void *newArray_KVMemoryChunk(Long_t nElements, void *p) {
      return p ? new(p) ::KVMemoryChunk[nElements] : new ::KVMemoryChunk[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVMemoryChunk(void *p) {
      delete ((::KVMemoryChunk*)p);
   }
   static void deleteArray_KVMemoryChunk(void *p) {
      delete [] ((::KVMemoryChunk*)p);
   }
   static void destruct_KVMemoryChunk(void *p) {
      typedef ::KVMemoryChunk current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMemoryChunk

//______________________________________________________________________________
void KVMemoryPool::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMemoryPool.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMemoryPool::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMemoryPool::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVMemoryPool(void *p) {
      delete ((::KVMemoryPool*)p);
   }
   static void deleteArray_KVMemoryPool(void *p) {
      delete [] ((::KVMemoryPool*)p);
   }
   static void destruct_KVMemoryPool(void *p) {
      typedef ::KVMemoryPool current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMemoryPool

//______________________________________________________________________________
void KVNumberList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNumberList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNumberList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNumberList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNumberList(void *p) {
      return  p ? new(p) ::KVNumberList : new ::KVNumberList;
   }
   static void *newArray_KVNumberList(Long_t nElements, void *p) {
      return p ? new(p) ::KVNumberList[nElements] : new ::KVNumberList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNumberList(void *p) {
      delete ((::KVNumberList*)p);
   }
   static void deleteArray_KVNumberList(void *p) {
      delete [] ((::KVNumberList*)p);
   }
   static void destruct_KVNumberList(void *p) {
      typedef ::KVNumberList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNumberList

//______________________________________________________________________________
void KVFileReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFileReader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> toks;
      reading_line.Streamer(R__b);
      file_name.Streamer(R__b);
      R__b >> nline;
      R__b >> status;
      R__b.StreamObject(&(f_in),typeid(f_in));
      R__b.CheckByteCount(R__s, R__c, KVFileReader::IsA());
   } else {
      R__c = R__b.WriteVersion(KVFileReader::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << toks;
      reading_line.Streamer(R__b);
      file_name.Streamer(R__b);
      R__b << nline;
      R__b << status;
      R__b.StreamObject(&(f_in),typeid(f_in));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFileReader(void *p) {
      return  p ? new(p) ::KVFileReader : new ::KVFileReader;
   }
   static void *newArray_KVFileReader(Long_t nElements, void *p) {
      return p ? new(p) ::KVFileReader[nElements] : new ::KVFileReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFileReader(void *p) {
      delete ((::KVFileReader*)p);
   }
   static void deleteArray_KVFileReader(void *p) {
      delete [] ((::KVFileReader*)p);
   }
   static void destruct_KVFileReader(void *p) {
      typedef ::KVFileReader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVFileReader(TBuffer &buf, void *obj) {
      ((::KVFileReader*)obj)->::KVFileReader::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVFileReader

//______________________________________________________________________________
void KVValues::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVValues.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVNameValueList::Streamer(R__b);
      R__b >> kdeb;
      R__b >> kval_base;
      R__b >> kval_add;
      R__b >> kval_tot;
      R__b >> knbre_val_max;
      R__b >> kordre_mom_max;
      R__b >> kTimesFillVarIsCalled;
      delete [] values;
      values = new Double_t[knbre_val_max];
      R__b.ReadFastArray(values,knbre_val_max);
      R__b >> kToBeRecalculated;
      R__b >> kform_add;
      R__b >> kpar_add;
      R__b.CheckByteCount(R__s, R__c, KVValues::IsA());
   } else {
      R__c = R__b.WriteVersion(KVValues::IsA(), kTRUE);
      KVNameValueList::Streamer(R__b);
      R__b << kdeb;
      R__b << kval_base;
      R__b << kval_add;
      R__b << kval_tot;
      R__b << knbre_val_max;
      R__b << kordre_mom_max;
      R__b << kTimesFillVarIsCalled;
      R__b.WriteFastArray(values,knbre_val_max);
      R__b << kToBeRecalculated;
      R__b << kform_add;
      R__b << kpar_add;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVValues(void *p) {
      return  p ? new(p) ::KVValues : new ::KVValues;
   }
   static void *newArray_KVValues(Long_t nElements, void *p) {
      return p ? new(p) ::KVValues[nElements] : new ::KVValues[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVValues(void *p) {
      delete ((::KVValues*)p);
   }
   static void deleteArray_KVValues(void *p) {
      delete [] ((::KVValues*)p);
   }
   static void destruct_KVValues(void *p) {
      typedef ::KVValues current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVValues(TBuffer &buf, void *obj) {
      ((::KVValues*)obj)->::KVValues::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVValues

//______________________________________________________________________________
void KVRList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRList(void *p) {
      return  p ? new(p) ::KVRList : new ::KVRList;
   }
   static void *newArray_KVRList(Long_t nElements, void *p) {
      return p ? new(p) ::KVRList[nElements] : new ::KVRList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRList(void *p) {
      delete ((::KVRList*)p);
   }
   static void deleteArray_KVRList(void *p) {
      delete [] ((::KVRList*)p);
   }
   static void destruct_KVRList(void *p) {
      typedef ::KVRList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVRList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVRList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVRList

//______________________________________________________________________________
void KVSortableDatedFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSortableDatedFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSortableDatedFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSortableDatedFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSortableDatedFile(void *p) {
      return  p ? new(p) ::KVSortableDatedFile : new ::KVSortableDatedFile;
   }
   static void *newArray_KVSortableDatedFile(Long_t nElements, void *p) {
      return p ? new(p) ::KVSortableDatedFile[nElements] : new ::KVSortableDatedFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSortableDatedFile(void *p) {
      delete ((::KVSortableDatedFile*)p);
   }
   static void deleteArray_KVSortableDatedFile(void *p) {
      delete [] ((::KVSortableDatedFile*)p);
   }
   static void destruct_KVSortableDatedFile(void *p) {
      typedef ::KVSortableDatedFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSortableDatedFile

//______________________________________________________________________________
void KVTarArchive::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTarArchive.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTarArchive::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTarArchive::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTarArchive(void *p) {
      return  p ? new(p) ::KVTarArchive : new ::KVTarArchive;
   }
   static void *newArray_KVTarArchive(Long_t nElements, void *p) {
      return p ? new(p) ::KVTarArchive[nElements] : new ::KVTarArchive[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTarArchive(void *p) {
      delete ((::KVTarArchive*)p);
   }
   static void deleteArray_KVTarArchive(void *p) {
      delete [] ((::KVTarArchive*)p);
   }
   static void destruct_KVTarArchive(void *p) {
      typedef ::KVTarArchive current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTarArchive

//______________________________________________________________________________
void KVHistoManipulator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVHistoManipulator.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> kVisDebug;
      R__b.CheckByteCount(R__s, R__c, KVHistoManipulator::IsA());
   } else {
      R__c = R__b.WriteVersion(KVHistoManipulator::IsA(), kTRUE);
      R__b << kVisDebug;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVHistoManipulator(void *p) {
      return  p ? new(p) ::KVHistoManipulator : new ::KVHistoManipulator;
   }
   static void *newArray_KVHistoManipulator(Long_t nElements, void *p) {
      return p ? new(p) ::KVHistoManipulator[nElements] : new ::KVHistoManipulator[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVHistoManipulator(void *p) {
      delete ((::KVHistoManipulator*)p);
   }
   static void deleteArray_KVHistoManipulator(void *p) {
      delete [] ((::KVHistoManipulator*)p);
   }
   static void destruct_KVHistoManipulator(void *p) {
      typedef ::KVHistoManipulator current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVHistoManipulator(TBuffer &buf, void *obj) {
      ((::KVHistoManipulator*)obj)->::KVHistoManipulator::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVHistoManipulator

//______________________________________________________________________________
void KVEventListMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEventListMaker.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      ktname.Streamer(R__b);
      kfname.Streamer(R__b);
      kbname.Streamer(R__b);
      R__b >> ktag_tree;
      R__b.CheckByteCount(R__s, R__c, KVEventListMaker::IsA());
   } else {
      R__c = R__b.WriteVersion(KVEventListMaker::IsA(), kTRUE);
      ktname.Streamer(R__b);
      kfname.Streamer(R__b);
      kbname.Streamer(R__b);
      R__b << ktag_tree;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEventListMaker(void *p) {
      return  p ? new(p) ::KVEventListMaker : new ::KVEventListMaker;
   }
   static void *newArray_KVEventListMaker(Long_t nElements, void *p) {
      return p ? new(p) ::KVEventListMaker[nElements] : new ::KVEventListMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEventListMaker(void *p) {
      delete ((::KVEventListMaker*)p);
   }
   static void deleteArray_KVEventListMaker(void *p) {
      delete [] ((::KVEventListMaker*)p);
   }
   static void destruct_KVEventListMaker(void *p) {
      typedef ::KVEventListMaker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVEventListMaker(TBuffer &buf, void *obj) {
      ((::KVEventListMaker*)obj)->::KVEventListMaker::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVEventListMaker

//______________________________________________________________________________
void KVUpdateChecker::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVUpdateChecker.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      fSourceDir.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVUpdateChecker::IsA());
   } else {
      R__c = R__b.WriteVersion(KVUpdateChecker::IsA(), kTRUE);
      fSourceDir.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVUpdateChecker(void *p) {
      delete ((::KVUpdateChecker*)p);
   }
   static void deleteArray_KVUpdateChecker(void *p) {
      delete [] ((::KVUpdateChecker*)p);
   }
   static void destruct_KVUpdateChecker(void *p) {
      typedef ::KVUpdateChecker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVUpdateChecker(TBuffer &buf, void *obj) {
      ((::KVUpdateChecker*)obj)->::KVUpdateChecker::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVUpdateChecker

//______________________________________________________________________________
void KVCVSUpdateChecker::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCVSUpdateChecker.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVUpdateChecker::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVCVSUpdateChecker::IsA());
   } else {
      R__c = R__b.WriteVersion(KVCVSUpdateChecker::IsA(), kTRUE);
      KVUpdateChecker::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCVSUpdateChecker(void *p) {
      return  p ? new(p) ::KVCVSUpdateChecker : new ::KVCVSUpdateChecker;
   }
   static void *newArray_KVCVSUpdateChecker(Long_t nElements, void *p) {
      return p ? new(p) ::KVCVSUpdateChecker[nElements] : new ::KVCVSUpdateChecker[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCVSUpdateChecker(void *p) {
      delete ((::KVCVSUpdateChecker*)p);
   }
   static void deleteArray_KVCVSUpdateChecker(void *p) {
      delete [] ((::KVCVSUpdateChecker*)p);
   }
   static void destruct_KVCVSUpdateChecker(void *p) {
      typedef ::KVCVSUpdateChecker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVCVSUpdateChecker(TBuffer &buf, void *obj) {
      ((::KVCVSUpdateChecker*)obj)->::KVCVSUpdateChecker::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVCVSUpdateChecker

//______________________________________________________________________________
void KVSystemFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSystemFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSystemFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSystemFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSystemFile(void *p) {
      return  p ? new(p) ::KVSystemFile : new ::KVSystemFile;
   }
   static void *newArray_KVSystemFile(Long_t nElements, void *p) {
      return p ? new(p) ::KVSystemFile[nElements] : new ::KVSystemFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSystemFile(void *p) {
      delete ((::KVSystemFile*)p);
   }
   static void deleteArray_KVSystemFile(void *p) {
      delete [] ((::KVSystemFile*)p);
   }
   static void destruct_KVSystemFile(void *p) {
      typedef ::KVSystemFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSystemFile

//______________________________________________________________________________
void KVSystemDirectory::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSystemDirectory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSystemDirectory::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSystemDirectory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSystemDirectory(void *p) {
      return  p ? new(p) ::KVSystemDirectory : new ::KVSystemDirectory;
   }
   static void *newArray_KVSystemDirectory(Long_t nElements, void *p) {
      return p ? new(p) ::KVSystemDirectory[nElements] : new ::KVSystemDirectory[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSystemDirectory(void *p) {
      delete ((::KVSystemDirectory*)p);
   }
   static void deleteArray_KVSystemDirectory(void *p) {
      delete [] ((::KVSystemDirectory*)p);
   }
   static void destruct_KVSystemDirectory(void *p) {
      typedef ::KVSystemDirectory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSystemDirectory

//______________________________________________________________________________
void KVEnv::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVEnv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVEnv::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVEnv::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVEnv(void *p) {
      return  p ? new(p) ::KVEnv : new ::KVEnv;
   }
   static void *newArray_KVEnv(Long_t nElements, void *p) {
      return p ? new(p) ::KVEnv[nElements] : new ::KVEnv[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVEnv(void *p) {
      delete ((::KVEnv*)p);
   }
   static void deleteArray_KVEnv(void *p) {
      delete [] ((::KVEnv*)p);
   }
   static void destruct_KVEnv(void *p) {
      typedef ::KVEnv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVEnv

//______________________________________________________________________________
void KVHistogram::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVHistogram.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVHistogram::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVHistogram::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVHistogram(void *p) {
      return  p ? new(p) ::KVHistogram : new ::KVHistogram;
   }
   static void *newArray_KVHistogram(Long_t nElements, void *p) {
      return p ? new(p) ::KVHistogram[nElements] : new ::KVHistogram[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVHistogram(void *p) {
      delete ((::KVHistogram*)p);
   }
   static void deleteArray_KVHistogram(void *p) {
      delete [] ((::KVHistogram*)p);
   }
   static void destruct_KVHistogram(void *p) {
      typedef ::KVHistogram current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVHistogram

//______________________________________________________________________________
void KVPosition::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPosition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPosition::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPosition::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPosition(void *p) {
      return  p ? new(p) ::KVPosition : new ::KVPosition;
   }
   static void *newArray_KVPosition(Long_t nElements, void *p) {
      return p ? new(p) ::KVPosition[nElements] : new ::KVPosition[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPosition(void *p) {
      delete ((::KVPosition*)p);
   }
   static void deleteArray_KVPosition(void *p) {
      delete [] ((::KVPosition*)p);
   }
   static void destruct_KVPosition(void *p) {
      typedef ::KVPosition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPosition

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIntegerList(void *p) {
      return  p ? new(p) ::KVIntegerList : new ::KVIntegerList;
   }
   static void *newArray_KVIntegerList(Long_t nElements, void *p) {
      return p ? new(p) ::KVIntegerList[nElements] : new ::KVIntegerList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIntegerList(void *p) {
      delete ((::KVIntegerList*)p);
   }
   static void deleteArray_KVIntegerList(void *p) {
      delete [] ((::KVIntegerList*)p);
   }
   static void destruct_KVIntegerList(void *p) {
      typedef ::KVIntegerList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIntegerList(TBuffer &buf, void *obj) {
      ((::KVIntegerList*)obj)->::KVIntegerList::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVIntegerList

//______________________________________________________________________________
void KVCouple::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCouple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVCouple::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVCouple::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCouple(void *p) {
      return  p ? new(p) ::KVCouple : new ::KVCouple;
   }
   static void *newArray_KVCouple(Long_t nElements, void *p) {
      return p ? new(p) ::KVCouple[nElements] : new ::KVCouple[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCouple(void *p) {
      delete ((::KVCouple*)p);
   }
   static void deleteArray_KVCouple(void *p) {
      delete [] ((::KVCouple*)p);
   }
   static void destruct_KVCouple(void *p) {
      typedef ::KVCouple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVCouple

//______________________________________________________________________________
void KVPartitionGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPartitionGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPartitionGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPartitionGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPartitionGenerator(void *p) {
      return  p ? new(p) ::KVPartitionGenerator : new ::KVPartitionGenerator;
   }
   static void *newArray_KVPartitionGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::KVPartitionGenerator[nElements] : new ::KVPartitionGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPartitionGenerator(void *p) {
      delete ((::KVPartitionGenerator*)p);
   }
   static void deleteArray_KVPartitionGenerator(void *p) {
      delete [] ((::KVPartitionGenerator*)p);
   }
   static void destruct_KVPartitionGenerator(void *p) {
      typedef ::KVPartitionGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPartitionGenerator

//______________________________________________________________________________
void KVPartition::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPartition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPartition::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPartition::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPartition(void *p) {
      return  p ? new(p) ::KVPartition : new ::KVPartition;
   }
   static void *newArray_KVPartition(Long_t nElements, void *p) {
      return p ? new(p) ::KVPartition[nElements] : new ::KVPartition[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPartition(void *p) {
      delete ((::KVPartition*)p);
   }
   static void deleteArray_KVPartition(void *p) {
      delete [] ((::KVPartition*)p);
   }
   static void destruct_KVPartition(void *p) {
      typedef ::KVPartition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPartition

//______________________________________________________________________________
void KVPartitionFromLeaf::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPartitionFromLeaf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPartitionFromLeaf::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPartitionFromLeaf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPartitionFromLeaf(void *p) {
      return  p ? new(p) ::KVPartitionFromLeaf : new ::KVPartitionFromLeaf;
   }
   static void *newArray_KVPartitionFromLeaf(Long_t nElements, void *p) {
      return p ? new(p) ::KVPartitionFromLeaf[nElements] : new ::KVPartitionFromLeaf[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPartitionFromLeaf(void *p) {
      delete ((::KVPartitionFromLeaf*)p);
   }
   static void deleteArray_KVPartitionFromLeaf(void *p) {
      delete [] ((::KVPartitionFromLeaf*)p);
   }
   static void destruct_KVPartitionFromLeaf(void *p) {
      typedef ::KVPartitionFromLeaf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPartitionFromLeaf

//______________________________________________________________________________
void KVPartitionList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPartitionList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPartitionList::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPartitionList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPartitionList(void *p) {
      return  p ? new(p) ::KVPartitionList : new ::KVPartitionList;
   }
   static void *newArray_KVPartitionList(Long_t nElements, void *p) {
      return p ? new(p) ::KVPartitionList[nElements] : new ::KVPartitionList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPartitionList(void *p) {
      delete ((::KVPartitionList*)p);
   }
   static void deleteArray_KVPartitionList(void *p) {
      delete [] ((::KVPartitionList*)p);
   }
   static void destruct_KVPartitionList(void *p) {
      typedef ::KVPartitionList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVPartitionList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVPartitionList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVPartitionList

//______________________________________________________________________________
void KVPartitionFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPartitionFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPartitionFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPartitionFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPartitionFunction(void *p) {
      return  p ? new(p) ::KVPartitionFunction : new ::KVPartitionFunction;
   }
   static void *newArray_KVPartitionFunction(Long_t nElements, void *p) {
      return p ? new(p) ::KVPartitionFunction[nElements] : new ::KVPartitionFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPartitionFunction(void *p) {
      delete ((::KVPartitionFunction*)p);
   }
   static void deleteArray_KVPartitionFunction(void *p) {
      delete [] ((::KVPartitionFunction*)p);
   }
   static void destruct_KVPartitionFunction(void *p) {
      typedef ::KVPartitionFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPartitionFunction

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetbase_Impl() {
    static const char* headers[] = {
"KVRungeKutta.h",
"KVDatime.h",
"KVPartition.h",
"KVNamedParameter.h",
"KVCouple.h",
"KVSystemDirectory.h",
"KVPartitionList.h",
"KVRList.h",
"KVDatedFileManager.h",
"KVClassMonitor.h",
"KVCVSUpdateChecker.h",
"KVBase.h",
"KVBQSLogReader.h",
"KVTarArchive.h",
"KVGELogReader.h",
"KVHistogram.h",
"KVMemoryChunk.h",
"KVLockfile.h",
"KVPartitionFunction.h",
"Hexa_t.h",
"KVValues.h",
"KVNameValueList.h",
"KVHistoManipulator.h",
"KVPosition.h",
"KVUnits.h",
"KVString.h",
"KVSeqCollection.h",
"Binary_t.h",
"KVColouredBase.h",
"KVUniqueNameList.h",
"KVUpdateChecker.h",
"KVDataBranchHandler.h",
"KVEnv.h",
"KVNumberList.h",
"KVIntegerList.h",
"KVEventListMaker.h",
"KVList.h",
"KVSystemFile.h",
"KVHashList.h",
"KVLogReader.h",
"KVFileReader.h",
"KVPartitionFromLeaf.h",
"KVMemoryPool.h",
"KVClassFactory.h",
"KVPartitionGenerator.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/base/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/base/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
template <class T> class __attribute__((annotate("$clingAutoload$Binary_t.h")))  Binary_t;

class __attribute__((annotate(R"ATTRDUMP(TString wrapper compatible with ROOT versions 3.10/02 onwards)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRungeKutta.h")))  KVString;
class __attribute__((annotate(R"ATTRDUMP(Adaptive step-size 4th order Runge-Kutta ODE integrator from Numerical Recipes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRungeKutta.h")))  KVRungeKutta;
class __attribute__((annotate(R"ATTRDUMP(a Hexadecimal number)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Hexa_t.h")))  Hexa_t;
class __attribute__((annotate(R"ATTRDUMP(A general-purpose list of parameters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVNameValueList;
class __attribute__((annotate(R"ATTRDUMP(Base class for all KaliVeda objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRungeKutta.h")))  KVBase;
class __attribute__((annotate(R"ATTRDUMP(A basic coloured object for coloured list views)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVColouredBase.h")))  KVColouredBase;
class __attribute__((annotate(R"ATTRDUMP(Factory for generating KaliVeda skeleton classes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVClassFactory.h")))  KVClassFactory;
class __attribute__((annotate(R"ATTRDUMP(KVClassFactory helper class - description of class method)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVClassFactory.h")))  KVClassMethod;
class __attribute__((annotate(R"ATTRDUMP(KVClassFactory helper class - description of class member variable)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVClassFactory.h")))  KVClassMember;
class __attribute__((annotate(R"ATTRDUMP(Track potential memory leaks)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVClassMonitor.h")))  KVClassMonitor;
class __attribute__((annotate(R"ATTRDUMP(KaliVeda extensions to ROOT collections)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVSeqCollection;
class __attribute__((annotate(R"ATTRDUMP(Handles TTree branches for storing member variables of classes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataBranchHandler.h")))  KVDataBranchHandler;
class __attribute__((annotate(R"ATTRDUMP(Extension of TDatime class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDatime.h")))  KVDatime;
class __attribute__((annotate(R"ATTRDUMP(Handles a set of different versions of files in a directory with the same base name and a timestamp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDatedFileManager.h")))  KVDatedFileManager;
class __attribute__((annotate(R"ATTRDUMP(Extended version of ROOT THashList)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVHashList;
class __attribute__((annotate(R"ATTRDUMP(Optimised list in which objects can only be placed once)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartitionList.h")))  KVUniqueNameList;
class __attribute__((annotate(R"ATTRDUMP(Extended version of ROOT TList)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDatedFileManager.h")))  KVList;
class __attribute__((annotate(R"ATTRDUMP(Interface to (Linux) system lockfile command)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRungeKutta.h")))  KVLockfile;
class __attribute__((annotate(R"ATTRDUMP(A generic parameter with a name and a value)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVNamedParameter;
class __attribute__((annotate(R"ATTRDUMP(Tool for reading CCIN2P3 batch logs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBQSLogReader.h")))  KVLogReader;
class __attribute__((annotate(R"ATTRDUMP(Read BQS log files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBQSLogReader.h")))  KVBQSLogReader;
class __attribute__((annotate(R"ATTRDUMP(Read GE (Grid Engine) log files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVGELogReader.h")))  KVGELogReader;
class __attribute__((annotate(R"ATTRDUMP(Memory chunk in pool)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMemoryChunk.h")))  KVMemoryChunk;
class __attribute__((annotate(R"ATTRDUMP(Memory pool)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMemoryPool.h")))  KVMemoryPool;
class __attribute__((annotate(R"ATTRDUMP(Strings used to represent a set of ranges of values)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNumberList.h")))  KVNumberList;
class __attribute__((annotate(R"ATTRDUMP(Manage the reading of file)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFileReader.h")))  KVFileReader;
class __attribute__((annotate(R"ATTRDUMP(Handle Operation on variable)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVValues;
class __attribute__((annotate(R"ATTRDUMP(KV wrapper for ROOT TRefArray class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRList.h")))  KVRList;
class __attribute__((annotate(R"ATTRDUMP(A filename with an SQL-format date extension which can be used to sort a list according to date)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDatedFileManager.h")))  KVSortableDatedFile;
class __attribute__((annotate(R"ATTRDUMP(Handles directories stored in .tgz archive files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTarArchive.h")))  KVTarArchive;
class __attribute__((annotate(R"ATTRDUMP(Propose differentes operations sur les histo)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHistoManipulator.h")))  KVHistoManipulator;
class __attribute__((annotate(R"ATTRDUMP(compute TEventList on trees)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEventListMaker.h")))  KVEventListMaker;
class __attribute__((annotate(R"ATTRDUMP(Checks local sources against version in a given repository and updates if necessary)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCVSUpdateChecker.h")))  KVUpdateChecker;
class __attribute__((annotate(R"ATTRDUMP(Checks local sources against CVS version and updates if necessary)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCVSUpdateChecker.h")))  KVCVSUpdateChecker;
class __attribute__((annotate(R"ATTRDUMP(TSystemFile with added info on file size etc.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSystemFile.h")))  KVSystemFile;
class __attribute__((annotate(R"ATTRDUMP(TSystemDirectory which uses KVSystemFile)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSystemDirectory.h")))  KVSystemDirectory;
class __attribute__((annotate(R"ATTRDUMP(child class of TEnv to allow the writing of comments in the file)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVEnv.h")))  KVEnv;
class __attribute__((annotate(R"ATTRDUMP(Wrapper for histograms used by KVTreeAnalyzer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVHistogram.h")))  KVHistogram;
class __attribute__((annotate(R"ATTRDUMP(Class handling geometry of detectors in a multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPosition.h")))  KVPosition;
class __attribute__((annotate(R"ATTRDUMP(Permet de gerer une liste de nombres entiers positifs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVIntegerList;
class __attribute__((annotate(R"ATTRDUMP(Handle binary decomposition of an integer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCouple.h")))  KVCouple;
class __attribute__((annotate(R"ATTRDUMP(Calcul numeriquement toutes les partitions d'un couple Ztot/Mtot donne)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartitionGenerator.h")))  KVPartitionGenerator;
class __attribute__((annotate(R"ATTRDUMP(Permet de gerer des partitions de nombres entiers et le calcul de grandeurs associees)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartition.h")))  KVPartition;
class __attribute__((annotate(R"ATTRDUMP(Derived form KVPartition to optimize filling from a tree)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartitionFromLeaf.h")))  KVPartitionFromLeaf;
class __attribute__((annotate(R"ATTRDUMP(Store KVIntegerList and increment its population, if one is already in the list)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartitionList.h")))  KVPartitionList;
class __attribute__((annotate(R"ATTRDUMP(Calculates number of partitions of A or (A,Z) into fragments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPartitionFunction.h")))  KVPartitionFunction;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVRungeKutta.h"
#include "KVDatime.h"
#include "KVPartition.h"
#include "KVNamedParameter.h"
#include "KVCouple.h"
#include "KVSystemDirectory.h"
#include "KVPartitionList.h"
#include "KVRList.h"
#include "KVDatedFileManager.h"
#include "KVClassMonitor.h"
#include "KVCVSUpdateChecker.h"
#include "KVBase.h"
#include "KVBQSLogReader.h"
#include "KVTarArchive.h"
#include "KVGELogReader.h"
#include "KVHistogram.h"
#include "KVMemoryChunk.h"
#include "KVLockfile.h"
#include "KVPartitionFunction.h"
#include "Hexa_t.h"
#include "KVValues.h"
#include "KVNameValueList.h"
#include "KVHistoManipulator.h"
#include "KVPosition.h"
#include "KVUnits.h"
#include "KVString.h"
#include "KVSeqCollection.h"
#include "Binary_t.h"
#include "KVColouredBase.h"
#include "KVUniqueNameList.h"
#include "KVUpdateChecker.h"
#include "KVDataBranchHandler.h"
#include "KVEnv.h"
#include "KVNumberList.h"
#include "KVIntegerList.h"
#include "KVEventListMaker.h"
#include "KVList.h"
#include "KVSystemFile.h"
#include "KVHashList.h"
#include "KVLogReader.h"
#include "KVFileReader.h"
#include "KVPartitionFromLeaf.h"
#include "KVMemoryPool.h"
#include "KVClassFactory.h"
#include "KVPartitionGenerator.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Binary_t<Long64_t>", payloadCode, "@",
"Binary_t<UChar_t>", payloadCode, "@",
"Binary_t<UInt_t>", payloadCode, "@",
"Binary_t<UShort_t>", payloadCode, "@",
"Binary_t<unsigned char>", payloadCode, "@",
"Binary_t<unsigned int>", payloadCode, "@",
"Binary_t<unsigned short>", payloadCode, "@",
"Hexa_t", payloadCode, "@",
"KVBQSLogReader", payloadCode, "@",
"KVBase", payloadCode, "@",
"KVBase::EKaliVedaBits", payloadCode, "@",
"KVCVSUpdateChecker", payloadCode, "@",
"KVClassFactory", payloadCode, "@",
"KVClassMember", payloadCode, "@",
"KVClassMethod", payloadCode, "@",
"KVClassMonitor", payloadCode, "@",
"KVColouredBase", payloadCode, "@",
"KVCouple", payloadCode, "@",
"KVDataBranchHandler", payloadCode, "@",
"KVDatedFileManager", payloadCode, "@",
"KVDatime", payloadCode, "@",
"KVEnv", payloadCode, "@",
"KVEventListMaker", payloadCode, "@",
"KVFileReader", payloadCode, "@",
"KVGELogReader", payloadCode, "@",
"KVHashList", payloadCode, "@",
"KVHistoManipulator", payloadCode, "@",
"KVHistogram", payloadCode, "@",
"KVIntegerList", payloadCode, "@",
"KVList", payloadCode, "@",
"KVLockfile", payloadCode, "@",
"KVLogReader", payloadCode, "@",
"KVMemoryChunk", payloadCode, "@",
"KVMemoryPool", payloadCode, "@",
"KVNameValueList", payloadCode, "@",
"KVNamedParameter", payloadCode, "@",
"KVNumberList", payloadCode, "@",
"KVPartition", payloadCode, "@",
"KVPartitionFromLeaf", payloadCode, "@",
"KVPartitionFunction", payloadCode, "@",
"KVPartitionGenerator", payloadCode, "@",
"KVPartitionList", payloadCode, "@",
"KVPosition", payloadCode, "@",
"KVRList", payloadCode, "@",
"KVRungeKutta", payloadCode, "@",
"KVSeqCollection", payloadCode, "@",
"KVSortableDatedFile", payloadCode, "@",
"KVString", payloadCode, "@",
"KVSystemDirectory", payloadCode, "@",
"KVSystemFile", payloadCode, "@",
"KVTarArchive", payloadCode, "@",
"KVUniqueNameList", payloadCode, "@",
"KVUpdateChecker", payloadCode, "@",
"KVValues", payloadCode, "@",
"gHistoManipulator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetbase",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetbase_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetbase_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetbase() {
  TriggerDictionaryInitialization_libKVMultiDetbase_Impl();
}
