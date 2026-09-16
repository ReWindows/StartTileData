#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 146 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class PackagedUnifiedTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithContextAsync@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileActivationContext@234@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateWithContextAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDailyLaunchCountSummary@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJIEPEAI@Z
    virtual long GetDailyLaunchCountSummary(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    PackagedUnifiedTile();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataItem@DataStoreCache@@PEAUIDataManager@6@PEAUIUnifiedTileManager@234@PEAUICDSTilePropertiesBatched@CDSProperties@34@PEAUIMRTTransformer@6@PEAUITileActivator@234@5PEAUIUnifiedTileIdentifier@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileChanged@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppLifecycleInfo@234@@Z
    virtual long get_AppLifecycleInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppState@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppState@234@@Z
    virtual long get_AppState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUsageInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppUsageInfo@234@@Z
    virtual long get_AppUsageInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppTileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppCategory@234@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseDataProtectionTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIEnterpriseDataProtectionTileInfo@234@@Z
    virtual long get_EnterpriseDataProtectionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionContext@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppExecutionContext@234@@Z
    virtual long get_ExecutionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIExtendedProperties@234@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@CDSProperties@34@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ForegroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloActivationBehavior@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IReference@W4TileMixedRealityModelActivationBehavior@StartScreen@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_HoloActivationBehavior(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloBoundingBox@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IReference@USpatialBoundingBox@Spatial@Perception@Windows@@@Foundation@Windows@@@Z
    virtual long get_HoloBoundingBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloContentUri@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_HoloContentUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallProgress@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_InstallProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseDataProtected@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseDataProtected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseOnlyApp@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseOnlyApp(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSecondaryTile@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSecondaryTile(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemComponent@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSystemComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisibleInAppList@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileKind@Private@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeFormatVisualTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILargeFormatVisualTileInfo@234@@Z
    virtual long get_LargeFormatVisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLaunched@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_LastLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchCount@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LaunchCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath1x1@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath1x1(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath2x2@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath2x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x2@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x4@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x4(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIMixedRealityTileInfo@234@@Z
    virtual long get_MixedRealityTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentLaunches@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long get_MostRecentLaunches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedAppTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPackagedAppTileInfo@234@@Z
    virtual long get_PackagedAppTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderOrigin@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PlaceholderOrigin@234@@Z
    virtual long get_PlaceholderOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relevance@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_Relevance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestorePolicyBehaviorFlags@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4RestorePolicyBehavior@AppRestore@3Internal@Windows@@@Z
    virtual long get_RestorePolicyBehaviorFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryTileArguments@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SecondaryTileArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDisplayName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn2x2@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn2x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x2@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x4@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x4(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_SmallLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuggestionTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUISuggestionTileInfo@234@@Z
    virtual long get_SuggestionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteSortName@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteSortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileBrandingLogo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_TileBrandingLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTileInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVisualTileInfo@234@@Z
    virtual long get_VisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Win32ShortcutInfo@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIWin32ShortcutInfo@234@@Z
    virtual long get_Win32ShortcutInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileChanged@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~PackagedUnifiedTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructTileImageResource@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAAJ_NW4ImageType@DataStoreCache@@AEBU?$DataStoreProperty@PEAUHSTRING__@@@6@PEAPEAUITileImageResource@234@@Z
    long ConstructTileImageResource(bool, int, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageResourceChangeId@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEBA_KXZ
    uint64_t GetImageResourceChangeId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntrinsicallyUnplated@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAA_NXZ
    bool IsIntrinsicallyUnplated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParentPrimaryTile@PackagedUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEBAJPEAPEAUIUnifiedTile@234@@Z
    long TryGetParentPrimaryTile(WindissectOpaque * *) const;
};
} // namespace WindowsInternal::Shell::UnifiedTile
