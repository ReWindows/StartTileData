#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListShellObjectData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pin@JumpListShellObjectData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAHH@Z
    virtual int Pin(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@JumpListShellObjectData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAXXZ
    virtual void Remove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unpin@JumpListShellObjectData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@UEAAXXZ
    virtual void Unpin();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListShellObjectData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@MEAA@XZ
    virtual ~JumpListShellObjectData();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
