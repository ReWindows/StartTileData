#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class AssignedAccessAllowedAllAppListLayoutInitPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationFinished@AssignedAccessAllowedAllAppListLayoutInitPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void InitializationFinished();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializationNeeded@AssignedAccessAllowedAllAppListLayoutInitPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual bool IsInitializationNeeded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateNeeded@AssignedAccessAllowedAllAppListLayoutInitPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA?AUUpdateResult@CollectionInitializationPolicy@2345@PEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual WindissectOpaque IsUpdateNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectionData@AssignedAccessAllowedAllAppListLayoutInitPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXPEAUSelectionData@2345@@Z
    virtual void OverrideSelectionData(WindissectOpaque *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
