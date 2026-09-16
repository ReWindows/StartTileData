#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartShowMostUsedAppsSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartShowMostUsedAppsSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowMostUsedAppsSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartShowMostUsedAppsSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartShowMostUsedAppsSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartShowMostUsedAppsSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
