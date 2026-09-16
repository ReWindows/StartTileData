#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace DataStoreCache::PlaceholderTileTransformer {
class PlaceholderTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCollectionReference@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAXPEBG@Z
    void EnsureCollectionReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssetManagementPolicy@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4AssetManagementPolicyEnum@23@@Z
    void SetAssetManagementPolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCreatedTimeStamp@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_J@Z
    void SetCreatedTimeStamp(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInstallReason@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4InstallReasonType@23@@Z
    void SetInstallReason(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPrimary@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetIsPrimary(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsVisibleInAppList@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetIsVisibleInAppList(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaceholderOrigin@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4PlaceholderOriginType@23@@Z
    void SetPlaceholderOrigin(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowNameOnSquare150x150Logo@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetShowNameOnSquare150x150Logo(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowNameOnSquare310x310Logo@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetShowNameOnSquare310x310Logo(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowNameOnWide310x150Logo@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetShowNameOnWide310x150Logo(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualsChangedHash@PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAAX_K@Z
    void SetVisualsChangedHash(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@QEAA@XZ
    ~PlaceholderTile();
};
} // namespace DataStoreCache::PlaceholderTileTransformer
