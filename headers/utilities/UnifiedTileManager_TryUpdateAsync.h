#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace UnifiedTileTelemetry {
class UnifiedTileManager_TryUpdateAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnifiedTileManager_TryUpdateAsync@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileManager_TryUpdateAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~UnifiedTileManager_TryUpdateAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnifiedTileManager_TryUpdateAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnifiedTileManager_TryUpdateAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
