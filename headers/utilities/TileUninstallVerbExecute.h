#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class TileUninstallVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileUninstallVerbExecute@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileUninstallVerbExecute@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TileUninstallVerbExecute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileUninstallVerbExecute@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileUninstallVerbExecute@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
