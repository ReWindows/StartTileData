#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 32 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedTileCollectionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionExists@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long CollectionExists(HSTRING__*, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedTileCollectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCollection@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteCollection(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAUICuratedTileCollection@2345@@Z
    virtual long GetCollection(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionWithOptions@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAUICuratedTileCollectionOptions@2345@PEAPEAUICuratedTileCollection@2345@@Z
    virtual long GetCollectionWithOptions(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnbatchedCollection@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAUICuratedTileCollection@2345@@Z
    virtual long GetUnbatchedCollection(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCollection@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long InitializeCollection(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPackageStatusChanged@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@W4PackageStatusChangeType@2345@@Z
    virtual long NotifyPackageStatusChanged(HSTRING__*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResurrectAllTilesForIdentifier@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long ResurrectAllTilesForIdentifier(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedTileCollectionManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUpgradeRegistryDataParsed@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEA_N@Z
    void EnsureUpgradeRegistryDataParsed(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAndTriggerLayoutInitializationBackgroundTask@CuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void RegisterAndTriggerLayoutInitializationBackgroundTask();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
