#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class StartPinUnpinTileVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartPinUnpinTileVerbExecute@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPinUnpinTileVerbExecute@UnifiedTileTelemetry@@QEAA@XZ
    ~StartPinUnpinTileVerbExecute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartPinUnpinTileVerbExecute@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartPinUnpinTileVerbExecute@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
