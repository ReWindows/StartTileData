#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace UnifiedTileTelemetry {
class TdlPropertyMigration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TdlPropertyMigration@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TdlPropertyMigration@UnifiedTileTelemetry@@QEAA@XZ
    ~TdlPropertyMigration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TdlPropertyMigration@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TdlPropertyMigration@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
