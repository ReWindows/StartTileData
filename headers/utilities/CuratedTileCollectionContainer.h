#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct::Internal {
class CuratedTileCollectionContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGroup@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void DeleteGroup(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void DeleteTile(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteUnreferencedData@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXXZ
    void DeleteUnreferencedData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBatchCommitted@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXH@Z
    void OnBatchCommitted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBatchCommitting@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXH@Z
    void OnBatchCommitting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupUpdated@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBU_GUID@@AEBUGroup@CuratedTileCollection@Data@Windows@@AEBUCuratedGroupChangeInfo@CuratedTileCollectionTransformer@4@@Z
    void OnGroupUpdated(_GUID const &, ::Windows::Data::CuratedTileCollection::Group const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootUpdated@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBURoot@CuratedTileCollection@Data@Windows@@AEBUCuratedRootChangeInfo@CuratedTileCollectionTransformer@4@@Z
    void OnRootUpdated(::Windows::Data::CuratedTileCollection::Root const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileUpdated@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBU_GUID@@AEBUTile@CuratedTileCollection@Data@Windows@@AEBUCuratedTileChangeInfo@CuratedTileCollectionTransformer@4@@Z
    void OnTileUpdated(_GUID const &, ::Windows::Data::CuratedTileCollection::Tile const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdatedFrom@CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBUTileCollection@CuratedTileCollection@Data@Windows@@@Z
    void OnUpdatedFrom(::Windows::Data::CuratedTileCollection::TileCollection const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileCollectionContainer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAA@XZ
    ~CuratedTileCollectionContainer();
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct::Internal
