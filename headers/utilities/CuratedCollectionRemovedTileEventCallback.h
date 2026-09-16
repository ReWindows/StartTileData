#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class CuratedCollectionRemovedTileEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CuratedCollectionRemovedTileEventCallback@UnifiedTileTelemetry@@QEAAXAEBU_GUID@@AEBVHString@Wrappers@WRL@Microsoft@@@Z
    void StartActivity(_GUID const &, ::Microsoft::WRL::Wrappers::HString const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionRemovedTileEventCallback@UnifiedTileTelemetry@@QEAA@XZ
    ~CuratedCollectionRemovedTileEventCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CuratedCollectionRemovedTileEventCallback@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CuratedCollectionRemovedTileEventCallback@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
