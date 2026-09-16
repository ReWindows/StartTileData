#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 16 member(s).
namespace DataStoreTransformerTelemetry {
class TileStoreTransformerReconcileTiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformerNotInitialized@TileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@QEAAXXZ
    void TransformerNotInitialized();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileStoreTransformerReconcileTiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
