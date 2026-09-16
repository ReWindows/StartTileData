#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class TargetedContentTransformer_ActivateTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentTransformer_ActivateTile@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer_ActivateTile@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TargetedContentTransformer_ActivateTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentTransformer_ActivateTile@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentTransformer_ActivateTile@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
