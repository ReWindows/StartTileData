#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 66 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSTilePropertiesBatched {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBatchRef@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJXZ
    virtual long AddBatchRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    CDSTilePropertiesBatched();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBatch@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUICDSTilePropertiesBatchToken@234@@Z
    virtual long CreateBatch(::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatchToken * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllLocalProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllLocalProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllLocalVolatileProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllLocalVolatileProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllRoamedProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllRoamedProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAUICDSTilePropertiesItem@234@@Z
    virtual long GetLocalProperties(HSTRING__*, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalVolatileProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAUICDSTilePropertiesItem@234@@Z
    virtual long GetLocalVolatileProperties(HSTRING__*, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoamedProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAUICDSTilePropertiesItem@234@@Z
    virtual long GetRoamedProperties(HSTRING__*, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLocalProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasLocalProperties(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLocalVolatileProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasLocalVolatileProperties(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRoamedProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasRoamedProperties(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkTilePropertiesForUpdate@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUICDSTilePropertiesItem@234@@Z
    virtual long MarkTilePropertiesForUpdate(::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBatchRef@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJXZ
    virtual long ReleaseBatchRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLocalProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long RemoveLocalProperties(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLocalVolatileProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long RemoveLocalVolatileProperties(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRoamedProperties@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long RemoveRoamedProperties(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@W4CDSTilePropertiesKinds@234@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAXPEAUIDataManager@DataStoreCache@@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAXW4DataStoreCacheInit@DataStoreCache@@@Z
    virtual void SetInitializationStage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLifetimeManager@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileLifetimeManager@Private@UnifiedTile@34@@Z
    virtual long SetLifetimeManager(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LocalPropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVCDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAVCDSTilePropertiesBatchedChangedArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LocalPropertiesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LocalVolatilePropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVCDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAVCDSTilePropertiesBatchedChangedArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LocalVolatilePropertiesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RoamedPropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVCDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAVCDSTilePropertiesBatchedChangedArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RoamedPropertiesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PropertyKinds@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4CDSTilePropertiesKinds@234@@Z
    virtual long get_PropertyKinds(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LocalPropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LocalPropertiesChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LocalVolatilePropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LocalVolatilePropertiesChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RoamedPropertiesChanged@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RoamedPropertiesChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CDSTilePropertiesBatched();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeletedTile@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@AEAAJPEAUHSTRING__@@PEAUIUnifiedTileIdentifier@UnifiedTile@34@@Z
    long CleanupDeletedTile(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileTileLifetime@CDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@AEAAJXZ
    long ReconcileTileLifetime();
};
} // namespace WindowsInternal::Shell::CDSProperties
