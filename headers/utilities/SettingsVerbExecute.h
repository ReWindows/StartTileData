#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class SettingsVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingsVerbExecute@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsVerbExecute@DataStoreTransformerTelemetry@@QEAA@XZ
    ~SettingsVerbExecute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingsVerbExecute@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingsVerbExecute@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
