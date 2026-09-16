#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class AppUsageTransformerHandleDataItemChangedEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@QEAA@XZ
    ~AppUsageTransformerHandleDataItemChangedEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageTransformerHandleDataItemChangedEvent@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
