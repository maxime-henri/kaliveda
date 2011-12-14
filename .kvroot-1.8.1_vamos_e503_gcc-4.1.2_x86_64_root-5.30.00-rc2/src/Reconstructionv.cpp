#include "Reconstructionv.h"
#include "TVector3.h"
#include "KVINDRA.h"
#include "KVDataSet.h"
#include <cmath>

//Author: Maurycy Rejmund

ClassImp(Reconstructionv)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>Reconstructionv</h2>
<p>
Part of the VAMOS analysis package kindly contributed by Maurycy Rejmund (GANIL).
</p>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

Reconstructionv::Reconstructionv(LogFile *Log, DriftChamberv *Drift)
{
#ifdef DEBUG
  cout << "Reconstructionv::Constructor" << endl;
#endif
  Ready=kFALSE;
  char line[255];
  char fname[30];
  int len=255;
  int i,j;

  L = Log;
  Dr = Drift;


  for(i=0;i<6;i++)
    Counter[i] = 0;

  Init();

  Rnd = new Random;
  
  ifstream inf3;
  if(!gDataSet->OpenDataSetFile("Vamos_distance.dat", inf3))
    {
      cout << "Could not open the calibration file Vamos_distance.dat !" << endl;
      return;
    }
  else
    {
      cout << "Reading Vamos_distance.dat " << endl;
      L->Log << "Reading Vamos_distance.dat " << endl;


      inf3.getline(line,len);      
      inf3.getline(line,len);
      inf3 >> DDC1;
      cout << DDC1 << endl;
      L->Log << DDC1 << endl;      
      
      inf3.getline(line,len);      
      inf3.getline(line,len);      
      inf3 >> DSED1;
      cout << DSED1 << endl;
      L->Log << DSED1 << endl;
      
      inf3.getline(line,len);
      inf3.getline(line,len);            
      inf3 >> DDC2;
      cout << DDC2 << endl;
      L->Log << DDC2 << endl;      
      
      inf3.getline(line,len);
      inf3.getline(line,len);            
      inf3 >> DCHIO;
      cout << DCHIO << endl;
      L->Log << DCHIO << endl; 
      
      inf3.getline(line,len); 
      inf3.getline(line,len);           
      inf3 >> DSI;
      cout << DSI << endl;
      L->Log << DSI << endl;      
      
      inf3.getline(line,len);
      inf3.getline(line,len);            
      inf3 >> DCSI;
      cout << DCSI << endl;
      L->Log << DCSI << endl;           
	}
  inf3.close();

  ifstream inf;
  if(!gDataSet->OpenDataSetFile("Reconstruction.cal", inf))
    {
      cout << "Could not open the calibration file Reconstruction.cal !" << endl;
      return;
    }
  else
    {
      cout.setf(ios::showpoint);
      cout << "Reading Reconstruction.cal" << endl;
      L->Log << "Reading Reconstruction.cal" << endl;


      inf.getline(line,len);
      cout << line << endl;
      L->Log << line << endl;
      inf >> BrhoRef;
      cout << BrhoRef << endl;
      L->Log << BrhoRef << endl;

      inf.getline(line,len);
     
      for(j=0;j<4;j++)
	{
	  inf.getline(line,len);
	  cout << line << endl;
	  L->Log << line << endl;
	  inf.getline(line,len);
	  sscanf(line,"%s",fname);
	  
	  
	  ifstream inf1;
	  
	  if(!gDataSet->OpenDataSetFile(fname,inf1))
	    {
	      cout << "Could not open the calibration file " << fname << endl;
	      return;
	    }
	  else
	    {
	      cout.setf(ios::showpoint);
	      cout << "Reading " << fname << endl;
	      L->Log << "Reading " << fname << endl;
	      inf1.getline(line,len);
	      cout << line << endl;
	      L->Log << line << endl;
	      
	      for(i=0;i<330;i++)
		inf1 >> Coef[j][i];

	    }
	  inf1.close();
	}
	      inf.getline(line,len);
	      cout << line << endl;
	      L->Log << line << endl;
	      inf >> PathOffset;
	      cout << "PathOffset: " << PathOffset << endl;
	      L->Log << "PathOffset: " << PathOffset << endl;
    }
  inf.close();
  Ready=kTRUE;
}
Reconstructionv::~Reconstructionv(void)
{
#ifdef DEBUG
  cout << "Reconstructionv::Destructor" << endl;
#endif

  PrintCounters();
}

