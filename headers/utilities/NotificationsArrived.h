#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace NotificationTelemetry {
class NotificationsArrived {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotificationsArrived@NotificationTelemetry@@QEAAXPEBG0II@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationsArrived@NotificationTelemetry@@QEAA@XZ
    ~NotificationsArrived();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotificationsArrived@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotificationsArrived@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
