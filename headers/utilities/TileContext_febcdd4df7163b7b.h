#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace DataStoreCache::TileStoreTransformer {
class TileContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@TileContext@TileStoreTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetAppUserModelId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@TileContext@TileStoreTransformer@DataStoreCache@@QEAAPEAUIPackage@StateRepository@Internal@Windows@@XZ
    ::Windows::Internal::StateRepository::IPackage * GetPackage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@TileContext@TileStoreTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetPackageFamilyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@TileContext@TileStoreTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetPackageFullName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageOrigin@TileContext@TileStoreTransformer@DataStoreCache@@QEAA?AW4PackageOrigin@StateRepository@Internal@Windows@@XZ
    int GetPackageOrigin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyMap@TileContext@TileStoreTransformer@DataStoreCache@@QEAAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@XZ
    WindissectOpaque * GetPropertyMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileType@TileContext@TileStoreTransformer@DataStoreCache@@QEBA?AW4TileTypes@Tiles@Internal@Windows@@XZ
    int GetTileType() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileContext@TileStoreTransformer@DataStoreCache@@QEAA@PEAUITile@Tiles@Internal@Windows@@PEAUIUser@StateRepository@56@PEAUIPackageUserStatics@856@PEAUITileViewStatics@856@PEAUIHostRuntimeStatics@856@PEAUIApplicationExtensionStatics@856@@Z
    TileContext(::Windows::Internal::Tiles::ITile *, ::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageUserStatics *, ::Windows::Internal::StateRepository::ITileViewStatics *, ::Windows::Internal::StateRepository::IHostRuntimeStatics *, ::Windows::Internal::StateRepository::IApplicationExtensionStatics *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileContext@TileStoreTransformer@DataStoreCache@@QEAA@XZ
    ~TileContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppTypeAndCanElevate@TileContext@TileStoreTransformer@DataStoreCache@@AEAAXXZ
    void EnsureAppTypeAndCanElevate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureApplicationAndPackage@TileContext@TileStoreTransformer@DataStoreCache@@AEAAXXZ
    void EnsureApplicationAndPackage();
};
} // namespace DataStoreCache::TileStoreTransformer
