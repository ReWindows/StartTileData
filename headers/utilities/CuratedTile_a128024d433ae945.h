#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer {
class CuratedTile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_GUID@@XZ
    _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutRect@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AUtagRECT@@XZ
    tagRECT GetLayoutRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AUtagPOINT@@XZ
    tagPOINT GetLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AUtagSIZE@@XZ
    tagSIZE GetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXUtagPOINT@@@Z
    void SetLocation(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CuratedTile@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXAEBUtagSIZE@@@Z
    void SetSize(tagSIZE const &);
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer
