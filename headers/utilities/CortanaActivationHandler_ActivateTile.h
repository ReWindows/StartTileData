#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class CortanaActivationHandler_ActivateTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CortanaActivationHandler_ActivateTile@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaActivationHandler_ActivateTile@UnifiedTileTelemetry@@QEAA@XZ
    ~CortanaActivationHandler_ActivateTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CortanaActivationHandler_ActivateTile@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CortanaActivationHandler_ActivateTile@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
