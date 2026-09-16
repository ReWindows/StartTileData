#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 85 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedTileGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICuratedTileGroupPrivate@2345@@Z
    virtual long AddGroup(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICuratedTilePrivate@2345@@Z
    virtual long AddTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@PEAPEAUICuratedTile@2345@@Z
    virtual long AddTile(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileWithId@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@U_GUID@@PEAPEAUICuratedTile@2345@@Z
    virtual long AddTileWithId(WindissectOpaque *, _GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@2345@@Z
    virtual long CreateNewGroup(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedTileGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long DeleteGroup(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long DeleteTile(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetCustomProperty(HSTRING__* const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUICuratedTileGroup@2345@@Z
    virtual long GetGroup(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroups@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUICuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetGroups(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUICuratedTile@2345@@Z
    virtual long GetTile(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomProperty@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAE@Z
    virtual long HasCustomProperty(HSTRING__* const, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCustomProperty@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@@Z
    virtual long RemoveCustomProperty(HSTRING__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long RemoveGroup(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long RemoveTile(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomProperty@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAU6@@Z
    virtual long SetCustomProperty(HSTRING__* const, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Attributes@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4GroupAttributes@2345@@Z
    virtual long get_Attributes(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Location@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Location(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockedForCustomization@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_LockedForCustomization(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueId@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_UniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Attributes@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJW4GroupAttributes@2345@@Z
    virtual long put_Attributes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayName@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DisplayName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Location@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Location(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LockedForCustomization@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_LockedForCustomization(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_Size(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedTileGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFromTransformerData@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void PopulateFromTransformerData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentGroup@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJAEBU_GUID@@W4UnparentItemOptions@2345@@Z
    long UnparentGroup(_GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentTile@CuratedTileGroup@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJAEBU_GUID@@W4UnparentItemOptions@2345@@Z
    long UnparentTile(_GUID const &, int);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
