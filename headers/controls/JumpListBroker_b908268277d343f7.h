#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTileAsync@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@7@UJumpListItemActivationContext@4567@@Z
    WindissectOpaque ActivateTileAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileVerbsAsync@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@7@UVerbEnumerationArgs@UnifiedTile@567@@Z
    WindissectOpaque GetTileVerbsAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUhstring@7@XZ
    WindissectOpaque Json();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@AEBUhstring@6@0W4JumpListEnumerationOptions@3456@IW4JumpListCategoryKind@3456@@Z
    JumpListBroker(WindissectOpaque const &, WindissectOpaque const &, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTileImageAsync@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@7@USize@9Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    WindissectOpaque LoadTileImageAsync(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAsync@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@XZ
    WindissectOpaque UpdateAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternal@JumpListBroker@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAAXXZ
    void UpdateInternal();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
