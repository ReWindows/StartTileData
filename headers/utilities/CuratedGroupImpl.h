#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct {
class CuratedGroupImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGroup@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteGroup(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLockedForCustomization@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NXZ
    virtual bool GetIsLockedForCustomization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUserCustomizedDisplayName@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NXZ
    virtual bool GetIsUserCustomizedDisplayName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AUtagPOINT@@XZ
    virtual tagPOINT GetLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultData@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NXZ
    virtual bool IsDefaultData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBUCuratedGroupChangeInfo@CuratedTileCollectionTransformer@3@@Z
    void OnItemUpdated(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroup@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void RemoveGroup(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void RemoveTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsLockedForCustomization@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAX_N@Z
    virtual void SetIsLockedForCustomization(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUserCustomizedDisplayName@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAX_N@Z
    virtual void SetIsUserCustomizedDisplayName(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXUtagPOINT@@@Z
    virtual void SetLocation(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXUtagSIZE@@@Z
    virtual void SetSize(tagSIZE);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA@XZ
    virtual ~CuratedGroupImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneData@CuratedGroupImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@IEAA?AUGroup@CuratedTileCollection@Data@Windows@@XZ
    ::Windows::Data::CuratedTileCollection::Group CloneData();
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct
