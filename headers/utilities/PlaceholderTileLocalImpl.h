#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace DataStoreCache::PlaceholderTileTransformer {
class PlaceholderTileLocalImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssetManagementPolicy@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4AssetManagementPolicyEnum@23@XZ
    int GetAssetManagementPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallReason@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4InstallReasonType@23@XZ
    int GetInstallReason();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallState@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4InstallStateType@23@XZ
    int GetInstallState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPostProcessingCompleted@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetIsPostProcessingCompleted();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA@PEAUIPlaceholderTileTransformerInternal@Internal@12@AEBUPlaceholderTileLocal@Data@Windows@@PEAUHSTRING__@@@Z
    PlaceholderTileLocalImpl(WindissectOpaque *, ::Windows::Data::PlaceholderTileLocal const &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAssets@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXXZ
    void ReleaseAssets();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInstallState@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4InstallStateType@23@@Z
    void SetInstallState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPostProcessingCompleted@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAX_N@Z
    void SetIsPostProcessingCompleted(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA@XZ
    ~PlaceholderTileLocalImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@PlaceholderTileLocalImpl@PlaceholderTileTransformer@DataStoreCache@@IEAAXAEBUPlaceholderTileLocal@Data@Windows@@@Z
    void OnItemUpdated(::Windows::Data::PlaceholderTileLocal const &);
};
} // namespace DataStoreCache::PlaceholderTileTransformer
