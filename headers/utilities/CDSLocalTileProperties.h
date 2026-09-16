#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 50 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSLocalTileProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChanges@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJ_NAEAULocalStartTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    virtual long ApplyChanges(bool, ::Windows::Data::UnifiedTile::LocalStartTileProperties &, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    CDSLocalTileProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSeenNotifications@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAI0000@Z
    virtual long GetSeenNotifications(unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedPropertyKinds@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAA?AW4CDSLocalTilePropertyKinds@234@XZ
    virtual int GetUpdatedPropertyKinds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeChanges@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUICDSLocalTilePropertiesPriv@234@@Z
    virtual long MergeChanges(::WindowsInternal::Shell::CDSProperties::ICDSLocalTilePropertiesPriv *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@AEBULocalStartTileProperties@UnifiedTile@Data@Windows@@PEAUICDSTilePropertiesBatched@234@@Z
    long RuntimeClassInitialize(HSTRING__*, ::Windows::Data::UnifiedTile::LocalStartTileProperties const &, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSeenNotifications@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJIIIII@Z
    virtual long SetSeenNotifications(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@234@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GraveyardTime@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_GraveyardTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4CDSTilePropertiesKinds@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasUnpinnedFromTaskbar@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_WasUnpinnedFromTaskbar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtendedReconciliationRequirements@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJW4ExtendedReconciliationRequirements@234@@Z
    virtual long put_ExtendedReconciliationRequirements(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GraveyardTime@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_GraveyardTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InstallTime@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_InstallTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WasUnpinnedFromTaskbar@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_WasUnpinnedFromTaskbar(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChangesInternal@CDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@AEAAXAEAULocalStartTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    void ApplyChangesInternal(::Windows::Data::UnifiedTile::LocalStartTileProperties &, bool *);
};
} // namespace WindowsInternal::Shell::CDSProperties
