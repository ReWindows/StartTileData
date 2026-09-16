#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class ClearNotifications {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClearNotifications@NotificationTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClearNotifications@NotificationTelemetry@@QEAA@XZ
    ~ClearNotifications();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClearNotifications@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClearNotifications@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
