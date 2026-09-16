#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CreativeFramework::Logging::ShellPlacementTelemetry {
class ShouldConfigurePlacementActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShouldConfigurePlacementActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShouldConfigurePlacementActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX_N0@Z
    void Stop(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShouldConfigurePlacementActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ
    ~ShouldConfigurePlacementActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShouldConfigurePlacementActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShouldConfigurePlacementActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CreativeFramework::Logging::ShellPlacementTelemetry
