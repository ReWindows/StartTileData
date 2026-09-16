#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::implementation {
class JumpListTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerbAsync@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Foundation@Windows@6@UVerbEnumerationArgs@UnifiedTile@456@@Z
    WindissectOpaque FindVerbAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@6@UVerbEnumerationArgs@UnifiedTile@456@@Z
    WindissectOpaque GetVerbsAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageAsync@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@6@AEBUTileImageResourceOptions@UnifiedTile@456@@Z
    WindissectOpaque LoadImageAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logo@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUTileImageResource@UnifiedTile@456@XZ
    WindissectOpaque Logo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MRTHelper@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU0UnifiedTile@456@XZ
    WindissectOpaque MRTHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpListTile();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerbAllowed@JumpListTile@implementation@JumpList@Shell@WindowsInternal@winrt@@AEBA_NAEBUTileVerb@UnifiedTile@456@W4VerbEnumerationOptions@8456@@Z
    bool IsVerbAllowed(WindissectOpaque const &, int) const;
};
} // namespace winrt::WindowsInternal::Shell::JumpList::implementation
