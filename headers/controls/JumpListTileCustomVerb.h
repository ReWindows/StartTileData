#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::implementation {
class JumpListTileCustomVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@JumpListTileCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@45@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAsync@JumpListTileCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@45@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long ExecuteAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListTileCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA@W4JumpListTileCustomVerbKind@12345@AEBUJumpListTile@2345@AEBUhstring@5@2W4VerbEnumerationOptions@UnifiedTile@345@@Z
    JumpListTileCustomVerb(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListTileCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListTileCustomVerb();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAsyncInternal@JumpListTileCustomVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@6@UVerbExecutionArgs@UnifiedTile@456@@Z
    WindissectOpaque ExecuteAsyncInternal(WindissectOpaque);
};
} // namespace winrt::WindowsInternal::Shell::JumpList::implementation
