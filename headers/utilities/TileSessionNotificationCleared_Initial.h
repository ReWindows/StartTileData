#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileSessionNotificationCleared_Initial {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileSessionNotificationCleared_Initial@NotificationTelemetry@@QEAAXIIPEBG@Z
    void StartActivity(unsigned int, unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileSessionNotificationCleared_Initial@NotificationTelemetry@@QEAA@XZ
    ~TileSessionNotificationCleared_Initial();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileSessionNotificationCleared_Initial@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileSessionNotificationCleared_Initial@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
