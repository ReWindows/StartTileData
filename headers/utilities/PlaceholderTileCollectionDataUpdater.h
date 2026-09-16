#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace DataStoreCache::PlaceholderTileTransformer::Internal {
class PlaceholderTileCollectionDataUpdater {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInitialData@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAAXPEBUPlaceholderTileCollection@Data@Windows@@PEBUPlaceholderTileCollectionLocal@67@@Z
    void LoadInitialData(::Windows::Data::PlaceholderTileCollection const *, ::Windows::Data::PlaceholderTileCollectionLocal const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAAXPEBUPlaceholderTileCollection@Data@Windows@@PEBUPlaceholderTileCollectionLocal@67@@Z
    virtual void OnCollectionChanged(::Windows::Data::PlaceholderTileCollection const *, ::Windows::Data::PlaceholderTileCollectionLocal const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAA@XZ
    PlaceholderTileCollectionDataUpdater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileSecondaryData@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAAXXZ
    virtual void ReconcileSecondaryData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAAJPEAUIPlaceholderTileTransformer@34@PEAUIDataManager@4@PEAUIMRTTransformer@4@PEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDataItemEvents@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForDataItemEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureMRTTransformerData@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@AEAAXPEAUIDataItem@4@_N@Z
    void TryEnsureMRTTransformerData(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForDataItemEvents@PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@AEAAXXZ
    void UnregisterForDataItemEvents();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileCollectionDataUpdater@Internal@PlaceholderTileTransformer@DataStoreCache@@EEAA@XZ
    virtual ~PlaceholderTileCollectionDataUpdater();
};
} // namespace DataStoreCache::PlaceholderTileTransformer::Internal
