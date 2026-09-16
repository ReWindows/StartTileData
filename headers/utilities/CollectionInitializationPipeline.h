#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CollectionInitializationPipeline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUpdate@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_N@Z
    virtual long CheckForUpdate(bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CollectionInitializationPipeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCollectionInitialized@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_NPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long EnsureCollectionInitialized(bool *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModificationParser@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUILayoutModificationXMLParser@2345@@Z
    virtual long GetModificationParser(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCollection@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ResetCollection(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowLayoutOptions@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJH@Z
    virtual long SetAllowLayoutOptions(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CollectionInitializationPipeline();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateLayoutSelectionVariables@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long CalculateLayoutSelectionVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDeterminedLayout@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void ClearDeterminedLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineDesiredLayout@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long DetermineDesiredLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStartViewInternal@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    void InitializeStartViewInternal(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareCollectionForInitialization@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    void PrepareCollectionForInitialization(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollection@CollectionInitializationPipeline@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXW4StartInitializationReason@StartLayoutTelemetryData@@PEA_NPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    void UpdateCollection(int, bool *, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