void Reconstructionv::PrintCounters(void)
{
#ifdef DEBUG
  cout << "Reconstructionv::PrintCounters" << endl;
#endif
  cout << endl;
  cout << "Reconstructionv::PrintCounters" << endl;
  cout << "Called :" << Counter[0] << endl;
  cout << "Called with Drift Present :" << Counter[1] << endl;
  cout << "Present :" << Counter[2] << endl;

  L->Log << endl;
  L->Log << "Reconstructionv::PrintCounters" << endl;
  L->Log << "Called :" << Counter[0] << endl;
  L->Log << "Called with Drift Present :" << Counter[1] << endl;
  L->Log << "Present :" << Counter[2] << endl;


}

void Reconstructionv::Init(void)
{

L->Log << "Reconstructionv::Init()" << endl;
#ifdef DEBUG
  cout << "Reconstructionv::Init" << endl;
#endif
  Present = false; 

  //BB = ttheta = 0;
  Brho = Theta = Phi = Path = -500;
  ThetaL = PhiL = -500.;
}


void Reconstructionv::SetBrhoRef(Double_t B)
{
    BB = B; 
}

void Reconstructionv::SetAngleVamos(Double_t theta)
{
	ttheta = theta; 
}

Double_t Reconstructionv::GetBrhoRef(void)
{
    return (Double_t) gIndraDB->GetRun(gIndra->GetCurrentRunNumber())->Get("Brho");
	//return BB;
}

Double_t Reconstructionv::GetAngleVamos(void)
{
    return (Double_t) gIndraDB->GetRun(gIndra->GetCurrentRunNumber())->Get("Theta");
	//return ttheta; 
}



