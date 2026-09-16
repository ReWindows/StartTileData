#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class AppendWin8UpgradeTilesPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationFinished@AppendWin8UpgradeTilesPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void InitializationFinished();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializationNeeded@AppendWin8UpgradeTilesPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual bool IsInitializationNeeded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateNeeded@AppendWin8UpgradeTilesPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA?AUUpdateResult@CollectionInitializationPolicy@2345@PEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual WindissectOpaque IsUpdateNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectionData@AppendWin8UpgradeTilesPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXPEAUSelectionData@2345@@Z
    virtual void OverrideSelectionData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppendWin8UpgradeTilesPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~AppendWin8UpgradeTilesPolicy();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
