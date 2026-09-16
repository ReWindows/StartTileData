#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::factory_implementation {
class JumpListBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateAsync@JumpListBroker@factory_implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UJumpListBroker@Broker@JumpList@Shell@WindowsInternal@winrt@@@Foundation@Windows@7@Uhstring@7@0W4JumpListEnumerationOptions@4567@IW4JumpListCategoryKind@4567@@Z
    WindissectOpaque EnumerateAsync(WindissectOpaque, WindissectOpaque, int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListBroker@factory_implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEBA?AW4TrustLevel@Foundation@Windows@7@XZ
    virtual int GetTrustLevel() const;
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::factory_implementation
