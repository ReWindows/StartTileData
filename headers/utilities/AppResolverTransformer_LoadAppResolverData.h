#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppResolverTransformer_LoadAppResolverData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppResolverTransformer_LoadAppResolverData@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppResolverTransformer_LoadAppResolverData@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppResolverTransformer_LoadAppResolverData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppResolverTransformer_LoadAppResolverData@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppResolverTransformer_LoadAppResolverData@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
