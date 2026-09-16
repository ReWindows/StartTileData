#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CacheTelemetry {
class CreateFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFilesHitSharingViolation@CreateFiles@CacheTelemetry@@QEAAXXZ
    void CreateFilesHitSharingViolation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateFiles@CacheTelemetry@@QEAAXW4DEVICE_SCALE_FACTOR@@W4TileThemeSelector@VisualCache@UnifiedTile@Shell@WindowsInternal@@_N@Z
    void StartActivity(int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateFiles@CacheTelemetry@@QEAA@XZ
    ~CreateFiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateFiles@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateFiles@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
