#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class UnifiedTile_ActivateAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnifiedTile_ActivateAsync@UnifiedTileTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTile_ActivateAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~UnifiedTile_ActivateAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnifiedTile_ActivateAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnifiedTile_ActivateAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
