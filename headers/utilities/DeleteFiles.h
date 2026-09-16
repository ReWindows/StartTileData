#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace CacheTelemetry {
class DeleteFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteFiles@CacheTelemetry@@QEAAXW4DEVICE_SCALE_FACTOR@@W4TileThemeSelector@VisualCache@UnifiedTile@Shell@WindowsInternal@@_N@Z
    void StartActivity(int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteFiles@CacheTelemetry@@QEAA@XZ
    ~DeleteFiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteFiles@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteFiles@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
