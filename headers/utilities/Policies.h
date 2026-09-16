#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class Policies {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicy@Policies@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA?AUCollectionPolicy@12345@PEBG@Z
    WindissectOpaque GetPolicy(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholderTileSupported@Policies@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA_NXZ
    bool IsPlaceholderTileSupported();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
