#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace winrt::WindowsInternal::Shell::JumpList {
class implementation {
public:
    class BrokerHelpers;
    class JumpList;
    class JumpListCategory;
    class JumpListEnumerationContext;
    class JumpListItem;
    class JumpListItemActivationContext;
    class JumpListItemCustomVerb;
    class JumpListTile;
    class JumpListTileCustomVerb;
    class JumpListTileImageResource;
    class JumpListTileImageResourceCandidate;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomItemVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@YA?AUTileVerb@UnifiedTile@345@W4JumpListItemCustomVerbKind@12345@AEBUJumpListItem@2345@AEBUhstring@5@2W4VerbEnumerationOptions@7345@@Z
    WindissectOpaque CreateCustomItemVerb(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomTileVerb@implementation@JumpList@Shell@WindowsInternal@winrt@@YA?AUTileVerb@UnifiedTile@345@W4JumpListTileCustomVerbKind@12345@AEBUJumpListTile@2345@AEBUhstring@5@2W4VerbEnumerationOptions@7345@@Z
    WindissectOpaque CreateCustomTileVerb(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVerbWrapper@implementation@JumpList@Shell@WindowsInternal@winrt@@YA?AUTileVerb@UnifiedTile@345@AEBU67345@AEBUhstring@5@W4VerbEnumerationOptions@7345@@Z
    WindissectOpaque CreateVerbWrapper(WindissectOpaque const &, WindissectOpaque const &, int);
};
} // namespace winrt::WindowsInternal::Shell::JumpList
