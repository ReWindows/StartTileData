#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace UnifiedTileTelemetry {
class UnifiedTileManagerInitialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconciliationStarted@UnifiedTileManagerInitialization@UnifiedTileTelemetry@@QEAAXXZ
    void ReconciliationStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnifiedTileManagerInitialization@UnifiedTileTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileManagerInitialization@UnifiedTileTelemetry@@QEAA@XZ
    ~UnifiedTileManagerInitialization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnifiedTileManagerInitialization@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnifiedTileManagerInitialization@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
