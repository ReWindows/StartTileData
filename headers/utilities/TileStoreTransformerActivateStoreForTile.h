#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class TileStoreTransformerActivateStoreForTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileStoreTransformerActivateStoreForTile@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreTransformerActivateStoreForTile@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileStoreTransformerActivateStoreForTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileStoreTransformerActivateStoreForTile@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileStoreTransformerActivateStoreForTile@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
