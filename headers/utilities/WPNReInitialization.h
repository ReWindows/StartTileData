#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class WPNReInitialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WPNReInitialization@NotificationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WPNReInitialization@NotificationTelemetry@@QEAA@XZ
    ~WPNReInitialization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WPNReInitialization@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WPNReInitialization@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
