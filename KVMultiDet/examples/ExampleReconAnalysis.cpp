#include "ExampleReconAnalysis.h"
#include "KVReconstructedNucleus.h"
#include "KVBatchSystem.h"

ClassImp(ExampleReconAnalysis)

#include "KVDataAnalyser.h"

void ExampleReconAnalysis::InitAnalysis(void)
{
   // Declaration of histograms, global variables, etc.
   // Called at the beginning of the analysis
   // The examples given are compatible with interactive, batch,
   // and PROOFLite analyses.

   /*** ADDING GLOBAL VARIABLES TO THE ANALYSIS ***/
   /* These will be automatically calculated for each event before
      your Analysis() method will be called                        */
   AddGV("KVZtot", "ztot");                             // total charge
#ifdef WITH_CPP11
   auto zvtot = AddGV("KVZVtot", "zvtot");              // total Z*vpar
   zvtot->SetMaxNumBranches(1);    // only write "Z" component in TTree
#else
   AddGV("KVZVtot", "zvtot")->SetMaxNumBranches(1);
#endif
   AddGV("KVMult", "mtot"); // total multiplicity
   // total multiplicity in forward CM hemisphere
#ifdef USING_ROOT5
   KVVarGlob* gv = AddGV("KVMult", "mtot_av");
   gv->SetSelection("_NUC_->GetVpar()>0");
#else
   auto gv = AddGV("KVMult", "mtot_av");
   gv->SetSelection( {
      "Vcm>0", [](const KVNucleus * n)
      {
         return n->GetVpar() > 0;
      }}
                   );
#endif
   gv->SetFrame("CM");

   /*** DECLARING SOME HISTOGRAMS ***/
   AddHisto(new TH1F("zdist", "Charge distribution", 100, -.5, 99.5));
   AddHisto(new TH2F("zvpar", "Z vs V_{par} in CM", 100, -15., 15., 75, .5, 75.5));

   /*** USING A TREE ***/
   CreateTreeFile();//<--- essential
   TTree* t = new TTree("myTree", "");
   AddTree(t);
   GetGVList()->MakeBranches(t); // store global variable values in branches

   /*** DEFINE WHERE TO SAVE THE RESULTS ***/
   // This filename will be used for interactive and PROOFlite jobs.
   // When running in batch mode, this will automatically use the job name.
   SetJobOutputFileName("ExampleReconAnalysis_results.root");
}

//_____________________________________
void ExampleReconAnalysis::InitRun(void)
{
   // Initialisations for each run
   // Called at the beginning of each run

   // You no longer need to define the correct identification/calibration codes for particles
   // which will be used in your analysis, they are automatically selected using the default
   // values in variables *.ReconstructedNuclei.AcceptID/ECodes.
   //
   // You can change the selection (or deactivate it) here by doing:
   // gMultiDetArray->AcceptECodes(""); => accept all calibration codes
   // gMultiDetArray->AcceptIDCodes("12,33"); => accept only ID codes in list
   //
   // If the experiment used a combination of arrays, codes have to be set for
   // each array individually:
   // gMultiDetArray->GetArray("[name]")->Accept.. => setting for array [name]

   // set title of TTree with name of analysed system
   GetTree("myTree")->SetTitle(GetCurrentRun()->GetSystemName());

#ifdef USING_ROOT6
   // reject reconstructed events which are not consistent with the DAQ trigger
   SetTriggerConditionsForRun(GetCurrentRun()->GetNumber());
#endif
}

//_____________________________________
Bool_t ExampleReconAnalysis::Analysis(void)
{
   // Analysis method called event by event.
   // The current event can be accessed by a call to method GetEvent().
   // See KVReconstructedEvent documentation for the available methods.

   GetGVList()->FillBranches(); // update values of all global variable branches
   FillTree(); // write new results in TTree

   /*** LOOP OVER PARTICLES OF EVENT ***/
#ifdef WITH_CPP11
   for (auto& n : OKEventIterator(*GetEvent())) {
#else
   for (KVEvent::Iterator it = OKEventIterator(*GetEvent()).begin(); it != GetEvent()->end(); ++it) {
      KVNucleus& n = it.get_reference<KVNucleus>();
#endif
      // "OK" particles => using selection criteria of InitRun()
      // fill Z distribution
      FillHisto("zdist", n.GetZ());
      // fill Z-Vpar(CM)
      FillHisto("zvpar", n.GetFrame("CM")->GetVpar(), n.GetZ());
   }

   return kTRUE;
}

