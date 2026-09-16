#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace CacheTelemetry {
class GetSoftwareBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSoftwareBitmap@CacheTelemetry@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSoftwareBitmap@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSoftwareBitmap@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
