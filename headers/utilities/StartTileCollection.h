#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 60 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class StartTileCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUpdate@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long CheckForUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUpdateWithOptions@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJW4StartCollectionUpdateOptions@2345@@Z
    virtual long CheckForUpdateWithOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAsync@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long CommitAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinToStart@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@W4TilePinSize@2345@@Z
    virtual long PinToStart(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinToStartAtLocation@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@PEAUICuratedTileGroup@2345@UPoint@Foundation@Windows@@USize@9Windows@@@Z
    virtual long PinToStartAtLocation(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTinyOrMediumTile@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@0@Z
    virtual long ReplaceTinyOrMediumTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefault@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long ResetToDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefaultAsync@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ResetToDefaultAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAJW4CuratedTileCollectionOptionsInternal@2345@PEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(int, ::Windows::System::IUser *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartTileCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinFromStart@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long UnpinFromStart(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentColumnCount@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_CurrentColumnCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomizationRestriction@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4StartCollectionCustomizationRestrictionType@2345@@Z
    virtual long get_CustomizationRestriction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupCellWidth@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_GroupCellWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastGroupId@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_LastGroupId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredColumnCount@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_PreferredColumnCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentColumnCount@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_CurrentColumnCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CustomizationRestriction@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJW4StartCollectionCustomizationRestrictionType@2345@@Z
    virtual long put_CustomizationRestriction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupCellWidth@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_GroupCellWidth(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastGroupId@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@@Z
    virtual long put_LastGroupId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredColumnCount@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_PreferredColumnCount(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartTileCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinToGroup@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA_NPEAUICuratedTileGroup@2345@_N@Z
    bool CanPinToGroup(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewLastGroup@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBU_GUID@@PEAPEAUICuratedTileGroup@2345@@Z
    void CreateNewLastGroup(_GUID const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinTileToGroup@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUIUnifiedTileIdentifier@345@PEAUICuratedTileGroup@2345@PEBUtagRECT@@@Z
    void PinTileToGroup(WindissectOpaque *, WindissectOpaque *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupAsLastGroup@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUICuratedTileGroup@2345@@Z
    void SetGroupAsLastGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinFromStartInternal@StartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXQEAUICuratedTile@2345@QEAUICuratedTileGroup@2345@@Z
    void UnpinFromStartInternal(WindissectOpaque * const, WindissectOpaque * const);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
