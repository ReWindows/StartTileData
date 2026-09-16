#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 51 member(s).
namespace DataStoreCache {
class AppLifecycleTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppLifecycleTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@AppLifecycleTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppLifecycleTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppLifecycleTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppLifecycleTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AppLifecycleTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppLifecycleTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppLifecycleTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@AppLifecycleTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@AppLifecycleTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleTransformer@DataStoreCache@@UEAA@XZ
    virtual ~AppLifecycleTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAppLifecycleData@AppLifecycleTransformer@DataStoreCache@@AEBAXAEBV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@W4AppState@UnifiedTile@Shell@WindowsInternal@@I@Z
    void ApplyAppLifecycleData(WindissectOpaque const &, int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppStateForPackage@AppLifecycleTransformer@DataStoreCache@@AEBA?AW4AppState@UnifiedTile@Shell@WindowsInternal@@AEBV?$ComPtr@UIPackage@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    int GetAppStateForPackage(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppStateForTileStoreItem@AppLifecycleTransformer@DataStoreCache@@AEBA?AW4AppState@UnifiedTile@Shell@WindowsInternal@@AEBV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@_N@Z
    int GetAppStateForTileStoreItem(WindissectOpaque const &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeApplicationStates@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void InitializeApplicationStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalTryGetItem@AppLifecycleTransformer@DataStoreCache@@AEBA?AV?$ComPtr@UIDataStorePropertyBag@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@PEAUHSTRING__@@@Z
    WindissectOpaque InternalTryGetItem(_GUID const &, HSTRING__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainPackage@AppLifecycleTransformer@DataStoreCache@@CA_NAEBV?$ComPtr@UIPackage@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    static bool IsMainPackage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageInstalling@AppLifecycleTransformer@DataStoreCache@@AEAAXPEAUIPackageInstallingEventArgs@ApplicationModel@Windows@@@Z
    void OnPackageInstalling(::Windows::ApplicationModel::IPackageInstallingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageStaging@AppLifecycleTransformer@DataStoreCache@@AEAAXPEAUIPackageStagingEventArgs@ApplicationModel@Windows@@@Z
    void OnPackageStaging(::Windows::ApplicationModel::IPackageStagingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageStatusChanged@AppLifecycleTransformer@DataStoreCache@@AEAAXPEAUIPackageStatusChangedEventArgs@ApplicationModel@Windows@@@Z
    void OnPackageStatusChanged(::Windows::ApplicationModel::IPackageStatusChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageUpdating@AppLifecycleTransformer@DataStoreCache@@AEAAXPEAUIPackageUpdatingEventArgs@ApplicationModel@Windows@@@Z
    void OnPackageUpdating(::Windows::ApplicationModel::IPackageUpdatingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCoreApplicationEvents@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForCoreApplicationEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDataItemEvents@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForDataItemEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForPackageCatalogEvents@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForPackageCatalogEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAppLifecycleData@AppLifecycleTransformer@DataStoreCache@@AEBAXAEBV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@@Z
    void RemoveAppLifecycleData(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTileFromIndex@AppLifecycleTransformer@DataStoreCache@@AEAAXAEBVDataItemIdentifier@2@@Z
    void RemoveTileFromIndex(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslatePackageStatusToAppState@AppLifecycleTransformer@DataStoreCache@@CA?AW4AppState@UnifiedTile@Shell@WindowsInternal@@I@Z
    static int TranslatePackageStatusToAppState(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForCoreApplicationEvents@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void UnregisterForCoreApplicationEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForDataItemEvents@AppLifecycleTransformer@DataStoreCache@@AEAAXXZ
    void UnregisterForDataItemEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForPackageCatalogEvents@AppLifecycleTransformer@DataStoreCache@@AEAAX_N@Z
    void UnregisterForPackageCatalogEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppLifecycleDataForPackageCatalogEvent@AppLifecycleTransformer@DataStoreCache@@AEAAXW4PackageCatalogEventKind@12@AEBV?$ComPtr@UIPackage@ApplicationModel@Windows@@@WRL@Microsoft@@NPEBU_GUID@@_N@Z
    void UpdateAppLifecycleDataForPackageCatalogEvent(int, WindissectOpaque const &, double, _GUID const *, bool);
};
} // namespace DataStoreCache
