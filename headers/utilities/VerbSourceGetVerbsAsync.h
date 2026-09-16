#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class VerbSourceGetVerbsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VerbSourceGetVerbsAsync@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerbSourceGetVerbsAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~VerbSourceGetVerbsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VerbSourceGetVerbsAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VerbSourceGetVerbsAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
