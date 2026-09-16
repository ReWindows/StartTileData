#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer {
class CuratedRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void DeleteTile(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterpriseLayoutLastApplied@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_FILETIME@@PEA_N@Z
    _FILETIME GetEnterpriseLayoutLastApplied(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCellWidth@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAIXZ
    unsigned int GetGroupCellWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupColumnCount@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAIXZ
    unsigned int GetGroupColumnCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyLayoutFileTimestamp@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_FILETIME@@PEA_N@Z
    _FILETIME GetGroupPolicyLayoutFileTimestamp(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastGroupId@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_GUID@@XZ
    _GUID GetLastGroupId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutCustomizationRestriction@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AW4LayoutCustomizationRestrictionType@23@XZ
    int GetLayoutCustomizationRestriction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAA?AU_GUID@@XZ
    _GUID GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredColumnCount@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAIXZ
    unsigned int GetPreferredColumnCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroup@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXAEBU_GUID@@@Z
    void RemoveGroup(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupCellWidth@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXI@Z
    void SetGroupCellWidth(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupColumnCount@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXI@Z
    void SetGroupColumnCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastGroupId@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXU_GUID@@@Z
    void SetLastGroupId(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredColumnCount@CuratedRoot@CuratedTileCollectionTransformer@DataStoreCache@@QEAAXI@Z
    void SetPreferredColumnCount(unsigned int);
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer
