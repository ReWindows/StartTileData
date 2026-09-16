#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 25 member(s).
class DataStoreTransformerTelemetry {
public:
    class ActivateStoreAsync;
    class AppLifecycleTransformerCreateInstance;
    class AppLifecycleTransformerHandleDataItemChangedEvent;
    class AppLifecycleTransformerHandlePackageInstallingEvent;
    class AppLifecycleTransformerHandlePackageStagingEvent;
    class AppLifecycleTransformerHandlePackageStatusChangedEvent;
    class AppLifecycleTransformerHandlePackageUpdatingEvent;
    class AppLifecycleTransformerHandleResumingEvent;
    class AppLifecycleTransformerHandleSuspendingEvent;
    class AppLifecycleTransformerSetInitializationStage;
    class AppResolverTransformerActivateTile;
    class AppResolverTransformer_GetVerbs;
    class AppResolverTransformer_LoadAppResolverData;
    class AppUsageTransformerCreateInstance;
    class AppUsageTransformerHandleDataItemChangedEvent;
    class AppUsageTransformerHandleLocalVolatileTilePropertiesChanged;
    class AppUsageTransformerSetInitializationStage;
    class RefreshCachedEdpStatusAllTiles;
    class RefreshEdpStatusOnCollection;
    class RefreshEdpStatusOnTile;
    class SettingsUninstallVerbExecute;
    class SettingsVerbExecute;
    class TargetedContentTransformer_ActivateTile;
    class TargetedContentTransformer_CreateInstance;
    class TargetedContentTransformer_CreatePlaceholder;
    class TargetedContentTransformer_CreatePlaceholderTilesAndTracking;
    class TargetedContentTransformer_ReconcileSubscription;
    class TargetedContentTransformer_SetInitializationStage;
    class TargetedContentTransformer_UpdateDataItem;
    class TargetedContentTransformer_WNFONShelStartLayoutMigrated;
    class TileActivateVerbExecute;
    class TileLifetimeTransformerReconcileTileLifetime;
    class TileStoreTransformerActivateStoreForTile;
    class TileStoreTransformerActivateTile;
    class TileStoreTransformerCacheDeserializeHeader;
    class TileStoreTransformerCacheDeserializeItem;
    class TileStoreTransformerCacheSerializeHeader;
    class TileStoreTransformerCacheSerializeItem;
    class TileStoreTransformerCreateInstance;
    class TileStoreTransformerGetVerbs;
    class TileStoreTransformerInitializeStateRepoAndTileStore;
    class TileStoreTransformerLoadCachedData;
    class TileStoreTransformerReconcileTiles;
    class TileStoreTransformerReconcileWithDataStore;
    class TileStoreTransformerReinitializationAttempt;
    class TileStoreTransformerTileStoreChanged;
    class TileUninstallVerbExecute;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppResolverTransformer_AppResolverScanCompletedWnf@DataStoreTransformerTelemetry@@SAXXZ
    static void AppResolverTransformer_AppResolverScanCompletedWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppResolverTransformer_HidSpartan@DataStoreTransformerTelemetry@@SAXXZ
    static void AppResolverTransformer_HidSpartan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppResolverTransformer_LaunchedUsingDirectLaunch@DataStoreTransformerTelemetry@@SAXXZ
    static void AppResolverTransformer_LaunchedUsingDirectLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileStoreTransformerStoreProtocolActivationFailed@DataStoreTransformerTelemetry@@SAXXZ
    static void TileStoreTransformerStoreProtocolActivationFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileStoreTransformer_LaunchedUsingDirectLaunch@DataStoreTransformerTelemetry@@SAXXZ
    static void TileStoreTransformer_LaunchedUsingDirectLaunch();
};
