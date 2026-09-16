#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::implementation {
class JumpListItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@6@UJumpListItemActivationContext@3456@@Z
    WindissectOpaque ActivateAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerbAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Foundation@Windows@6@UVerbEnumerationArgs@UnifiedTile@456@@Z
    WindissectOpaque FindVerbAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@6@UVerbEnumerationArgs@UnifiedTile@456@@Z
    WindissectOpaque GetVerbsAsync(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA@AEBUJsonObject@Json@Data@Windows@5@AEBU?$com_ptr@UJumpList@implementation@1Shell@WindowsInternal@winrt@@@5@AEBUJumpListTile@2345@AEBU?$IMapView@Uguid@winrt@@UJumpListItemBroker@Broker@JumpList@Shell@WindowsInternal@2@@Collections@Foundation@95@@Z
    JumpListItem(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@6@AEBUTileImageResourceOptions@UnifiedTile@456@@Z
    WindissectOpaque LoadImageAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logo@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUTileImageResource@UnifiedTile@456@XZ
    WindissectOpaque Logo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFileLocationAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@6@XZ
    WindissectOpaque OpenFileLocationAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@H@Foundation@Windows@6@H@Z
    WindissectOpaque PinAsync(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@6@XZ
    WindissectOpaque RemoveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@6@XZ
    WindissectOpaque ResolveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@6@XZ
    WindissectOpaque UnpinAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrokerAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UJumpListItemBroker@Broker@JumpList@Shell@WindowsInternal@winrt@@@Foundation@Windows@6@XZ
    WindissectOpaque EnsureBrokerAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerbFastAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Foundation@Windows@6@UVerbEnumerationArgs@UnifiedTile@456@@Z
    WindissectOpaque FindVerbFastAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerbAllowed@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@AEBA_NAEBUTileVerb@UnifiedTile@456@W4VerbEnumerationOptions@8456@@Z
    bool IsVerbAllowed(WindissectOpaque const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageWithBrokerAsync@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@6@USize@896@IW4TileImageResourceContrast@UnifiedTile@456@W4TileImageResourceTheme@UnifiedTile@456@@Z
    WindissectOpaque LoadImageWithBrokerAsync(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUpdatesAvailable@JumpListItem@implementation@JumpList@Shell@WindowsInternal@winrt@@AEBAXXZ
    void RaiseUpdatesAvailable() const;
};
} // namespace winrt::WindowsInternal::Shell::JumpList::implementation
