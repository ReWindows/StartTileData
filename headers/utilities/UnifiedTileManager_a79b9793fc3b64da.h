#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 85 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTile@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAPEAUIUnifiedTile@234@@Z
    virtual long FindTile(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCacheAndWait@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long FlushCacheAndWait();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJW4CollectionProvider@234@PEAUHSTRING__@@PEAPEAUIUnifiedTileCollection@234@@Z
    virtual long GetCollection(int, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionWithOptions@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJW4CollectionProvider@234@PEAUHSTRING__@@W4CollectionOptions@234@PEAPEAUIUnifiedTileCollection@234@@Z
    virtual long GetCollectionWithOptions(int, HSTRING__*, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileManagerOptions@234@@Z
    virtual long GetOptions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusForTile@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAW4TileLifetimeStatus@Private@234@@Z
    virtual long GetStatusForTile(WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileManager@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIDataManager@DataStoreCache@@@Z
    virtual long GetTileManager(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileMigrationEventSource@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJ_KPEAPEAUITileMigrationEventSource@234@@Z
    virtual long GetTileMigrationEventSource(uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileOrFallbackTile@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAPEAUIUnifiedTile@234@@Z
    virtual long GetTileOrFallbackTile(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileSources@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAA?AW4TileSources@234@XZ
    virtual int GetTileSources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformer@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long GetTransformer(_GUID, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long GetUser(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@QEAAJW4TileFeatures@234@W4TileSources@234@PEAUIUnifiedTileIdentifierStatics@234@PEAUIUnifiedTileManagerOptions@234@PEAVUnifiedTileManagerCreationStatus@234@_N@Z
    long RuntimeClassInitialize(int, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateAsync@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long TryUpdateAsync(unsigned int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTileManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDataStoreReconciliationCompleteAsync@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long WaitForDataStoreReconciliationCompleteAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSecondaryDataReconciliationCompleteAsync@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long WaitForSecondaryDataReconciliationCompleteAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WatchLifeTime@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIObjectLifeTimeTracker@@@Z
    virtual long WatchLifeTime(IObjectLifeTimeTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviders@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVUnifiedTileVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_VerbProviders(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnifiedTileManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCanonicalTransformers@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTileManagerOptions@234@@Z
    long CreateCanonicalTransformers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTileFromDataItem@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIDataItem@DataStoreCache@@PEAPEAUIUnifiedTile@234@@Z
    long CreateTileFromDataItem(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCuratedTileCollectionTransformer@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long EnsureCuratedTileCollectionTransformer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteDataStoreReconciliationStages@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJAEAVUnifiedTileManagerInitialization@UnifiedTileTelemetry@@_NPEAVUnifiedTileManagerCreationStatus@234@@Z
    long ExecuteDataStoreReconciliationStages(WindissectOpaque &, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionImpl@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJW4CollectionProvider@234@PEAUHSTRING__@@QEBW4CollectionOptions@234@PEAPEAUIUnifiedTileCollection@234@@Z
    long GetCollectionImpl(int, HSTRING__*, int const * const, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateTileWrapper@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTileIdentifier@234@_NPEAPEAUIUnifiedTile@234@@Z
    long GetOrCreateTileWrapper(WindissectOpaque *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCustomTransformers@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTileManagerOptions@234@@Z
    long ReadCustomTransformers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTransformer@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@AEBA_NAEBU_GUID@@0PEAPEAX@Z
    bool TryFindTransformer(_GUID const &, _GUID const &, void * *) const;
};
} // namespace WindowsInternal::Shell::UnifiedTile
