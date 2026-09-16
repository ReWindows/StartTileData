#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class PrivacyStoreAppUsageSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PrivacyStoreAppUsageSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrivacyStoreAppUsageSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~PrivacyStoreAppUsageSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PrivacyStoreAppUsageSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PrivacyStoreAppUsageSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
