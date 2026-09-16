#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace StartPlaceHolderTelemetry {
class AppInstallOnProgressActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppInstallOnProgressActivity@StartPlaceHolderTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallOnProgressActivity@StartPlaceHolderTelemetry@@QEAA@XZ
    ~AppInstallOnProgressActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppInstallOnProgressActivity@StartPlaceHolderTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppInstallOnProgressActivity@StartPlaceHolderTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartPlaceHolderTelemetry
