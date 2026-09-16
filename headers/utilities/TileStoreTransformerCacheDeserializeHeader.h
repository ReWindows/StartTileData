#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreTransformerTelemetry {
class TileStoreTransformerCacheDeserializeHeader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileStoreTransformerCacheDeserializeHeader@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileStoreTransformerCacheDeserializeHeader@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileStoreTransformerCacheDeserializeHeader();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileStoreTransformerCacheDeserializeHeader@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileStoreTransformerCacheDeserializeHeader@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
