#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreTransformerTelemetry {
class TargetedContentTransformer_CreatePlaceholderTilesAndTracking {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentTransformer_CreatePlaceholderTilesAndTracking@DataStoreTransformerTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer_CreatePlaceholderTilesAndTracking@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TargetedContentTransformer_CreatePlaceholderTilesAndTracking();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentTransformer_CreatePlaceholderTilesAndTracking@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentTransformer_CreatePlaceholderTilesAndTracking@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
