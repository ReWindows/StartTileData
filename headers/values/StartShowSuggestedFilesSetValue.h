#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartShowSuggestedFilesSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartShowSuggestedFilesSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowSuggestedFilesSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartShowSuggestedFilesSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartShowSuggestedFilesSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartShowSuggestedFilesSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
