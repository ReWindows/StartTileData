#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CuratedTileCollectionTransformerTelemetry {
class GetAllRoots {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAllRoots@CuratedTileCollectionTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRootMissing@GetAllRoots@CuratedTileCollectionTransformerTelemetry@@QEAAXXZ
    void StartRootMissing();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAllRoots@CuratedTileCollectionTransformerTelemetry@@QEAA@XZ
    ~GetAllRoots();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAllRoots@CuratedTileCollectionTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAllRoots@CuratedTileCollectionTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CuratedTileCollectionTransformerTelemetry
