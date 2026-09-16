#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class GenericCollectionWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInitializeTiles@GenericCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool CanInitializeTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCollectionExist@GenericCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool DoesCollectionExist();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionEmpty@GenericCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool IsCollectionEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GenericCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~GenericCollectionWriter();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
