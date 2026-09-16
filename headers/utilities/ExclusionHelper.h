#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace WindowsInternal::Shell::UnifiedTile::BlockListHelpers {
class ExclusionHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ExclusionHelper@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@QEAA_NXZ
    bool Get();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@ExclusionHelper@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@SAAEAU12345@W4ExclusionKind@2345@@Z
    static WindissectOpaque & Instance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@ExclusionHelper@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@QEAAX_N@Z
    void Set(bool);
};
} // namespace WindowsInternal::Shell::UnifiedTile::BlockListHelpers