void Reconstructionv::Calculate(void)
{

    L->Log << "Reconstructionv::Calculate()" << endl;

#ifdef DEBUG
  cout << "Reconstructionv::Calculate" << endl;
#endif
  
  Double_t Brhot,Thetat,Phit,Patht;
  Double_t Vec[5],Vecp;

  Int_t i,j[7];
  
  Brhot=Thetat=Phit = Patht = 0.00000;
  Vec[0] = 1.000000;
  Vec[1] =(Double_t) (-1. * (Dr->Xf)/1000.);
  Vec[2] =0.;//(Double_t) (-1. * (Dr->Yf)/1000.);
  Vec[3] =(Double_t) (-1. * (Dr->Tf)/1000.);
  Vec[4] =0.;//(Double_t) (-1. * atan(tan((Dr->Pf)/1000.)*cos((Dr->Tf)/1000.)));
  //goes to zgoubi coordinates
  
//L->Log<<"Xf = "<<Dr->Xf<<endl;
//L->Log<<"Tf = "<<Dr->Tf<<endl;

  i = 0;
  for(j[0]=0;j[0]<5;j[0]++)
    for(j[1]=j[0];j[1]<5;j[1]++)
      for(j[2]=j[1];j[2]<5;j[2]++)
	for(j[3]=j[2];j[3]<5;j[3]++)
	  for(j[4]=j[3];j[4]<5;j[4]++)
	    for(j[5]=j[4];j[5]<5;j[5]++)
	      for(j[6]=j[5];j[6]<5;j[6]++)
	      {
		Vecp = Vec[j[0]]*Vec[j[1]]*Vec[j[2]]*Vec[j[3]]*Vec[j[4]]*Vec[j[5]]*Vec[j[6]];
		Brhot += Coef[0][i] *Vecp;
		Thetat += Coef[1][i] *Vecp;
		Patht += Coef[3][i] *Vecp;
		i++;
	      }
  Vec[0] = 1.000000;
  Vec[1] =(Double_t) (-1. * (Dr->Xf)/1000.);
  Vec[2] =(Double_t) (-1. * (Dr->Yf)/1000.);
  Vec[3] =(Double_t) (-1. * (Dr->Tf)/1000.);
  Vec[4] =(Double_t) (-1. * atan(tan((Dr->Pf)/1000.)*cos((Dr->Tf)/1000.)));

  i = 0;
  for(j[0]=0;j[0]<5;j[0]++)
    for(j[1]=j[0];j[1]<5;j[1]++)
      for(j[2]=j[1];j[2]<5;j[2]++)
	for(j[3]=j[2];j[3]<5;j[3]++)
	  for(j[4]=j[3];j[4]<5;j[4]++)
	    for(j[5]=j[4];j[5]<5;j[5]++)
	      for(j[6]=j[5];j[6]<5;j[6]++)
	      {
		Vecp = Vec[j[0]]*Vec[j[1]]*Vec[j[2]]*Vec[j[3]]*Vec[j[4]]*Vec[j[5]]*Vec[j[6]];
		Phit += Coef[2][i] *Vecp;
		i++;
	      }
	//L->Log << "Test brho	: "<< GetBrhoRef()<<endl;
	//L->Log << "Test vamos	: "<< GetAngleVamos()<<endl;
	L->Log<<"-----------"<<endl;
	L->Log << "Brhot = "<< Brhot << " " << "Thetat = "<< Thetat << " " <<"Phit = "<< Phit <<" "<<"Patht = "<<Patht<<endl;
	L->Log<<"-----------"<<endl;
  //  cout << i << " " << Dr->Xf/10. << " " << Dr->Tf << " " << Dr->Yf/10. << " " << Dr->Pf << endl; 
  if(Brhot >0.001 && Thetat > -300. && Thetat < 300. 
     && Phit > -300. && Phit < 300. && Patht >0 && Patht < 2000.)
    {
      Counter[2]++;
      Present = true;
      Brho = GetBrhoRef()*((Float_t) Brhot);
      //Brho = gIndraDB->GetRun(gIndra->GetCurrentRunNumber())->Get("Brho")*((Float_t) Brhot);
      Theta = (Float_t) Thetat*-1;
      Phi = (Float_t) Phit*-1;
      Path = (Float_t) Patht + PathOffset;

      TVector3 myVec(sin(Theta/1000.)*cos(Phi/1000.),sin(Phi/1000.),cos(Theta/1000.)*cos(Phi/1000.));
      myVec.RotateY(GetAngleVamos()*3.141592654/180.);
      //myVec.RotateY(gIndraDB->GetRun(gIndra->GetCurrentRunNumber())->Get("Theta")*3.141592654/180.);
      ThetaL = myVec.Theta();
      PhiL = myVec.Phi();
      
            //cout << Brho << " " << Theta << " " << Phi << endl;
	    L->Log<<"-----------"<<endl;
	    L->Log << "Brho = "<< Brho << " " << "Theta = "<< Theta << " " <<"Phi = "<< Phi <<" "<<"Path = "<<Path<<endl;
	    L->Log << "ThetaL = "<< ThetaL << " " <<"PhiL = "<< PhiL <<endl;
	    L->Log<<"-----------"<<endl;
    } 

}


void Reconstructionv::Treat(void)
{
    L->Log << "Reconstructionv::Treat()" << endl;

#ifdef DEBUG
  cout << "Reconstructionv::Treat" << endl;
#endif

  if( !Ready ) return;
  
  Counter[0]++;
  Init();
  if(Dr->Present)
    {
      Counter[1]++;
      Calculate();
#ifdef DEBUG
      Show();
#endif
    }
}

void Reconstructionv::outAttach(TTree *outT)
{

    L->Log << " + Reconstructionv::outAttach(TTree* " << outT << ")" << endl;

#ifdef DEBUG
  cout << "Reconstructionv::outAttach " << endl;
#endif

#ifdef DEBUG
  cout << "Attaching Reconstructionv variables" << endl;
#endif

  outT->Branch("Brho",&Brho,"Brho/F");
  outT->Branch("Theta",&Theta,"Theta/F");
  outT->Branch("Phi",&Phi,"Phi/F");
  outT->Branch("Path",&Path,"Path/F");
  outT->Branch("ThetaL",&ThetaL,"ThetaL/F");
  outT->Branch("PhiL",&PhiL,"PhiL/F");

}


void Reconstructionv::CreateHistograms(void)
{

#ifdef DEBUG
  cout << "Reconstructionv::CreateHistograms " << endl;
#endif
}
void Reconstructionv::FillHistograms(void)
{
#ifdef DEBUG
  cout << "Reconstructionv::FillHistograms " << endl;
#endif

}


void Reconstructionv::Show(void)
{
#ifdef DEBUG
  cout << "Reconstructionv::Show" << endl;
#endif
  cout.setf(ios::showpoint);
 
}
