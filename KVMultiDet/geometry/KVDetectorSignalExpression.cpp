//Created by KVClassFactory on Thu Jun 20 15:36:03 2019
//Author: John Frankland,,,

#include "KVDetector.h"
#include "KVDetectorSignalExpression.h"

ClassImp(KVDetectorSignalExpression)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVDetectorSignalExpression</h2>
<h4>Mathematical expression involving one or more detector signals</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

KVDetectorSignalExpression::KVDetectorSignalExpression(const Char_t* type, const KVString& _expr, KVDetector* det)
   : KVDetectorSignal(type, det)
{
   // 'type' will be an alias for this expression
   //
   // 'expr' is any mathematically valid expression involving signals which are defined for 'det'
   //
   // If no valid signals are contained in the expression, IsValid() returns kFALSE
   // and the expression should not be used

   int nsigs = 0;
   KVString expr = _expr;
   TIter it_sig(&det->GetListOfDetectorSignals());
   KVDetectorSignal* ds;
   while ((ds = (KVDetectorSignal*)it_sig())) {
      if (expr.Contains(ds->GetName())) {
         fSignals.push_back(ds);
         expr.ReplaceAll(ds->GetName(), Form("[%d]", nsigs));
         ++nsigs;
      }
   }
   if (nsigs) {
      fFormula.reset(new TFormula(type, expr));
      fValid = kTRUE;
   }
   else
      fValid = kFALSE;

   SetTitle(Form("Signal calculated as %s for detector %s", _expr.Data(), det->GetName()));
}

Double_t KVDetectorSignalExpression::GetValue() const
{
   // Evaluate the expression using all current values of signals

   int nsigs = 0;
#ifdef WITH_CPP11
   for (KVDetectorSignal* ds : fSignals) {
#else
   for (std::vector<KVDetectorSignal*>::const_iterator it = fSignals.begin(); it != fSignals.End(); ++it) {
      KVDetectorSignal* ds = *it;
#endif
      fFormula->SetParameter(nsigs, ds->GetValue());
      ++nsigs;
   }
   return fFormula->Eval(0);
}
