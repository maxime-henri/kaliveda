// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSgeometry

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
#include "KVSiliconVamos.h"
#include "DriftChamber.h"
#include "KVSpectroDetector.h"
#include "IonisationChamber.h"
#include "KVCsIVamos.h"
#include "Sive503.h"
#include "IonisationChamberv.h"
#include "DriftChamberv.h"
#include "SeD12v.h"
#include "PlaneAbsorber.h"
#include "Siv.h"
#include "SeDv.h"
#include "CsIv.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_DriftChamberv(void *p);
   static void deleteArray_DriftChamberv(void *p);
   static void destruct_DriftChamberv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DriftChamberv*)
   {
      ::DriftChamberv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DriftChamberv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DriftChamberv", ::DriftChamberv::Class_Version(), "DriftChamberv.h", 11,
                  typeid(::DriftChamberv), DefineBehavior(ptr, ptr),
                  &::DriftChamberv::Dictionary, isa_proxy, 4,
                  sizeof(::DriftChamberv) );
      instance.SetDelete(&delete_DriftChamberv);
      instance.SetDeleteArray(&deleteArray_DriftChamberv);
      instance.SetDestructor(&destruct_DriftChamberv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DriftChamberv*)
   {
      return GenerateInitInstanceLocal((::DriftChamberv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DriftChamberv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_IonisationChamberv(void *p);
   static void deleteArray_IonisationChamberv(void *p);
   static void destruct_IonisationChamberv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IonisationChamberv*)
   {
      ::IonisationChamberv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IonisationChamberv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IonisationChamberv", ::IonisationChamberv::Class_Version(), "IonisationChamberv.h", 10,
                  typeid(::IonisationChamberv), DefineBehavior(ptr, ptr),
                  &::IonisationChamberv::Dictionary, isa_proxy, 4,
                  sizeof(::IonisationChamberv) );
      instance.SetDelete(&delete_IonisationChamberv);
      instance.SetDeleteArray(&deleteArray_IonisationChamberv);
      instance.SetDestructor(&destruct_IonisationChamberv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IonisationChamberv*)
   {
      return GenerateInitInstanceLocal((::IonisationChamberv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IonisationChamberv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *DriftChamber_Dictionary();
   static void DriftChamber_TClassManip(TClass*);
   static void *new_DriftChamber(void *p = 0);
   static void *newArray_DriftChamber(Long_t size, void *p);
   static void delete_DriftChamber(void *p);
   static void deleteArray_DriftChamber(void *p);
   static void destruct_DriftChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DriftChamber*)
   {
      ::DriftChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DriftChamber));
      static ::ROOT::TGenericClassInfo 
         instance("DriftChamber", "DriftChamber.h", 18,
                  typeid(::DriftChamber), DefineBehavior(ptr, ptr),
                  &DriftChamber_Dictionary, isa_proxy, 4,
                  sizeof(::DriftChamber) );
      instance.SetNew(&new_DriftChamber);
      instance.SetNewArray(&newArray_DriftChamber);
      instance.SetDelete(&delete_DriftChamber);
      instance.SetDeleteArray(&deleteArray_DriftChamber);
      instance.SetDestructor(&destruct_DriftChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DriftChamber*)
   {
      return GenerateInitInstanceLocal((::DriftChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DriftChamber*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DriftChamber_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DriftChamber*)0x0)->GetClass();
      DriftChamber_TClassManip(theClass);
   return theClass;
   }

   static void DriftChamber_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *IonisationChamber_Dictionary();
   static void IonisationChamber_TClassManip(TClass*);
   static void *new_IonisationChamber(void *p = 0);
   static void *newArray_IonisationChamber(Long_t size, void *p);
   static void delete_IonisationChamber(void *p);
   static void deleteArray_IonisationChamber(void *p);
   static void destruct_IonisationChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IonisationChamber*)
   {
      ::IonisationChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IonisationChamber));
      static ::ROOT::TGenericClassInfo 
         instance("IonisationChamber", "IonisationChamber.h", 18,
                  typeid(::IonisationChamber), DefineBehavior(ptr, ptr),
                  &IonisationChamber_Dictionary, isa_proxy, 4,
                  sizeof(::IonisationChamber) );
      instance.SetNew(&new_IonisationChamber);
      instance.SetNewArray(&newArray_IonisationChamber);
      instance.SetDelete(&delete_IonisationChamber);
      instance.SetDeleteArray(&deleteArray_IonisationChamber);
      instance.SetDestructor(&destruct_IonisationChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IonisationChamber*)
   {
      return GenerateInitInstanceLocal((::IonisationChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IonisationChamber*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IonisationChamber_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IonisationChamber*)0x0)->GetClass();
      IonisationChamber_TClassManip(theClass);
   return theClass;
   }

   static void IonisationChamber_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_SeDv(void *p);
   static void deleteArray_SeDv(void *p);
   static void destruct_SeDv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SeDv*)
   {
      ::SeDv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SeDv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SeDv", ::SeDv::Class_Version(), "SeDv.h", 10,
                  typeid(::SeDv), DefineBehavior(ptr, ptr),
                  &::SeDv::Dictionary, isa_proxy, 4,
                  sizeof(::SeDv) );
      instance.SetDelete(&delete_SeDv);
      instance.SetDeleteArray(&deleteArray_SeDv);
      instance.SetDestructor(&destruct_SeDv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SeDv*)
   {
      return GenerateInitInstanceLocal((::SeDv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SeDv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SeD12v(void *p);
   static void deleteArray_SeD12v(void *p);
   static void destruct_SeD12v(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SeD12v*)
   {
      ::SeD12v *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SeD12v >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SeD12v", ::SeD12v::Class_Version(), "SeD12v.h", 10,
                  typeid(::SeD12v), DefineBehavior(ptr, ptr),
                  &::SeD12v::Dictionary, isa_proxy, 4,
                  sizeof(::SeD12v) );
      instance.SetDelete(&delete_SeD12v);
      instance.SetDeleteArray(&deleteArray_SeD12v);
      instance.SetDestructor(&destruct_SeD12v);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SeD12v*)
   {
      return GenerateInitInstanceLocal((::SeD12v*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SeD12v*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Siv(void *p);
   static void deleteArray_Siv(void *p);
   static void destruct_Siv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Siv*)
   {
      ::Siv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Siv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Siv", ::Siv::Class_Version(), "Siv.h", 10,
                  typeid(::Siv), DefineBehavior(ptr, ptr),
                  &::Siv::Dictionary, isa_proxy, 4,
                  sizeof(::Siv) );
      instance.SetDelete(&delete_Siv);
      instance.SetDeleteArray(&deleteArray_Siv);
      instance.SetDestructor(&destruct_Siv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Siv*)
   {
      return GenerateInitInstanceLocal((::Siv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Siv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *Sive503_Dictionary();
   static void Sive503_TClassManip(TClass*);
   static void delete_Sive503(void *p);
   static void deleteArray_Sive503(void *p);
   static void destruct_Sive503(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Sive503*)
   {
      ::Sive503 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Sive503));
      static ::ROOT::TGenericClassInfo 
         instance("Sive503", "Sive503.h", 13,
                  typeid(::Sive503), DefineBehavior(ptr, ptr),
                  &Sive503_Dictionary, isa_proxy, 4,
                  sizeof(::Sive503) );
      instance.SetDelete(&delete_Sive503);
      instance.SetDeleteArray(&deleteArray_Sive503);
      instance.SetDestructor(&destruct_Sive503);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Sive503*)
   {
      return GenerateInitInstanceLocal((::Sive503*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Sive503*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Sive503_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Sive503*)0x0)->GetClass();
      Sive503_TClassManip(theClass);
   return theClass;
   }

   static void Sive503_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_CsIv(void *p);
   static void deleteArray_CsIv(void *p);
   static void destruct_CsIv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CsIv*)
   {
      ::CsIv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CsIv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CsIv", ::CsIv::Class_Version(), "CsIv.h", 15,
                  typeid(::CsIv), DefineBehavior(ptr, ptr),
                  &::CsIv::Dictionary, isa_proxy, 4,
                  sizeof(::CsIv) );
      instance.SetDelete(&delete_CsIv);
      instance.SetDeleteArray(&deleteArray_CsIv);
      instance.SetDestructor(&destruct_CsIv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CsIv*)
   {
      return GenerateInitInstanceLocal((::CsIv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CsIv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCsIVamos(void *p = 0);
   static void *newArray_KVCsIVamos(Long_t size, void *p);
   static void delete_KVCsIVamos(void *p);
   static void deleteArray_KVCsIVamos(void *p);
   static void destruct_KVCsIVamos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCsIVamos*)
   {
      ::KVCsIVamos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCsIVamos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCsIVamos", ::KVCsIVamos::Class_Version(), "KVCsIVamos.h", 15,
                  typeid(::KVCsIVamos), DefineBehavior(ptr, ptr),
                  &::KVCsIVamos::Dictionary, isa_proxy, 4,
                  sizeof(::KVCsIVamos) );
      instance.SetNew(&new_KVCsIVamos);
      instance.SetNewArray(&newArray_KVCsIVamos);
      instance.SetDelete(&delete_KVCsIVamos);
      instance.SetDeleteArray(&deleteArray_KVCsIVamos);
      instance.SetDestructor(&destruct_KVCsIVamos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCsIVamos*)
   {
      return GenerateInitInstanceLocal((::KVCsIVamos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCsIVamos*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSiliconVamos(void *p = 0);
   static void *newArray_KVSiliconVamos(Long_t size, void *p);
   static void delete_KVSiliconVamos(void *p);
   static void deleteArray_KVSiliconVamos(void *p);
   static void destruct_KVSiliconVamos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSiliconVamos*)
   {
      ::KVSiliconVamos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSiliconVamos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSiliconVamos", ::KVSiliconVamos::Class_Version(), "KVSiliconVamos.h", 15,
                  typeid(::KVSiliconVamos), DefineBehavior(ptr, ptr),
                  &::KVSiliconVamos::Dictionary, isa_proxy, 4,
                  sizeof(::KVSiliconVamos) );
      instance.SetNew(&new_KVSiliconVamos);
      instance.SetNewArray(&newArray_KVSiliconVamos);
      instance.SetDelete(&delete_KVSiliconVamos);
      instance.SetDeleteArray(&deleteArray_KVSiliconVamos);
      instance.SetDestructor(&destruct_KVSiliconVamos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSiliconVamos*)
   {
      return GenerateInitInstanceLocal((::KVSiliconVamos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSiliconVamos*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSpectroDetector(void *p = 0);
   static void *newArray_KVSpectroDetector(Long_t size, void *p);
   static void delete_KVSpectroDetector(void *p);
   static void deleteArray_KVSpectroDetector(void *p);
   static void destruct_KVSpectroDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSpectroDetector*)
   {
      ::KVSpectroDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSpectroDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSpectroDetector", ::KVSpectroDetector::Class_Version(), "KVSpectroDetector.h", 17,
                  typeid(::KVSpectroDetector), DefineBehavior(ptr, ptr),
                  &::KVSpectroDetector::Dictionary, isa_proxy, 4,
                  sizeof(::KVSpectroDetector) );
      instance.SetNew(&new_KVSpectroDetector);
      instance.SetNewArray(&newArray_KVSpectroDetector);
      instance.SetDelete(&delete_KVSpectroDetector);
      instance.SetDeleteArray(&deleteArray_KVSpectroDetector);
      instance.SetDestructor(&destruct_KVSpectroDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSpectroDetector*)
   {
      return GenerateInitInstanceLocal((::KVSpectroDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSpectroDetector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr DriftChamberv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DriftChamberv::Class_Name()
{
   return "DriftChamberv";
}

//______________________________________________________________________________
const char *DriftChamberv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DriftChamberv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DriftChamberv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DriftChamberv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DriftChamberv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DriftChamberv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DriftChamberv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DriftChamberv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IonisationChamberv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IonisationChamberv::Class_Name()
{
   return "IonisationChamberv";
}

//______________________________________________________________________________
const char *IonisationChamberv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IonisationChamberv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IonisationChamberv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IonisationChamberv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IonisationChamberv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IonisationChamberv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IonisationChamberv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IonisationChamberv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SeDv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SeDv::Class_Name()
{
   return "SeDv";
}

//______________________________________________________________________________
const char *SeDv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SeDv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SeDv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SeDv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SeDv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SeDv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SeDv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SeDv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SeD12v::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SeD12v::Class_Name()
{
   return "SeD12v";
}

//______________________________________________________________________________
const char *SeD12v::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SeD12v*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SeD12v::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SeD12v*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SeD12v::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SeD12v*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SeD12v::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SeD12v*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Siv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Siv::Class_Name()
{
   return "Siv";
}

//______________________________________________________________________________
const char *Siv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Siv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Siv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Siv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Siv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Siv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Siv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Siv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CsIv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CsIv::Class_Name()
{
   return "CsIv";
}

//______________________________________________________________________________
const char *CsIv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsIv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CsIv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsIv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CsIv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsIv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CsIv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsIv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCsIVamos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCsIVamos::Class_Name()
{
   return "KVCsIVamos";
}

//______________________________________________________________________________
const char *KVCsIVamos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsIVamos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCsIVamos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCsIVamos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCsIVamos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsIVamos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCsIVamos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCsIVamos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSiliconVamos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSiliconVamos::Class_Name()
{
   return "KVSiliconVamos";
}

//______________________________________________________________________________
const char *KVSiliconVamos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiliconVamos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSiliconVamos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSiliconVamos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSiliconVamos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiliconVamos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSiliconVamos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSiliconVamos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSpectroDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSpectroDetector::Class_Name()
{
   return "KVSpectroDetector";
}

//______________________________________________________________________________
const char *KVSpectroDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpectroDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSpectroDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpectroDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSpectroDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpectroDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSpectroDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpectroDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void DriftChamberv::Streamer(TBuffer &R__b)
{
   // Stream an object of class DriftChamberv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DriftChamberv::Class(),this);
   } else {
      R__b.WriteClassBuffer(DriftChamberv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DriftChamberv(void *p) {
      delete ((::DriftChamberv*)p);
   }
   static void deleteArray_DriftChamberv(void *p) {
      delete [] ((::DriftChamberv*)p);
   }
   static void destruct_DriftChamberv(void *p) {
      typedef ::DriftChamberv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DriftChamberv

//______________________________________________________________________________
void IonisationChamberv::Streamer(TBuffer &R__b)
{
   // Stream an object of class IonisationChamberv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IonisationChamberv::Class(),this);
   } else {
      R__b.WriteClassBuffer(IonisationChamberv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_IonisationChamberv(void *p) {
      delete ((::IonisationChamberv*)p);
   }
   static void deleteArray_IonisationChamberv(void *p) {
      delete [] ((::IonisationChamberv*)p);
   }
   static void destruct_IonisationChamberv(void *p) {
      typedef ::IonisationChamberv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IonisationChamberv

namespace ROOT {
   // Wrappers around operator new
   static void *new_DriftChamber(void *p) {
      return  p ? new(p) ::DriftChamber : new ::DriftChamber;
   }
   static void *newArray_DriftChamber(Long_t nElements, void *p) {
      return p ? new(p) ::DriftChamber[nElements] : new ::DriftChamber[nElements];
   }
   // Wrapper around operator delete
   static void delete_DriftChamber(void *p) {
      delete ((::DriftChamber*)p);
   }
   static void deleteArray_DriftChamber(void *p) {
      delete [] ((::DriftChamber*)p);
   }
   static void destruct_DriftChamber(void *p) {
      typedef ::DriftChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DriftChamber

namespace ROOT {
   // Wrappers around operator new
   static void *new_IonisationChamber(void *p) {
      return  p ? new(p) ::IonisationChamber : new ::IonisationChamber;
   }
   static void *newArray_IonisationChamber(Long_t nElements, void *p) {
      return p ? new(p) ::IonisationChamber[nElements] : new ::IonisationChamber[nElements];
   }
   // Wrapper around operator delete
   static void delete_IonisationChamber(void *p) {
      delete ((::IonisationChamber*)p);
   }
   static void deleteArray_IonisationChamber(void *p) {
      delete [] ((::IonisationChamber*)p);
   }
   static void destruct_IonisationChamber(void *p) {
      typedef ::IonisationChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IonisationChamber

//______________________________________________________________________________
void SeDv::Streamer(TBuffer &R__b)
{
   // Stream an object of class SeDv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SeDv::Class(),this);
   } else {
      R__b.WriteClassBuffer(SeDv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SeDv(void *p) {
      delete ((::SeDv*)p);
   }
   static void deleteArray_SeDv(void *p) {
      delete [] ((::SeDv*)p);
   }
   static void destruct_SeDv(void *p) {
      typedef ::SeDv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SeDv

//______________________________________________________________________________
void SeD12v::Streamer(TBuffer &R__b)
{
   // Stream an object of class SeD12v.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SeD12v::Class(),this);
   } else {
      R__b.WriteClassBuffer(SeD12v::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SeD12v(void *p) {
      delete ((::SeD12v*)p);
   }
   static void deleteArray_SeD12v(void *p) {
      delete [] ((::SeD12v*)p);
   }
   static void destruct_SeD12v(void *p) {
      typedef ::SeD12v current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SeD12v

//______________________________________________________________________________
void Siv::Streamer(TBuffer &R__b)
{
   // Stream an object of class Siv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Siv::Class(),this);
   } else {
      R__b.WriteClassBuffer(Siv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Siv(void *p) {
      delete ((::Siv*)p);
   }
   static void deleteArray_Siv(void *p) {
      delete [] ((::Siv*)p);
   }
   static void destruct_Siv(void *p) {
      typedef ::Siv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Siv

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Sive503(void *p) {
      delete ((::Sive503*)p);
   }
   static void deleteArray_Sive503(void *p) {
      delete [] ((::Sive503*)p);
   }
   static void destruct_Sive503(void *p) {
      typedef ::Sive503 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Sive503

//______________________________________________________________________________
void CsIv::Streamer(TBuffer &R__b)
{
   // Stream an object of class CsIv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CsIv::Class(),this);
   } else {
      R__b.WriteClassBuffer(CsIv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CsIv(void *p) {
      delete ((::CsIv*)p);
   }
   static void deleteArray_CsIv(void *p) {
      delete [] ((::CsIv*)p);
   }
   static void destruct_CsIv(void *p) {
      typedef ::CsIv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CsIv

//______________________________________________________________________________
void KVCsIVamos::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCsIVamos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVCsIVamos::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVCsIVamos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCsIVamos(void *p) {
      return  p ? new(p) ::KVCsIVamos : new ::KVCsIVamos;
   }
   static void *newArray_KVCsIVamos(Long_t nElements, void *p) {
      return p ? new(p) ::KVCsIVamos[nElements] : new ::KVCsIVamos[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCsIVamos(void *p) {
      delete ((::KVCsIVamos*)p);
   }
   static void deleteArray_KVCsIVamos(void *p) {
      delete [] ((::KVCsIVamos*)p);
   }
   static void destruct_KVCsIVamos(void *p) {
      typedef ::KVCsIVamos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVCsIVamos

//______________________________________________________________________________
void KVSiliconVamos::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSiliconVamos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSiliconVamos::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSiliconVamos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSiliconVamos(void *p) {
      return  p ? new(p) ::KVSiliconVamos : new ::KVSiliconVamos;
   }
   static void *newArray_KVSiliconVamos(Long_t nElements, void *p) {
      return p ? new(p) ::KVSiliconVamos[nElements] : new ::KVSiliconVamos[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSiliconVamos(void *p) {
      delete ((::KVSiliconVamos*)p);
   }
   static void deleteArray_KVSiliconVamos(void *p) {
      delete [] ((::KVSiliconVamos*)p);
   }
   static void destruct_KVSiliconVamos(void *p) {
      typedef ::KVSiliconVamos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSiliconVamos

//______________________________________________________________________________
void KVSpectroDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSpectroDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSpectroDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSpectroDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSpectroDetector(void *p) {
      return  p ? new(p) ::KVSpectroDetector : new ::KVSpectroDetector;
   }
   static void *newArray_KVSpectroDetector(Long_t nElements, void *p) {
      return p ? new(p) ::KVSpectroDetector[nElements] : new ::KVSpectroDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSpectroDetector(void *p) {
      delete ((::KVSpectroDetector*)p);
   }
   static void deleteArray_KVSpectroDetector(void *p) {
      delete [] ((::KVSpectroDetector*)p);
   }
   static void destruct_KVSpectroDetector(void *p) {
      typedef ::KVSpectroDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSpectroDetector

namespace {
  void TriggerDictionaryInitialization_libVAMOSgeometry_Impl() {
    static const char* headers[] = {
"KVSiliconVamos.h",
"DriftChamber.h",
"KVSpectroDetector.h",
"IonisationChamber.h",
"KVCsIVamos.h",
"Sive503.h",
"IonisationChamberv.h",
"DriftChamberv.h",
"SeD12v.h",
"PlaneAbsorber.h",
"Siv.h",
"SeDv.h",
"CsIv.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/geometry/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/base",
"/home/john/software/sources/kaliveda.git/VAMOS/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/gui",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
"/home/john/software/sources/kaliveda.git/KVIndra/analysis",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/geometry/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$DriftChamberv.h")))  DriftChamberv;
class __attribute__((annotate("$clingAutoload$IonisationChamberv.h")))  IonisationChamberv;
class __attribute__((annotate("$clingAutoload$DriftChamber.h")))  DriftChamber;
class __attribute__((annotate("$clingAutoload$IonisationChamber.h")))  IonisationChamber;
class __attribute__((annotate("$clingAutoload$SeD12v.h")))  SeDv;
class __attribute__((annotate("$clingAutoload$SeD12v.h")))  SeD12v;
class __attribute__((annotate("$clingAutoload$Siv.h")))  Siv;
class __attribute__((annotate("$clingAutoload$Sive503.h")))  Sive503;
class __attribute__((annotate(R"ATTRDUMP(VAMOS CsI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CsIv.h")))  CsIv;
class __attribute__((annotate(R"ATTRDUMP(KVCsI for Vamos)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCsIVamos.h")))  KVCsIVamos;
class __attribute__((annotate(R"ATTRDUMP(KVSilicon for Vamos)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSiliconVamos.h")))  KVSiliconVamos;
class __attribute__((annotate(R"ATTRDUMP(Base class for the description of detectors in spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSpectroDetector.h")))  KVSpectroDetector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVSiliconVamos.h"
#include "DriftChamber.h"
#include "KVSpectroDetector.h"
#include "IonisationChamber.h"
#include "KVCsIVamos.h"
#include "Sive503.h"
#include "IonisationChamberv.h"
#include "DriftChamberv.h"
#include "SeD12v.h"
#include "PlaneAbsorber.h"
#include "Siv.h"
#include "SeDv.h"
#include "CsIv.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CsIv", payloadCode, "@",
"DriftChamber", payloadCode, "@",
"DriftChamberv", payloadCode, "@",
"IonisationChamber", payloadCode, "@",
"IonisationChamberv", payloadCode, "@",
"KVCsIVamos", payloadCode, "@",
"KVSiliconVamos", payloadCode, "@",
"KVSpectroDetector", payloadCode, "@",
"SeD12v", payloadCode, "@",
"SeDv", payloadCode, "@",
"Siv", payloadCode, "@",
"Sive503", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSgeometry",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSgeometry_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSgeometry_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSgeometry() {
  TriggerDictionaryInitialization_libVAMOSgeometry_Impl();
}
