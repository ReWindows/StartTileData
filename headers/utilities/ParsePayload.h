#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace NotificationTelemetry {
class ParsePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ParsePayload@NotificationTelemetry@@QEAAXPEBG0IAEBU_GUID@@@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, _GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParsePayload@NotificationTelemetry@@QEAA@XZ
    ~ParsePayload();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ParsePayload@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ParsePayload@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
