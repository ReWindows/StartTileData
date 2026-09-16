#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppUsageTransformerHandleLocalVolatileTilePropertiesChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageTransformerHandleLocalVolatileTilePropertiesChanged@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageTransformerHandleLocalVolatileTilePropertiesChanged@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppUsageTransformerHandleLocalVolatileTilePropertiesChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageTransformerHandleLocalVolatileTilePropertiesChanged@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageTransformerHandleLocalVolatileTilePropertiesChanged@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
