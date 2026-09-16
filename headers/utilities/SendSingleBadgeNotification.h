#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace NotificationTelemetry {
class SendSingleBadgeNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendSingleBadgeNotification@NotificationTelemetry@@QEAAXPEBG0IAEBU_GUID@@@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, _GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendSingleBadgeNotification@NotificationTelemetry@@QEAA@XZ
    ~SendSingleBadgeNotification();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendSingleBadgeNotification@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendSingleBadgeNotification@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
