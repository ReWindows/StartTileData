#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace NotificationTelemetry {
class TileRequestNotificationCompleted_Final {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileRequestNotificationCompleted_Final@NotificationTelemetry@@QEAAXIPEBG@Z
    void StartActivity(unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileRequestNotificationCompleted_Final@NotificationTelemetry@@QEAA@XZ
    ~TileRequestNotificationCompleted_Final();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileRequestNotificationCompleted_Final@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileRequestNotificationCompleted_Final@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
