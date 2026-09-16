#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal {
class LayoutGroup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCustomizationLocked@LayoutGroup@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NXZ
    bool GetIsCustomizationLocked() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@LayoutGroup@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AUtagPOINT@@XZ
    tagPOINT GetLocation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@LayoutGroup@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA?AU_GUID@@XZ
    _GUID GetUniqueId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@LayoutGroup@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEBU_GUID@@@Z
    void RemoveTile(_GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutGroup@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~LayoutGroup();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal
