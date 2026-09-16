#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 1 member(s).
namespace DataStoreCache {
class CuratedTileCollectionTransformer {
public:
    class CollectionDoesNotExistException;
    class CuratedGroup;
    class CuratedGroupChangeInfo;
    class CuratedRoot;
    class CuratedRootChangeInfo;
    class CuratedTile;
    class CuratedTileChangeInfo;
    class Internal;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedTileCollectionTransformer@CuratedTileCollectionTransformer@DataStoreCache@@YAXPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIUser@System@Windows@@PEAPEAUICuratedTileCollectionTransformer@12@@Z
    void CreateCuratedTileCollectionTransformer(WindissectOpaque *, ::Windows::System::IUser *, WindissectOpaque * *);
};
} // namespace DataStoreCache
