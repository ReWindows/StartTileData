#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace TileCollectionTelemetry {
class GetCollectionActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionInitializing@GetCollectionActivity@TileCollectionTelemetry@@QEAAXXZ
    void CollectionInitializing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetCollectionActivity@TileCollectionTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCollectionActivity@TileCollectionTelemetry@@QEAA@XZ
    ~GetCollectionActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetCollectionActivity@TileCollectionTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetCollectionActivity@TileCollectionTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TileCollectionTelemetry
