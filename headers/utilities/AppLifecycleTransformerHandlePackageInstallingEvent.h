#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppLifecycleTransformerHandlePackageInstallingEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleTransformerHandlePackageInstallingEvent@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleTransformerHandlePackageInstallingEvent@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppLifecycleTransformerHandlePackageInstallingEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleTransformerHandlePackageInstallingEvent@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleTransformerHandlePackageInstallingEvent@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
