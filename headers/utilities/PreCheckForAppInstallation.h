#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace AppInstallationTelemetry {
class PreCheckForAppInstallation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppIsNotApplicable@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXXZ
    void AppIsNotApplicable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppNotAllowedToInstall@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXXZ
    void AppNotAllowedToInstall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptEntitlement@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXXZ
    void AttemptEntitlement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LicenseNotSatisfied@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXXZ
    void LicenseNotSatisfied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXPEBG0000@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreBlockedByPolicy@PreCheckForAppInstallation@AppInstallationTelemetry@@QEAAXXZ
    void StoreBlockedByPolicy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PreCheckForAppInstallation@AppInstallationTelemetry@@QEAA@XZ
    ~PreCheckForAppInstallation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PreCheckForAppInstallation@AppInstallationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PreCheckForAppInstallation@AppInstallationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppInstallationTelemetry
