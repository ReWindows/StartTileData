#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::implementation {
class LogoOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Behavior@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AW4LogoCachingBehavior@34567@XZ
    int Behavior() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentType@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBAIXZ
    unsigned int ContentType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentType@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXI@Z
    void ContentType(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlowDirection@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AW40Xaml@UI@Windows@7@XZ
    int FlowDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBrandingColor@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA_NXZ
    bool HasBrandingColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorful@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA_NXZ
    bool IsColorful() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOriginalSizePreferred@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA_NXZ
    bool IsOriginalSizePreferred() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOriginalSizePreferred@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAX_N@Z
    void IsOriginalSizePreferred(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnplated@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA_NXZ
    bool IsUnplated() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Mode@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AW4LogoCachingMode@34567@XZ
    int Mode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatedBackgroundColor@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXUColor@UI@Windows@7@@Z
    void PlatedBackgroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatedBackgroundColor@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AUColor@UI@Windows@7@XZ
    WindissectOpaque PlatedBackgroundColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleFactor@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBANXZ
    double ScaleFactor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubContentType@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBAIXZ
    unsigned int SubContentType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AW4TileThemeSelector@VisualCache@4567@XZ
    int Theme() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXW4TileThemeSelector@VisualCache@4567@@Z
    void Theme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeOverride@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AW4TileThemeSelector@VisualCache@4567@XZ
    int ThemeOverride() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnplatedBackgroundColor@LogoOptions@implementation@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXUColor@UI@Windows@7@@Z
    void UnplatedBackgroundColor(WindissectOpaque);
};
} // namespace winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::implementation
