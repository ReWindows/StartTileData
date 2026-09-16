#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListCategoryData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListCategoryData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEBA?AUJsonObject@0Data@Windows@7@XZ
    WindissectOpaque Json() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListCategoryData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@AEBU0123456@@Z
    JumpListCategoryData(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListCategoryData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@XZ
    ~JumpListCategoryData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadOrResolveDisplayName@JumpListCategoryData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEBA?AUhstring@7@XZ
    WindissectOpaque LoadOrResolveDisplayName() const;
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
