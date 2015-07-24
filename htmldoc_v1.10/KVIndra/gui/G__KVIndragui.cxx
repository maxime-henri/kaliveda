// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndragui

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
#include "KVTimeEntry.h"
#include "KVDataAnalysisLauncher.h"
#include "KVNewGridRRMDialog.h"
#include "KVINDRARunSheetGUI.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRARunSheetGUI(void *p = 0);
   static void *newArray_KVINDRARunSheetGUI(Long_t size, void *p);
   static void delete_KVINDRARunSheetGUI(void *p);
   static void deleteArray_KVINDRARunSheetGUI(void *p);
   static void destruct_KVINDRARunSheetGUI(void *p);
   static void streamer_KVINDRARunSheetGUI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRARunSheetGUI*)
   {
      ::KVINDRARunSheetGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRARunSheetGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRARunSheetGUI", ::KVINDRARunSheetGUI::Class_Version(), "KVINDRARunSheetGUI.h", 57,
                  typeid(::KVINDRARunSheetGUI), DefineBehavior(ptr, ptr),
                  &::KVINDRARunSheetGUI::Dictionary, isa_proxy, 16,
                  sizeof(::KVINDRARunSheetGUI) );
      instance.SetNew(&new_KVINDRARunSheetGUI);
      instance.SetNewArray(&newArray_KVINDRARunSheetGUI);
      instance.SetDelete(&delete_KVINDRARunSheetGUI);
      instance.SetDeleteArray(&deleteArray_KVINDRARunSheetGUI);
      instance.SetDestructor(&destruct_KVINDRARunSheetGUI);
      instance.SetStreamerFunc(&streamer_KVINDRARunSheetGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRARunSheetGUI*)
   {
      return GenerateInitInstanceLocal((::KVINDRARunSheetGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRARunSheetGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIRSGChooseDataSetDialog(void *p = 0);
   static void *newArray_KVIRSGChooseDataSetDialog(Long_t size, void *p);
   static void delete_KVIRSGChooseDataSetDialog(void *p);
   static void deleteArray_KVIRSGChooseDataSetDialog(void *p);
   static void destruct_KVIRSGChooseDataSetDialog(void *p);
   static void streamer_KVIRSGChooseDataSetDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIRSGChooseDataSetDialog*)
   {
      ::KVIRSGChooseDataSetDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIRSGChooseDataSetDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIRSGChooseDataSetDialog", ::KVIRSGChooseDataSetDialog::Class_Version(), "KVINDRARunSheetGUI.h", 25,
                  typeid(::KVIRSGChooseDataSetDialog), DefineBehavior(ptr, ptr),
                  &::KVIRSGChooseDataSetDialog::Dictionary, isa_proxy, 16,
                  sizeof(::KVIRSGChooseDataSetDialog) );
      instance.SetNew(&new_KVIRSGChooseDataSetDialog);
      instance.SetNewArray(&newArray_KVIRSGChooseDataSetDialog);
      instance.SetDelete(&delete_KVIRSGChooseDataSetDialog);
      instance.SetDeleteArray(&deleteArray_KVIRSGChooseDataSetDialog);
      instance.SetDestructor(&destruct_KVIRSGChooseDataSetDialog);
      instance.SetStreamerFunc(&streamer_KVIRSGChooseDataSetDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIRSGChooseDataSetDialog*)
   {
      return GenerateInitInstanceLocal((::KVIRSGChooseDataSetDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIRSGChooseDataSetDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataAnalysisLauncher(void *p);
   static void deleteArray_KVDataAnalysisLauncher(void *p);
   static void destruct_KVDataAnalysisLauncher(void *p);
   static void streamer_KVDataAnalysisLauncher(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataAnalysisLauncher*)
   {
      ::KVDataAnalysisLauncher *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataAnalysisLauncher >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataAnalysisLauncher", ::KVDataAnalysisLauncher::Class_Version(), "KVDataAnalysisLauncher.h", 88,
                  typeid(::KVDataAnalysisLauncher), DefineBehavior(ptr, ptr),
                  &::KVDataAnalysisLauncher::Dictionary, isa_proxy, 16,
                  sizeof(::KVDataAnalysisLauncher) );
      instance.SetDelete(&delete_KVDataAnalysisLauncher);
      instance.SetDeleteArray(&deleteArray_KVDataAnalysisLauncher);
      instance.SetDestructor(&destruct_KVDataAnalysisLauncher);
      instance.SetStreamerFunc(&streamer_KVDataAnalysisLauncher);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataAnalysisLauncher*)
   {
      return GenerateInitInstanceLocal((::KVDataAnalysisLauncher*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataAnalysisLauncher*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNewGridRRMDialog(void *p = 0);
   static void *newArray_KVNewGridRRMDialog(Long_t size, void *p);
   static void delete_KVNewGridRRMDialog(void *p);
   static void deleteArray_KVNewGridRRMDialog(void *p);
   static void destruct_KVNewGridRRMDialog(void *p);
   static void streamer_KVNewGridRRMDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNewGridRRMDialog*)
   {
      ::KVNewGridRRMDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNewGridRRMDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNewGridRRMDialog", ::KVNewGridRRMDialog::Class_Version(), "KVNewGridRRMDialog.h", 15,
                  typeid(::KVNewGridRRMDialog), DefineBehavior(ptr, ptr),
                  &::KVNewGridRRMDialog::Dictionary, isa_proxy, 16,
                  sizeof(::KVNewGridRRMDialog) );
      instance.SetNew(&new_KVNewGridRRMDialog);
      instance.SetNewArray(&newArray_KVNewGridRRMDialog);
      instance.SetDelete(&delete_KVNewGridRRMDialog);
      instance.SetDeleteArray(&deleteArray_KVNewGridRRMDialog);
      instance.SetDestructor(&destruct_KVNewGridRRMDialog);
      instance.SetStreamerFunc(&streamer_KVNewGridRRMDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNewGridRRMDialog*)
   {
      return GenerateInitInstanceLocal((::KVNewGridRRMDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNewGridRRMDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVGFileList(void *p);
   static void deleteArray_KVGFileList(void *p);
   static void destruct_KVGFileList(void *p);
   static void streamer_KVGFileList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGFileList*)
   {
      ::KVGFileList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGFileList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGFileList", ::KVGFileList::Class_Version(), "KVDataAnalysisLauncher.h", 32,
                  typeid(::KVGFileList), DefineBehavior(ptr, ptr),
                  &::KVGFileList::Dictionary, isa_proxy, 16,
                  sizeof(::KVGFileList) );
      instance.SetDelete(&delete_KVGFileList);
      instance.SetDeleteArray(&deleteArray_KVGFileList);
      instance.SetDestructor(&destruct_KVGFileList);
      instance.SetStreamerFunc(&streamer_KVGFileList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGFileList*)
   {
      return GenerateInitInstanceLocal((::KVGFileList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGFileList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVGDirectoryList(void *p);
   static void deleteArray_KVGDirectoryList(void *p);
   static void destruct_KVGDirectoryList(void *p);
   static void streamer_KVGDirectoryList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVGDirectoryList*)
   {
      ::KVGDirectoryList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVGDirectoryList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVGDirectoryList", ::KVGDirectoryList::Class_Version(), "KVDataAnalysisLauncher.h", 71,
                  typeid(::KVGDirectoryList), DefineBehavior(ptr, ptr),
                  &::KVGDirectoryList::Dictionary, isa_proxy, 16,
                  sizeof(::KVGDirectoryList) );
      instance.SetDelete(&delete_KVGDirectoryList);
      instance.SetDeleteArray(&deleteArray_KVGDirectoryList);
      instance.SetDestructor(&destruct_KVGDirectoryList);
      instance.SetStreamerFunc(&streamer_KVGDirectoryList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVGDirectoryList*)
   {
      return GenerateInitInstanceLocal((::KVGDirectoryList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVGDirectoryList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTimeEntry(void *p = 0);
   static void *newArray_KVTimeEntry(Long_t size, void *p);
   static void delete_KVTimeEntry(void *p);
   static void deleteArray_KVTimeEntry(void *p);
   static void destruct_KVTimeEntry(void *p);
   static void streamer_KVTimeEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTimeEntry*)
   {
      ::KVTimeEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTimeEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTimeEntry", ::KVTimeEntry::Class_Version(), "KVTimeEntry.h", 9,
                  typeid(::KVTimeEntry), DefineBehavior(ptr, ptr),
                  &::KVTimeEntry::Dictionary, isa_proxy, 16,
                  sizeof(::KVTimeEntry) );
      instance.SetNew(&new_KVTimeEntry);
      instance.SetNewArray(&newArray_KVTimeEntry);
      instance.SetDelete(&delete_KVTimeEntry);
      instance.SetDeleteArray(&deleteArray_KVTimeEntry);
      instance.SetDestructor(&destruct_KVTimeEntry);
      instance.SetStreamerFunc(&streamer_KVTimeEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTimeEntry*)
   {
      return GenerateInitInstanceLocal((::KVTimeEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTimeEntry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVTimeEntryLayout(void *p);
   static void deleteArray_KVTimeEntryLayout(void *p);
   static void destruct_KVTimeEntryLayout(void *p);
   static void streamer_KVTimeEntryLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTimeEntryLayout*)
   {
      ::KVTimeEntryLayout *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTimeEntryLayout >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTimeEntryLayout", ::KVTimeEntryLayout::Class_Version(), "KVTimeEntry.h", 39,
                  typeid(::KVTimeEntryLayout), DefineBehavior(ptr, ptr),
                  &::KVTimeEntryLayout::Dictionary, isa_proxy, 16,
                  sizeof(::KVTimeEntryLayout) );
      instance.SetDelete(&delete_KVTimeEntryLayout);
      instance.SetDeleteArray(&deleteArray_KVTimeEntryLayout);
      instance.SetDestructor(&destruct_KVTimeEntryLayout);
      instance.SetStreamerFunc(&streamer_KVTimeEntryLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTimeEntryLayout*)
   {
      return GenerateInitInstanceLocal((::KVTimeEntryLayout*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTimeEntryLayout*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRARunSheetGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRARunSheetGUI::Class_Name()
{
   return "KVINDRARunSheetGUI";
}

//______________________________________________________________________________
const char *KVINDRARunSheetGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRARunSheetGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRARunSheetGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRARunSheetGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRARunSheetGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIRSGChooseDataSetDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIRSGChooseDataSetDialog::Class_Name()
{
   return "KVIRSGChooseDataSetDialog";
}

//______________________________________________________________________________
const char *KVIRSGChooseDataSetDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIRSGChooseDataSetDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIRSGChooseDataSetDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIRSGChooseDataSetDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIRSGChooseDataSetDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIRSGChooseDataSetDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIRSGChooseDataSetDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIRSGChooseDataSetDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataAnalysisLauncher::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataAnalysisLauncher::Class_Name()
{
   return "KVDataAnalysisLauncher";
}

//______________________________________________________________________________
const char *KVDataAnalysisLauncher::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisLauncher*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataAnalysisLauncher::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisLauncher*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataAnalysisLauncher::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisLauncher*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataAnalysisLauncher::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataAnalysisLauncher*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNewGridRRMDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNewGridRRMDialog::Class_Name()
{
   return "KVNewGridRRMDialog";
}

//______________________________________________________________________________
const char *KVNewGridRRMDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridRRMDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNewGridRRMDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridRRMDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNewGridRRMDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridRRMDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNewGridRRMDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridRRMDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGFileList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGFileList::Class_Name()
{
   return "KVGFileList";
}

//______________________________________________________________________________
const char *KVGFileList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGFileList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGFileList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGFileList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGFileList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGFileList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGFileList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGFileList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVGDirectoryList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVGDirectoryList::Class_Name()
{
   return "KVGDirectoryList";
}

//______________________________________________________________________________
const char *KVGDirectoryList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGDirectoryList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVGDirectoryList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVGDirectoryList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVGDirectoryList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGDirectoryList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVGDirectoryList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVGDirectoryList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTimeEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTimeEntry::Class_Name()
{
   return "KVTimeEntry";
}

//______________________________________________________________________________
const char *KVTimeEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTimeEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTimeEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTimeEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTimeEntryLayout::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTimeEntryLayout::Class_Name()
{
   return "KVTimeEntryLayout";
}

//______________________________________________________________________________
const char *KVTimeEntryLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntryLayout*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTimeEntryLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntryLayout*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTimeEntryLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntryLayout*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTimeEntryLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTimeEntryLayout*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRARunSheetGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRARunSheetGUI.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRARunSheetGUI(void *p) {
      return  p ? new(p) ::KVINDRARunSheetGUI : new ::KVINDRARunSheetGUI;
   }
   static void *newArray_KVINDRARunSheetGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRARunSheetGUI[nElements] : new ::KVINDRARunSheetGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRARunSheetGUI(void *p) {
      delete ((::KVINDRARunSheetGUI*)p);
   }
   static void deleteArray_KVINDRARunSheetGUI(void *p) {
      delete [] ((::KVINDRARunSheetGUI*)p);
   }
   static void destruct_KVINDRARunSheetGUI(void *p) {
      typedef ::KVINDRARunSheetGUI current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRARunSheetGUI(TBuffer &buf, void *obj) {
      ((::KVINDRARunSheetGUI*)obj)->::KVINDRARunSheetGUI::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRARunSheetGUI

//______________________________________________________________________________
void KVIRSGChooseDataSetDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIRSGChooseDataSetDialog.

   ::Error("KVIRSGChooseDataSetDialog::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIRSGChooseDataSetDialog(void *p) {
      return  p ? new(p) ::KVIRSGChooseDataSetDialog : new ::KVIRSGChooseDataSetDialog;
   }
   static void *newArray_KVIRSGChooseDataSetDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVIRSGChooseDataSetDialog[nElements] : new ::KVIRSGChooseDataSetDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIRSGChooseDataSetDialog(void *p) {
      delete ((::KVIRSGChooseDataSetDialog*)p);
   }
   static void deleteArray_KVIRSGChooseDataSetDialog(void *p) {
      delete [] ((::KVIRSGChooseDataSetDialog*)p);
   }
   static void destruct_KVIRSGChooseDataSetDialog(void *p) {
      typedef ::KVIRSGChooseDataSetDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIRSGChooseDataSetDialog(TBuffer &buf, void *obj) {
      ((::KVIRSGChooseDataSetDialog*)obj)->::KVIRSGChooseDataSetDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVIRSGChooseDataSetDialog

//______________________________________________________________________________
void KVDataAnalysisLauncher::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataAnalysisLauncher.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataAnalysisLauncher(void *p) {
      delete ((::KVDataAnalysisLauncher*)p);
   }
   static void deleteArray_KVDataAnalysisLauncher(void *p) {
      delete [] ((::KVDataAnalysisLauncher*)p);
   }
   static void destruct_KVDataAnalysisLauncher(void *p) {
      typedef ::KVDataAnalysisLauncher current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDataAnalysisLauncher(TBuffer &buf, void *obj) {
      ((::KVDataAnalysisLauncher*)obj)->::KVDataAnalysisLauncher::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDataAnalysisLauncher

//______________________________________________________________________________
void KVNewGridRRMDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNewGridRRMDialog.

   KVNewGridDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNewGridRRMDialog(void *p) {
      return  p ? new(p) ::KVNewGridRRMDialog : new ::KVNewGridRRMDialog;
   }
   static void *newArray_KVNewGridRRMDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVNewGridRRMDialog[nElements] : new ::KVNewGridRRMDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNewGridRRMDialog(void *p) {
      delete ((::KVNewGridRRMDialog*)p);
   }
   static void deleteArray_KVNewGridRRMDialog(void *p) {
      delete [] ((::KVNewGridRRMDialog*)p);
   }
   static void destruct_KVNewGridRRMDialog(void *p) {
      typedef ::KVNewGridRRMDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVNewGridRRMDialog(TBuffer &buf, void *obj) {
      ((::KVNewGridRRMDialog*)obj)->::KVNewGridRRMDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVNewGridRRMDialog

//______________________________________________________________________________
void KVGFileList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGFileList.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVGFileList(void *p) {
      delete ((::KVGFileList*)p);
   }
   static void deleteArray_KVGFileList(void *p) {
      delete [] ((::KVGFileList*)p);
   }
   static void destruct_KVGFileList(void *p) {
      typedef ::KVGFileList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGFileList(TBuffer &buf, void *obj) {
      ((::KVGFileList*)obj)->::KVGFileList::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVGFileList

//______________________________________________________________________________
void KVGDirectoryList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVGDirectoryList.

   KVGFileList::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVGDirectoryList(void *p) {
      delete ((::KVGDirectoryList*)p);
   }
   static void deleteArray_KVGDirectoryList(void *p) {
      delete [] ((::KVGDirectoryList*)p);
   }
   static void destruct_KVGDirectoryList(void *p) {
      typedef ::KVGDirectoryList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVGDirectoryList(TBuffer &buf, void *obj) {
      ((::KVGDirectoryList*)obj)->::KVGDirectoryList::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVGDirectoryList

//______________________________________________________________________________
void KVTimeEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTimeEntry.

   TGNumberEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTimeEntry(void *p) {
      return  p ? new(p) ::KVTimeEntry : new ::KVTimeEntry;
   }
   static void *newArray_KVTimeEntry(Long_t nElements, void *p) {
      return p ? new(p) ::KVTimeEntry[nElements] : new ::KVTimeEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTimeEntry(void *p) {
      delete ((::KVTimeEntry*)p);
   }
   static void deleteArray_KVTimeEntry(void *p) {
      delete [] ((::KVTimeEntry*)p);
   }
   static void destruct_KVTimeEntry(void *p) {
      typedef ::KVTimeEntry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTimeEntry(TBuffer &buf, void *obj) {
      ((::KVTimeEntry*)obj)->::KVTimeEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTimeEntry

//______________________________________________________________________________
void KVTimeEntryLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTimeEntryLayout.

   TGNumberEntryLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVTimeEntryLayout(void *p) {
      delete ((::KVTimeEntryLayout*)p);
   }
   static void deleteArray_KVTimeEntryLayout(void *p) {
      delete [] ((::KVTimeEntryLayout*)p);
   }
   static void destruct_KVTimeEntryLayout(void *p) {
      typedef ::KVTimeEntryLayout current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTimeEntryLayout(TBuffer &buf, void *obj) {
      ((::KVTimeEntryLayout*)obj)->::KVTimeEntryLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTimeEntryLayout

namespace {
  void TriggerDictionaryInitialization_libKVIndragui_Impl() {
    static const char* headers[] = {
"KVTimeEntry.h",
"KVDataAnalysisLauncher.h",
"KVNewGridRRMDialog.h",
"KVINDRARunSheetGUI.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/gui/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
"/home/john/software/sources/kaliveda.git/KVIndra/analysis",
"/home/john/software/sources/kaliveda.git/KVIndra/gui",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/gui/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A GUI for managing run sheet information during experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARunSheetGUI.h")))  KVINDRARunSheetGUI;
class __attribute__((annotate(R"ATTRDUMP(Run-sheet reader dialog box for choosing dataset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRARunSheetGUI.h")))  KVIRSGChooseDataSetDialog;
class __attribute__((annotate(R"ATTRDUMP(Graphical interface for launching analysis tasks: KaliVedaGUI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataAnalysisLauncher.h")))  KVDataAnalysisLauncher;
class __attribute__((annotate(R"ATTRDUMP(Dialog box for creation of new grid in KVIDGridManagerGUI, for grids which inherit from KVINDRARRMValidator)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNewGridRRMDialog.h")))  KVNewGridRRMDialog;
class __attribute__((annotate("$clingAutoload$KVDataAnalysisLauncher.h")))  KVGFileList;
class __attribute__((annotate("$clingAutoload$KVDataAnalysisLauncher.h")))  KVGDirectoryList;
class __attribute__((annotate("$clingAutoload$KVTimeEntry.h")))  KVTimeEntry;
class __attribute__((annotate(R"ATTRDUMP(Layout manager for time entry widget)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTimeEntry.h")))  KVTimeEntryLayout;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVTimeEntry.h"
#include "KVDataAnalysisLauncher.h"
#include "KVNewGridRRMDialog.h"
#include "KVINDRARunSheetGUI.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVDataAnalysisLauncher", payloadCode, "@",
"KVGDirectoryList", payloadCode, "@",
"KVGFileList", payloadCode, "@",
"KVINDRARunSheetGUI", payloadCode, "@",
"KVIRSGChooseDataSetDialog", payloadCode, "@",
"KVNewGridRRMDialog", payloadCode, "@",
"KVTimeEntry", payloadCode, "@",
"KVTimeEntryLayout", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndragui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndragui_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndragui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndragui() {
  TriggerDictionaryInitialization_libKVIndragui_Impl();
}
