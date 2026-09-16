#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace UnifiedTileTelemetry {
class CuratedCollectionEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CuratedCollectionEventCallback@UnifiedTileTelemetry@@QEAAXIIII@Z
    void StartActivity(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionEventCallback@UnifiedTileTelemetry@@QEAA@XZ
    ~CuratedCollectionEventCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CuratedCollectionEventCallback@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CuratedCollectionEventCallback@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
