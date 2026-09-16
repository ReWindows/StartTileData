#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace CommonStartTelemetry {
class SecondaryTileExperienceDialogShownActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SecondaryTileExperienceDialogShownActivity@CommonStartTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SecondaryTileExperienceDialogShownActivity@CommonStartTelemetry@@QEAAX_N0@Z
    void Stop(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileExperienceDialogShownActivity@CommonStartTelemetry@@QEAA@XZ
    ~SecondaryTileExperienceDialogShownActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SecondaryTileExperienceDialogShownActivity@CommonStartTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SecondaryTileExperienceDialogShownActivity@CommonStartTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CommonStartTelemetry
