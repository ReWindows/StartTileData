#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 150 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class Win32UnifiedTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithContextAsync@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileActivationContext@234@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateWithContextAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDailyLaunchCountSummary@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJIEPEAI@Z
    virtual long GetDailyLaunchCountSummary(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataItem@DataStoreCache@@PEAUIDataManager@6@PEAUIUnifiedTileManager@234@PEAUICDSTilePropertiesBatched@CDSProperties@34@PEAUIMRTTransformer@6@PEAUITileActivator@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    Win32UnifiedTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileChanged@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppLifecycleInfo@234@@Z
    virtual long get_AppLifecycleInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppState@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppState@234@@Z
    virtual long get_AppState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUsageInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppUsageInfo@234@@Z
    virtual long get_AppUsageInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppCategory@234@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseDataProtectionTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIEnterpriseDataProtectionTileInfo@234@@Z
    virtual long get_EnterpriseDataProtectionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIExtendedProperties@234@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@CDSProperties@34@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ForegroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloActivationBehavior@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IReference@W4TileMixedRealityModelActivationBehavior@StartScreen@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_HoloActivationBehavior(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloBoundingBox@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IReference@USpatialBoundingBox@Spatial@Perception@Windows@@@Foundation@Windows@@@Z
    virtual long get_HoloBoundingBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloContentUri@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_HoloContentUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallProgress@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_InstallProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstallTime@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_InstallTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEligibleForRecentlyAdded@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEligibleForRecentlyAdded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseDataProtected@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseDataProtected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseOnlyApp@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseOnlyApp(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsManifested@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsManifested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemComponent@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSystemComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTargetFolder@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsTargetFolder(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserPinnedShortcut@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsUserPinnedShortcut(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisibleInAppList@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileKind@Private@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeFormatVisualTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILargeFormatVisualTileInfo@234@@Z
    virtual long get_LargeFormatVisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLaunched@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_LastLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchCount@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LaunchCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath1x1@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath1x1(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath2x2@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath2x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x2@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x4@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x4(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIMixedRealityTileInfo@234@@Z
    virtual long get_MixedRealityTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentLaunches@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long get_MostRecentLaunches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedAppTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPackagedAppTileInfo@234@@Z
    virtual long get_PackagedAppTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderOrigin@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PlaceholderOrigin@234@@Z
    virtual long get_PlaceholderOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventPinning@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_PreventPinning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relevance@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_Relevance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestorePolicyBehaviorFlags@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4RestorePolicyBehavior@AppRestore@3Internal@Windows@@@Z
    virtual long get_RestorePolicyBehaviorFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDisplayName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortcutArguments@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortcutArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn2x2@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn2x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x2@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x4@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x4(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_SmallLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuggestionTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUISuggestionTileInfo@234@@Z
    virtual long get_SuggestionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteSortName@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteSortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPath@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileBrandingLogo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_TileBrandingLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTileInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVisualTileInfo@234@@Z
    virtual long get_VisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Win32ShortcutInfo@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIWin32ShortcutInfo@234@@Z
    virtual long get_Win32ShortcutInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileChanged@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~Win32UnifiedTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructManifestedTileImageResource@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAAJW4ImageType@DataStoreCache@@AEBU?$DataStoreProperty@PEBG@6@PEAPEAUITileImageResource@234@@Z
    long ConstructManifestedTileImageResource(int, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructTileImageResource@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAPEAUITileImageResource@234@@Z
    long ConstructTileImageResource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileTypeAssociationCount@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@CAIXZ
    static unsigned int GetFileTypeAssociationCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageResourceChangeId@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAA_KXZ
    uint64_t GetImageResourceChangeId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTargetNonExecutableFile@Win32UnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAA_NXZ
    bool GetIsTargetNonExecutableFile();
};
} // namespace WindowsInternal::Shell::UnifiedTile
