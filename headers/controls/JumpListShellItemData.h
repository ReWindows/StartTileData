#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListShellItemData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NAEBUJumpListItemActivationContext@4567@@Z
    virtual bool Activate(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageItemAsync@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@UIStorageItem@Storage@Windows@winrt@@@Foundation@Windows@7@XZ
    virtual WindissectOpaque GetStorageItemAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@7@AEBUVerbEnumerationArgs@UnifiedTile@567@@Z
    virtual WindissectOpaque GetVerbs(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEquivalent@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NAEBUJumpListItemData@234567@@Z
    virtual bool IsEquivalent(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUJsonObject@0Data@Windows@7@XZ
    virtual WindissectOpaque Json();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA?AW4JumpListItemKind@4567@XZ
    virtual int Kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@7@USize@Foundation@Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    virtual WindissectOpaque LoadImageW(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool Resolve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UniqueId@JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & UniqueId() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListShellItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListShellItemData();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
