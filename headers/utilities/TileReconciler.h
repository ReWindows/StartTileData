#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 16 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct {
class TileReconciler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionGraveyardingPolicy@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA?AW4CollectionGraveyardingPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAVCuratedRoot@CuratedTileCollectionTransformer@3@@Z
    virtual int GetCollectionGraveyardingPolicy(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionReconcilable@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NPEBG@Z
    virtual bool IsCollectionReconcilable(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileSecondaryData@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAXXZ
    void ReconcileSecondaryData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAAJPEAUICuratedTileCollectionTransformer@CuratedTileCollectionTransformer@3@PEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIDataManager@3@PEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, ::Windows::System::IUser *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@QEAA@XZ
    TileReconciler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA@XZ
    virtual ~TileReconciler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesTileHavePrimaryPlaceholderReference@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAA_NPEAUIDataItem@3@@Z
    bool DoesTileHavePrimaryPlaceholderReference(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFactories@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXXZ
    void EnsureFactories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLauncherPolicy@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAA?AV?$ComPtr@UILauncherPolicy@LauncherPolicy@Shell@WindowsInternal@@@WRL@Microsoft@@XZ
    WindissectOpaque EnsureLauncherPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTileLifetime@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXPEAUIDataItem@3@@Z
    void RefreshTileLifetime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDataItemEvents@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXXZ
    void RegisterForDataItemEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResurrectTile@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXAEBVDataItemIdentifier@3@@Z
    void ResurrectTile(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForDataItemEvents@TileReconciler@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXXZ
    void UnregisterForDataItemEvents();
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct
