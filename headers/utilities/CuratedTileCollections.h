#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CuratedTileCollections {
public:
    class AlwaysInitPolicy;
    class AppendWin8UpgradeTilesPolicy;
    class AssignedAccessAllowedAllAppListCollectionInitializer;
    class AssignedAccessAllowedAllAppListInitialCollectionProvider;
    class AssignedAccessAllowedAllAppListLayoutInitPolicy;
    class BaseTileCollectionInitializer;
    class CDSLayoutProvider;
    class CDSStartCollectionWriter;
    class CollectionContext;
    class CollectionInitializationBackgroundPipeline;
    class CollectionInitializationBackgroundTask;
    class CollectionInitializationPipeline;
    class CollectionInitializationPolicy;
    class CuratedCollectionInitializationStatics;
    class CuratedCollectionSelectionHelpers;
    class CuratedTile;
    class CuratedTileCollection;
    class CuratedTileCollectionBase;
    class CuratedTileCollectionManager;
    class CuratedTileCollectionManagerStaticsImpl;
    class CuratedTileCollectionOptions;
    class CuratedTileGroup;
    class DefaultLayoutManagerQuery;
    class DefaultLayoutParser;
    class EmptyStartInitializationPolicy;
    class FallbackStartCollectionProvider;
    class GenericCollectionWriter;
    class GroupPolicyInitializationPolicy;
    class Helpers;
    class InMemoryCollectionWriter;
    class Internal;
    class LayoutModificationXMLParser;
    class LocalXmlDefaultLayoutPostProcessor;
    class LocalXmlLayoutModificationProvider;
    class LocalXmlStartCollectionProvider;
    class MDMPolicyInitializationPolicy;
    class MfuModificationPostProcessor;
    class OfficeTileReplacementUtils;
    class PipelineApplicationData;
    class PlaceholderImageHandler;
    class PlaceholderInstallerInternal;
    class Policies;
    class PreserveLayoutPostProcessor;
    class RegionHelpers;
    class RequiredOemTilePostProcessor;
    class RequiredStartGroups;
    class ResourceTranslationPostProcessor;
    class RetailDemoCollectionProvider;
    class SecondaryTileInitializationHandler;
    class SelectionData;
    class SelectionDataParser;
    class StartCollectionPropertyPostProcessor;
    class StartCollectionWriterTelemetryHelper;
    class StartLayoutParser;
    class StartLayoutParserExpectedException;
    class StartTileCollection;
    class StartTileGridCollectionInitializer;
    class StoreMetadataDataGatherer;
    class TDLMigrationInitialCollectionProvider;
    class TDLStartCollectionMigrationInitializationPolicy;
    class TaskbarSecondaryTileCollectionInitializer;
    class TileInitializationHandlerManager;
    class UnattendLayoutParser;
    class UnresolvedLinkPathTileInitializationHandler;
    class UserPinnedAppResolverTileInitializationHandler;
    class Win8LayoutMigrationPostProcessor;
    class Win8LayoutParser;
    class Win8SimpleLayoutConverter;
    class Windows8UpgradeGroups;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z
    long AddSchemaToCollection(unsigned short const *, unsigned short const *, IXMLDOMSchemaCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOfficeSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAXPEAUSelectionData@1234@PEAUILayoutModificationXMLParser@1234@@Z
    void ApplyOfficeSelectionData(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDesiredGroupCellWidth@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAIPEAUILayoutModificationXMLParser@1234@@Z
    unsigned int CalculateDesiredGroupCellWidth(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z
    long GetBoolAttributeValue(IXMLDOMElement *, _bstr_t const &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutPolicyScope@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA?AW4StartLayoutGroupPolicyScope@1234@XZ
    int GetLayoutPolicyScope();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLongAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAJ@Z
    long GetLongAttributeValue(IXMLDOMElement *, _bstr_t const &, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z
    long GetUintAttributeValue(IXMLDOMElement *, _bstr_t const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextForBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA_KPEAUIUser@System@Windows@@@Z
    uint64_t GetUserContextForBackgroundTask(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutPartiallyLocked@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA_NPEAUILayoutModificationXMLParser@1234@@Z
    bool IsLayoutPartiallyLocked(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOwnerManagedCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsOwnerManagedCollection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideDeviceCategory@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAXPEAUSelectionData@1234@PEAUILayoutModificationXMLParser@1234@@Z
    void OverrideDeviceCategory(WindissectOpaque *, WindissectOpaque *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
