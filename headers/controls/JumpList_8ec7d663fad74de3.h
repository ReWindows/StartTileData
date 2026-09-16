#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::implementation {
class JumpList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUpdatesAvailable@JumpList@implementation@1Shell@WindowsInternal@winrt@@QEAAHXZ
    int RaiseUpdatesAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tile@JumpList@implementation@1Shell@WindowsInternal@winrt@@QEBA?AUJumpListTile@1345@XZ
    WindissectOpaque Tile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAsync@JumpList@implementation@1Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@H@Foundation@Windows@5@XZ
    WindissectOpaque UpdateAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpList@implementation@0Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~JumpList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternal@JumpList@implementation@1Shell@WindowsInternal@winrt@@AEAAXAEBUhstring@5@AEBU?$IMapView@Uguid@winrt@@UJumpListItemBroker@Broker@JumpList@Shell@WindowsInternal@2@@Collections@Foundation@Windows@5@H@Z
    void UpdateInternal(WindissectOpaque const &, WindissectOpaque const &, int);
};
} // namespace winrt::WindowsInternal::Shell::JumpList::implementation
