#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace StartSettingsTelemetry {
class StartPlacesSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartPlacesSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPlacesSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartPlacesSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartPlacesSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartPlacesSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
