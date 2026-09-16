#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileSessionUpdated_Initial {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileSessionUpdated_Initial@NotificationTelemetry@@QEAAXIIPEBG@Z
    void StartActivity(unsigned int, unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileSessionUpdated_Initial@NotificationTelemetry@@QEAA@XZ
    ~TileSessionUpdated_Initial();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileSessionUpdated_Initial@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileSessionUpdated_Initial@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
