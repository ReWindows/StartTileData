#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class VerbSourceFindVerbAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VerbSourceFindVerbAsync@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerbSourceFindVerbAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~VerbSourceFindVerbAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VerbSourceFindVerbAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VerbSourceFindVerbAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
