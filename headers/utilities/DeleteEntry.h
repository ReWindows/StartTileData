#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace CacheTelemetry {
class DeleteEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteEntry@CacheTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteEntry@CacheTelemetry@@QEAA@XZ
    ~DeleteEntry();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteEntry@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteEntry@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
