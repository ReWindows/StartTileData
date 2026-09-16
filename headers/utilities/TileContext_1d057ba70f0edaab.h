#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace DataStoreCache::StateRepositoryTransformer {
class TileContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppType@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAA?AW4TileAppType@3@XZ
    int GetAppType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetAppUserModelId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAUIApplication@StateRepository@Internal@Windows@@XZ
    ::Windows::Internal::StateRepository::IApplication * GetApplication();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAUIPackage@StateRepository@Internal@Windows@@XZ
    ::Windows::Internal::StateRepository::IPackage * GetPackage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAUIPackageFamily@StateRepository@Internal@Windows@@XZ
    ::Windows::Internal::StateRepository::IPackageFamily * GetPackageFamily();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetPackageFamilyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAAEBVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString const & GetPackageFullName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageOrigin@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAA?AW4PackageOrigin@StateRepository@Internal@Windows@@XZ
    int GetPackageOrigin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyMap@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@XZ
    WindissectOpaque * GetPropertyMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryTile@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAUISecondaryTile@Tiles@Internal@Windows@@XZ
    ::Windows::Internal::Tiles::ISecondaryTile * GetSecondaryTile();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileContext@StateRepositoryTransformer@DataStoreCache@@QEAA@PEAUITile@Tiles@Internal@Windows@@PEAUIUser@StateRepository@56@PEAUIPackageUserStatics@856@PEAUITileViewStatics@856@PEAUIHostRuntimeStatics@856@PEAUIApplicationExtensionStatics@856@@Z
    TileContext(::Windows::Internal::Tiles::ITile *, ::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageUserStatics *, ::Windows::Internal::StateRepository::ITileViewStatics *, ::Windows::Internal::StateRepository::IHostRuntimeStatics *, ::Windows::Internal::StateRepository::IApplicationExtensionStatics *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageUser@TileContext@StateRepositoryTransformer@DataStoreCache@@QEAAPEAUIPackageUser@StateRepository@Internal@Windows@@XZ
    ::Windows::Internal::StateRepository::IPackageUser * TryGetPackageUser();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileContext@StateRepositoryTransformer@DataStoreCache@@QEAA@XZ
    ~TileContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppTypeAndCanElevate@TileContext@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void EnsureAppTypeAndCanElevate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureApplicationAndPackage@TileContext@StateRepositoryTransformer@DataStoreCache@@AEAAXXZ
    void EnsureApplicationAndPackage();
};
} // namespace DataStoreCache::StateRepositoryTransformer
