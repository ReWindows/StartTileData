#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class TargetedContentTransformer_WNFONShelStartLayoutMigrated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentTransformer_WNFONShelStartLayoutMigrated@DataStoreTransformerTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer_WNFONShelStartLayoutMigrated@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TargetedContentTransformer_WNFONShelStartLayoutMigrated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentTransformer_WNFONShelStartLayoutMigrated@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentTransformer_WNFONShelStartLayoutMigrated@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
