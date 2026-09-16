#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::implementation {
class JumpListItemCustomVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@JumpListItemCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@45@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAsync@JumpListItemCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@45@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long ExecuteAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListItemCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA@W4JumpListItemCustomVerbKind@12345@AEBUJumpListItem@2345@AEBUhstring@5@2W4VerbEnumerationOptions@UnifiedTile@345@@Z
    JumpListItemCustomVerb(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListItemCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListItemCustomVerb();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAsyncInternal@JumpListItemCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@6@UVerbExecutionArgs@UnifiedTile@456@@Z
    WindissectOpaque ExecuteAsyncInternal(WindissectOpaque);
};
} // namespace winrt::WindowsInternal::Shell::JumpList::implementation
