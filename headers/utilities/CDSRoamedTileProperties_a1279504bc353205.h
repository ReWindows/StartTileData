#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 60 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSRoamedTileProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChanges@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJ_NAEAUTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    virtual long ApplyChanges(bool, ::Windows::Data::UnifiedTile::TileProperties &, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    CDSRoamedTileProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedPropertyKinds@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAA?AW4CDSRoamedTilePropertyKinds@234@XZ
    virtual int GetUpdatedPropertyKinds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeChanges@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUICDSRoamedTilePropertiesPriv@234@@Z
    virtual long MergeChanges(::WindowsInternal::Shell::CDSProperties::ICDSRoamedTilePropertiesPriv *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@AEBUTileProperties@UnifiedTile@Data@Windows@@PEAUICDSTilePropertiesBatched@234@@Z
    long RuntimeClassInitialize(HSTRING__*, ::Windows::Data::UnifiedTile::TileProperties const &, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstSeenTime@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_FirstSeenTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GameListCategory@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_GameListCategory(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLiveTileDisabled@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsLiveTileDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserPinned@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsUserPinned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4CDSTilePropertiesKinds@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasRemovedFromFrequentAppsList@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_WasRemovedFromFrequentAppsList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasRemovedFromRecentlyInstalledList@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_WasRemovedFromRecentlyInstalledList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XboxTitleId@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_XboxTitleId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstSeenTime@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_FirstSeenTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GameListCategory@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_GameListCategory(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsLiveTileDisabled@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsLiveTileDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUserPinned@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsUserPinned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WasRemovedFromFrequentAppsList@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_WasRemovedFromFrequentAppsList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WasRemovedFromRecentlyInstalledList@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_WasRemovedFromRecentlyInstalledList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XboxTitleId@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_XboxTitleId(HSTRING__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChangesInternal@CDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@AEAAXAEAUTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    void ApplyChangesInternal(::Windows::Data::UnifiedTile::TileProperties &, bool *);
};
} // namespace WindowsInternal::Shell::CDSProperties
