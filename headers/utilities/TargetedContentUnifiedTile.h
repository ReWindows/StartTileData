#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 140 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TargetedContentUnifiedTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithContextAsync@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileActivationContext@234@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ActivateWithContextAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDailyLaunchCountSummary@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJIEPEAI@Z
    virtual long GetDailyLaunchCountSummary(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportImpression@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long ReportImpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportNegativeFeedback@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long ReportNegativeFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataItem@DataStoreCache@@PEAUIDataManager@6@PEAUIUnifiedTileManager@234@PEAUITileActivator@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TargetedContentUnifiedTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileChanged@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppLifecycleInfo@234@@Z
    virtual long get_AppLifecycleInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUsageInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAppUsageInfo@234@@Z
    virtual long get_AppUsageInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppTileCapabilities@234@@Z
    virtual long get_Capabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4AppCategory@234@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseDataProtectionTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIEnterpriseDataProtectionTileInfo@234@@Z
    virtual long get_EnterpriseDataProtectionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionContext@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedAppExecutionContext@234@@Z
    virtual long get_ExecutionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIExtendedProperties@234@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedReconciliationRequirements@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ExtendedReconciliationRequirements@CDSProperties@34@@Z
    virtual long get_ExtendedReconciliationRequirements(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ForegroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_Id(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseDataProtected@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseDataProtected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnterpriseOnlyApp@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsEnterpriseOnlyApp(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSecondaryTile@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSecondaryTile(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemComponent@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSystemComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisibleInAppList@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileKind@Private@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeFormatVisualTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILargeFormatVisualTileInfo@234@@Z
    virtual long get_LargeFormatVisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLaunched@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_LastLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchCount@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LaunchCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath1x1@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath1x1(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath2x2@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath2x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x2@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoPath4x4@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_LogoPath4x4(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIMixedRealityTileInfo@234@@Z
    virtual long get_MixedRealityTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentLaunches@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long get_MostRecentLaunches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedAppTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPackagedAppTileInfo@234@@Z
    virtual long get_PackagedAppTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderOrigin@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PlaceholderOrigin@234@@Z
    virtual long get_PlaceholderOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Price@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Price(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Rating@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_Rating(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relevance@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAN@Z
    virtual long get_Relevance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestorePolicyBehaviorFlags@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4RestorePolicyBehavior@AppRestore@3Internal@Windows@@@Z
    virtual long get_RestorePolicyBehaviorFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryTileArguments@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SecondaryTileArguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Settings@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_Settings(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortDisplayName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn2x2@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn2x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x2@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x2(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOn4x4@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_ShowNameOn4x4(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_SmallLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuggestionTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUISuggestionTileInfo@234@@Z
    virtual long get_SuggestionTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuiteSortName@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SuiteSortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileBrandingLogo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileImageResource@234@@Z
    virtual long get_TileBrandingLogo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTileInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVisualTileInfo@234@@Z
    virtual long get_VisualTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Win32ShortcutInfo@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIWin32ShortcutInfo@234@@Z
    virtual long get_Win32ShortcutInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileChanged@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TargetedContentUnifiedTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateWithEventContextAsync@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long ActivateWithEventContextAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageResource@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAAJW4ImageType@DataStoreCache@@AEBU?$DataStoreProperty@PEAUHSTRING__@@@6@PEAPEAUITileImageResource@234@@Z
    long GetImageResource(int, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageResourceChangeId@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEBA_KXZ
    uint64_t GetImageResourceChangeId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholderTile@TargetedContentUnifiedTile@UnifiedTile@Shell@WindowsInternal@@AEAA_NXZ
    bool IsPlaceholderTile();
};
} // namespace WindowsInternal::Shell::UnifiedTile
