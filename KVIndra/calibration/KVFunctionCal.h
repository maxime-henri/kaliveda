/*
$Id: KVFunctionCal.h,v 1.4 2009/03/23 11:30:54 ebonnet Exp $
$Revision: 1.4 $
$Date: 2009/03/23 11:30:54 $
*/

//Created by KVClassFactory on Wed Sep 19 14:01:23 2007
//Author: bonnet

#ifndef __KVFUNCTIONCAL_H
#define __KVFUNCTIONCAL_H

#include "TF1.h"

#include "KVDBParameterSet.h"
#include "KVCalibrator.h"
#include "KVACQParam.h"
#include "KVString.h"

class KVFunctionCal : public KVCalibrator
{
   
	TF1*			fcalibfunction;//calibration function
   Bool_t      fPedCorr;		//true if pedestal correction is required
	protected:
	
	void SetParametersWithFunction();
	
	public:
	
	KVFunctionCal(){ init(); };
   KVFunctionCal(TF1 *ff);
	KVFunctionCal(KVDetector * kvd,TF1 *ff);
	KVFunctionCal(KVDBParameterSet *kvdbps);
	void init();
	
	virtual ~KVFunctionCal(){ 
		if (fcalibfunction) delete fcalibfunction;
		fcalibfunction=0; 
	};
	
	void 	ChangeCalibParameters(KVDBParameterSet *kvdbps);
   void 	SetConversionType(TString from,TString to,TString signal);
   void 	WithPedestalCorrection(Bool_t yes) { fPedCorr = yes; }; 
	TF1*  GetFunction() { return fcalibfunction; }
	
	virtual Double_t Compute(Double_t) const;
   virtual Double_t Invert(Double_t e);
	virtual Double_t operator() (Double_t);
  
	ClassDef(KVFunctionCal,1)//analytic function calibration E = f(channel)
};

#endif
