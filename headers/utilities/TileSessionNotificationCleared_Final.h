#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileSessionNotificationCleared_Final {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileSessionNotificationCleared_Final@NotificationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileSessionNotificationCleared_Final@NotificationTelemetry@@QEAA@XZ
    ~TileSessionNotificationCleared_Final();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileSessionNotificationCleared_Final@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileSessionNotificationCleared_Final@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
