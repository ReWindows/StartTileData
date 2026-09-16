#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartSettingsTelemetry {
class StartStoreRecentlyOpenedItemsSetValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartStoreRecentlyOpenedItemsSetValue@StartSettingsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartStoreRecentlyOpenedItemsSetValue@StartSettingsTelemetry@@QEAA@XZ
    ~StartStoreRecentlyOpenedItemsSetValue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartStoreRecentlyOpenedItemsSetValue@StartSettingsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartStoreRecentlyOpenedItemsSetValue@StartSettingsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartSettingsTelemetry
