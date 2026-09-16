#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppResolverTransformer_GetVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppResolverTransformer_GetVerbs@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppResolverTransformer_GetVerbs@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppResolverTransformer_GetVerbs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppResolverTransformer_GetVerbs@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppResolverTransformer_GetVerbs@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
