#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class NotificationReady {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotificationReady@NotificationTelemetry@@QEAAXPEBG0IAEBU_GUID@@_N@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, _GUID const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationReady@NotificationTelemetry@@QEAA@XZ
    ~NotificationReady();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotificationReady@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotificationReady@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
