#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace MRTTransformerTelemetry {
class ResolveMrtString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ResolveMrtString@MRTTransformerTelemetry@@QEAAXW4MRTResolutionType@MRTHelper@DataStoreCache@@PEBG@Z
    void StartActivity(int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResolveMrtString@MRTTransformerTelemetry@@QEAA@XZ
    ~ResolveMrtString();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ResolveMrtString@MRTTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ResolveMrtString@MRTTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MRTTransformerTelemetry
