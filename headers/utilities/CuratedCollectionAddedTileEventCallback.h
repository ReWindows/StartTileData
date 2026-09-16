#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class CuratedCollectionAddedTileEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CuratedCollectionAddedTileEventCallback@UnifiedTileTelemetry@@QEAAXAEBU_GUID@@AEBVHString@Wrappers@WRL@Microsoft@@UtagRECT@@@Z
    void StartActivity(_GUID const &, ::Microsoft::WRL::Wrappers::HString const &, tagRECT);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionAddedTileEventCallback@UnifiedTileTelemetry@@QEAA@XZ
    ~CuratedCollectionAddedTileEventCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CuratedCollectionAddedTileEventCallback@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CuratedCollectionAddedTileEventCallback@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
