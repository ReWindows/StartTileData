#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 43 member(s).
namespace DataStoreCache {
class TargetedContentTransformer {
public:
    class PlaceholderContext;
    class TargetedContentTileInfo;
    class UpdateContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTile@TargetedContentTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileActivationContext@456@@Z
    virtual long ActivateTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@TargetedContentTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCollectionImpression@TargetedContentTransformer@DataStoreCache@@UEAAXPEBG@Z
    virtual void ReportCollectionImpression(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@TargetedContentTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@TargetedContentTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetedContentTransformer@DataStoreCache@@QEAA@PEAUIDataManager@1@W4TargetedContentFeatures@1@PEAUIMRTTransformer@1@PEAUIPlaceholderTileTransformer@PlaceholderTileTransformer@1@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@AEBUUnifiedTileManager@UnifiedTile@9WindowsInternal@winrt@@@Z
    TargetedContentTransformer(WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer@DataStoreCache@@UEAA@XZ
    virtual ~TargetedContentTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileBasicInfo@TargetedContentTransformer@DataStoreCache@@CAXAEAUUpdateContext@12@@Z
    static void AddTileBasicInfo(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileProperty@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@AEAUUpdateContext@12@@Z
    static void AddTileProperty(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTilePropertyByType@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@PEBGAEAUUpdateContext@12@@Z
    static void AddTilePropertyByType(WindissectOpaque const &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTilePropertyColor@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@PEBGAEAUUpdateContext@12@@Z
    static void AddTilePropertyColor(WindissectOpaque const &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTilePropertyLogo@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@PEBGAEAUUpdateContext@12@@Z
    static void AddTilePropertyLogo(WindissectOpaque const &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTilePropertyLogoHashId@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@PEBG1AEAUUpdateContext@12@@Z
    static void AddTilePropertyLogoHashId(WindissectOpaque const &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileTemplateSettings@TargetedContentTransformer@DataStoreCache@@CAXAEBUDataStorePropertyIdentifier@2@AEAUUpdateContext@12@@Z
    static void AddTileTemplateSettings(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnyTargetedContentTilesPinnedAsync@TargetedContentTransformer@DataStoreCache@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ
    WindissectOpaque AreAnyTargetedContentTilesPinnedAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnyTargetedContentTilesPinnedAsync_Deprecated@TargetedContentTransformer@DataStoreCache@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ
    WindissectOpaque AreAnyTargetedContentTilesPinnedAsync_Deprecated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletePlaceholderBatchIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAAXAEAUPlaceholderContext@12@@Z
    void CompletePlaceholderBatchIfNeeded(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToRedirect@TargetedContentTransformer@DataStoreCache@@AEAAXAEBUTileId@StartScreen@UI@WindowsUdk@winrt@@0AEBUJsonObject@Json@Data@Windows@7@@Z
    void ConvertToRedirect(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAUITargetedContentItem@TargetedContent@Services@Windows@@PEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@6@AEAUPlaceholderContext@12@@Z
    bool CreatePlaceholderIfNeeded(::Windows::Services::TargetedContent::ITargetedContentItem *, WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderTile@TargetedContentTransformer@DataStoreCache@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    void CreatePlaceholderTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderTilesAndTrackingInformation@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG0PEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentContainer@567@PEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAUPlaceholderContext@12@@Z
    void CreatePlaceholderTilesAndTrackingInformation(unsigned short const *, unsigned short const *, ::Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, ::Windows::Services::TargetedContent::ITargetedContentContainer *, WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderTilesForCollection@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG@Z
    void CreatePlaceholderTilesForCollection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderTilesIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@AEBUJsonObject@Json@Data@Windows@winrt@@AEAUPlaceholderContext@12@@Z
    bool CreatePlaceholderTilesIfNeeded(WindissectOpaque *, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePreSwapPlaceholderTilesIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAAXXZ
    void CreatePreSwapPlaceholderTilesIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractLogoPath@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG0PEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAPEAUHSTRING__@@PEA_N@Z
    void ExtractLogoPath(unsigned short const *, unsigned short const *, WindissectOpaque *, HSTRING__* *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractStringProperty@TargetedContentTransformer@DataStoreCache@@AEAAJPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z
    long ExtractStringProperty(WindissectOpaque *, unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentDeliveryManagerPackageFullName@TargetedContentTransformer@DataStoreCache@@AEAA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetContentDeliveryManagerPackageFullName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentFullyAvailable@TargetedContentTransformer@DataStoreCache@@AEAA_NPEBG@Z
    bool IsContentFullyAvailable(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdgeSecondaryTile@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Z
    bool IsEdgeSecondaryTile(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholderTile@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z
    bool IsPlaceholderTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchPlaceholderTile@TargetedContentTransformer@DataStoreCache@@AEAAXIPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    void LaunchPlaceholderTile(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForLayoutMigration@TargetedContentTransformer@DataStoreCache@@AEAAXXZ
    void ListenForLayoutMigration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileWithSubscription@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG_N0@Z
    void ReconcileWithSubscription(unsigned short const *, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTileAddedRemovedEventIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForTileAddedRemovedEventIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportInteraction@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAUHSTRING__@@@Z
    bool ReportInteraction(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwappingTargetedContentTilesHandleRedirects@TargetedContentTransformer@DataStoreCache@@AEAAXXZ
    void StartSwappingTargetedContentTilesHandleRedirects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapTargetedContentTilesIfNeeded@TargetedContentTransformer@DataStoreCache@@AEAAXXZ
    void SwapTargetedContentTilesIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySwapRedirectTile@TargetedContentTransformer@DataStoreCache@@AEAAXAEBUhstring@winrt@@@Z
    void TrySwapRedirectTile(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySwapTile@TargetedContentTransformer@DataStoreCache@@AEAA_NPEAUITargetedContentItem@TargetedContent@Services@Windows@@PEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@6@PEBGPEAUPlaceholderContext@12@@Z
    bool TrySwapTile(::Windows::Services::TargetedContent::ITargetedContentItem *, WindissectOpaque *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppTracking@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG0PEAUITargetedContentItem@TargetedContent@Services@Windows@@@Z
    void UpdateAppTracking(unsigned short const *, unsigned short const *, ::Windows::Services::TargetedContent::ITargetedContentItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsFromCollection@TargetedContentTransformer@DataStoreCache@@AEAAXPEBG0PEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentContainer@567@PEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAUPlaceholderContext@12@@Z
    void UpdateItemsFromCollection(unsigned short const *, unsigned short const *, ::Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, ::Windows::Services::TargetedContent::ITargetedContentContainer *, WindissectOpaque *, WindissectOpaque &);
};
} // namespace DataStoreCache
