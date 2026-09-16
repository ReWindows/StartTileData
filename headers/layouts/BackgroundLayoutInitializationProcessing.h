#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CollectionInitializationBackgroundTaskTelemetry {
class BackgroundLayoutInitializationProcessing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BackgroundLayoutInitializationProcessing@CollectionInitializationBackgroundTaskTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackgroundLayoutInitializationProcessing@CollectionInitializationBackgroundTaskTelemetry@@QEAA@XZ
    ~BackgroundLayoutInitializationProcessing();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BackgroundLayoutInitializationProcessing@CollectionInitializationBackgroundTaskTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BackgroundLayoutInitializationProcessing@CollectionInitializationBackgroundTaskTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CollectionInitializationBackgroundTaskTelemetry
