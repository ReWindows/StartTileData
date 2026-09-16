#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartLayoutTelemetry {
class DefaultLayoutManager_DoesApplicationAppearInStart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DefaultLayoutManager_DoesApplicationAppearInStart@StartLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLayoutManager_DoesApplicationAppearInStart@StartLayoutTelemetry@@QEAA@XZ
    ~DefaultLayoutManager_DoesApplicationAppearInStart();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefaultLayoutManager_DoesApplicationAppearInStart@StartLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefaultLayoutManager_DoesApplicationAppearInStart@StartLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartLayoutTelemetry
