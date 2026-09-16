#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class SettingsUninstallVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingsUninstallVerbExecute@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsUninstallVerbExecute@DataStoreTransformerTelemetry@@QEAA@XZ
    ~SettingsUninstallVerbExecute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingsUninstallVerbExecute@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingsUninstallVerbExecute@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
