#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileRequestNotificationCompleted_TaskPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileRequestNotificationCompleted_TaskPool@NotificationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileRequestNotificationCompleted_TaskPool@NotificationTelemetry@@QEAA@XZ
    ~TileRequestNotificationCompleted_TaskPool();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileRequestNotificationCompleted_TaskPool@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileRequestNotificationCompleted_TaskPool@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
