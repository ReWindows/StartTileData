#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 92 member(s).
namespace DataStoreCache {
class StateRepositoryTransformer {
public:
    class TileContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateStoreForTile@StateRepositoryTransformer@DataStoreCache@@SAJPEAUIUser@System@Windows@@IPEAUIPropertySet@Collections@Foundation@5@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUHSTRING__@@@Z
    static long ActivateStoreForTile(::Windows::System::IUser *, unsigned int, WindissectOpaque *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTile@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileActivationContext@456@@Z
    virtual long ActivateTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StateRepositoryTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRevisionNumber@StateRepositoryTransformer@DataStoreCache@@UEAA_JXZ
    virtual int64_t GetCurrentRevisionNumber();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@StateRepositoryTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIVerbEnumerationArgs@456@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StateRepositoryTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StateRepositoryTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentRevisionNumber@StateRepositoryTransformer@DataStoreCache@@UEAAX_J@Z
    virtual void SetCurrentRevisionNumber(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@StateRepositoryTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@StateRepositoryTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StateRepositoryTransformer@DataStoreCache@@QEAA@PEAUIDataManager@1@W4TileStoreFeatures@1@W4PackagedTileEnumerationFilters@UnifiedTile@Shell@WindowsInternal@@2PEAUIUser@System@Windows@@PEAUICDSTilePropertiesBatched@CDSProperties@67@PEAUIMRTTransformer@1@PEAUIAppUsageTransformer@1@PEAUIUnifiedTileManager@567@@Z
    StateRepositoryTransformer(WindissectOpaque *, int, int, int, ::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateData@StateRepositoryTransformer@DataStoreCache@@UEAA_NK@Z
    virtual bool TryUpdateData(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@StateRepositoryTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StateRepositoryTransformer@DataStoreCache@@UEAA@XZ
    virtual ~StateRepositoryTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTileInternal@StateRepositoryTransformer@DataStoreCache@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileActivationContext@456@@Z
    long ActivateTileInternal(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCanElevateProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddCanElevateProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInstallTimeProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddInstallTimeProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackageExecutionContextProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddPackageExecutionContextProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryTileArgumentsProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddSecondaryTileArgumentsProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileCapabilitiesProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddTileCapabilitiesProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileNotificationArgs@StateRepositoryTransformer@DataStoreCache@@AEAAJPEAUITileActivationContext@UnifiedTile@Shell@WindowsInternal@@PEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@Z
    long AddTileNotificationArgs(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@AEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddTileProperty(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileRevisionProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddTileRevisionProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileUniqueIdProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddTileUniqueIdProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualGroupProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddVisualGroupProperty(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualProperty@StateRepositoryTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@AEAVTileContext@12@PEAVPropertyBagLookaside@2@@Z
    static void AddVisualProperty(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTileIdentifier@StateRepositoryTransformer@DataStoreCache@@AEBA?AVDataItemIdentifier@2@AEAVTileContext@12@@Z
    WindissectOpaque ComputeTileIdentifier(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTileStoreQueryFilter@StateRepositoryTransformer@DataStoreCache@@CA?AV?$ComPtr@UITileQueryFilter@Tiles@Internal@Windows@@@WRL@Microsoft@@W4PackagedTileEnumerationFilters@UnifiedTile@Shell@WindowsInternal@@_N1@Z
    static WindissectOpaque CreateTileStoreQueryFilter(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTileStoreQueryFilters@StateRepositoryTransformer@DataStoreCache@@CAXW4PackagedTileEnumerationFilters@UnifiedTile@Shell@WindowsInternal@@0PEAPEAUITileQueryFilter@Tiles@Internal@Windows@@1@Z
    static void CreateTileStoreQueryFilters(int, int, ::Windows::Internal::Tiles::ITileQueryFilter * *, ::Windows::Internal::Tiles::ITileQueryFilter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndReconcile@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void InitializeAndReconcile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStateRepoAndTileStore@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void InitializeStateRepoAndTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTileIdentifierMaps@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void InitializeTileIdentifierMaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalTryGetItem@StateRepositoryTransformer@DataStoreCache@@AEBA?AV?$ComPtr@UIDataStorePropertyBag@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@PEAUHSTRING__@@@Z
    WindissectOpaque InternalTryGetItem(_GUID const &, HSTRING__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsServerOrStateRepoError@StateRepositoryTransformer@DataStoreCache@@CA_NJ@Z
    static bool IsServerOrStateRepoError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReconciliationWaiterEvents@StateRepositoryTransformer@DataStoreCache@@AEAAX_K@Z
    void NotifyReconciliationWaiterEvents(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueAsyncReconciliationTask@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void QueueAsyncReconciliationTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileExtendedProperties@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void ReconcileExtendedProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileTileStore@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void ReconcileTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTileStoreEvents@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForTileStoreEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStateRepoAndTileStore@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void ReleaseStateRepoAndTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleTransformerReinitializationTask@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void ScheduleTransformerReinitializationTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedPropertyList@StateRepositoryTransformer@DataStoreCache@@AEAAXW4TileStoreFeatures@2@@Z
    void SetCachedPropertyList(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTileIdentifierForTileUniqueId@StateRepositoryTransformer@DataStoreCache@@AEAA_NAEBU_GUID@@PEAVDataItemIdentifier@2@@Z
    bool TryFindTileIdentifierForTileUniqueId(_GUID const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrimaryTileIdentifierForSecondaryTileIdentifier@StateRepositoryTransformer@DataStoreCache@@AEBA_NPEAUHSTRING__@@PEAPEAU3@@Z
    bool TryGetPrimaryTileIdentifierForSecondaryTileIdentifier(HSTRING__*, HSTRING__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForTileStoreEvents@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void UnregisterForTileStoreEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryTiles@StateRepositoryTransformer@DataStoreCache@@AEAAXAEBVDataItemIdentifier@2@PEAUIDataStorePropertyBag@2@AEAVTileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@@Z
    void UpdateSecondaryTiles(WindissectOpaque const &, WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTile@StateRepositoryTransformer@DataStoreCache@@AEAAXQEAUITileNotification@Tiles@Internal@Windows@@QEAUITileViewStatics@StateRepository@56@QEAUIPackageUserStatics@856@QEAUIHostRuntimeStatics@856@QEAUIApplicationExtensionStatics@856@QEAUIUser@856@AEAVTileStoreTransformerReconcileTiles@DataStoreTransformerTelemetry@@@Z
    void UpdateTile(::Windows::Internal::Tiles::ITileNotification * const, ::Windows::Internal::StateRepository::ITileViewStatics * const, ::Windows::Internal::StateRepository::IPackageUserStatics * const, ::Windows::Internal::StateRepository::IHostRuntimeStatics * const, ::Windows::Internal::StateRepository::IApplicationExtensionStatics * const, ::Windows::Internal::StateRepository::IUser * const, WindissectOpaque &);
};
} // namespace DataStoreCache
