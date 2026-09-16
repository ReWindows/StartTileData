#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 46 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedTileCollectionBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@@Z
    virtual long AddTile(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileWithId@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@U_GUID@@PEAPEAUICuratedTile@2345@@Z
    virtual long AddTileWithId(WindissectOpaque *, _GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUpdate@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long CheckForUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAsync@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long CommitAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAsyncWithTimerBypass@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long CommitAsyncWithTimerBypass(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@2345@@Z
    virtual long CreateNewGroup(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedTileCollectionBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long DeleteGroup(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long DeleteTile(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCollectionContainTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@PEAE@Z
    virtual long DoesCollectionContainTile(WindissectOpaque *, WindissectOpaque * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTileRegistration@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long EnsureTileRegistration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTileAndParentGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@PEAPEAUICuratedTileGroup@2345@PEAE@Z
    virtual long FindTileAndParentGroup(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTilesInCollection@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllTilesInCollection(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetCustomProperty(HSTRING__* const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUICuratedTileGroup@2345@@Z
    virtual long GetGroup(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroups@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUICuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetGroups(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUICuratedTile@2345@@Z
    virtual long GetTile(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomProperty@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAE@Z
    virtual long HasCustomProperty(HSTRING__* const, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveExistingGroupToNewParent@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICuratedTileGroup@2345@0@Z
    virtual long MoveExistingGroupToNewParent(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveExistingTileToNewParent@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICuratedTile@2345@PEAUICuratedTileGroup@2345@@Z
    virtual long MoveExistingTileToNewParent(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileAddedWithinCollection@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long OnTileAddedWithinCollection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileRemovedWithinCollection@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long OnTileRemovedWithinCollection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCustomProperty@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@@Z
    virtual long RemoveCustomProperty(HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long RemoveGroup(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long RemoveTile(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefault@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long ResetToDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefaultAsync@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ResetToDefaultAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomProperty@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAU6@@Z
    virtual long SetCustomProperty(HSTRING__* const, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Attributes@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4CollectionAttributes@2345@@Z
    virtual long get_Attributes(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionName@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CollectionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_Version(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Attributes@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJW4CollectionAttributes@2345@@Z
    virtual long put_Attributes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Version@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_Version(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedTileCollectionBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginBatchIfNecessary@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAXXZ
    void BeginBatchIfNecessary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupRecursive@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAJAEBU_GUID@@PEAPEAUICuratedTileGroup@2345@@Z
    long GetGroupRecursive(_GUID const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupRecursive@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAJPEAUICuratedTileGroup@2345@AEBU_GUID@@PEAPEAU62345@@Z
    long GetGroupRecursive(WindissectOpaque *, _GUID const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFromTransformerData@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAXXZ
    void PopulateFromTransformerData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTileAndParentGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAA_NQEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@PEAPEAUICuratedTileGroup@2345@@Z
    bool TryFindTileAndParentGroup(WindissectOpaque * const, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTileAndParentGroupInGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@KA_NQEAUICuratedTileGroup@2345@QEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@PEAPEAU62345@@Z
    static bool TryFindTileAndParentGroupInGroup(WindissectOpaque * const, WindissectOpaque * const, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentGroup@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAJAEBU_GUID@@W4UnparentItemOptions@2345@@Z
    long UnparentGroup(_GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentTile@CuratedTileCollectionBase@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAAJAEBU_GUID@@W4UnparentItemOptions@2345@@Z
    long UnparentTile(_GUID const &, int);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
