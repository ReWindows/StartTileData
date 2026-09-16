#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation {
class JumpListTileData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA_NAEBUJumpListItemActivationContext@4567@@Z
    bool Activate(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AU?$IVectorView@UTileVerb@UnifiedTile@Shell@WindowsInternal@winrt@@@Collections@Foundation@Windows@7@AEBUVerbEnumerationArgs@UnifiedTile@567@@Z
    WindissectOpaque GetVerbs(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Json@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEBA?AUJsonObject@0Data@Windows@7@XZ
    WindissectOpaque Json() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@AEBUhstring@6@0W4JumpListEnumerationOptions@3456@@Z
    JumpListTileData(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@7@USize@Foundation@Windows@7@IW4TileImageResourceContrast@UnifiedTile@567@W4TileImageResourceTheme@UnifiedTile@567@@Z
    WindissectOpaque LoadImageW(WindissectOpaque, unsigned int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@QEAA@XZ
    ~JumpListTileData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositeAppIdIfApplicable@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@CA?AUhstring@7@AEBUIUnifiedTileIdentifier@UnifiedTile@567@@Z
    static WindissectOpaque CreateCompositeAppIdIfApplicable(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIdIfApplicable@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@CA?AUhstring@7@AEBUIUnifiedTileIdentifier@UnifiedTile@567@@Z
    static WindissectOpaque GetAppIdIfApplicable(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntitializeWithAppsFolder@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAAXXZ
    void IntitializeWithAppsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntitializeWithStateRepository@JumpListTileData@implementation@Broker@JumpList@Shell@WindowsInternal@winrt@@AEAAXXZ
    void IntitializeWithStateRepository();
};
} // namespace winrt::WindowsInternal::Shell::JumpList::Broker::implementation
