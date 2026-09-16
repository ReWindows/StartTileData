#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 59 member(s).
namespace DataStoreCache::PlaceholderTileTransformer::Internal {
class PlaceholderTileTransformer {
public:
    class PlaceholderTileTransformerSingleton;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTile@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileActivationContext@567@@Z
    virtual long ActivateTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileMigration@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEBG0@Z
    virtual void AddTileMigration(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTile@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEBG@Z
    virtual void DeleteTile(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIVerbEnumerationArgs@567@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingCommits@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAA_NXZ
    virtual bool HasPendingCommits();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTile@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAA_NPEBG@Z
    virtual bool HasTile(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTile@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAA_NPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual bool HasTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEBGAEBUPlaceholderTile@Data@Windows@@@Z
    virtual void OnItemUpdated(unsigned short const *, ::Windows::Data::PlaceholderTile const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEBGAEBUPlaceholderTileLocal@Data@Windows@@@Z
    virtual void OnItemUpdated(unsigned short const *, ::Windows::Data::PlaceholderTileLocal const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTileFromCollection@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAUHSTRING__@@@Z
    virtual void RemoveTileFromCollection(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTileFromPrimaryCollections@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual void RemoveTileFromPrimaryCollections(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXPEAUIDataManager@3@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAXW4DataStoreCacheInit@3@@Z
    virtual void SetInitializationStage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileMigrated@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAU?$ITypedEventHandler@PEAUITileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@PEAVTileMigratedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileMigrated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileMigrated@PlaceholderTileTransformer@Internal@1DataStoreCache@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileMigrated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileTransformer@Internal@0DataStoreCache@@UEAA@XZ
    virtual ~PlaceholderTileTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTileIfNotReferenced@PlaceholderTileTransformer@Internal@1DataStoreCache@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    void DeleteTileIfNotReferenced(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPackageFamilyName@PlaceholderTileTransformer@Internal@1DataStoreCache@@CAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAUHSTRING__@@@Z
    static long GetMainPackageFamilyName(WindissectOpaque *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageInstalled@PlaceholderTileTransformer@Internal@1DataStoreCache@@AEAAJPEAUHSTRING__@@PEA_N@Z
    long IsPackageInstalled(HSTRING__*, bool *);
};
} // namespace DataStoreCache::PlaceholderTileTransformer::Internal
