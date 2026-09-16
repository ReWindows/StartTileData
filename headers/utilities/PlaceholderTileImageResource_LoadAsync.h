#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class PlaceholderTileImageResource_LoadAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PlaceholderTileImageResource_LoadAsync@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileImageResource_LoadAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~PlaceholderTileImageResource_LoadAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PlaceholderTileImageResource_LoadAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PlaceholderTileImageResource_LoadAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
