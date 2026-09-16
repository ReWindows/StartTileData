#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppUsageTransformerCreateInstance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageTransformerCreateInstance@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageTransformerCreateInstance@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppUsageTransformerCreateInstance();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageTransformerCreateInstance@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageTransformerCreateInstance@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
