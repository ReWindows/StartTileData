#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class DefaultLayoutManagerQuery {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesApplicationAppearInStartByName@DefaultLayoutManagerQuery@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEBGPEAH@Z
    virtual long DoesApplicationAppearInStartByName(unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLayoutManagerQuery@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~DefaultLayoutManagerQuery();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCollection@DefaultLayoutManagerQuery@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long EnsureCollection();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
