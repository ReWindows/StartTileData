#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class TileLifetimeTransformerReconcileTileLifetime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileLifetimeTransformerReconcileTileLifetime@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileLifetimeTransformerReconcileTileLifetime@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileLifetimeTransformerReconcileTileLifetime();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileLifetimeTransformerReconcileTileLifetime@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileLifetimeTransformerReconcileTileLifetime@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
