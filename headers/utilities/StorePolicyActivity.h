#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CreativeFramework::Logging::ShellPlacementTelemetry {
class StorePolicyActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StorePolicyActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@StorePolicyActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXJI@Z
    void Stop(long, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StorePolicyActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ
    ~StorePolicyActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StorePolicyActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StorePolicyActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CreativeFramework::Logging::ShellPlacementTelemetry
