#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace AppInstallationTelemetry {
class PackageFamilyNameToProductId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPFNToProductId_NoProductIdReturned@PackageFamilyNameToProductId@AppInstallationTelemetry@@QEAAXXZ
    void SendPFNToProductId_NoProductIdReturned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PackageFamilyNameToProductId@AppInstallationTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyNameToProductId@AppInstallationTelemetry@@QEAA@XZ
    ~PackageFamilyNameToProductId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PackageFamilyNameToProductId@AppInstallationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PackageFamilyNameToProductId@AppInstallationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppInstallationTelemetry
