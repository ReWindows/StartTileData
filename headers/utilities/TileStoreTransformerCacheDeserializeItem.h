#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class TileStoreTransformerCacheDeserializeItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileStoreTransformerCacheDeserializeItem@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreTransformerCacheDeserializeItem@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileStoreTransformerCacheDeserializeItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileStoreTransformerCacheDeserializeItem@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileStoreTransformerCacheDeserializeItem@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
