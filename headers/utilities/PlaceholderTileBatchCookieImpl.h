#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache::PlaceholderTileTransformer::Internal {
class PlaceholderTileBatchCookieImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginBatchUpdate@PlaceholderTileBatchCookieImpl@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAAXXZ
    void BeginBatchUpdate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnded@PlaceholderTileBatchCookieImpl@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool IsEnded();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileBatchCookieImpl@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAA@XZ
    virtual ~PlaceholderTileBatchCookieImpl();
};
} // namespace DataStoreCache::PlaceholderTileTransformer::Internal
