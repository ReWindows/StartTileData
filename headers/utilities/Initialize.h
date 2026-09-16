#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CacheTelemetry {
class Initialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHitSharingViolation@Initialize@CacheTelemetry@@QEAAXXZ
    void InitializeHitSharingViolation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Initialize@CacheTelemetry@@QEAAXW4DEVICE_SCALE_FACTOR@@W4TileThemeSelector@VisualCache@UnifiedTile@Shell@WindowsInternal@@_N@Z
    void StartActivity(int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Initialize@CacheTelemetry@@QEAA@XZ
    ~Initialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Initialize@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Initialize@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
