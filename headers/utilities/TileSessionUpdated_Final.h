#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace NotificationTelemetry {
class TileSessionUpdated_Final {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileSessionUpdated_Final@NotificationTelemetry@@QEAAXIIPEBG@Z
    void StartActivity(unsigned int, unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileSessionUpdated_Final@NotificationTelemetry@@QEAA@XZ
    ~TileSessionUpdated_Final();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileSessionUpdated_Final@NotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileSessionUpdated_Final@NotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationTelemetry
