#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartLayoutTelemetry {
class InitializingStartLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializingStartLayout@StartLayoutTelemetry@@QEAAXW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializingStartLayout@StartLayoutTelemetry@@QEAA@XZ
    ~InitializingStartLayout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializingStartLayout@StartLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializingStartLayout@StartLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartLayoutTelemetry
