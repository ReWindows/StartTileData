#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListItemData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@Windows@7@UJumpListItemActivationContext@4567@@Z
    virtual WindissectOpaque ActivateAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageItemAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@UIStorageItem@Storage@Windows@winrt@@@Foundation@Windows@7@XZ
    virtual WindissectOpaque GetStorageItemAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@U?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@7@UVerbEnumerationArgs@UnifiedTile@567@@Z
    virtual WindissectOpaque GetVerbsAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnable@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsPinnable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsPinned() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemovable@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA_NXZ
    virtual bool IsRemovable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUJsonObject@0Data@Windows@7@XZ
    virtual WindissectOpaque Json();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@7@USize@9Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    virtual WindissectOpaque LoadImageAsync(WindissectOpaque, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@H@Foundation@Windows@7@H@Z
    virtual WindissectOpaque PinAsync(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUIAsyncAction@Foundation@Windows@7@XZ
    virtual WindissectOpaque RemoveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@Windows@7@XZ
    virtual WindissectOpaque ResolveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinAsync@JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAA?AUIAsyncAction@Foundation@Windows@7@XZ
    virtual WindissectOpaque UnpinAsync();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListItemData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@IEAA@W4JumpListCategoryKind@3456@W4JumpListPolicy@3456@H@Z
    JumpListItemData(int, int, int);
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
