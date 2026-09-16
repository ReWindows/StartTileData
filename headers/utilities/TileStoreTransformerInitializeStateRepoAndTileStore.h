#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreTransformerTelemetry {
class TileStoreTransformerInitializeStateRepoAndTileStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileStoreTransformerInitializeStateRepoAndTileStore@DataStoreTransformerTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreTransformerInitializeStateRepoAndTileStore@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileStoreTransformerInitializeStateRepoAndTileStore();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileStoreTransformerInitializeStateRepoAndTileStore@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileStoreTransformerInitializeStateRepoAndTileStore@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
