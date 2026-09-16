#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 29 member(s).
class DataStoreCache {
public:
    class AppLifecycleTransformer;
    class AppResolverTransformer;
    class AppUsageTransformer;
    class CacheManager;
    class CacheManagerDump;
    class CacheSerialization;
    class CuratedTileCollectionTransformer;
    class DataItem;
    class DataItemChangeEvent;
    class DataItemCollection;
    class DataItemEventData;
    class DataItemEventHandlerWrapper;
    class DataItemHelpers;
    class DataItemIdentifier;
    class DataManager;
    class DataStorePropertyBag;
    class DataStorePropertyTransformerBase;
    class EdpTransformer;
    class ExtendedPropertiesTransformer;
    class LineData;
    class MRTHelper;
    class MRTHelperForPackage;
    class MRTHelperForPriFile;
    class MRTTransformer;
    class MRTTransformerData;
    class PhoneticNameGenerator;
    class PlaceholderTileTransformer;
    class PropertyBagLookaside;
    class PropertyNotFoundException;
    class StateRepositoryTransformer;
    class TargetedContentTransformer;
    class Test;
    class TileStoreHelpers;
    class TileStoreTransformer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStringsEqual@DataStoreCache@@YA_NPEAUHSTRING__@@PEBGI_N@Z
    bool AreStringsEqual(HSTRING__*, unsigned short const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStringsEqual@DataStoreCache@@YA_NPEAUHSTRING__@@0_N@Z
    bool AreStringsEqual(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStringsEqual@DataStoreCache@@YA_NPEBGI0I_N@Z
    bool AreStringsEqual(unsigned short const *, unsigned int, unsigned short const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHashKeyForDataStream@DataStoreCache@@YA_K_KPEBEI@Z
    uint64_t CalculateHashKeyForDataStream(uint64_t, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteFailureWithStage@DataStoreCache@@YAXAEAV?$tip_test@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@W4StartTileActivationReason@1@@Z
    void CompleteFailureWithStage(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_AppResolverTransformer@DataStoreCache@@YA?AV?$ComPtr@UIDataStorePropertyTransformer@DataStoreCache@@@WRL@Microsoft@@PEAUIDataManager@1@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAUIMRTTransformer@1@@Z
    WindissectOpaque Create_AppResolverTransformer(WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_AppUsageTransformer@DataStoreCache@@YA?AV?$ComPtr@UIAppUsageTransformer@DataStoreCache@@@WRL@Microsoft@@PEAUIDataManager@1@W4AppUsageFeatures@1@PEAUIUser@System@Windows@@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@@Z
    WindissectOpaque Create_AppUsageTransformer(WindissectOpaque *, int, ::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_CacheDumper@DataStoreCache@@YA?AV?$ComPtr@UICacheManagerDump@DataStoreCache@@@WRL@Microsoft@@AEBV?$ComPtr@UICacheableDataStoreTransformer@DataStoreCache@@@34@@Z
    WindissectOpaque Create_CacheDumper(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_DataManager@DataStoreCache@@YA?AV?$ComPtr@UIDataManager@DataStoreCache@@@WRL@Microsoft@@XZ
    WindissectOpaque Create_DataManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_EdpTransformer@DataStoreCache@@YA?AV?$ComPtr@UIDataStorePropertyTransformer@DataStoreCache@@@WRL@Microsoft@@QEAUIDataManager@1@QEAUIUser@System@Windows@@@Z
    WindissectOpaque Create_EdpTransformer(WindissectOpaque * const, ::Windows::System::IUser * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_StateRepositoryTransformer@DataStoreCache@@YA?AV?$ComPtr@UIDataStorePropertyTransformer@DataStoreCache@@@WRL@Microsoft@@PEAUIDataManager@1@W4TileStoreFeatures@1@W4PackagedTileEnumerationFilters@UnifiedTile@Shell@WindowsInternal@@2PEAUIUser@System@Windows@@PEAUICDSTilePropertiesBatched@CDSProperties@9WindowsInternal@@PEAUIMRTTransformer@1@PEAUIAppUsageTransformer@1@PEAUIUnifiedTileManager@89WindowsInternal@@@Z
    WindissectOpaque Create_StateRepositoryTransformer(WindissectOpaque *, int, int, int, ::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_TargetedContentTransformer@DataStoreCache@@YA?AV?$ComPtr@UIDataStorePropertyTransformer@DataStoreCache@@@WRL@Microsoft@@PEAUIDataManager@1@W4TargetedContentFeatures@1@PEAUIMRTTransformer@1@PEAUIPlaceholderTileTransformer@PlaceholderTileTransformer@1@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Z
    WindissectOpaque Create_TargetedContentTransformer(WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_TileStoreTransformer@DataStoreCache@@YA?AV?$ComPtr@UIDataStorePropertyTransformer@DataStoreCache@@@WRL@Microsoft@@PEAUIDataManager@1@W4TileStoreFeatures@1@W4PackagedTileEnumerationFilters@UnifiedTile@Shell@WindowsInternal@@2PEAUIUser@System@Windows@@PEAUICDSTilePropertiesBatched@CDSProperties@9WindowsInternal@@PEAUIMRTTransformer@1@PEAUIAppUsageTransformer@1@PEAUIUnifiedTileManager@89WindowsInternal@@@Z
    WindissectOpaque Create_TileStoreTransformer(WindissectOpaque *, int, int, int, ::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMRTHash@DataStoreCache@@YA_KXZ
    uint64_t GetCurrentMRTHash();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeRegionHash@DataStoreCache@@YAJPEA_K@Z
    long GetHomeRegionHash(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageHash@DataStoreCache@@YAJPEA_K@Z
    long GetLanguageHash(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOSDefaultLanguageHash@DataStoreCache@@YAJPEA_K@Z
    long GetOSDefaultLanguageHash(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadLanguageHash@DataStoreCache@@YAJPEA_K@Z
    long GetThreadLanguageHash(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackagedTileTransformerId@DataStoreCache@@YA_NAEBU_GUID@@@Z
    bool IsPackagedTileTransformerId(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDataFromFILETIME@DataStoreCache@@YA?AULineData@1@PEBGAEBU_FILETIME@@I@Z
    WindissectOpaque LineDataFromFILETIME(unsigned short const *, _FILETIME const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDataFromGUID@DataStoreCache@@YA?AULineData@1@PEBGAEBU_GUID@@I@Z
    WindissectOpaque LineDataFromGUID(unsigned short const *, _GUID const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenActivationTipTest@DataStoreCache@@YA?AV?$tip_test@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    WindissectOpaque OpenActivationTipTest(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslatePlaceholderInstallStateToAppState@DataStoreCache@@YA?AW4AppState@UnifiedTile@Shell@WindowsInternal@@W4InstallStateType@PlaceholderTileTransformer@1@W4InstallDelayType@71@@Z
    int TranslatePlaceholderInstallStateToAppState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryExtractActivationCorrelation@DataStoreCache@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@AEAU_GUID@@AEAI@Z
    bool TryExtractActivationCorrelation(WindissectOpaque *, _GUID &, unsigned int &);
};
