#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListItemBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@JumpListItemBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@7@AEBUJumpListItemActivationContext@4567@@Z
    WindissectOpaque ActivateAsync(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@JumpListItemBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEBA?AU?$IAsyncOperation@U?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@7@AEBUVerbEnumerationArgs@UnifiedTile@567@@Z
    WindissectOpaque GetVerbsAsync(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFileLocationAsync@JumpListItemBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@7@XZ
    WindissectOpaque OpenFileLocationAsync() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListItemBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListItemBroker();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
