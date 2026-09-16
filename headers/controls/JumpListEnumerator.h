#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListEnumerator {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@XZ
    ~JumpListEnumerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMaxNumItems@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@CAII@Z
    static unsigned int ComputeMaxNumItems(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLauncherPolicy@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAA?AULauncherPolicy@8567@XZ
    WindissectOpaque EnsureLauncherPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedPropertiesFromAutomaticDestinationList@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAA?AUJsonObject@Json@Data@Windows@7@PEAUIAutomaticDestinationList2@@@Z
    WindissectOpaque GetExtendedPropertiesFromAutomaticDestinationList(IAutomaticDestinationList2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedPropertiesFromAutomaticDestinationListForShellObject@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAA?AUJsonObject@Json@Data@Windows@7@PEAUIAutomaticDestinationList2@@PEAUIUnknown@@@Z
    WindissectOpaque GetExtendedPropertiesFromAutomaticDestinationListForShellObject(IAutomaticDestinationList2*, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEffectivelyUniqueFromItemsInCategory@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@CA_NAEAUJumpListItemData@234567@AEBUJumpListCategoryData@234567@@Z
    static bool IsEffectivelyUniqueFromItemsInCategory(WindissectOpaque &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryJumpListPolicy@JumpListEnumerator@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAA?AW4JumpListPolicy@4567@XZ
    int QueryJumpListPolicy();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
