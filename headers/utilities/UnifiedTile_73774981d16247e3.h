#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 16 member(s).
namespace WindowsInternal::Shell {
class UnifiedTile {
public:
    class AllTilesCollection;
    class AppsListGeneratedCollection;
    class BlockListHelpers;
    class CollectionTile;
    class CollectionTileVerbSource;
    class ContentsChangedEventArgs;
    class CortanaActivationHandler;
    class CuratedCollection;
    class CuratedCollectionBatch;
    class CuratedContainer;
    class CuratedTileCollections;
    class DesktopIconImageResource;
    class EmptyUnifiedTile;
    class MRTHelperTileImageResource;
    class ManifestedImageResource;
    class PackagedUnifiedTile;
    class PackagedUnifiedTileIdentifier;
    class PlaceholderTile;
    class PlaceholderTileImageResource;
    class Private;
    class SimpleContainer;
    class TargetedContentImageResource;
    class TargetedContentUnifiedTile;
    class TargetedContentUnifiedTileIdentifier;
    class TileActivationContext;
    class TileChangedEventArgs;
    class TileImageResourceCandidate;
    class TileImageResourceOptions;
    class TileMigratedEventArgs;
    class TileMigrationEventSource;
    class UnifiedTileIdentifierExtractorFactory;
    class UnifiedTileIdentifierFactory;
    class UnifiedTileMRTHelper;
    class UnifiedTileMRTHelperFactory;
    class UnifiedTileManager;
    class UnifiedTileManagerCreationStatus;
    class UnifiedTileManagerFactory;
    class UnifiedTileManagerOptions;
    class UnifiedTileVerbSource;
    class UnifiedTileWrapper;
    class UnknownUnifiedTileIdentifier;
    class VerbEnumerationArgs;
    class VerbExecutionArgs;
    class VerbSourceBase;
    class Win32UnifiedTile;
    class Win32UnifiedTileIdentifier;
    class _tip_PlaceholderTileLogoLoadingTest;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CouldDataItemChangeAffectAppListVisibility@UnifiedTile@Shell@WindowsInternal@@YA_NPEAUIDataItemChangeEvent@DataStoreCache@@@Z
    bool CouldDataItemChangeAffectAppListVisibility(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanPropertyWithDefault@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIDataItem@DataStoreCache@@AEBU?$DataStoreProperty@_N@5@_NPEAE@Z
    long GetBooleanPropertyWithDefault(WindissectOpaque *, WindissectOpaque const &, bool, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionTileFromDataItem@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIDataItem@DataStoreCache@@PEAUIUnifiedTileManager@123@PEAUITileCollectionContainer@123@PEAPEAVCollectionTile@123@@Z
    long GetCollectionTileFromDataItem(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorPropertyWithDefault@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIDataItem@DataStoreCache@@AEBU?$DataStoreProperty@I@5@KPEAUColor@UI@Windows@@@Z
    long GetColorPropertyWithDefault(WindissectOpaque *, WindissectOpaque const &, unsigned long, ::Windows::UI::Color *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringProperty@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIDataItem@DataStoreCache@@AEBU?$DataStoreProperty@PEBG@5@PEAPEAUHSTRING__@@@Z
    long GetStringProperty(WindissectOpaque *, WindissectOpaque const &, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedTileFromDataItem@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIDataItem@DataStoreCache@@PEAUIUnifiedTileManager@123@PEAPEAUIUnifiedTile@123@@Z
    long GetUnifiedTileFromDataItem(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTileEligibleForGraveyarding@UnifiedTile@Shell@WindowsInternal@@YA_NPEAUIUnifiedTileIdentifier@123@@Z
    bool IsTileEligibleForGraveyarding(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnifiedTileIdentifier_CreateInstance@UnifiedTile@Shell@WindowsInternal@@YAJPEAUHSTRING__@@PEAPEAUIUnifiedTileIdentifier@123@@Z
    long UnifiedTileIdentifier_CreateInstance(HSTRING__*, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell
