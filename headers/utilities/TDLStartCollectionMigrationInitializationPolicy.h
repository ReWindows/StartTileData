#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class TDLStartCollectionMigrationInitializationPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationFinished@TDLStartCollectionMigrationInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void InitializationFinished();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializationNeeded@TDLStartCollectionMigrationInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual bool IsInitializationNeeded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateNeeded@TDLStartCollectionMigrationInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA?AUUpdateResult@CollectionInitializationPolicy@2345@PEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual WindissectOpaque IsUpdateNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectionData@TDLStartCollectionMigrationInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXPEAUSelectionData@2345@@Z
    virtual void OverrideSelectionData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TDLStartCollectionMigrationInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~TDLStartCollectionMigrationInitializationPolicy();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
