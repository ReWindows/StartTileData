#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace AppInstallationTelemetry {
class ProductIdToContentAndKeyId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProductIdToContentAndKeyId@AppInstallationTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProductIdToContentAndKeyId@AppInstallationTelemetry@@QEAA@XZ
    ~ProductIdToContentAndKeyId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProductIdToContentAndKeyId@AppInstallationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProductIdToContentAndKeyId@AppInstallationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppInstallationTelemetry
