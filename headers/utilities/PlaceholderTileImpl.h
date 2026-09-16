#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 25 member(s).
namespace DataStoreCache::PlaceholderTileTransformer {
class PlaceholderTileImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCatalogSource@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4CatalogSource@AppRestore@Shell@Internal@Windows@winrt@@XZ
    int GetCatalogSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickAction@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4ClickAction@AppRestore@Shell@Internal@Windows@winrt@@XZ
    int GetClickAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreatedTimeStamp@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_JXZ
    int64_t GetCreatedTimeStamp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHas310x150Logo@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetHas310x150Logo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHas310x310Logo@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetHas310x310Logo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallDelay@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4InstallDelayType@23@XZ
    int GetInstallDelay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPrimary@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetIsPrimary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsVisibleInAppList@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetIsVisibleInAppList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentAppHasMultipleTiles@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetParentAppHasMultipleTiles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaceholderOrigin@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4PlaceholderOriginType@23@XZ
    int GetPlaceholderOrigin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestorePolicyBehaviorFlags@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA?AW4RestorePolicyBehavior@AppRestore@Shell@Internal@Windows@winrt@@XZ
    int GetRestorePolicyBehaviorFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowNameOnSquare150x150Logo@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetShowNameOnSquare150x150Logo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowNameOnSquare310x310Logo@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetShowNameOnSquare310x310Logo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowNameOnWide310x150Logo@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool GetShowNameOnWide310x150Logo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualsChangedHash@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_KXZ
    uint64_t GetVisualsChangedHash();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCollectionReference@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NPEBG@Z
    bool HasCollectionReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPrimaryCollectionReference@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool HasPrimaryCollectionReference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSecondaryCollectionReference@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA_NXZ
    bool HasSecondaryCollectionReference();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA@PEAUIPlaceholderTileTransformerInternal@Internal@12@AEBUPlaceholderTile@Data@Windows@@@Z
    PlaceholderTileImpl(WindissectOpaque *, ::Windows::Data::PlaceholderTile const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCollectionReference@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXPEBG@Z
    void RemoveCollectionReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCatalogSource@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4CatalogSource@AppRestore@Shell@Internal@Windows@winrt@@@Z
    void SetCatalogSource(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClickAction@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4ClickAction@AppRestore@Shell@Internal@Windows@winrt@@@Z
    void SetClickAction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInstallDelay@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAAXW4InstallDelayType@23@@Z
    void SetInstallDelay(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@QEAA@XZ
    ~PlaceholderTileImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUpdated@PlaceholderTileImpl@PlaceholderTileTransformer@DataStoreCache@@IEAAXAEBUPlaceholderTile@Data@Windows@@@Z
    void OnItemUpdated(::Windows::Data::PlaceholderTile const &);
};
} // namespace DataStoreCache::PlaceholderTileTransformer
