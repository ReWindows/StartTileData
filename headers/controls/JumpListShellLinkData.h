#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListShellLinkData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NAEBUJumpListItemActivationContext@4567@@Z
    virtual bool Activate(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@7@AEBUVerbEnumerationArgs@UnifiedTile@567@@Z
    virtual WindissectOpaque GetVerbs(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEquivalent@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NAEBUJumpListItemData@234567@@Z
    virtual bool IsEquivalent(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUJsonObject@0Data@Windows@7@XZ
    virtual WindissectOpaque Json();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA?AW4JumpListItemKind@4567@XZ
    virtual int Kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@7@USize@Foundation@Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    virtual WindissectOpaque LoadImageW(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool Resolve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UniqueId@JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & UniqueId() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListShellLinkData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListShellLinkData();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
