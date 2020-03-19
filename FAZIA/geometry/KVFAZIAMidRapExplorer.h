//Created by KVClassFactory on Thu Mar 19 12:53:22 2020
//Author: John Frankland,,,

#ifndef __KVFAZIAMIDRAPEXPLORER_H
#define __KVFAZIAMIDRAPEXPLORER_H

#include "KVFAZIA.h"

class KVFAZIAMidRapExplorer : public KVFAZIA {
   void BuildFAZIA();
   void GetGeometryParameters();

public:
   KVFAZIAMidRapExplorer()
   {
      SetTitle(ClassName());
   }
   virtual ~KVFAZIAMidRapExplorer() {}

   void SetNameOfDetectors(KVEnv&);

   ClassDef(KVFAZIAMidRapExplorer, 1) //FAZIA setup with two belts of 6 blocks
};

#endif
