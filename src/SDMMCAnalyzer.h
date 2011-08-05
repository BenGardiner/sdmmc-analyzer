#ifndef __SDMMC_ANALYZER_H
#define __SDMMC_ANALYZER_H

#include <Analyzer.h>

class ANALYZER_EXPORT SDMMCAnalyzer : public Analyzer
{
public:
    static const char Name[];
    
public:
    SDMMCAnalyzer();
    virtual ~SDMMCAnalyzer();
    
    virtual const char *GetAnalyzerName() const;
    
    virtual void WorkerThread();
    virtual bool NeedsRerun();

    virtual U32 GenerateSimulationData( U64 newest_sample_requested, U32 sample_rate, SimulationChannelDescriptor** simulation_channels );
    virtual U32 GetMinimumSampleRateHz();
};

extern "C" ANALYZER_EXPORT const char* __cdecl GetAnalyzerName();
extern "C" ANALYZER_EXPORT Analyzer* __cdecl CreateAnalyzer( );
extern "C" ANALYZER_EXPORT void __cdecl DestroyAnalyzer( Analyzer* analyzer );

#endif