#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace winrt::WindowsInternal::Shell {
class JumpList {
public:
    class IJumpList;
    class IJumpListCategory;
    class IJumpListEnumerationContext;
    class IJumpListItem;
    class IJumpListItemActivationContext;
    class IJumpListTile;
    class IJumpListUpdatesAvailableEventArgs;
    class JsonHelpers;
    class JumpList;
    class JumpListCategory;
    class JumpListEnumerationContext;
    class JumpListItem;
    class JumpListItemActivationContext;
    class JumpListTile;
    class JumpListUpdatesAvailableEventArgs;
    class PlatformCapabilityHelpers;
    class StringHelpers;
    class implementation;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?from_string_abi@JumpList@Shell@WindowsInternal@winrt@@YA?AUhstring@4@AEBVHString@Wrappers@WRL@Microsoft@@@Z
    WindissectOpaque from_string_abi(::Microsoft::WRL::Wrappers::HString const &);
};
} // namespace winrt::WindowsInternal::Shell
