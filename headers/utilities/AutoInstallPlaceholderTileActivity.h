#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace StartPlaceHolderTelemetry {
class AutoInstallPlaceholderTileActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AutoInstallPlaceholderTileActivity@StartPlaceHolderTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoInstallPlaceholderTileActivity@StartPlaceHolderTelemetry@@QEAA@XZ
    ~AutoInstallPlaceholderTileActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AutoInstallPlaceholderTileActivity@StartPlaceHolderTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AutoInstallPlaceholderTileActivity@StartPlaceHolderTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartPlaceHolderTelemetry
