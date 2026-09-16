#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal {
class LayoutFolder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AUtagPOINT@@XZ
    tagPOINT GetLocation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AUtagSIZE@@XZ
    tagSIZE GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA?AU_GUID@@XZ
    _GUID GetUniqueId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEBU_GUID@@@Z
    void RemoveTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEBUtagPOINT@@@Z
    void SetLocation(tagPOINT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~LayoutFolder();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal
