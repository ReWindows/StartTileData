#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class CuratedCollectionAddedGroupEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CuratedCollectionAddedGroupEventCallback@UnifiedTileTelemetry@@QEAAXAEBU_GUID@@UtagPOINT@@@Z
    void StartActivity(_GUID const &, tagPOINT);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionAddedGroupEventCallback@UnifiedTileTelemetry@@QEAA@XZ
    ~CuratedCollectionAddedGroupEventCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CuratedCollectionAddedGroupEventCallback@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CuratedCollectionAddedGroupEventCallback@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
