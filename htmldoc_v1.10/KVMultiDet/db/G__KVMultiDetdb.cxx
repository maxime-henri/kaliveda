// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetdb

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
#include "KVDBRun.h"
#include "KVDataBase.h"
#include "KVDBRecord.h"
#include "KVDBSystem.h"
#include "KVDBParameterSet.h"
#include "KVRunListLine.h"
#include "KVDBKey.h"
#include "KVDBTable.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVDataBase(void *p = 0);
   static void *newArray_KVDataBase(Long_t size, void *p);
   static void delete_KVDataBase(void *p);
   static void deleteArray_KVDataBase(void *p);
   static void destruct_KVDataBase(void *p);
   static void streamer_KVDataBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataBase*)
   {
      ::KVDataBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataBase", ::KVDataBase::Class_Version(), "KVDataBase.h", 28,
                  typeid(::KVDataBase), DefineBehavior(ptr, ptr),
                  &::KVDataBase::Dictionary, isa_proxy, 16,
                  sizeof(::KVDataBase) );
      instance.SetNew(&new_KVDataBase);
      instance.SetNewArray(&newArray_KVDataBase);
      instance.SetDelete(&delete_KVDataBase);
      instance.SetDeleteArray(&deleteArray_KVDataBase);
      instance.SetDestructor(&destruct_KVDataBase);
      instance.SetStreamerFunc(&streamer_KVDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataBase*)
   {
      return GenerateInitInstanceLocal((::KVDataBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBKey(void *p = 0);
   static void *newArray_KVDBKey(Long_t size, void *p);
   static void delete_KVDBKey(void *p);
   static void deleteArray_KVDBKey(void *p);
   static void destruct_KVDBKey(void *p);
   static void streamer_KVDBKey(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBKey*)
   {
      ::KVDBKey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBKey >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBKey", ::KVDBKey::Class_Version(), "KVDBKey.h", 28,
                  typeid(::KVDBKey), DefineBehavior(ptr, ptr),
                  &::KVDBKey::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBKey) );
      instance.SetNew(&new_KVDBKey);
      instance.SetNewArray(&newArray_KVDBKey);
      instance.SetDelete(&delete_KVDBKey);
      instance.SetDeleteArray(&deleteArray_KVDBKey);
      instance.SetDestructor(&destruct_KVDBKey);
      instance.SetStreamerFunc(&streamer_KVDBKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBKey*)
   {
      return GenerateInitInstanceLocal((::KVDBKey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBKey*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBRecord(void *p = 0);
   static void *newArray_KVDBRecord(Long_t size, void *p);
   static void delete_KVDBRecord(void *p);
   static void deleteArray_KVDBRecord(void *p);
   static void destruct_KVDBRecord(void *p);
   static void streamer_KVDBRecord(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBRecord*)
   {
      ::KVDBRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBRecord", ::KVDBRecord::Class_Version(), "KVDBRecord.h", 28,
                  typeid(::KVDBRecord), DefineBehavior(ptr, ptr),
                  &::KVDBRecord::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBRecord) );
      instance.SetNew(&new_KVDBRecord);
      instance.SetNewArray(&newArray_KVDBRecord);
      instance.SetDelete(&delete_KVDBRecord);
      instance.SetDeleteArray(&deleteArray_KVDBRecord);
      instance.SetDestructor(&destruct_KVDBRecord);
      instance.SetStreamerFunc(&streamer_KVDBRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBRecord*)
   {
      return GenerateInitInstanceLocal((::KVDBRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBRecord*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBRun(void *p = 0);
   static void *newArray_KVDBRun(Long_t size, void *p);
   static void delete_KVDBRun(void *p);
   static void deleteArray_KVDBRun(void *p);
   static void destruct_KVDBRun(void *p);
   static void streamer_KVDBRun(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBRun*)
   {
      ::KVDBRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBRun", ::KVDBRun::Class_Version(), "KVDBRun.h", 35,
                  typeid(::KVDBRun), DefineBehavior(ptr, ptr),
                  &::KVDBRun::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBRun) );
      instance.SetNew(&new_KVDBRun);
      instance.SetNewArray(&newArray_KVDBRun);
      instance.SetDelete(&delete_KVDBRun);
      instance.SetDeleteArray(&deleteArray_KVDBRun);
      instance.SetDestructor(&destruct_KVDBRun);
      instance.SetStreamerFunc(&streamer_KVDBRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBRun*)
   {
      return GenerateInitInstanceLocal((::KVDBRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBRun*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBSystem(void *p = 0);
   static void *newArray_KVDBSystem(Long_t size, void *p);
   static void delete_KVDBSystem(void *p);
   static void deleteArray_KVDBSystem(void *p);
   static void destruct_KVDBSystem(void *p);
   static void streamer_KVDBSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBSystem*)
   {
      ::KVDBSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBSystem", ::KVDBSystem::Class_Version(), "KVDBSystem.h", 29,
                  typeid(::KVDBSystem), DefineBehavior(ptr, ptr),
                  &::KVDBSystem::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBSystem) );
      instance.SetNew(&new_KVDBSystem);
      instance.SetNewArray(&newArray_KVDBSystem);
      instance.SetDelete(&delete_KVDBSystem);
      instance.SetDeleteArray(&deleteArray_KVDBSystem);
      instance.SetDestructor(&destruct_KVDBSystem);
      instance.SetStreamerFunc(&streamer_KVDBSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBSystem*)
   {
      return GenerateInitInstanceLocal((::KVDBSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBSystem*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBTable(void *p = 0);
   static void *newArray_KVDBTable(Long_t size, void *p);
   static void delete_KVDBTable(void *p);
   static void deleteArray_KVDBTable(void *p);
   static void destruct_KVDBTable(void *p);
   static void streamer_KVDBTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBTable*)
   {
      ::KVDBTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBTable", ::KVDBTable::Class_Version(), "KVDBTable.h", 25,
                  typeid(::KVDBTable), DefineBehavior(ptr, ptr),
                  &::KVDBTable::Dictionary, isa_proxy, 16,
                  sizeof(::KVDBTable) );
      instance.SetNew(&new_KVDBTable);
      instance.SetNewArray(&newArray_KVDBTable);
      instance.SetDelete(&delete_KVDBTable);
      instance.SetDeleteArray(&deleteArray_KVDBTable);
      instance.SetDestructor(&destruct_KVDBTable);
      instance.SetStreamerFunc(&streamer_KVDBTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBTable*)
   {
      return GenerateInitInstanceLocal((::KVDBTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDBParameterSet(void *p = 0);
   static void *newArray_KVDBParameterSet(Long_t size, void *p);
   static void delete_KVDBParameterSet(void *p);
   static void deleteArray_KVDBParameterSet(void *p);
   static void destruct_KVDBParameterSet(void *p);
   static void streamer_KVDBParameterSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBParameterSet*)
   {
      ::KVDBParameterSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBParameterSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBParameterSet", ::KVDBParameterSet::Class_Version(), "KVDBParameterSet.h", 23,
                  typeid(::KVDBParameterSet), DefineBehavior(ptr, ptr),
                  &::KVDBParameterSet::Dictionary, isa_proxy, 17,
                  sizeof(::KVDBParameterSet) );
      instance.SetNew(&new_KVDBParameterSet);
      instance.SetNewArray(&newArray_KVDBParameterSet);
      instance.SetDelete(&delete_KVDBParameterSet);
      instance.SetDeleteArray(&deleteArray_KVDBParameterSet);
      instance.SetDestructor(&destruct_KVDBParameterSet);
      instance.SetStreamerFunc(&streamer_KVDBParameterSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBParameterSet*)
   {
      return GenerateInitInstanceLocal((::KVDBParameterSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBParameterSet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRunListLine(void *p = 0);
   static void *newArray_KVRunListLine(Long_t size, void *p);
   static void delete_KVRunListLine(void *p);
   static void deleteArray_KVRunListLine(void *p);
   static void destruct_KVRunListLine(void *p);
   static void streamer_KVRunListLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRunListLine*)
   {
      ::KVRunListLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRunListLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRunListLine", ::KVRunListLine::Class_Version(), "KVRunListLine.h", 13,
                  typeid(::KVRunListLine), DefineBehavior(ptr, ptr),
                  &::KVRunListLine::Dictionary, isa_proxy, 16,
                  sizeof(::KVRunListLine) );
      instance.SetNew(&new_KVRunListLine);
      instance.SetNewArray(&newArray_KVRunListLine);
      instance.SetDelete(&delete_KVRunListLine);
      instance.SetDeleteArray(&deleteArray_KVRunListLine);
      instance.SetDestructor(&destruct_KVRunListLine);
      instance.SetStreamerFunc(&streamer_KVRunListLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRunListLine*)
   {
      return GenerateInitInstanceLocal((::KVRunListLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRunListLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVDataBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataBase::Class_Name()
{
   return "KVDataBase";
}

//______________________________________________________________________________
const char *KVDataBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBKey::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBKey::Class_Name()
{
   return "KVDBKey";
}

//______________________________________________________________________________
const char *KVDBKey::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBKey*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBKey::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBKey*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBKey::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBKey*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBKey::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBKey*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBRecord::Class_Name()
{
   return "KVDBRecord";
}

//______________________________________________________________________________
const char *KVDBRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBRecord*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBRun::Class_Name()
{
   return "KVDBRun";
}

//______________________________________________________________________________
const char *KVDBRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBSystem::Class_Name()
{
   return "KVDBSystem";
}

//______________________________________________________________________________
const char *KVDBSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBTable::Class_Name()
{
   return "KVDBTable";
}

//______________________________________________________________________________
const char *KVDBTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBParameterSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBParameterSet::Class_Name()
{
   return "KVDBParameterSet";
}

//______________________________________________________________________________
const char *KVDBParameterSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBParameterSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBParameterSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBParameterSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBParameterSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBParameterSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBParameterSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBParameterSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRunListLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRunListLine::Class_Name()
{
   return "KVRunListLine";
}

//______________________________________________________________________________
const char *KVRunListLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRunListLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRunListLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRunListLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRunListLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRunListLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRunListLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRunListLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVDataBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFolder::Streamer(R__b);
      fDataSet.Streamer(R__b);
      fDataSetDir.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVDataBase::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDataBase::IsA(), kTRUE);
      TFolder::Streamer(R__b);
      fDataSet.Streamer(R__b);
      fDataSetDir.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDataBase(void *p) {
      return  p ? new(p) ::KVDataBase : new ::KVDataBase;
   }
   static void *newArray_KVDataBase(Long_t nElements, void *p) {
      return p ? new(p) ::KVDataBase[nElements] : new ::KVDataBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDataBase(void *p) {
      delete ((::KVDataBase*)p);
   }
   static void deleteArray_KVDataBase(void *p) {
      delete [] ((::KVDataBase*)p);
   }
   static void destruct_KVDataBase(void *p) {
      typedef ::KVDataBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDataBase(TBuffer &buf, void *obj) {
      ((::KVDataBase*)obj)->::KVDataBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDataBase

//______________________________________________________________________________
void KVDBKey::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBKey.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVBase::Streamer(R__b);
      R__b >> fIsUnique;
      R__b >> fSingle;
      fRecord.Streamer(R__b);
      R__b >> fLinks;
      R__b.CheckByteCount(R__s, R__c, KVDBKey::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBKey::IsA(), kTRUE);
      KVBase::Streamer(R__b);
      R__b << fIsUnique;
      R__b << fSingle;
      fRecord.Streamer(R__b);
      R__b << fLinks;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBKey(void *p) {
      return  p ? new(p) ::KVDBKey : new ::KVDBKey;
   }
   static void *newArray_KVDBKey(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBKey[nElements] : new ::KVDBKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBKey(void *p) {
      delete ((::KVDBKey*)p);
   }
   static void deleteArray_KVDBKey(void *p) {
      delete [] ((::KVDBKey*)p);
   }
   static void destruct_KVDBKey(void *p) {
      typedef ::KVDBKey current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBKey(TBuffer &buf, void *obj) {
      ((::KVDBKey*)obj)->::KVDBKey::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBKey

//______________________________________________________________________________
void KVDBRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBRecord.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFolder::Streamer(R__b);
      fFullPathTable.Streamer(R__b);
      R__b >> fNumber;
      R__b.CheckByteCount(R__s, R__c, KVDBRecord::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBRecord::IsA(), kTRUE);
      TFolder::Streamer(R__b);
      fFullPathTable.Streamer(R__b);
      R__b << fNumber;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBRecord(void *p) {
      return  p ? new(p) ::KVDBRecord : new ::KVDBRecord;
   }
   static void *newArray_KVDBRecord(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBRecord[nElements] : new ::KVDBRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBRecord(void *p) {
      delete ((::KVDBRecord*)p);
   }
   static void deleteArray_KVDBRecord(void *p) {
      delete [] ((::KVDBRecord*)p);
   }
   static void destruct_KVDBRecord(void *p) {
      typedef ::KVDBRecord current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBRecord(TBuffer &buf, void *obj) {
      ((::KVDBRecord*)obj)->::KVDBRecord::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBRecord

//______________________________________________________________________________
void KVDBRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBRun.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRecord::Streamer(R__b);
      fQObject.Streamer(R__b);
      fParameters.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVDBRun::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBRun::IsA(), kTRUE);
      KVDBRecord::Streamer(R__b);
      fQObject.Streamer(R__b);
      fParameters.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBRun(void *p) {
      return  p ? new(p) ::KVDBRun : new ::KVDBRun;
   }
   static void *newArray_KVDBRun(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBRun[nElements] : new ::KVDBRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBRun(void *p) {
      delete ((::KVDBRun*)p);
   }
   static void deleteArray_KVDBRun(void *p) {
      delete [] ((::KVDBRun*)p);
   }
   static void destruct_KVDBRun(void *p) {
      typedef ::KVDBRun current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBRun(TBuffer &buf, void *obj) {
      ((::KVDBRun*)obj)->::KVDBRun::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBRun

//______________________________________________________________________________
void KVDBSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBSystem.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRecord::Streamer(R__b);
      R__b >> fTarget;
      R__b >> fZbeam;
      R__b >> fAbeam;
      R__b >> fZtarget;
      R__b >> fAtarget;
      R__b >> fEbeam;
      R__b.CheckByteCount(R__s, R__c, KVDBSystem::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBSystem::IsA(), kTRUE);
      KVDBRecord::Streamer(R__b);
      R__b << fTarget;
      R__b << fZbeam;
      R__b << fAbeam;
      R__b << fZtarget;
      R__b << fAtarget;
      R__b << fEbeam;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBSystem(void *p) {
      return  p ? new(p) ::KVDBSystem : new ::KVDBSystem;
   }
   static void *newArray_KVDBSystem(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBSystem[nElements] : new ::KVDBSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBSystem(void *p) {
      delete ((::KVDBSystem*)p);
   }
   static void deleteArray_KVDBSystem(void *p) {
      delete [] ((::KVDBSystem*)p);
   }
   static void destruct_KVDBSystem(void *p) {
      typedef ::KVDBSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBSystem(TBuffer &buf, void *obj) {
      ((::KVDBSystem*)obj)->::KVDBSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBSystem

//______________________________________________________________________________
void KVDBTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBTable.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFolder::Streamer(R__b);
      R__b >> fIsUnique;
      fFullPath.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVDBTable::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDBTable::IsA(), kTRUE);
      TFolder::Streamer(R__b);
      R__b << fIsUnique;
      fFullPath.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBTable(void *p) {
      return  p ? new(p) ::KVDBTable : new ::KVDBTable;
   }
   static void *newArray_KVDBTable(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBTable[nElements] : new ::KVDBTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBTable(void *p) {
      delete ((::KVDBTable*)p);
   }
   static void deleteArray_KVDBTable(void *p) {
      delete [] ((::KVDBTable*)p);
   }
   static void destruct_KVDBTable(void *p) {
      typedef ::KVDBTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBTable(TBuffer &buf, void *obj) {
      ((::KVDBTable*)obj)->::KVDBTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDBParameterSet(void *p) {
      return  p ? new(p) ::KVDBParameterSet : new ::KVDBParameterSet;
   }
   static void *newArray_KVDBParameterSet(Long_t nElements, void *p) {
      return p ? new(p) ::KVDBParameterSet[nElements] : new ::KVDBParameterSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDBParameterSet(void *p) {
      delete ((::KVDBParameterSet*)p);
   }
   static void deleteArray_KVDBParameterSet(void *p) {
      delete [] ((::KVDBParameterSet*)p);
   }
   static void destruct_KVDBParameterSet(void *p) {
      typedef ::KVDBParameterSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDBParameterSet(TBuffer &buf, void *obj) {
      ((::KVDBParameterSet*)obj)->::KVDBParameterSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDBParameterSet

//______________________________________________________________________________
void KVRunListLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRunListLine.

   ::Error("KVRunListLine::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRunListLine(void *p) {
      return  p ? new(p) ::KVRunListLine : new ::KVRunListLine;
   }
   static void *newArray_KVRunListLine(Long_t nElements, void *p) {
      return p ? new(p) ::KVRunListLine[nElements] : new ::KVRunListLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRunListLine(void *p) {
      delete ((::KVRunListLine*)p);
   }
   static void deleteArray_KVRunListLine(void *p) {
      delete [] ((::KVRunListLine*)p);
   }
   static void destruct_KVRunListLine(void *p) {
      typedef ::KVRunListLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVRunListLine(TBuffer &buf, void *obj) {
      ((::KVRunListLine*)obj)->::KVRunListLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVRunListLine

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetdb_Impl() {
    static const char* headers[] = {
"KVDBRun.h",
"KVDataBase.h",
"KVDBRecord.h",
"KVDBSystem.h",
"KVDBParameterSet.h",
"KVRunListLine.h",
"KVDBKey.h",
"KVDBTable.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/db/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/db/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base Class for a database of parameters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDataBase;
class __attribute__((annotate(R"ATTRDUMP(Key in a Record)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDBKey;
class __attribute__((annotate(R"ATTRDUMP(Base Class for a record)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDBRecord;
class __attribute__((annotate(R"ATTRDUMP(Base class for an experiment run)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDBRun;
class __attribute__((annotate(R"ATTRDUMP(System class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDBSystem;
class __attribute__((annotate(R"ATTRDUMP(Table object for database)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBRun.h")))  KVDBTable;
class __attribute__((annotate(R"ATTRDUMP(Set of parameters for calibration)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBParameterSet.h")))  KVDBParameterSet;
class __attribute__((annotate(R"ATTRDUMP(Base class for reading runlist files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRunListLine.h")))  KVRunListLine;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVDBRun.h"
#include "KVDataBase.h"
#include "KVDBRecord.h"
#include "KVDBSystem.h"
#include "KVDBParameterSet.h"
#include "KVRunListLine.h"
#include "KVDBKey.h"
#include "KVDBTable.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDBKey", payloadCode, "@",
"KVDBParameterSet", payloadCode, "@",
"KVDBRecord", payloadCode, "@",
"KVDBRun", payloadCode, "@",
"KVDBSystem", payloadCode, "@",
"KVDBTable", payloadCode, "@",
"KVDataBase", payloadCode, "@",
"KVRunListLine", payloadCode, "@",
"gDataBase", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetdb",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetdb_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetdb_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetdb() {
  TriggerDictionaryInitialization_libKVMultiDetdb_Impl();
}
