#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class WPNInitialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WPNInitialization@NotificationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WPNInitialization@NotificationTelemetry@@QEAA@XZ
    ~WPNInitialization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WPNInitialization@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WPNInitialization@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
