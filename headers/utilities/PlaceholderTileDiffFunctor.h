#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace DataStoreCache::PlaceholderTileTransformer {
class PlaceholderTileDiffFunctor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiff@PlaceholderTileDiffFunctor@PlaceholderTileTransformer@DataStoreCache@@QEBA?AW4PlaceholderTilePropertyChangedFlags@23@AEBUPlaceholderTileLocal@Data@Windows@@0@Z
    int GetDiff(::Windows::Data::PlaceholderTileLocal const &, ::Windows::Data::PlaceholderTileLocal const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiff@PlaceholderTileDiffFunctor@PlaceholderTileTransformer@DataStoreCache@@QEBA?AW4PlaceholderTilePropertyChangedFlags@23@AEBUPlaceholderTile@Data@Windows@@0@Z
    int GetDiff(::Windows::Data::PlaceholderTile const &, ::Windows::Data::PlaceholderTile const &) const;
};
} // namespace DataStoreCache::PlaceholderTileTransformer
