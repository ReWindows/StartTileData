#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class TargetedContentTransformer_SetInitializationStage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentTransformer_SetInitializationStage@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer_SetInitializationStage@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TargetedContentTransformer_SetInitializationStage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentTransformer_SetInitializationStage@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentTransformer_SetInitializationStage@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
