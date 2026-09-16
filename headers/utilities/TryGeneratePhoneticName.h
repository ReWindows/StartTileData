#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace MRTTransformerTelemetry {
class TryGeneratePhoneticName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TryGeneratePhoneticName@MRTTransformerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TryGeneratePhoneticName@MRTTransformerTelemetry@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryGeneratePhoneticName@MRTTransformerTelemetry@@QEAA@XZ
    ~TryGeneratePhoneticName();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TryGeneratePhoneticName@MRTTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TryGeneratePhoneticName@MRTTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MRTTransformerTelemetry
