#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal {
class LayoutRoot {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomizationRestriction@LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AW4LayoutCustomizationRestrictionType@CuratedTileCollectionTransformer@DataStoreCache@@XZ
    int GetCustomizationRestriction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCellWidth@LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBAHXZ
    int GetGroupCellWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupCellWidth@LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXH@Z
    void SetGroupCellWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupColumnCount@LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXH@Z
    void SetGroupColumnCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredGroupColumnCount@LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXH@Z
    void SetPreferredGroupColumnCount(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutRoot@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~LayoutRoot();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal
