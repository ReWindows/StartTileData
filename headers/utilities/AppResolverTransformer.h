#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 72 member(s).
namespace DataStoreCache {
class AppResolverTransformer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTile@AppResolverTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileActivationContext@456@@Z
    virtual long ActivateTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppResolverTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppResolverTransformer@DataStoreCache@@QEAA@PEAUIAppResolverDataLayerManager@@PEAUIDataManager@1@PEAUIWin32UnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@PEAUICDSTilePropertiesBatched@CDSProperties@67@PEAUIMRTTransformer@1@@Z
    AppResolverTransformer(IAppResolverDataLayerManager *, WindissectOpaque *, WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableRegisterForWnfNotifications@AppResolverTransformer@DataStoreCache@@UEAAXXZ
    virtual void DisableRegisterForWnfNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceSynchronousOperation@AppResolverTransformer@DataStoreCache@@UEAAXXZ
    virtual void ForceSynchronousOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@AppResolverTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppResolverTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppResolverTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppResolverTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@AppResolverTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIVerbEnumerationArgs@456@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAppResolverData@AppResolverTransformer@DataStoreCache@@UEAAXXZ
    virtual void LoadAppResolverData();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppResolverTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForWnfNotifications@AppResolverTransformer@DataStoreCache@@UEAAXXZ
    virtual void RegisterForWnfNotifications();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppResolverTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@AppResolverTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@AppResolverTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAddUninstallVerb@AppResolverTransformer@DataStoreCache@@QEAA_NAEBUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@winrt@@_N@Z
    bool ShouldAddUninstallVerb(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateData@AppResolverTransformer@DataStoreCache@@UEAA_NK@Z
    virtual bool TryUpdateData(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@AppResolverTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppResolverTransformer@DataStoreCache@@UEAA@XZ
    virtual ~AppResolverTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStringsEqualCaseInsensitive@AppResolverTransformer@DataStoreCache@@CA_NPEAUHSTRING__@@0@Z
    static bool AreStringsEqualCaseInsensitive(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyShortcutProperty@AppResolverTransformer@DataStoreCache@@AEBAXAEBUDataStorePropertyIdentifier@2@PEAUIShortcutInfo@@PEAUIDisplayInfo@@PEAVPropertyBagLookaside@2@@Z
    void CopyShortcutProperty(WindissectOpaque const &, IShortcutInfo *, IDisplayInfo *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUninstallVerb@AppResolverTransformer@DataStoreCache@@AEAAJPEAUIVerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@_NPEAUIDataStorePropertyBag@2@AEAV?$ComPtr@UITileVerb@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Z
    long CreateUninstallVerb(WindissectOpaque *, bool, WindissectOpaque *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileVerbProviderDesktopBroker@AppResolverTransformer@DataStoreCache@@AEAAJ_NPEAPEAUITileVerbProviderDesktopBrokerStatics@Private@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetTileVerbProviderDesktopBroker(bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWin32EdgeShortcut@AppResolverTransformer@DataStoreCache@@CA_NPEAUIShortcutInfo@@@Z
    static bool IsWin32EdgeShortcut(IShortcutInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWin32EdgeTileIdentifier@AppResolverTransformer@DataStoreCache@@CA_NPEAUHSTRING__@@@Z
    static bool IsWin32EdgeTileIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMRTTransformerOfItemUpdate@AppResolverTransformer@DataStoreCache@@AEBAXPEAUIDataItem@2@PEAUIShortcutInfo@@_N@Z
    void NotifyMRTTransformerOfItemUpdate(WindissectOpaque *, IShortcutInfo *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReprocessTileShellItemVerb@AppResolverTransformer@DataStoreCache@@AEAAJPEAUITileVerb@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTile@456@PEAUIDataStorePropertyBag@2@PEAUIVerbEnumerationArgs@456@PEAPEAU3456@@Z
    long ReprocessTileShellItemVerb(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUwpEdgeIsHidden@AppResolverTransformer@DataStoreCache@@AEAAX_N@Z
    void SetUwpEdgeIsHidden(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLoadAppResolverDataTest@AppResolverTransformer@DataStoreCache@@AEAAX_J_K@Z
    void UpdateLoadAppResolverDataTest(int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasShortcutUpdated@AppResolverTransformer@DataStoreCache@@AEBA_NPEAUIDataItem@2@PEAUIShortcutInfo@@@Z
    bool WasShortcutUpdated(WindissectOpaque *, IShortcutInfo *) const;
};
} // namespace DataStoreCache
