#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class RefreshCachedEdpStatusAllTiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RefreshCachedEdpStatusAllTiles@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshCachedEdpStatusAllTiles@DataStoreTransformerTelemetry@@QEAA@XZ
    ~RefreshCachedEdpStatusAllTiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RefreshCachedEdpStatusAllTiles@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RefreshCachedEdpStatusAllTiles@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
