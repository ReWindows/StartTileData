#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 31 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct {
class CuratedRootImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGroup@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteGroup(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterpriseLayoutLastApplied@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_FILETIME@@PEA_N@Z
    virtual _FILETIME GetEnterpriseLayoutLastApplied(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCellWidth@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAIXZ
    virtual unsigned int GetGroupCellWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupColumnCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAIXZ
    virtual unsigned int GetGroupColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_KXZ
    virtual uint64_t GetGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyLayoutFileTimestamp@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_FILETIME@@PEA_N@Z
    virtual _FILETIME GetGroupPolicyLayoutFileTimestamp(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastGroupId@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLastGroupId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutCustomizationRestriction@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AW4LayoutCustomizationRestrictionType@CuratedTileCollectionTransformer@3@XZ
    virtual int GetLayoutCustomizationRestriction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutOverride@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AW4LayoutOverrideType@CuratedTileCollectionTransformer@3@XZ
    virtual int GetLayoutOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutVersion@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAIXZ
    virtual unsigned int GetLayoutVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredColumnCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAIXZ
    virtual unsigned int GetPreferredColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_KXZ
    virtual uint64_t GetTileCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultData@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NXZ
    virtual bool IsDefaultData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXAEBUCuratedRootChangeInfo@CuratedTileCollectionTransformer@3@@Z
    void OnItemUpdated(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroup@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void RemoveGroup(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void RemoveTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnterpriseLayoutLastApplied@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_FILETIME@@@Z
    virtual void SetEnterpriseLayoutLastApplied(_FILETIME const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupCellWidth@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXI@Z
    virtual void SetGroupCellWidth(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupColumnCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXI@Z
    virtual void SetGroupColumnCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupPolicyLayoutFileTimestamp@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_FILETIME@@@Z
    virtual void SetGroupPolicyLayoutFileTimestamp(_FILETIME const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastGroupId@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXU_GUID@@@Z
    virtual void SetLastGroupId(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutCustomizationRestriction@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXW4LayoutCustomizationRestrictionType@CuratedTileCollectionTransformer@3@@Z
    virtual void SetLayoutCustomizationRestriction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutName@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXPEBG@Z
    virtual void SetLayoutName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutOverride@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXW4LayoutOverrideType@CuratedTileCollectionTransformer@3@@Z
    virtual void SetLayoutOverride(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutVersion@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXI@Z
    virtual void SetLayoutVersion(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredColumnCount@CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXI@Z
    virtual void SetPreferredColumnCount(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedRootImpl@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA@XZ
    virtual ~CuratedRootImpl();
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct
