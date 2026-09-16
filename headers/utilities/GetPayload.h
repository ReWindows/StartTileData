#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class GetPayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetPayload@NotificationTelemetry@@QEAAXPEBG0IAEBU_GUID@@@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, _GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetPayload@NotificationTelemetry@@QEAA@XZ
    ~GetPayload();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetPayload@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetPayload@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
