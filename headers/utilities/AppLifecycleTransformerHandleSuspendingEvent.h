#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class AppLifecycleTransformerHandleSuspendingEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferralCompletedByTimer@AppLifecycleTransformerHandleSuspendingEvent@DataStoreTransformerTelemetry@@QEAAXXZ
    void DeferralCompletedByTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleTransformerHandleSuspendingEvent@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleTransformerHandleSuspendingEvent@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppLifecycleTransformerHandleSuspendingEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleTransformerHandleSuspendingEvent@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleTransformerHandleSuspendingEvent@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
