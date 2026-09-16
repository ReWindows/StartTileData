#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartShowRecentlyAddedAppsGroupGetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartShowRecentlyAddedAppsGroupGetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowRecentlyAddedAppsGroupGetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartShowRecentlyAddedAppsGroupGetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartShowRecentlyAddedAppsGroupGetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartShowRecentlyAddedAppsGroupGetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
