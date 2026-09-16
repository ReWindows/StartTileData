#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartShowRecentlyAddedAppsGroupSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartShowRecentlyAddedAppsGroupSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowRecentlyAddedAppsGroupSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartShowRecentlyAddedAppsGroupSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartShowRecentlyAddedAppsGroupSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartShowRecentlyAddedAppsGroupSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
