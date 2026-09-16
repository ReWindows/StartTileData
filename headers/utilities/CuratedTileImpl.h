#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct {
class CuratedTileImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AUtagPOINT@@XZ
    virtual tagPOINT GetLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultData@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NXZ
    virtual bool IsDefaultData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAA_NXZ
    bool IsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBUCuratedTileChangeInfo@CuratedTileCollectionTransformer@3@@Z
    void OnItemUpdated(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXUtagPOINT@@@Z
    virtual void SetLocation(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBUtagSIZE@@@Z
    virtual void SetSize(tagSIZE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileIdentifier@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual void SetTileIdentifier(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA@XZ
    virtual ~CuratedTileImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneData@CuratedTileImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@IEAA?AUTile@CuratedTileCollection@Data@Windows@@XZ
    ::Windows::Data::CuratedTileCollection::Tile CloneData();
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct
