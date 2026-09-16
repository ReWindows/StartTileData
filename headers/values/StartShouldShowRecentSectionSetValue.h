#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartShouldShowRecentSectionSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartShouldShowRecentSectionSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShouldShowRecentSectionSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartShouldShowRecentSectionSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartShouldShowRecentSectionSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartShouldShowRecentSectionSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
