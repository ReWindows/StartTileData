#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace NotificationTelemetry {
class SendSingleReadyNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendSingleReadyNotification@NotificationTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendSingleReadyNotification@NotificationTelemetry@@QEAA@XZ
    ~SendSingleReadyNotification();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendSingleReadyNotification@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendSingleReadyNotification@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
