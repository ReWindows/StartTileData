#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class UnifiedTilePinUnpinVerbProviderGetVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnifiedTilePinUnpinVerbProviderGetVerbs@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTilePinUnpinVerbProviderGetVerbs@UnifiedTileTelemetry@@QEAA@XZ
    ~UnifiedTilePinUnpinVerbProviderGetVerbs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnifiedTilePinUnpinVerbProviderGetVerbs@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnifiedTilePinUnpinVerbProviderGetVerbs@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
