#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppResolverTransformerActivateTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppResolverTransformerActivateTile@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppResolverTransformerActivateTile@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppResolverTransformerActivateTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppResolverTransformerActivateTile@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppResolverTransformerActivateTile@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
