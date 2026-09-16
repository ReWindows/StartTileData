#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer {
class CuratedGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void DeleteTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLockedForCustomization@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAA_NXZ
    bool GetIsLockedForCustomization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_GUID@@XZ
    _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AUtagPOINT@@XZ
    tagPOINT GetLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AUtagSIZE@@XZ
    tagSIZE GetSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void RemoveTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsLockedForCustomization@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAAX_N@Z
    void SetIsLockedForCustomization(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXUtagPOINT@@@Z
    void SetLocation(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CuratedGroup@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXUtagSIZE@@@Z
    void SetSize(tagSIZE);
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer
