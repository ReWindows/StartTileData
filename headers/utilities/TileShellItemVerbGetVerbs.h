#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class TileShellItemVerbGetVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileShellItemVerbGetVerbs@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileShellItemVerbGetVerbs@UnifiedTileTelemetry@@QEAA@XZ
    ~TileShellItemVerbGetVerbs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileShellItemVerbGetVerbs@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileShellItemVerbGetVerbs@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
