#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class TargetedContentImageResource_LoadAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentImageResource_LoadAsync@UnifiedTileTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentImageResource_LoadAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~TargetedContentImageResource_LoadAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentImageResource_LoadAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentImageResource_LoadAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
