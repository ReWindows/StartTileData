#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace AppInstallationTelemetry {
class InstallAppsInBatch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InstallAppsInBatch@AppInstallationTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InstallAppsInBatch@AppInstallationTelemetry@@QEAA@XZ
    ~InstallAppsInBatch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InstallAppsInBatch@AppInstallationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InstallAppsInBatch@AppInstallationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppInstallationTelemetry
