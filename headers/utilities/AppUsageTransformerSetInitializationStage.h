#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppUsageTransformerSetInitializationStage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageTransformerSetInitializationStage@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageTransformerSetInitializationStage@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppUsageTransformerSetInitializationStage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageTransformerSetInitializationStage@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageTransformerSetInitializationStage@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
