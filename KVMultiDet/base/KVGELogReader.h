//Created by KVClassFactory on Fri Nov 25 09:53:18 2011
//Author: John Frankland

#ifndef __KVGELOGREADER_H
#define __KVGELOGREADER_H

#include "KVLogReader.h"

class KVGELogReader : public KVLogReader {
   virtual Int_t GetByteMultiplier(const KVString& unit);
   virtual void ReadLine(const KVString& line, Bool_t&);
   virtual void ReadCPU(const KVString& line);
   virtual void ReadScratchUsed(const KVString& line);
   virtual void ReadMemUsed(const KVString& line);
   virtual void ReadStatus(const KVString& line);
   virtual Double_t ReadStorage(const KVString& stor);
   virtual void ReadKVCPU(const KVString& line);

   Bool_t fInRequested;
   Bool_t fInConsumed;

public:
   KVGELogReader()
      : fInRequested(kFALSE), fInConsumed(kFALSE)
   {}
   virtual ~KVGELogReader() {}
   virtual void Reset()
   {
      KVLogReader::Reset();
      fInRequested = fInConsumed = kFALSE;
   }

   virtual Bool_t Incomplete() const
   {
      return (KVLogReader::Incomplete()
              ||
              ((!Killed() && !SegFault())  &&
               (
                  (fStatus == "Cputime limit exceeded")
                  || (fStatus == "Filesize limit exceeded")
               )
              )
             );

   }

   ClassDef(KVGELogReader, 1) //Read GE (Grid Engine) log files
};

#endif
