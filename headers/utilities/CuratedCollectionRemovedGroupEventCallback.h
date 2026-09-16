#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class CuratedCollectionRemovedGroupEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CuratedCollectionRemovedGroupEventCallback@UnifiedTileTelemetry@@QEAAXAEBU_GUID@@@Z
    void StartActivity(_GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionRemovedGroupEventCallback@UnifiedTileTelemetry@@QEAA@XZ
    ~CuratedCollectionRemovedGroupEventCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CuratedCollectionRemovedGroupEventCallback@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CuratedCollectionRemovedGroupEventCallback@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
