#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace StartPlaceHolderTelemetry {
class AppInstallCompleteActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppInstallCompleteActivity@StartPlaceHolderTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallCompleteActivity@StartPlaceHolderTelemetry@@QEAA@XZ
    ~AppInstallCompleteActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppInstallCompleteActivity@StartPlaceHolderTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppInstallCompleteActivity@StartPlaceHolderTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartPlaceHolderTelemetry
