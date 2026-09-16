#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileRequestNotificationCompleted_Initial {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileRequestNotificationCompleted_Initial@NotificationTelemetry@@QEAAXIPEBG@Z
    void StartActivity(unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileRequestNotificationCompleted_Initial@NotificationTelemetry@@QEAA@XZ
    ~TileRequestNotificationCompleted_Initial();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileRequestNotificationCompleted_Initial@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileRequestNotificationCompleted_Initial@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
