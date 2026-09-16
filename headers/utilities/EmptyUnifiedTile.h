#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 148 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class EmptyUnifiedTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithContextAsync@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileActivationContext@234@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateWithContextAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    EmptyUnifiedTile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDailyLaunchCountSummary@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJIEPEAI@Z
    virtual long GetDailyLaunchCountSummary(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTileIdentifier@234@PEAUIUnifiedTileManager@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileChanged@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppLifecycleInfo@234@@Z
    virtual long get_AppLifecycleInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppState@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppState@234@@Z
    virtual long get_AppState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUsageInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppUsageInfo@234@@Z
    virtual long get_AppUsageInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppTileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppCategory@234@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseDataProtectionTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIEnterpriseDataProtectionTileInfo@234@@Z
    virtual long get_EnterpriseDataProtectionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionContext@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppExecutionContext@234@@Z
    virtual long get_ExecutionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIExtendedProperties@234@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@CDSProperties@34@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ForegroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallProgress@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_InstallProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEligibleForRecentlyAdded@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEligibleForRecentlyAdded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseDataProtected@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseDataProtected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseOnlyApp@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseOnlyApp(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsManifested@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsManifested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSecondaryTile@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSecondaryTile(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemComponent@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSystemComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTargetFolder@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsTargetFolder(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserPinnedShortcut@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsUserPinnedShortcut(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisibleInAppList@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileKind@Private@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeFormatVisualTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILargeFormatVisualTileInfo@234@@Z
    virtual long get_LargeFormatVisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLaunched@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_LastLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchCount@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LaunchCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath1x1@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath1x1(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath2x2@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath2x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x2@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x4@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x4(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIMixedRealityTileInfo@234@@Z
    virtual long get_MixedRealityTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentLaunches@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long get_MostRecentLaunches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedAppTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPackagedAppTileInfo@234@@Z
    virtual long get_PackagedAppTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderOrigin@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PlaceholderOrigin@234@@Z
    virtual long get_PlaceholderOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventPinning@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_PreventPinning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relevance@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_Relevance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestorePolicyBehaviorFlags@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4RestorePolicyBehavior@AppRestore@3Internal@Windows@@@Z
    virtual long get_RestorePolicyBehaviorFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryTileArguments@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SecondaryTileArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDisplayName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortcutArguments@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortcutArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn2x2@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn2x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x2@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x4@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x4(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_SmallLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuggestionTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUISuggestionTileInfo@234@@Z
    virtual long get_SuggestionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteSortName@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteSortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPath@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileBrandingLogo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_TileBrandingLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTileInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVisualTileInfo@234@@Z
    virtual long get_VisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Win32ShortcutInfo@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIWin32ShortcutInfo@234@@Z
    virtual long get_Win32ShortcutInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileChanged@EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EmptyUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~EmptyUnifiedTile();
};
} // namespace WindowsInternal::Shell::UnifiedTile
