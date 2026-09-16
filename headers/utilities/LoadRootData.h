#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CuratedTileCollectionTransformerTelemetry {
class LoadRootData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadRootData@CuratedTileCollectionTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadRootData@CuratedTileCollectionTransformerTelemetry@@QEAA@XZ
    ~LoadRootData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadRootData@CuratedTileCollectionTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadRootData@CuratedTileCollectionTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CuratedTileCollectionTransformerTelemetry
