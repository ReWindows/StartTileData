#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 131 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class PlaceholderTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithContextAsync@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileActivationContext@234@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateWithContextAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    PlaceholderTile();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileChanged@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppLifecycleInfo@234@@Z
    virtual long get_AppLifecycleInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppState@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppState@234@@Z
    virtual long get_AppState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUsageInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppUsageInfo@234@@Z
    virtual long get_AppUsageInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppTileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppCategory@234@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseDataProtectionTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIEnterpriseDataProtectionTileInfo@234@@Z
    virtual long get_EnterpriseDataProtectionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionContext@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppExecutionContext@234@@Z
    virtual long get_ExecutionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIExtendedProperties@234@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@CDSProperties@34@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ForegroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallProgress@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_InstallProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEligibleForRecentlyAdded@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEligibleForRecentlyAdded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsManifested@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsManifested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSecondaryTile@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSecondaryTile(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemComponent@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSystemComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTargetFolder@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsTargetFolder(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserPinnedShortcut@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsUserPinnedShortcut(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisibleInAppList@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileKind@Private@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeFormatVisualTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILargeFormatVisualTileInfo@234@@Z
    virtual long get_LargeFormatVisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath1x1@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath1x1(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath2x2@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath2x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x2@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x4@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x4(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIMixedRealityTileInfo@234@@Z
    virtual long get_MixedRealityTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedAppTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPackagedAppTileInfo@234@@Z
    virtual long get_PackagedAppTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderOrigin@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PlaceholderOrigin@234@@Z
    virtual long get_PlaceholderOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventPinning@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_PreventPinning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestorePolicyBehaviorFlags@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4RestorePolicyBehavior@AppRestore@3Internal@Windows@@@Z
    virtual long get_RestorePolicyBehaviorFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryTileArguments@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SecondaryTileArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDisplayName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortcutArguments@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortcutArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn2x2@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn2x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x2@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x4@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x4(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_SmallLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuggestionTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUISuggestionTileInfo@234@@Z
    virtual long get_SuggestionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteSortName@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteSortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPath@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileBrandingLogo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_TileBrandingLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTileInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVisualTileInfo@234@@Z
    virtual long get_VisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Win32ShortcutInfo@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIWin32ShortcutInfo@234@@Z
    virtual long get_Win32ShortcutInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileChanged@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~PlaceholderTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructTileImageResource@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@AEBAJW4ImageType@DataStoreCache@@PEAPEAUITileImageResource@234@@Z
    long ConstructTileImageResource(int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackagedApp@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@AEAAJPEA_N@Z
    long IsPackagedApp(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWin32App@PlaceholderTile@UnifiedTile@Shell@WindowsInternal@@AEAAJPEA_N@Z
    long IsWin32App(bool *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
