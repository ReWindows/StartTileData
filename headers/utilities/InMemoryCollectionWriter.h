#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class InMemoryCollectionWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInitializeTiles@InMemoryCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool CanInitializeTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCollectionExist@InMemoryCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool DoesCollectionExist();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionEmpty@InMemoryCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool IsCollectionEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InMemoryCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~InMemoryCollectionWriter();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
