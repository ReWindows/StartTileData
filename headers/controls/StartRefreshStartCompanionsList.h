#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartRefreshStartCompanionsList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartRefreshStartCompanionsList@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartRefreshStartCompanionsList@StartSettingsTelemetry@@QEAA@XZ
    ~StartRefreshStartCompanionsList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartRefreshStartCompanionsList@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartRefreshStartCompanionsList@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
