#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace winrt::WindowsInternal::Shell::UnifiedTile::Shim::implementation {
class UnifiedTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppLifecycleInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque AppLifecycleInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppUsageInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque AppUsageInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUhstring@6@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GameListCategory@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBAIXZ
    unsigned int GameListCategory() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GameListCategory@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAAXI@Z
    void GameListCategory(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GamesListInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque GamesListInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserPinnedShortcut@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA_NXZ
    bool IsUserPinnedShortcut() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeFormatVisualTileInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque LargeFormatVisualTileInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogoPath2x2@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUTileImageResource@31456@XZ
    WindissectOpaque LogoPath2x2() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageFamilyName@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUhstring@6@XZ
    WindissectOpaque PackageFamilyName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageFullName@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUhstring@6@XZ
    WindissectOpaque PackageFullName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackagedAppTileInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque PackagedAppTileInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Relevance@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBANXZ
    double Relevance() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetPath@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUhstring@6@XZ
    WindissectOpaque TargetPath() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTile@implementation@Shim@0Shell@WindowsInternal@winrt@@QEAA@AEBU00345@AEBUCDSTilePropertiesBatched@CDSProperties@345@@Z
    UnifiedTile(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualTileInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque VisualTileInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Win32ShortcutInfo@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEAA?AU031456@XZ
    WindissectOpaque Win32ShortcutInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?XboxTitleId@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBA?AUhstring@6@XZ
    WindissectOpaque XboxTitleId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?XboxTitleId@UnifiedTile@implementation@Shim@1Shell@WindowsInternal@winrt@@QEBAXAEBUhstring@6@@Z
    void XboxTitleId(WindissectOpaque const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTile@implementation@Shim@0Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~UnifiedTile();
};
} // namespace winrt::WindowsInternal::Shell::UnifiedTile::Shim::implementation
