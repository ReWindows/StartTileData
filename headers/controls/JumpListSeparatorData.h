#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 17 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListSeparatorData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NAEBUJumpListItemActivationContext@4567@@Z
    virtual bool Activate(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@7@AEBUVerbEnumerationArgs@UnifiedTile@567@@Z
    virtual WindissectOpaque GetVerbs(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEquivalent@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NAEBUJumpListItemData@234567@@Z
    virtual bool IsEquivalent(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnable@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsPinnable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsPinned() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemovable@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsRemovable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA?AW4JumpListItemKind@4567@XZ
    virtual int Kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@7@USize@Foundation@Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    virtual WindissectOpaque LoadImageW(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pin@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAHH@Z
    virtual int Pin(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAXXZ
    virtual void Remove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA_NXZ
    virtual bool Resolve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UniqueId@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & UniqueId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpin@JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAXXZ
    virtual void Unpin();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListSeparatorData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListSeparatorData();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
