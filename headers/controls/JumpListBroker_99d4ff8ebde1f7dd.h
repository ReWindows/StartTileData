#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker {
class JumpListBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateAsync@JumpListBroker@Broker@JumpList@Shell@WindowsInternal@winrt@@SA@AEBUhstring@param@6@0AEBW4JumpListEnumerationOptions@3456@IAEBW4JumpListCategoryKind@3456@@Z
    static EnumerateAsync(WindissectOpaque const &, WindissectOpaque const &, int const &, unsigned int, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListBroker@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@XZ
    ~JumpListBroker();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker
