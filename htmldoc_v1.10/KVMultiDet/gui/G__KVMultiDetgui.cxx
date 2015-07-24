// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetgui

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
#include "KVZAFinderDialog.h"
#include "KVKeyHandler.h"
#include "KVTextEntry.h"
#include "KVZALineFinder.h"
#include "KVNuclearChart.h"
#include "KVInputDialog.h"
#include "KVNewGridDialog.h"
#include "KVIDGridEditor.h"
#include "KVIDGUITelescopeChooserDialog.h"
#include "KVTextDialog.h"
#include "KVLVContainer.h"
#include "KVBrowser.h"
#include "KVWidgetList.h"
#include "KVNucleusBox.h"
#include "KVCalculateChIoSiGridDialog.h"
#include "KVLVEntry.h"
#include "KVDropDownDialog.h"
#include "KVSimDirGUI.h"
#include "KVIDGridManagerGUI.h"
#include "KVListView.h"
#include "KVWidget.h"
#include "KVSpiderIdentificator.h"
#include "KVTestListView.h"
#include "KVLauncherGUI.h"
#include "KVMergeGridsDialog.h"
#include "KVFileDialog.h"
#include "KVDBSystemDialog.h"
#include "KVDataBaseBrowser.h"
#include "KVTestIDGridDialog.h"
#include "KVIDGridEditorCanvas.h"
#include "KVDalitzPlot.h"
#include "KVBatchSystemGUI.h"
#include "KVSpIdGUI.h"
#include "KVTreeAnalyzer.h"
#include "KVCanvas.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVBrowser(void *p = 0);
   static void *newArray_KVBrowser(Long_t size, void *p);
   static void delete_KVBrowser(void *p);
   static void deleteArray_KVBrowser(void *p);
   static void destruct_KVBrowser(void *p);
   static void streamer_KVBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBrowser*)
   {
      ::KVBrowser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBrowser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBrowser", ::KVBrowser::Class_Version(), "KVBrowser.h", 40,
                  typeid(::KVBrowser), DefineBehavior(ptr, ptr),
                  &::KVBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::KVBrowser) );
      instance.SetNew(&new_KVBrowser);
      instance.SetNewArray(&newArray_KVBrowser);
      instance.SetDelete(&delete_KVBrowser);
      instance.SetDeleteArray(&deleteArray_KVBrowser);
      instance.SetDestructor(&destruct_KVBrowser);
      instance.SetStreamerFunc(&streamer_KVBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBrowser*)
   {
      return GenerateInitInstanceLocal((::KVBrowser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBrowser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDataBaseBrowser(void *p);
   static void deleteArray_KVDataBaseBrowser(void *p);
   static void destruct_KVDataBaseBrowser(void *p);
   static void streamer_KVDataBaseBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDataBaseBrowser*)
   {
      ::KVDataBaseBrowser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDataBaseBrowser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDataBaseBrowser", ::KVDataBaseBrowser::Class_Version(), "KVDataBaseBrowser.h", 29,
                  typeid(::KVDataBaseBrowser), DefineBehavior(ptr, ptr),
                  &::KVDataBaseBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::KVDataBaseBrowser) );
      instance.SetDelete(&delete_KVDataBaseBrowser);
      instance.SetDeleteArray(&deleteArray_KVDataBaseBrowser);
      instance.SetDestructor(&destruct_KVDataBaseBrowser);
      instance.SetStreamerFunc(&streamer_KVDataBaseBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDataBaseBrowser*)
   {
      return GenerateInitInstanceLocal((::KVDataBaseBrowser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDataBaseBrowser*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVWidget(void *p = 0);
   static void *newArray_KVWidget(Long_t size, void *p);
   static void delete_KVWidget(void *p);
   static void deleteArray_KVWidget(void *p);
   static void destruct_KVWidget(void *p);
   static void streamer_KVWidget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVWidget*)
   {
      ::KVWidget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVWidget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVWidget", ::KVWidget::Class_Version(), "KVWidget.h", 54,
                  typeid(::KVWidget), DefineBehavior(ptr, ptr),
                  &::KVWidget::Dictionary, isa_proxy, 16,
                  sizeof(::KVWidget) );
      instance.SetNew(&new_KVWidget);
      instance.SetNewArray(&newArray_KVWidget);
      instance.SetDelete(&delete_KVWidget);
      instance.SetDeleteArray(&deleteArray_KVWidget);
      instance.SetDestructor(&destruct_KVWidget);
      instance.SetStreamerFunc(&streamer_KVWidget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVWidget*)
   {
      return GenerateInitInstanceLocal((::KVWidget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVWidget*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVWidgetList(void *p = 0);
   static void *newArray_KVWidgetList(Long_t size, void *p);
   static void delete_KVWidgetList(void *p);
   static void deleteArray_KVWidgetList(void *p);
   static void destruct_KVWidgetList(void *p);
   static void streamer_KVWidgetList(TBuffer &buf, void *obj);
   static Long64_t merge_KVWidgetList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVWidgetList*)
   {
      ::KVWidgetList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVWidgetList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVWidgetList", ::KVWidgetList::Class_Version(), "KVWidgetList.h", 27,
                  typeid(::KVWidgetList), DefineBehavior(ptr, ptr),
                  &::KVWidgetList::Dictionary, isa_proxy, 16,
                  sizeof(::KVWidgetList) );
      instance.SetNew(&new_KVWidgetList);
      instance.SetNewArray(&newArray_KVWidgetList);
      instance.SetDelete(&delete_KVWidgetList);
      instance.SetDeleteArray(&deleteArray_KVWidgetList);
      instance.SetDestructor(&destruct_KVWidgetList);
      instance.SetStreamerFunc(&streamer_KVWidgetList);
      instance.SetMerge(&merge_KVWidgetList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVWidgetList*)
   {
      return GenerateInitInstanceLocal((::KVWidgetList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVWidgetList*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVMergeGridsDialog(void *p);
   static void deleteArray_KVMergeGridsDialog(void *p);
   static void destruct_KVMergeGridsDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVMergeGridsDialog*)
   {
      ::KVMergeGridsDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVMergeGridsDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVMergeGridsDialog", ::KVMergeGridsDialog::Class_Version(), "KVMergeGridsDialog.h", 19,
                  typeid(::KVMergeGridsDialog), DefineBehavior(ptr, ptr),
                  &::KVMergeGridsDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVMergeGridsDialog) );
      instance.SetDelete(&delete_KVMergeGridsDialog);
      instance.SetDeleteArray(&deleteArray_KVMergeGridsDialog);
      instance.SetDestructor(&destruct_KVMergeGridsDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVMergeGridsDialog*)
   {
      return GenerateInitInstanceLocal((::KVMergeGridsDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVMergeGridsDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCalculateChIoSiGridDialog(void *p = 0);
   static void *newArray_KVCalculateChIoSiGridDialog(Long_t size, void *p);
   static void delete_KVCalculateChIoSiGridDialog(void *p);
   static void deleteArray_KVCalculateChIoSiGridDialog(void *p);
   static void destruct_KVCalculateChIoSiGridDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCalculateChIoSiGridDialog*)
   {
      ::KVCalculateChIoSiGridDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCalculateChIoSiGridDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCalculateChIoSiGridDialog", ::KVCalculateChIoSiGridDialog::Class_Version(), "KVCalculateChIoSiGridDialog.h", 19,
                  typeid(::KVCalculateChIoSiGridDialog), DefineBehavior(ptr, ptr),
                  &::KVCalculateChIoSiGridDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVCalculateChIoSiGridDialog) );
      instance.SetNew(&new_KVCalculateChIoSiGridDialog);
      instance.SetNewArray(&newArray_KVCalculateChIoSiGridDialog);
      instance.SetDelete(&delete_KVCalculateChIoSiGridDialog);
      instance.SetDeleteArray(&deleteArray_KVCalculateChIoSiGridDialog);
      instance.SetDestructor(&destruct_KVCalculateChIoSiGridDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCalculateChIoSiGridDialog*)
   {
      return GenerateInitInstanceLocal((::KVCalculateChIoSiGridDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCalculateChIoSiGridDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVIDGUITelescopeChooserDialog(void *p);
   static void deleteArray_KVIDGUITelescopeChooserDialog(void *p);
   static void destruct_KVIDGUITelescopeChooserDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGUITelescopeChooserDialog*)
   {
      ::KVIDGUITelescopeChooserDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGUITelescopeChooserDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGUITelescopeChooserDialog", ::KVIDGUITelescopeChooserDialog::Class_Version(), "KVIDGUITelescopeChooserDialog.h", 103,
                  typeid(::KVIDGUITelescopeChooserDialog), DefineBehavior(ptr, ptr),
                  &::KVIDGUITelescopeChooserDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGUITelescopeChooserDialog) );
      instance.SetDelete(&delete_KVIDGUITelescopeChooserDialog);
      instance.SetDeleteArray(&deleteArray_KVIDGUITelescopeChooserDialog);
      instance.SetDestructor(&destruct_KVIDGUITelescopeChooserDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGUITelescopeChooserDialog*)
   {
      return GenerateInitInstanceLocal((::KVIDGUITelescopeChooserDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGUITelescopeChooserDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDBSystemDialog(void *p);
   static void deleteArray_KVDBSystemDialog(void *p);
   static void destruct_KVDBSystemDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDBSystemDialog*)
   {
      ::KVDBSystemDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDBSystemDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDBSystemDialog", ::KVDBSystemDialog::Class_Version(), "KVDBSystemDialog.h", 29,
                  typeid(::KVDBSystemDialog), DefineBehavior(ptr, ptr),
                  &::KVDBSystemDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVDBSystemDialog) );
      instance.SetDelete(&delete_KVDBSystemDialog);
      instance.SetDeleteArray(&deleteArray_KVDBSystemDialog);
      instance.SetDestructor(&destruct_KVDBSystemDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDBSystemDialog*)
   {
      return GenerateInitInstanceLocal((::KVDBSystemDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDBSystemDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSimDirGUI(void *p = 0);
   static void *newArray_KVSimDirGUI(Long_t size, void *p);
   static void delete_KVSimDirGUI(void *p);
   static void deleteArray_KVSimDirGUI(void *p);
   static void destruct_KVSimDirGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSimDirGUI*)
   {
      ::KVSimDirGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSimDirGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSimDirGUI", ::KVSimDirGUI::Class_Version(), "KVSimDirGUI.h", 22,
                  typeid(::KVSimDirGUI), DefineBehavior(ptr, ptr),
                  &::KVSimDirGUI::Dictionary, isa_proxy, 4,
                  sizeof(::KVSimDirGUI) );
      instance.SetNew(&new_KVSimDirGUI);
      instance.SetNewArray(&newArray_KVSimDirGUI);
      instance.SetDelete(&delete_KVSimDirGUI);
      instance.SetDeleteArray(&deleteArray_KVSimDirGUI);
      instance.SetDestructor(&destruct_KVSimDirGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSimDirGUI*)
   {
      return GenerateInitInstanceLocal((::KVSimDirGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSimDirGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVBatchSystemGUI(void *p = 0);
   static void *newArray_KVBatchSystemGUI(Long_t size, void *p);
   static void delete_KVBatchSystemGUI(void *p);
   static void deleteArray_KVBatchSystemGUI(void *p);
   static void destruct_KVBatchSystemGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVBatchSystemGUI*)
   {
      ::KVBatchSystemGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVBatchSystemGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVBatchSystemGUI", ::KVBatchSystemGUI::Class_Version(), "KVBatchSystemGUI.h", 13,
                  typeid(::KVBatchSystemGUI), DefineBehavior(ptr, ptr),
                  &::KVBatchSystemGUI::Dictionary, isa_proxy, 4,
                  sizeof(::KVBatchSystemGUI) );
      instance.SetNew(&new_KVBatchSystemGUI);
      instance.SetNewArray(&newArray_KVBatchSystemGUI);
      instance.SetDelete(&delete_KVBatchSystemGUI);
      instance.SetDeleteArray(&deleteArray_KVBatchSystemGUI);
      instance.SetDestructor(&destruct_KVBatchSystemGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVBatchSystemGUI*)
   {
      return GenerateInitInstanceLocal((::KVBatchSystemGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVBatchSystemGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLauncherGUI(void *p = 0);
   static void *newArray_KVLauncherGUI(Long_t size, void *p);
   static void delete_KVLauncherGUI(void *p);
   static void deleteArray_KVLauncherGUI(void *p);
   static void destruct_KVLauncherGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLauncherGUI*)
   {
      ::KVLauncherGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLauncherGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLauncherGUI", ::KVLauncherGUI::Class_Version(), "KVLauncherGUI.h", 16,
                  typeid(::KVLauncherGUI), DefineBehavior(ptr, ptr),
                  &::KVLauncherGUI::Dictionary, isa_proxy, 4,
                  sizeof(::KVLauncherGUI) );
      instance.SetNew(&new_KVLauncherGUI);
      instance.SetNewArray(&newArray_KVLauncherGUI);
      instance.SetDelete(&delete_KVLauncherGUI);
      instance.SetDeleteArray(&deleteArray_KVLauncherGUI);
      instance.SetDestructor(&destruct_KVLauncherGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLauncherGUI*)
   {
      return GenerateInitInstanceLocal((::KVLauncherGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLauncherGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVTextDialog(void *p);
   static void deleteArray_KVTextDialog(void *p);
   static void destruct_KVTextDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTextDialog*)
   {
      ::KVTextDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTextDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTextDialog", ::KVTextDialog::Class_Version(), "KVTextDialog.h", 14,
                  typeid(::KVTextDialog), DefineBehavior(ptr, ptr),
                  &::KVTextDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVTextDialog) );
      instance.SetDelete(&delete_KVTextDialog);
      instance.SetDeleteArray(&deleteArray_KVTextDialog);
      instance.SetDestructor(&destruct_KVTextDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTextDialog*)
   {
      return GenerateInitInstanceLocal((::KVTextDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTextDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVTestListView(void *p);
   static void deleteArray_KVTestListView(void *p);
   static void destruct_KVTestListView(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTestListView*)
   {
      ::KVTestListView *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTestListView >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTestListView", ::KVTestListView::Class_Version(), "KVTestListView.h", 13,
                  typeid(::KVTestListView), DefineBehavior(ptr, ptr),
                  &::KVTestListView::Dictionary, isa_proxy, 4,
                  sizeof(::KVTestListView) );
      instance.SetDelete(&delete_KVTestListView);
      instance.SetDeleteArray(&deleteArray_KVTestListView);
      instance.SetDestructor(&destruct_KVTestListView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTestListView*)
   {
      return GenerateInitInstanceLocal((::KVTestListView*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTestListView*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGridManagerGUI(void *p = 0);
   static void *newArray_KVIDGridManagerGUI(Long_t size, void *p);
   static void delete_KVIDGridManagerGUI(void *p);
   static void deleteArray_KVIDGridManagerGUI(void *p);
   static void destruct_KVIDGridManagerGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGridManagerGUI*)
   {
      ::KVIDGridManagerGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGridManagerGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGridManagerGUI", ::KVIDGridManagerGUI::Class_Version(), "KVIDGridManagerGUI.h", 23,
                  typeid(::KVIDGridManagerGUI), DefineBehavior(ptr, ptr),
                  &::KVIDGridManagerGUI::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGridManagerGUI) );
      instance.SetNew(&new_KVIDGridManagerGUI);
      instance.SetNewArray(&newArray_KVIDGridManagerGUI);
      instance.SetDelete(&delete_KVIDGridManagerGUI);
      instance.SetDeleteArray(&deleteArray_KVIDGridManagerGUI);
      instance.SetDestructor(&destruct_KVIDGridManagerGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGridManagerGUI*)
   {
      return GenerateInitInstanceLocal((::KVIDGridManagerGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGridManagerGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNewGridDialog(void *p = 0);
   static void *newArray_KVNewGridDialog(Long_t size, void *p);
   static void delete_KVNewGridDialog(void *p);
   static void deleteArray_KVNewGridDialog(void *p);
   static void destruct_KVNewGridDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNewGridDialog*)
   {
      ::KVNewGridDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNewGridDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNewGridDialog", ::KVNewGridDialog::Class_Version(), "KVNewGridDialog.h", 29,
                  typeid(::KVNewGridDialog), DefineBehavior(ptr, ptr),
                  &::KVNewGridDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVNewGridDialog) );
      instance.SetNew(&new_KVNewGridDialog);
      instance.SetNewArray(&newArray_KVNewGridDialog);
      instance.SetDelete(&delete_KVNewGridDialog);
      instance.SetDeleteArray(&deleteArray_KVNewGridDialog);
      instance.SetDestructor(&destruct_KVNewGridDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNewGridDialog*)
   {
      return GenerateInitInstanceLocal((::KVNewGridDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNewGridDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVListView(void *p);
   static void deleteArray_KVListView(void *p);
   static void destruct_KVListView(void *p);
   static void streamer_KVListView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVListView*)
   {
      ::KVListView *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVListView >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVListView", ::KVListView::Class_Version(), "KVListView.h", 18,
                  typeid(::KVListView), DefineBehavior(ptr, ptr),
                  &::KVListView::Dictionary, isa_proxy, 16,
                  sizeof(::KVListView) );
      instance.SetDelete(&delete_KVListView);
      instance.SetDeleteArray(&deleteArray_KVListView);
      instance.SetDestructor(&destruct_KVListView);
      instance.SetStreamerFunc(&streamer_KVListView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVListView*)
   {
      return GenerateInitInstanceLocal((::KVListView*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVListView*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLVContainer(void *p = 0);
   static void *newArray_KVLVContainer(Long_t size, void *p);
   static void delete_KVLVContainer(void *p);
   static void deleteArray_KVLVContainer(void *p);
   static void destruct_KVLVContainer(void *p);
   static void streamer_KVLVContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLVContainer*)
   {
      ::KVLVContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLVContainer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLVContainer", ::KVLVContainer::Class_Version(), "KVLVContainer.h", 97,
                  typeid(::KVLVContainer), DefineBehavior(ptr, ptr),
                  &::KVLVContainer::Dictionary, isa_proxy, 16,
                  sizeof(::KVLVContainer) );
      instance.SetNew(&new_KVLVContainer);
      instance.SetNewArray(&newArray_KVLVContainer);
      instance.SetDelete(&delete_KVLVContainer);
      instance.SetDeleteArray(&deleteArray_KVLVContainer);
      instance.SetDestructor(&destruct_KVLVContainer);
      instance.SetStreamerFunc(&streamer_KVLVContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLVContainer*)
   {
      return GenerateInitInstanceLocal((::KVLVContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLVContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVLVEntry(void *p);
   static void deleteArray_KVLVEntry(void *p);
   static void destruct_KVLVEntry(void *p);
   static void streamer_KVLVEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLVEntry*)
   {
      ::KVLVEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLVEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLVEntry", ::KVLVEntry::Class_Version(), "KVLVEntry.h", 16,
                  typeid(::KVLVEntry), DefineBehavior(ptr, ptr),
                  &::KVLVEntry::Dictionary, isa_proxy, 16,
                  sizeof(::KVLVEntry) );
      instance.SetDelete(&delete_KVLVEntry);
      instance.SetDeleteArray(&deleteArray_KVLVEntry);
      instance.SetDestructor(&destruct_KVLVEntry);
      instance.SetStreamerFunc(&streamer_KVLVEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLVEntry*)
   {
      return GenerateInitInstanceLocal((::KVLVEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLVEntry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVLVColumnData(void *p);
   static void deleteArray_KVLVColumnData(void *p);
   static void destruct_KVLVColumnData(void *p);
   static void streamer_KVLVColumnData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLVColumnData*)
   {
      ::KVLVColumnData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLVColumnData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLVColumnData", ::KVLVColumnData::Class_Version(), "KVLVContainer.h", 24,
                  typeid(::KVLVColumnData), DefineBehavior(ptr, ptr),
                  &::KVLVColumnData::Dictionary, isa_proxy, 16,
                  sizeof(::KVLVColumnData) );
      instance.SetDelete(&delete_KVLVColumnData);
      instance.SetDeleteArray(&deleteArray_KVLVColumnData);
      instance.SetDestructor(&destruct_KVLVColumnData);
      instance.SetStreamerFunc(&streamer_KVLVColumnData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLVColumnData*)
   {
      return GenerateInitInstanceLocal((::KVLVColumnData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLVColumnData*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVDropDownDialog(void *p);
   static void deleteArray_KVDropDownDialog(void *p);
   static void destruct_KVDropDownDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDropDownDialog*)
   {
      ::KVDropDownDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDropDownDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDropDownDialog", ::KVDropDownDialog::Class_Version(), "KVDropDownDialog.h", 18,
                  typeid(::KVDropDownDialog), DefineBehavior(ptr, ptr),
                  &::KVDropDownDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVDropDownDialog) );
      instance.SetDelete(&delete_KVDropDownDialog);
      instance.SetDeleteArray(&deleteArray_KVDropDownDialog);
      instance.SetDestructor(&destruct_KVDropDownDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDropDownDialog*)
   {
      return GenerateInitInstanceLocal((::KVDropDownDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDropDownDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVKeyHandler(void *p);
   static void deleteArray_KVKeyHandler(void *p);
   static void destruct_KVKeyHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVKeyHandler*)
   {
      ::KVKeyHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVKeyHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVKeyHandler", ::KVKeyHandler::Class_Version(), "KVKeyHandler.h", 12,
                  typeid(::KVKeyHandler), DefineBehavior(ptr, ptr),
                  &::KVKeyHandler::Dictionary, isa_proxy, 4,
                  sizeof(::KVKeyHandler) );
      instance.SetDelete(&delete_KVKeyHandler);
      instance.SetDeleteArray(&deleteArray_KVKeyHandler);
      instance.SetDestructor(&destruct_KVKeyHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVKeyHandler*)
   {
      return GenerateInitInstanceLocal((::KVKeyHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVKeyHandler*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVInputDialog(void *p);
   static void deleteArray_KVInputDialog(void *p);
   static void destruct_KVInputDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVInputDialog*)
   {
      ::KVInputDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVInputDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVInputDialog", ::KVInputDialog::Class_Version(), "KVInputDialog.h", 18,
                  typeid(::KVInputDialog), DefineBehavior(ptr, ptr),
                  &::KVInputDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVInputDialog) );
      instance.SetDelete(&delete_KVInputDialog);
      instance.SetDeleteArray(&deleteArray_KVInputDialog);
      instance.SetDestructor(&destruct_KVInputDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVInputDialog*)
   {
      return GenerateInitInstanceLocal((::KVInputDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVInputDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTextEntry(void *p = 0);
   static void *newArray_KVTextEntry(Long_t size, void *p);
   static void delete_KVTextEntry(void *p);
   static void deleteArray_KVTextEntry(void *p);
   static void destruct_KVTextEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTextEntry*)
   {
      ::KVTextEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTextEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTextEntry", ::KVTextEntry::Class_Version(), "KVTextEntry.h", 15,
                  typeid(::KVTextEntry), DefineBehavior(ptr, ptr),
                  &::KVTextEntry::Dictionary, isa_proxy, 4,
                  sizeof(::KVTextEntry) );
      instance.SetNew(&new_KVTextEntry);
      instance.SetNewArray(&newArray_KVTextEntry);
      instance.SetDelete(&delete_KVTextEntry);
      instance.SetDeleteArray(&deleteArray_KVTextEntry);
      instance.SetDestructor(&destruct_KVTextEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTextEntry*)
   {
      return GenerateInitInstanceLocal((::KVTextEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTextEntry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFileDialog(void *p = 0);
   static void *newArray_KVFileDialog(Long_t size, void *p);
   static void delete_KVFileDialog(void *p);
   static void deleteArray_KVFileDialog(void *p);
   static void destruct_KVFileDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFileDialog*)
   {
      ::KVFileDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFileDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFileDialog", ::KVFileDialog::Class_Version(), "KVFileDialog.h", 56,
                  typeid(::KVFileDialog), DefineBehavior(ptr, ptr),
                  &::KVFileDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVFileDialog) );
      instance.SetNew(&new_KVFileDialog);
      instance.SetNewArray(&newArray_KVFileDialog);
      instance.SetDelete(&delete_KVFileDialog);
      instance.SetDeleteArray(&deleteArray_KVFileDialog);
      instance.SetDestructor(&destruct_KVFileDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFileDialog*)
   {
      return GenerateInitInstanceLocal((::KVFileDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFileDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSpIdGUI(void *p = 0);
   static void *newArray_KVSpIdGUI(Long_t size, void *p);
   static void delete_KVSpIdGUI(void *p);
   static void deleteArray_KVSpIdGUI(void *p);
   static void destruct_KVSpIdGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSpIdGUI*)
   {
      ::KVSpIdGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSpIdGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSpIdGUI", ::KVSpIdGUI::Class_Version(), "KVSpIdGUI.h", 25,
                  typeid(::KVSpIdGUI), DefineBehavior(ptr, ptr),
                  &::KVSpIdGUI::Dictionary, isa_proxy, 4,
                  sizeof(::KVSpIdGUI) );
      instance.SetNew(&new_KVSpIdGUI);
      instance.SetNewArray(&newArray_KVSpIdGUI);
      instance.SetDelete(&delete_KVSpIdGUI);
      instance.SetDeleteArray(&deleteArray_KVSpIdGUI);
      instance.SetDestructor(&destruct_KVSpIdGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSpIdGUI*)
   {
      return GenerateInitInstanceLocal((::KVSpIdGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSpIdGUI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVZAFinderDialog(void *p = 0);
   static void *newArray_KVZAFinderDialog(Long_t size, void *p);
   static void delete_KVZAFinderDialog(void *p);
   static void deleteArray_KVZAFinderDialog(void *p);
   static void destruct_KVZAFinderDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZAFinderDialog*)
   {
      ::KVZAFinderDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZAFinderDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZAFinderDialog", ::KVZAFinderDialog::Class_Version(), "KVZAFinderDialog.h", 23,
                  typeid(::KVZAFinderDialog), DefineBehavior(ptr, ptr),
                  &::KVZAFinderDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVZAFinderDialog) );
      instance.SetNew(&new_KVZAFinderDialog);
      instance.SetNewArray(&newArray_KVZAFinderDialog);
      instance.SetDelete(&delete_KVZAFinderDialog);
      instance.SetDeleteArray(&deleteArray_KVZAFinderDialog);
      instance.SetDestructor(&destruct_KVZAFinderDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZAFinderDialog*)
   {
      return GenerateInitInstanceLocal((::KVZAFinderDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZAFinderDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTestIDGridDialog(void *p = 0);
   static void *newArray_KVTestIDGridDialog(Long_t size, void *p);
   static void delete_KVTestIDGridDialog(void *p);
   static void deleteArray_KVTestIDGridDialog(void *p);
   static void destruct_KVTestIDGridDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTestIDGridDialog*)
   {
      ::KVTestIDGridDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTestIDGridDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTestIDGridDialog", ::KVTestIDGridDialog::Class_Version(), "KVTestIDGridDialog.h", 23,
                  typeid(::KVTestIDGridDialog), DefineBehavior(ptr, ptr),
                  &::KVTestIDGridDialog::Dictionary, isa_proxy, 4,
                  sizeof(::KVTestIDGridDialog) );
      instance.SetNew(&new_KVTestIDGridDialog);
      instance.SetNewArray(&newArray_KVTestIDGridDialog);
      instance.SetDelete(&delete_KVTestIDGridDialog);
      instance.SetDeleteArray(&deleteArray_KVTestIDGridDialog);
      instance.SetDestructor(&destruct_KVTestIDGridDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTestIDGridDialog*)
   {
      return GenerateInitInstanceLocal((::KVTestIDGridDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTestIDGridDialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVCanvas(void *p = 0);
   static void *newArray_KVCanvas(Long_t size, void *p);
   static void delete_KVCanvas(void *p);
   static void deleteArray_KVCanvas(void *p);
   static void destruct_KVCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVCanvas*)
   {
      ::KVCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVCanvas", ::KVCanvas::Class_Version(), "KVCanvas.h", 15,
                  typeid(::KVCanvas), DefineBehavior(ptr, ptr),
                  &::KVCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::KVCanvas) );
      instance.SetNew(&new_KVCanvas);
      instance.SetNewArray(&newArray_KVCanvas);
      instance.SetDelete(&delete_KVCanvas);
      instance.SetDeleteArray(&deleteArray_KVCanvas);
      instance.SetDestructor(&destruct_KVCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVCanvas*)
   {
      return GenerateInitInstanceLocal((::KVCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVCanvas*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVTreeAnalyzer(void *p = 0);
   static void *newArray_KVTreeAnalyzer(Long_t size, void *p);
   static void delete_KVTreeAnalyzer(void *p);
   static void deleteArray_KVTreeAnalyzer(void *p);
   static void destruct_KVTreeAnalyzer(void *p);
   static void streamer_KVTreeAnalyzer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVTreeAnalyzer*)
   {
      ::KVTreeAnalyzer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVTreeAnalyzer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVTreeAnalyzer", ::KVTreeAnalyzer::Class_Version(), "KVTreeAnalyzer.h", 129,
                  typeid(::KVTreeAnalyzer), DefineBehavior(ptr, ptr),
                  &::KVTreeAnalyzer::Dictionary, isa_proxy, 17,
                  sizeof(::KVTreeAnalyzer) );
      instance.SetNew(&new_KVTreeAnalyzer);
      instance.SetNewArray(&newArray_KVTreeAnalyzer);
      instance.SetDelete(&delete_KVTreeAnalyzer);
      instance.SetDeleteArray(&deleteArray_KVTreeAnalyzer);
      instance.SetDestructor(&destruct_KVTreeAnalyzer);
      instance.SetStreamerFunc(&streamer_KVTreeAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVTreeAnalyzer*)
   {
      return GenerateInitInstanceLocal((::KVTreeAnalyzer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVTreeAnalyzer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVDalitzPlot(void *p = 0);
   static void *newArray_KVDalitzPlot(Long_t size, void *p);
   static void delete_KVDalitzPlot(void *p);
   static void deleteArray_KVDalitzPlot(void *p);
   static void destruct_KVDalitzPlot(void *p);
   static void directoryAutoAdd_KVDalitzPlot(void *obj, TDirectory *dir);
   static void streamer_KVDalitzPlot(TBuffer &buf, void *obj);
   static Long64_t merge_KVDalitzPlot(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVDalitzPlot*)
   {
      ::KVDalitzPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVDalitzPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVDalitzPlot", ::KVDalitzPlot::Class_Version(), "KVDalitzPlot.h", 11,
                  typeid(::KVDalitzPlot), DefineBehavior(ptr, ptr),
                  &::KVDalitzPlot::Dictionary, isa_proxy, 16,
                  sizeof(::KVDalitzPlot) );
      instance.SetNew(&new_KVDalitzPlot);
      instance.SetNewArray(&newArray_KVDalitzPlot);
      instance.SetDelete(&delete_KVDalitzPlot);
      instance.SetDeleteArray(&deleteArray_KVDalitzPlot);
      instance.SetDestructor(&destruct_KVDalitzPlot);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_KVDalitzPlot);
      instance.SetStreamerFunc(&streamer_KVDalitzPlot);
      instance.SetMerge(&merge_KVDalitzPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVDalitzPlot*)
   {
      return GenerateInitInstanceLocal((::KVDalitzPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVDalitzPlot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVNucleusBox(void *p);
   static void deleteArray_KVNucleusBox(void *p);
   static void destruct_KVNucleusBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNucleusBox*)
   {
      ::KVNucleusBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNucleusBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNucleusBox", ::KVNucleusBox::Class_Version(), "KVNucleusBox.h", 11,
                  typeid(::KVNucleusBox), DefineBehavior(ptr, ptr),
                  &::KVNucleusBox::Dictionary, isa_proxy, 4,
                  sizeof(::KVNucleusBox) );
      instance.SetDelete(&delete_KVNucleusBox);
      instance.SetDeleteArray(&deleteArray_KVNucleusBox);
      instance.SetDestructor(&destruct_KVNucleusBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNucleusBox*)
   {
      return GenerateInitInstanceLocal((::KVNucleusBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNucleusBox*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVNuclearChart(void *p = 0);
   static void *newArray_KVNuclearChart(Long_t size, void *p);
   static void delete_KVNuclearChart(void *p);
   static void deleteArray_KVNuclearChart(void *p);
   static void destruct_KVNuclearChart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVNuclearChart*)
   {
      ::KVNuclearChart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVNuclearChart >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVNuclearChart", ::KVNuclearChart::Class_Version(), "KVNuclearChart.h", 15,
                  typeid(::KVNuclearChart), DefineBehavior(ptr, ptr),
                  &::KVNuclearChart::Dictionary, isa_proxy, 4,
                  sizeof(::KVNuclearChart) );
      instance.SetNew(&new_KVNuclearChart);
      instance.SetNewArray(&newArray_KVNuclearChart);
      instance.SetDelete(&delete_KVNuclearChart);
      instance.SetDeleteArray(&deleteArray_KVNuclearChart);
      instance.SetDestructor(&destruct_KVNuclearChart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVNuclearChart*)
   {
      return GenerateInitInstanceLocal((::KVNuclearChart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVNuclearChart*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KVZALineFinder(void *p);
   static void deleteArray_KVZALineFinder(void *p);
   static void destruct_KVZALineFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVZALineFinder*)
   {
      ::KVZALineFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVZALineFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVZALineFinder", ::KVZALineFinder::Class_Version(), "KVZALineFinder.h", 27,
                  typeid(::KVZALineFinder), DefineBehavior(ptr, ptr),
                  &::KVZALineFinder::Dictionary, isa_proxy, 4,
                  sizeof(::KVZALineFinder) );
      instance.SetDelete(&delete_KVZALineFinder);
      instance.SetDeleteArray(&deleteArray_KVZALineFinder);
      instance.SetDestructor(&destruct_KVZALineFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVZALineFinder*)
   {
      return GenerateInitInstanceLocal((::KVZALineFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVZALineFinder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGridEditorCanvas(void *p = 0);
   static void *newArray_KVIDGridEditorCanvas(Long_t size, void *p);
   static void delete_KVIDGridEditorCanvas(void *p);
   static void deleteArray_KVIDGridEditorCanvas(void *p);
   static void destruct_KVIDGridEditorCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGridEditorCanvas*)
   {
      ::KVIDGridEditorCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGridEditorCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGridEditorCanvas", ::KVIDGridEditorCanvas::Class_Version(), "KVIDGridEditorCanvas.h", 11,
                  typeid(::KVIDGridEditorCanvas), DefineBehavior(ptr, ptr),
                  &::KVIDGridEditorCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGridEditorCanvas) );
      instance.SetNew(&new_KVIDGridEditorCanvas);
      instance.SetNewArray(&newArray_KVIDGridEditorCanvas);
      instance.SetDelete(&delete_KVIDGridEditorCanvas);
      instance.SetDeleteArray(&deleteArray_KVIDGridEditorCanvas);
      instance.SetDestructor(&destruct_KVIDGridEditorCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGridEditorCanvas*)
   {
      return GenerateInitInstanceLocal((::KVIDGridEditorCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGridEditorCanvas*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDGridEditor(void *p = 0);
   static void *newArray_KVIDGridEditor(Long_t size, void *p);
   static void delete_KVIDGridEditor(void *p);
   static void deleteArray_KVIDGridEditor(void *p);
   static void destruct_KVIDGridEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDGridEditor*)
   {
      ::KVIDGridEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDGridEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDGridEditor", ::KVIDGridEditor::Class_Version(), "KVIDGridEditor.h", 45,
                  typeid(::KVIDGridEditor), DefineBehavior(ptr, ptr),
                  &::KVIDGridEditor::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDGridEditor) );
      instance.SetNew(&new_KVIDGridEditor);
      instance.SetNewArray(&newArray_KVIDGridEditor);
      instance.SetDelete(&delete_KVIDGridEditor);
      instance.SetDeleteArray(&deleteArray_KVIDGridEditor);
      instance.SetDestructor(&destruct_KVIDGridEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDGridEditor*)
   {
      return GenerateInitInstanceLocal((::KVIDGridEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDGridEditor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSpiderIdentificator(void *p = 0);
   static void *newArray_KVSpiderIdentificator(Long_t size, void *p);
   static void delete_KVSpiderIdentificator(void *p);
   static void deleteArray_KVSpiderIdentificator(void *p);
   static void destruct_KVSpiderIdentificator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSpiderIdentificator*)
   {
      ::KVSpiderIdentificator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSpiderIdentificator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSpiderIdentificator", ::KVSpiderIdentificator::Class_Version(), "KVSpiderIdentificator.h", 20,
                  typeid(::KVSpiderIdentificator), DefineBehavior(ptr, ptr),
                  &::KVSpiderIdentificator::Dictionary, isa_proxy, 4,
                  sizeof(::KVSpiderIdentificator) );
      instance.SetNew(&new_KVSpiderIdentificator);
      instance.SetNewArray(&newArray_KVSpiderIdentificator);
      instance.SetDelete(&delete_KVSpiderIdentificator);
      instance.SetDeleteArray(&deleteArray_KVSpiderIdentificator);
      instance.SetDestructor(&destruct_KVSpiderIdentificator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSpiderIdentificator*)
   {
      return GenerateInitInstanceLocal((::KVSpiderIdentificator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSpiderIdentificator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVBrowser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBrowser::Class_Name()
{
   return "KVBrowser";
}

//______________________________________________________________________________
const char *KVBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBrowser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBrowser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBrowser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBrowser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDataBaseBrowser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDataBaseBrowser::Class_Name()
{
   return "KVDataBaseBrowser";
}

//______________________________________________________________________________
const char *KVDataBaseBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBaseBrowser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDataBaseBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDataBaseBrowser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDataBaseBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBaseBrowser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDataBaseBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDataBaseBrowser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVWidget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVWidget::Class_Name()
{
   return "KVWidget";
}

//______________________________________________________________________________
const char *KVWidget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWidget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVWidget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWidget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVWidget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWidget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVWidget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWidget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVWidgetList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVWidgetList::Class_Name()
{
   return "KVWidgetList";
}

//______________________________________________________________________________
const char *KVWidgetList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWidgetList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVWidgetList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVWidgetList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVWidgetList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWidgetList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVWidgetList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVWidgetList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVMergeGridsDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVMergeGridsDialog::Class_Name()
{
   return "KVMergeGridsDialog";
}

//______________________________________________________________________________
const char *KVMergeGridsDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMergeGridsDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVMergeGridsDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVMergeGridsDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVMergeGridsDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMergeGridsDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVMergeGridsDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVMergeGridsDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCalculateChIoSiGridDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCalculateChIoSiGridDialog::Class_Name()
{
   return "KVCalculateChIoSiGridDialog";
}

//______________________________________________________________________________
const char *KVCalculateChIoSiGridDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalculateChIoSiGridDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCalculateChIoSiGridDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCalculateChIoSiGridDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCalculateChIoSiGridDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalculateChIoSiGridDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCalculateChIoSiGridDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCalculateChIoSiGridDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGUITelescopeChooserDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGUITelescopeChooserDialog::Class_Name()
{
   return "KVIDGUITelescopeChooserDialog";
}

//______________________________________________________________________________
const char *KVIDGUITelescopeChooserDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGUITelescopeChooserDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGUITelescopeChooserDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGUITelescopeChooserDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGUITelescopeChooserDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGUITelescopeChooserDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGUITelescopeChooserDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGUITelescopeChooserDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDBSystemDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDBSystemDialog::Class_Name()
{
   return "KVDBSystemDialog";
}

//______________________________________________________________________________
const char *KVDBSystemDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystemDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDBSystemDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystemDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDBSystemDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystemDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDBSystemDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDBSystemDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSimDirGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSimDirGUI::Class_Name()
{
   return "KVSimDirGUI";
}

//______________________________________________________________________________
const char *KVSimDirGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimDirGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSimDirGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSimDirGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSimDirGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimDirGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSimDirGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSimDirGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVBatchSystemGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVBatchSystemGUI::Class_Name()
{
   return "KVBatchSystemGUI";
}

//______________________________________________________________________________
const char *KVBatchSystemGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVBatchSystemGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVBatchSystemGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVBatchSystemGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVBatchSystemGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLauncherGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLauncherGUI::Class_Name()
{
   return "KVLauncherGUI";
}

//______________________________________________________________________________
const char *KVLauncherGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLauncherGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLauncherGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLauncherGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLauncherGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLauncherGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLauncherGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLauncherGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTextDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTextDialog::Class_Name()
{
   return "KVTextDialog";
}

//______________________________________________________________________________
const char *KVTextDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTextDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTextDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTextDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTextDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTextDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTextDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTextDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTestListView::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTestListView::Class_Name()
{
   return "KVTestListView";
}

//______________________________________________________________________________
const char *KVTestListView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestListView*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTestListView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestListView*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTestListView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestListView*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTestListView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestListView*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGridManagerGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGridManagerGUI::Class_Name()
{
   return "KVIDGridManagerGUI";
}

//______________________________________________________________________________
const char *KVIDGridManagerGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManagerGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGridManagerGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManagerGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGridManagerGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManagerGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGridManagerGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridManagerGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNewGridDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNewGridDialog::Class_Name()
{
   return "KVNewGridDialog";
}

//______________________________________________________________________________
const char *KVNewGridDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNewGridDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNewGridDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNewGridDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNewGridDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVListView::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVListView::Class_Name()
{
   return "KVListView";
}

//______________________________________________________________________________
const char *KVListView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVListView*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVListView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVListView*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVListView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVListView*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVListView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVListView*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLVContainer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLVContainer::Class_Name()
{
   return "KVLVContainer";
}

//______________________________________________________________________________
const char *KVLVContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVContainer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLVContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVContainer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLVContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVContainer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLVContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVContainer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLVEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLVEntry::Class_Name()
{
   return "KVLVEntry";
}

//______________________________________________________________________________
const char *KVLVEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLVEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLVEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLVEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLVColumnData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLVColumnData::Class_Name()
{
   return "KVLVColumnData";
}

//______________________________________________________________________________
const char *KVLVColumnData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVColumnData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLVColumnData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLVColumnData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLVColumnData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVColumnData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLVColumnData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLVColumnData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDropDownDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDropDownDialog::Class_Name()
{
   return "KVDropDownDialog";
}

//______________________________________________________________________________
const char *KVDropDownDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDropDownDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDropDownDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDropDownDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDropDownDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDropDownDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDropDownDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDropDownDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVKeyHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVKeyHandler::Class_Name()
{
   return "KVKeyHandler";
}

//______________________________________________________________________________
const char *KVKeyHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVKeyHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVKeyHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVKeyHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVKeyHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVKeyHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVKeyHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVKeyHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVInputDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVInputDialog::Class_Name()
{
   return "KVInputDialog";
}

//______________________________________________________________________________
const char *KVInputDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVInputDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVInputDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVInputDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVInputDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVInputDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVInputDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVInputDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTextEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTextEntry::Class_Name()
{
   return "KVTextEntry";
}

//______________________________________________________________________________
const char *KVTextEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTextEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTextEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTextEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTextEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTextEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTextEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTextEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFileDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFileDialog::Class_Name()
{
   return "KVFileDialog";
}

//______________________________________________________________________________
const char *KVFileDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFileDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFileDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFileDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFileDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFileDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFileDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFileDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSpIdGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSpIdGUI::Class_Name()
{
   return "KVSpIdGUI";
}

//______________________________________________________________________________
const char *KVSpIdGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpIdGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSpIdGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpIdGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSpIdGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpIdGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSpIdGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpIdGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZAFinderDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZAFinderDialog::Class_Name()
{
   return "KVZAFinderDialog";
}

//______________________________________________________________________________
const char *KVZAFinderDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZAFinderDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZAFinderDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZAFinderDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZAFinderDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZAFinderDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZAFinderDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZAFinderDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTestIDGridDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTestIDGridDialog::Class_Name()
{
   return "KVTestIDGridDialog";
}

//______________________________________________________________________________
const char *KVTestIDGridDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestIDGridDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTestIDGridDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTestIDGridDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTestIDGridDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestIDGridDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTestIDGridDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTestIDGridDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVCanvas::Class_Name()
{
   return "KVCanvas";
}

//______________________________________________________________________________
const char *KVCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVTreeAnalyzer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVTreeAnalyzer::Class_Name()
{
   return "KVTreeAnalyzer";
}

//______________________________________________________________________________
const char *KVTreeAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTreeAnalyzer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVTreeAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVTreeAnalyzer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVTreeAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTreeAnalyzer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVTreeAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVTreeAnalyzer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVDalitzPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVDalitzPlot::Class_Name()
{
   return "KVDalitzPlot";
}

//______________________________________________________________________________
const char *KVDalitzPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDalitzPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVDalitzPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVDalitzPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVDalitzPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDalitzPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVDalitzPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVDalitzPlot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNucleusBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNucleusBox::Class_Name()
{
   return "KVNucleusBox";
}

//______________________________________________________________________________
const char *KVNucleusBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNucleusBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNucleusBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNucleusBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNucleusBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNucleusBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNucleusBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNucleusBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVNuclearChart::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVNuclearChart::Class_Name()
{
   return "KVNuclearChart";
}

//______________________________________________________________________________
const char *KVNuclearChart::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclearChart*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVNuclearChart::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVNuclearChart*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVNuclearChart::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclearChart*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVNuclearChart::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVNuclearChart*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVZALineFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVZALineFinder::Class_Name()
{
   return "KVZALineFinder";
}

//______________________________________________________________________________
const char *KVZALineFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZALineFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVZALineFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVZALineFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVZALineFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZALineFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVZALineFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVZALineFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGridEditorCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGridEditorCanvas::Class_Name()
{
   return "KVIDGridEditorCanvas";
}

//______________________________________________________________________________
const char *KVIDGridEditorCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditorCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGridEditorCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditorCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGridEditorCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditorCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGridEditorCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditorCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDGridEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDGridEditor::Class_Name()
{
   return "KVIDGridEditor";
}

//______________________________________________________________________________
const char *KVIDGridEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDGridEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDGridEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDGridEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDGridEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSpiderIdentificator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSpiderIdentificator::Class_Name()
{
   return "KVSpiderIdentificator";
}

//______________________________________________________________________________
const char *KVSpiderIdentificator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderIdentificator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSpiderIdentificator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderIdentificator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSpiderIdentificator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderIdentificator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSpiderIdentificator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSpiderIdentificator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBrowser.

   ::Error("KVBrowser::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBrowser(void *p) {
      return  p ? new(p) ::KVBrowser : new ::KVBrowser;
   }
   static void *newArray_KVBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::KVBrowser[nElements] : new ::KVBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBrowser(void *p) {
      delete ((::KVBrowser*)p);
   }
   static void deleteArray_KVBrowser(void *p) {
      delete [] ((::KVBrowser*)p);
   }
   static void destruct_KVBrowser(void *p) {
      typedef ::KVBrowser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVBrowser(TBuffer &buf, void *obj) {
      ((::KVBrowser*)obj)->::KVBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVBrowser

//______________________________________________________________________________
void KVDataBaseBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDataBaseBrowser.

   KVBrowser::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDataBaseBrowser(void *p) {
      delete ((::KVDataBaseBrowser*)p);
   }
   static void deleteArray_KVDataBaseBrowser(void *p) {
      delete [] ((::KVDataBaseBrowser*)p);
   }
   static void destruct_KVDataBaseBrowser(void *p) {
      typedef ::KVDataBaseBrowser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDataBaseBrowser(TBuffer &buf, void *obj) {
      ((::KVDataBaseBrowser*)obj)->::KVDataBaseBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVDataBaseBrowser

//______________________________________________________________________________
void KVWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVWidget.

   KVBase::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVWidget(void *p) {
      return  p ? new(p) ::KVWidget : new ::KVWidget;
   }
   static void *newArray_KVWidget(Long_t nElements, void *p) {
      return p ? new(p) ::KVWidget[nElements] : new ::KVWidget[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVWidget(void *p) {
      delete ((::KVWidget*)p);
   }
   static void deleteArray_KVWidget(void *p) {
      delete [] ((::KVWidget*)p);
   }
   static void destruct_KVWidget(void *p) {
      typedef ::KVWidget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVWidget(TBuffer &buf, void *obj) {
      ((::KVWidget*)obj)->::KVWidget::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVWidget

//______________________________________________________________________________
void KVWidgetList::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVWidgetList.

   KVList::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVWidgetList(void *p) {
      return  p ? new(p) ::KVWidgetList : new ::KVWidgetList;
   }
   static void *newArray_KVWidgetList(Long_t nElements, void *p) {
      return p ? new(p) ::KVWidgetList[nElements] : new ::KVWidgetList[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVWidgetList(void *p) {
      delete ((::KVWidgetList*)p);
   }
   static void deleteArray_KVWidgetList(void *p) {
      delete [] ((::KVWidgetList*)p);
   }
   static void destruct_KVWidgetList(void *p) {
      typedef ::KVWidgetList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVWidgetList(TBuffer &buf, void *obj) {
      ((::KVWidgetList*)obj)->::KVWidgetList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVWidgetList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVWidgetList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVWidgetList

//______________________________________________________________________________
void KVMergeGridsDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVMergeGridsDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVMergeGridsDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVMergeGridsDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVMergeGridsDialog(void *p) {
      delete ((::KVMergeGridsDialog*)p);
   }
   static void deleteArray_KVMergeGridsDialog(void *p) {
      delete [] ((::KVMergeGridsDialog*)p);
   }
   static void destruct_KVMergeGridsDialog(void *p) {
      typedef ::KVMergeGridsDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVMergeGridsDialog

//______________________________________________________________________________
void KVCalculateChIoSiGridDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCalculateChIoSiGridDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVCalculateChIoSiGridDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVCalculateChIoSiGridDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCalculateChIoSiGridDialog(void *p) {
      return  p ? new(p) ::KVCalculateChIoSiGridDialog : new ::KVCalculateChIoSiGridDialog;
   }
   static void *newArray_KVCalculateChIoSiGridDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVCalculateChIoSiGridDialog[nElements] : new ::KVCalculateChIoSiGridDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCalculateChIoSiGridDialog(void *p) {
      delete ((::KVCalculateChIoSiGridDialog*)p);
   }
   static void deleteArray_KVCalculateChIoSiGridDialog(void *p) {
      delete [] ((::KVCalculateChIoSiGridDialog*)p);
   }
   static void destruct_KVCalculateChIoSiGridDialog(void *p) {
      typedef ::KVCalculateChIoSiGridDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVCalculateChIoSiGridDialog

//______________________________________________________________________________
void KVIDGUITelescopeChooserDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGUITelescopeChooserDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGUITelescopeChooserDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGUITelescopeChooserDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVIDGUITelescopeChooserDialog(void *p) {
      delete ((::KVIDGUITelescopeChooserDialog*)p);
   }
   static void deleteArray_KVIDGUITelescopeChooserDialog(void *p) {
      delete [] ((::KVIDGUITelescopeChooserDialog*)p);
   }
   static void destruct_KVIDGUITelescopeChooserDialog(void *p) {
      typedef ::KVIDGUITelescopeChooserDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDGUITelescopeChooserDialog

//______________________________________________________________________________
void KVDBSystemDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDBSystemDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDBSystemDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDBSystemDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDBSystemDialog(void *p) {
      delete ((::KVDBSystemDialog*)p);
   }
   static void deleteArray_KVDBSystemDialog(void *p) {
      delete [] ((::KVDBSystemDialog*)p);
   }
   static void destruct_KVDBSystemDialog(void *p) {
      typedef ::KVDBSystemDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDBSystemDialog

//______________________________________________________________________________
void KVSimDirGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSimDirGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSimDirGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSimDirGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSimDirGUI(void *p) {
      return  p ? new(p) ::KVSimDirGUI : new ::KVSimDirGUI;
   }
   static void *newArray_KVSimDirGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVSimDirGUI[nElements] : new ::KVSimDirGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSimDirGUI(void *p) {
      delete ((::KVSimDirGUI*)p);
   }
   static void deleteArray_KVSimDirGUI(void *p) {
      delete [] ((::KVSimDirGUI*)p);
   }
   static void destruct_KVSimDirGUI(void *p) {
      typedef ::KVSimDirGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSimDirGUI

//______________________________________________________________________________
void KVBatchSystemGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVBatchSystemGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVBatchSystemGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVBatchSystemGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVBatchSystemGUI(void *p) {
      return  p ? new(p) ::KVBatchSystemGUI : new ::KVBatchSystemGUI;
   }
   static void *newArray_KVBatchSystemGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVBatchSystemGUI[nElements] : new ::KVBatchSystemGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVBatchSystemGUI(void *p) {
      delete ((::KVBatchSystemGUI*)p);
   }
   static void deleteArray_KVBatchSystemGUI(void *p) {
      delete [] ((::KVBatchSystemGUI*)p);
   }
   static void destruct_KVBatchSystemGUI(void *p) {
      typedef ::KVBatchSystemGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVBatchSystemGUI

//______________________________________________________________________________
void KVLauncherGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLauncherGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLauncherGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLauncherGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLauncherGUI(void *p) {
      return  p ? new(p) ::KVLauncherGUI : new ::KVLauncherGUI;
   }
   static void *newArray_KVLauncherGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVLauncherGUI[nElements] : new ::KVLauncherGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLauncherGUI(void *p) {
      delete ((::KVLauncherGUI*)p);
   }
   static void deleteArray_KVLauncherGUI(void *p) {
      delete [] ((::KVLauncherGUI*)p);
   }
   static void destruct_KVLauncherGUI(void *p) {
      typedef ::KVLauncherGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLauncherGUI

//______________________________________________________________________________
void KVTextDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTextDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTextDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTextDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVTextDialog(void *p) {
      delete ((::KVTextDialog*)p);
   }
   static void deleteArray_KVTextDialog(void *p) {
      delete [] ((::KVTextDialog*)p);
   }
   static void destruct_KVTextDialog(void *p) {
      typedef ::KVTextDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTextDialog

//______________________________________________________________________________
void KVTestListView::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTestListView.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTestListView::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTestListView::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVTestListView(void *p) {
      delete ((::KVTestListView*)p);
   }
   static void deleteArray_KVTestListView(void *p) {
      delete [] ((::KVTestListView*)p);
   }
   static void destruct_KVTestListView(void *p) {
      typedef ::KVTestListView current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTestListView

//______________________________________________________________________________
void KVIDGridManagerGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGridManagerGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGridManagerGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGridManagerGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGridManagerGUI(void *p) {
      return  p ? new(p) ::KVIDGridManagerGUI : new ::KVIDGridManagerGUI;
   }
   static void *newArray_KVIDGridManagerGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGridManagerGUI[nElements] : new ::KVIDGridManagerGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGridManagerGUI(void *p) {
      delete ((::KVIDGridManagerGUI*)p);
   }
   static void deleteArray_KVIDGridManagerGUI(void *p) {
      delete [] ((::KVIDGridManagerGUI*)p);
   }
   static void destruct_KVIDGridManagerGUI(void *p) {
      typedef ::KVIDGridManagerGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDGridManagerGUI

//______________________________________________________________________________
void KVNewGridDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNewGridDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNewGridDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNewGridDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNewGridDialog(void *p) {
      return  p ? new(p) ::KVNewGridDialog : new ::KVNewGridDialog;
   }
   static void *newArray_KVNewGridDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVNewGridDialog[nElements] : new ::KVNewGridDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNewGridDialog(void *p) {
      delete ((::KVNewGridDialog*)p);
   }
   static void deleteArray_KVNewGridDialog(void *p) {
      delete [] ((::KVNewGridDialog*)p);
   }
   static void destruct_KVNewGridDialog(void *p) {
      typedef ::KVNewGridDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNewGridDialog

//______________________________________________________________________________
void KVListView::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVListView.

   TGListView::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVListView(void *p) {
      delete ((::KVListView*)p);
   }
   static void deleteArray_KVListView(void *p) {
      delete [] ((::KVListView*)p);
   }
   static void destruct_KVListView(void *p) {
      typedef ::KVListView current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVListView(TBuffer &buf, void *obj) {
      ((::KVListView*)obj)->::KVListView::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVListView

//______________________________________________________________________________
void KVLVContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLVContainer.

   TGLVContainer::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLVContainer(void *p) {
      return  p ? new(p) ::KVLVContainer : new ::KVLVContainer;
   }
   static void *newArray_KVLVContainer(Long_t nElements, void *p) {
      return p ? new(p) ::KVLVContainer[nElements] : new ::KVLVContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLVContainer(void *p) {
      delete ((::KVLVContainer*)p);
   }
   static void deleteArray_KVLVContainer(void *p) {
      delete [] ((::KVLVContainer*)p);
   }
   static void destruct_KVLVContainer(void *p) {
      typedef ::KVLVContainer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVLVContainer(TBuffer &buf, void *obj) {
      ((::KVLVContainer*)obj)->::KVLVContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVLVContainer

//______________________________________________________________________________
void KVLVEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLVEntry.

   TGLVEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVLVEntry(void *p) {
      delete ((::KVLVEntry*)p);
   }
   static void deleteArray_KVLVEntry(void *p) {
      delete [] ((::KVLVEntry*)p);
   }
   static void destruct_KVLVEntry(void *p) {
      typedef ::KVLVEntry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVLVEntry(TBuffer &buf, void *obj) {
      ((::KVLVEntry*)obj)->::KVLVEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVLVEntry

//______________________________________________________________________________
void KVLVColumnData::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLVColumnData.

   ::Error("KVLVColumnData::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVLVColumnData(void *p) {
      delete ((::KVLVColumnData*)p);
   }
   static void deleteArray_KVLVColumnData(void *p) {
      delete [] ((::KVLVColumnData*)p);
   }
   static void destruct_KVLVColumnData(void *p) {
      typedef ::KVLVColumnData current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVLVColumnData(TBuffer &buf, void *obj) {
      ((::KVLVColumnData*)obj)->::KVLVColumnData::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVLVColumnData

//______________________________________________________________________________
void KVDropDownDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDropDownDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVDropDownDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVDropDownDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVDropDownDialog(void *p) {
      delete ((::KVDropDownDialog*)p);
   }
   static void deleteArray_KVDropDownDialog(void *p) {
      delete [] ((::KVDropDownDialog*)p);
   }
   static void destruct_KVDropDownDialog(void *p) {
      typedef ::KVDropDownDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVDropDownDialog

//______________________________________________________________________________
void KVKeyHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVKeyHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVKeyHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVKeyHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVKeyHandler(void *p) {
      delete ((::KVKeyHandler*)p);
   }
   static void deleteArray_KVKeyHandler(void *p) {
      delete [] ((::KVKeyHandler*)p);
   }
   static void destruct_KVKeyHandler(void *p) {
      typedef ::KVKeyHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVKeyHandler

//______________________________________________________________________________
void KVInputDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVInputDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVInputDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVInputDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVInputDialog(void *p) {
      delete ((::KVInputDialog*)p);
   }
   static void deleteArray_KVInputDialog(void *p) {
      delete [] ((::KVInputDialog*)p);
   }
   static void destruct_KVInputDialog(void *p) {
      typedef ::KVInputDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVInputDialog

//______________________________________________________________________________
void KVTextEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTextEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTextEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTextEntry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTextEntry(void *p) {
      return  p ? new(p) ::KVTextEntry : new ::KVTextEntry;
   }
   static void *newArray_KVTextEntry(Long_t nElements, void *p) {
      return p ? new(p) ::KVTextEntry[nElements] : new ::KVTextEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTextEntry(void *p) {
      delete ((::KVTextEntry*)p);
   }
   static void deleteArray_KVTextEntry(void *p) {
      delete [] ((::KVTextEntry*)p);
   }
   static void destruct_KVTextEntry(void *p) {
      typedef ::KVTextEntry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTextEntry

//______________________________________________________________________________
void KVFileDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFileDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFileDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFileDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFileDialog(void *p) {
      return  p ? new(p) ::KVFileDialog : new ::KVFileDialog;
   }
   static void *newArray_KVFileDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVFileDialog[nElements] : new ::KVFileDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFileDialog(void *p) {
      delete ((::KVFileDialog*)p);
   }
   static void deleteArray_KVFileDialog(void *p) {
      delete [] ((::KVFileDialog*)p);
   }
   static void destruct_KVFileDialog(void *p) {
      typedef ::KVFileDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFileDialog

//______________________________________________________________________________
void KVSpIdGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSpIdGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSpIdGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSpIdGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSpIdGUI(void *p) {
      return  p ? new(p) ::KVSpIdGUI : new ::KVSpIdGUI;
   }
   static void *newArray_KVSpIdGUI(Long_t nElements, void *p) {
      return p ? new(p) ::KVSpIdGUI[nElements] : new ::KVSpIdGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSpIdGUI(void *p) {
      delete ((::KVSpIdGUI*)p);
   }
   static void deleteArray_KVSpIdGUI(void *p) {
      delete [] ((::KVSpIdGUI*)p);
   }
   static void destruct_KVSpIdGUI(void *p) {
      typedef ::KVSpIdGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSpIdGUI

//______________________________________________________________________________
void KVZAFinderDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZAFinderDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVZAFinderDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVZAFinderDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVZAFinderDialog(void *p) {
      return  p ? new(p) ::KVZAFinderDialog : new ::KVZAFinderDialog;
   }
   static void *newArray_KVZAFinderDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVZAFinderDialog[nElements] : new ::KVZAFinderDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVZAFinderDialog(void *p) {
      delete ((::KVZAFinderDialog*)p);
   }
   static void deleteArray_KVZAFinderDialog(void *p) {
      delete [] ((::KVZAFinderDialog*)p);
   }
   static void destruct_KVZAFinderDialog(void *p) {
      typedef ::KVZAFinderDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVZAFinderDialog

//______________________________________________________________________________
void KVTestIDGridDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVTestIDGridDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVTestIDGridDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVTestIDGridDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTestIDGridDialog(void *p) {
      return  p ? new(p) ::KVTestIDGridDialog : new ::KVTestIDGridDialog;
   }
   static void *newArray_KVTestIDGridDialog(Long_t nElements, void *p) {
      return p ? new(p) ::KVTestIDGridDialog[nElements] : new ::KVTestIDGridDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTestIDGridDialog(void *p) {
      delete ((::KVTestIDGridDialog*)p);
   }
   static void deleteArray_KVTestIDGridDialog(void *p) {
      delete [] ((::KVTestIDGridDialog*)p);
   }
   static void destruct_KVTestIDGridDialog(void *p) {
      typedef ::KVTestIDGridDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVTestIDGridDialog

//______________________________________________________________________________
void KVCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVCanvas(void *p) {
      return  p ? new(p) ::KVCanvas : new ::KVCanvas;
   }
   static void *newArray_KVCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::KVCanvas[nElements] : new ::KVCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVCanvas(void *p) {
      delete ((::KVCanvas*)p);
   }
   static void deleteArray_KVCanvas(void *p) {
      delete [] ((::KVCanvas*)p);
   }
   static void destruct_KVCanvas(void *p) {
      typedef ::KVCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVCanvas

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVTreeAnalyzer(void *p) {
      return  p ? new(p) ::KVTreeAnalyzer : new ::KVTreeAnalyzer;
   }
   static void *newArray_KVTreeAnalyzer(Long_t nElements, void *p) {
      return p ? new(p) ::KVTreeAnalyzer[nElements] : new ::KVTreeAnalyzer[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVTreeAnalyzer(void *p) {
      delete ((::KVTreeAnalyzer*)p);
   }
   static void deleteArray_KVTreeAnalyzer(void *p) {
      delete [] ((::KVTreeAnalyzer*)p);
   }
   static void destruct_KVTreeAnalyzer(void *p) {
      typedef ::KVTreeAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVTreeAnalyzer(TBuffer &buf, void *obj) {
      ((::KVTreeAnalyzer*)obj)->::KVTreeAnalyzer::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVTreeAnalyzer

//______________________________________________________________________________
void KVDalitzPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVDalitzPlot.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TH2F::Streamer(R__b);
      R__b >> fOrdered;
      R__b >> fShowBorder;
      R__b >> fShowCenter;
      R__b.CheckByteCount(R__s, R__c, KVDalitzPlot::IsA());
   } else {
      R__c = R__b.WriteVersion(KVDalitzPlot::IsA(), kTRUE);
      TH2F::Streamer(R__b);
      R__b << fOrdered;
      R__b << fShowBorder;
      R__b << fShowCenter;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVDalitzPlot(void *p) {
      return  p ? new(p) ::KVDalitzPlot : new ::KVDalitzPlot;
   }
   static void *newArray_KVDalitzPlot(Long_t nElements, void *p) {
      return p ? new(p) ::KVDalitzPlot[nElements] : new ::KVDalitzPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVDalitzPlot(void *p) {
      delete ((::KVDalitzPlot*)p);
   }
   static void deleteArray_KVDalitzPlot(void *p) {
      delete [] ((::KVDalitzPlot*)p);
   }
   static void destruct_KVDalitzPlot(void *p) {
      typedef ::KVDalitzPlot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_KVDalitzPlot(void *p, TDirectory *dir) {
      ((::KVDalitzPlot*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVDalitzPlot(TBuffer &buf, void *obj) {
      ((::KVDalitzPlot*)obj)->::KVDalitzPlot::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_KVDalitzPlot(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::KVDalitzPlot*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::KVDalitzPlot

//______________________________________________________________________________
void KVNucleusBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNucleusBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNucleusBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNucleusBox::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVNucleusBox(void *p) {
      delete ((::KVNucleusBox*)p);
   }
   static void deleteArray_KVNucleusBox(void *p) {
      delete [] ((::KVNucleusBox*)p);
   }
   static void destruct_KVNucleusBox(void *p) {
      typedef ::KVNucleusBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNucleusBox

//______________________________________________________________________________
void KVNuclearChart::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVNuclearChart.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVNuclearChart::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVNuclearChart::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVNuclearChart(void *p) {
      return  p ? new(p) ::KVNuclearChart : new ::KVNuclearChart;
   }
   static void *newArray_KVNuclearChart(Long_t nElements, void *p) {
      return p ? new(p) ::KVNuclearChart[nElements] : new ::KVNuclearChart[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVNuclearChart(void *p) {
      delete ((::KVNuclearChart*)p);
   }
   static void deleteArray_KVNuclearChart(void *p) {
      delete [] ((::KVNuclearChart*)p);
   }
   static void destruct_KVNuclearChart(void *p) {
      typedef ::KVNuclearChart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVNuclearChart

//______________________________________________________________________________
void KVZALineFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVZALineFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVZALineFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVZALineFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVZALineFinder(void *p) {
      delete ((::KVZALineFinder*)p);
   }
   static void deleteArray_KVZALineFinder(void *p) {
      delete [] ((::KVZALineFinder*)p);
   }
   static void destruct_KVZALineFinder(void *p) {
      typedef ::KVZALineFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVZALineFinder

//______________________________________________________________________________
void KVIDGridEditorCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGridEditorCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGridEditorCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGridEditorCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGridEditorCanvas(void *p) {
      return  p ? new(p) ::KVIDGridEditorCanvas : new ::KVIDGridEditorCanvas;
   }
   static void *newArray_KVIDGridEditorCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGridEditorCanvas[nElements] : new ::KVIDGridEditorCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGridEditorCanvas(void *p) {
      delete ((::KVIDGridEditorCanvas*)p);
   }
   static void deleteArray_KVIDGridEditorCanvas(void *p) {
      delete [] ((::KVIDGridEditorCanvas*)p);
   }
   static void destruct_KVIDGridEditorCanvas(void *p) {
      typedef ::KVIDGridEditorCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDGridEditorCanvas

//______________________________________________________________________________
void KVIDGridEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDGridEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDGridEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDGridEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDGridEditor(void *p) {
      return  p ? new(p) ::KVIDGridEditor : new ::KVIDGridEditor;
   }
   static void *newArray_KVIDGridEditor(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDGridEditor[nElements] : new ::KVIDGridEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDGridEditor(void *p) {
      delete ((::KVIDGridEditor*)p);
   }
   static void deleteArray_KVIDGridEditor(void *p) {
      delete [] ((::KVIDGridEditor*)p);
   }
   static void destruct_KVIDGridEditor(void *p) {
      typedef ::KVIDGridEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDGridEditor

//______________________________________________________________________________
void KVSpiderIdentificator::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSpiderIdentificator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSpiderIdentificator::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSpiderIdentificator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSpiderIdentificator(void *p) {
      return  p ? new(p) ::KVSpiderIdentificator : new ::KVSpiderIdentificator;
   }
   static void *newArray_KVSpiderIdentificator(Long_t nElements, void *p) {
      return p ? new(p) ::KVSpiderIdentificator[nElements] : new ::KVSpiderIdentificator[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSpiderIdentificator(void *p) {
      delete ((::KVSpiderIdentificator*)p);
   }
   static void deleteArray_KVSpiderIdentificator(void *p) {
      delete [] ((::KVSpiderIdentificator*)p);
   }
   static void destruct_KVSpiderIdentificator(void *p) {
      typedef ::KVSpiderIdentificator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSpiderIdentificator

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetgui_Impl() {
    static const char* headers[] = {
"KVZAFinderDialog.h",
"KVKeyHandler.h",
"KVTextEntry.h",
"KVZALineFinder.h",
"KVNuclearChart.h",
"KVInputDialog.h",
"KVNewGridDialog.h",
"KVIDGridEditor.h",
"KVIDGUITelescopeChooserDialog.h",
"KVTextDialog.h",
"KVLVContainer.h",
"KVBrowser.h",
"KVWidgetList.h",
"KVNucleusBox.h",
"KVCalculateChIoSiGridDialog.h",
"KVLVEntry.h",
"KVDropDownDialog.h",
"KVSimDirGUI.h",
"KVIDGridManagerGUI.h",
"KVListView.h",
"KVWidget.h",
"KVSpiderIdentificator.h",
"KVTestListView.h",
"KVLauncherGUI.h",
"KVMergeGridsDialog.h",
"KVFileDialog.h",
"KVDBSystemDialog.h",
"KVDataBaseBrowser.h",
"KVTestIDGridDialog.h",
"KVIDGridEditorCanvas.h",
"KVDalitzPlot.h",
"KVBatchSystemGUI.h",
"KVSpIdGUI.h",
"KVTreeAnalyzer.h",
"KVCanvas.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/gui/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/exp_events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis",
"/home/john/software/sources/kaliveda.git/KVMultiDet/gui",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/gui/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Basic functionality for KV graphical interface objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBrowser.h")))  KVBrowser;
class __attribute__((annotate(R"ATTRDUMP(KaliVeda DataBase Browser and Configuration Tool)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDataBaseBrowser.h")))  KVDataBaseBrowser;
class __attribute__((annotate(R"ATTRDUMP(Class holding all information relative to widgets in KVBrowser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVWidget.h")))  KVWidget;
class __attribute__((annotate(R"ATTRDUMP(list container for KVWidgets)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVWidgetList.h")))  KVWidgetList;
class __attribute__((annotate(R"ATTRDUMP(dialog box for merging ID grids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVMergeGridsDialog.h")))  KVMergeGridsDialog;
class __attribute__((annotate(R"ATTRDUMP(Dialog box for calculation of new chio-si grid in KVIDGridManagerGUI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVCalculateChIoSiGridDialog.h")))  KVCalculateChIoSiGridDialog;
class __attribute__((annotate(R"ATTRDUMP(ID Grid Manager dialog for choice of ID telescope(s))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGUITelescopeChooserDialog.h")))  KVIDGUITelescopeChooserDialog;
class __attribute__((annotate(R"ATTRDUMP(Dialog box for setting system parameters associated to runs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDBSystemDialog.h")))  KVDBSystemDialog;
class __attribute__((annotate(R"ATTRDUMP(GUI for simulated data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimDirGUI.h")))  KVSimDirGUI;
class __attribute__((annotate(R"ATTRDUMP(GUI for batch system jobs)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVBatchSystemGUI.h")))  KVBatchSystemGUI;
class __attribute__((annotate(R"ATTRDUMP(Generic GUI launcher)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLauncherGUI.h")))  KVLauncherGUI;
class __attribute__((annotate("$clingAutoload$KVTextDialog.h")))  KVTextDialog;
class __attribute__((annotate(R"ATTRDUMP(simple GUI with KVListView)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTestListView.h")))  KVTestListView;
class __attribute__((annotate(R"ATTRDUMP(A GUI for managing identification grids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridManagerGUI.h")))  KVIDGridManagerGUI;
class __attribute__((annotate(R"ATTRDUMP(Dialog box for creation of new grid in KVIDGridManagerGUI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNewGridDialog.h")))  KVNewGridDialog;
class __attribute__((annotate(R"ATTRDUMP(Slightly modified TGListView)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSimDirGUI.h")))  KVListView;
class __attribute__((annotate(R"ATTRDUMP(List view container class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLVContainer.h")))  KVLVContainer;
class __attribute__((annotate(R"ATTRDUMP(List view item class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLVEntry.h")))  KVLVEntry;
class __attribute__((annotate(R"ATTRDUMP(column data handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLVContainer.h")))  KVLVColumnData;
class __attribute__((annotate(R"ATTRDUMP(General purpose dialog asking to choose from a drop down list)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridEditor.h")))  KVDropDownDialog;
class __attribute__((annotate(R"ATTRDUMP(handler of the key events)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVKeyHandler.h")))  KVKeyHandler;
class __attribute__((annotate(R"ATTRDUMP(General purpose dialog asking for a string value)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVInputDialog.h")))  KVInputDialog;
class __attribute__((annotate(R"ATTRDUMP(TGTextEntry without any limit on the length of the text)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTextEntry.h")))  KVTextEntry;
class __attribute__((annotate(R"ATTRDUMP(File or directory selection dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFileDialog.h")))  KVFileDialog;
class __attribute__((annotate("$clingAutoload$KVSpIdGUI.h")))  KVSpIdGUI;
class __attribute__((annotate(R"ATTRDUMP(dialog box for KVZALineFinder classe)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZAFinderDialog.h")))  KVZAFinderDialog;
class __attribute__((annotate(R"ATTRDUMP(dialog box for testing an ID grid)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTestIDGridDialog.h")))  KVTestIDGridDialog;
class __attribute__((annotate(R"ATTRDUMP(TCanvas with mouse-controlled dynamic zoom and pan & scan)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZAFinderDialog.h")))  KVCanvas;
class __attribute__((annotate(R"ATTRDUMP(KVTreeAnalyzer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVTreeAnalyzer.h")))  KVTreeAnalyzer;
class __attribute__((annotate(R"ATTRDUMP(Fill 3D observables in a dalitz plot)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVDalitzPlot.h")))  KVDalitzPlot;
class __attribute__((annotate(R"ATTRDUMP(A TBox representing a nucleus in a KVNuclearChart)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNucleusBox.h")))  KVNucleusBox;
class __attribute__((annotate(R"ATTRDUMP(Used to draw nuclear chart)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVNuclearChart.h")))  KVNuclearChart;
class __attribute__((annotate(R"ATTRDUMP((try to) find masse lines from charge lines)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVZALineFinder.h")))  KVZALineFinder;
class __attribute__((annotate(R"ATTRDUMP(bidouille)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridEditor.h")))  KVIDGridEditorCanvas;
class __attribute__((annotate(R"ATTRDUMP(outil de modification de grille.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridEditor.h")))  KVIDGridEditor;
class __attribute__((annotate(R"ATTRDUMP(a faire !)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDGridEditor.h")))  KVSpiderIdentificator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVZAFinderDialog.h"
#include "KVKeyHandler.h"
#include "KVTextEntry.h"
#include "KVZALineFinder.h"
#include "KVNuclearChart.h"
#include "KVInputDialog.h"
#include "KVNewGridDialog.h"
#include "KVIDGridEditor.h"
#include "KVIDGUITelescopeChooserDialog.h"
#include "KVTextDialog.h"
#include "KVLVContainer.h"
#include "KVBrowser.h"
#include "KVWidgetList.h"
#include "KVNucleusBox.h"
#include "KVCalculateChIoSiGridDialog.h"
#include "KVLVEntry.h"
#include "KVDropDownDialog.h"
#include "KVSimDirGUI.h"
#include "KVIDGridManagerGUI.h"
#include "KVListView.h"
#include "KVWidget.h"
#include "KVSpiderIdentificator.h"
#include "KVTestListView.h"
#include "KVLauncherGUI.h"
#include "KVMergeGridsDialog.h"
#include "KVFileDialog.h"
#include "KVDBSystemDialog.h"
#include "KVDataBaseBrowser.h"
#include "KVTestIDGridDialog.h"
#include "KVIDGridEditorCanvas.h"
#include "KVDalitzPlot.h"
#include "KVBatchSystemGUI.h"
#include "KVSpIdGUI.h"
#include "KVTreeAnalyzer.h"
#include "KVCanvas.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVBatchSystemGUI", payloadCode, "@",
"KVBrowser", payloadCode, "@",
"KVCalculateChIoSiGridDialog", payloadCode, "@",
"KVCanvas", payloadCode, "@",
"KVDBSystemDialog", payloadCode, "@",
"KVDalitzPlot", payloadCode, "@",
"KVDataBaseBrowser", payloadCode, "@",
"KVDropDownDialog", payloadCode, "@",
"KVFileDialog", payloadCode, "@",
"KVIDGUITelescopeChooserDialog", payloadCode, "@",
"KVIDGridEditor", payloadCode, "@",
"KVIDGridEditorCanvas", payloadCode, "@",
"KVIDGridManagerGUI", payloadCode, "@",
"KVInputDialog", payloadCode, "@",
"KVKeyHandler", payloadCode, "@",
"KVLVColumnData", payloadCode, "@",
"KVLVContainer", payloadCode, "@",
"KVLVEntry", payloadCode, "@",
"KVLauncherGUI", payloadCode, "@",
"KVListView", payloadCode, "@",
"KVMergeGridsDialog", payloadCode, "@",
"KVNewGridDialog", payloadCode, "@",
"KVNuclearChart", payloadCode, "@",
"KVNucleusBox", payloadCode, "@",
"KVSimDirGUI", payloadCode, "@",
"KVSpIdGUI", payloadCode, "@",
"KVSpiderIdentificator", payloadCode, "@",
"KVTestIDGridDialog", payloadCode, "@",
"KVTestListView", payloadCode, "@",
"KVTextDialog", payloadCode, "@",
"KVTextEntry", payloadCode, "@",
"KVTreeAnalyzer", payloadCode, "@",
"KVWidget", payloadCode, "@",
"KVWidgetList", payloadCode, "@",
"KVZAFinderDialog", payloadCode, "@",
"KVZALineFinder", payloadCode, "@",
"gCopyObject", payloadCode, "@",
"gIDGridEditor", payloadCode, "@",
"gTreeAnalyzer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetgui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetgui_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetgui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetgui() {
  TriggerDictionaryInitialization_libKVMultiDetgui_Impl();
}
