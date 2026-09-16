#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppLifecycleTransformerHandleDataItemChangedEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppLifecycleTransformerHandleDataItemChangedEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
