#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class PlaceholderActivationHandler_ActivateTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PlaceholderActivationHandler_ActivateTile@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderActivationHandler_ActivateTile@UnifiedTileTelemetry@@QEAA@XZ
    ~PlaceholderActivationHandler_ActivateTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PlaceholderActivationHandler_ActivateTile@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PlaceholderActivationHandler_ActivateTile@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
