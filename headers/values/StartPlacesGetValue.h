#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace StartSettingsTelemetry {
class StartPlacesGetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartPlacesGetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPlacesGetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartPlacesGetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartPlacesGetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartPlacesGetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
