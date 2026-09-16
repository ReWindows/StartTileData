#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class TileShellItemVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileShellItemVerbExecute@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileShellItemVerbExecute@UnifiedTileTelemetry@@QEAA@XZ
    ~TileShellItemVerbExecute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileShellItemVerbExecute@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileShellItemVerbExecute@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
