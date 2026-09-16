#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace UnifiedTileTelemetry {
class ManifestedImageResource_LoadAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ManifestedImageResource_LoadAsync@UnifiedTileTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManifestedImageResource_LoadAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~ManifestedImageResource_LoadAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ManifestedImageResource_LoadAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ManifestedImageResource_LoadAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
