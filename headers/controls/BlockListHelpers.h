#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class BlockListHelpers {
public:
    class EngagementStatusHelper;
    class ExclusionHelper;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedAppForIneligibleAccount@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedAppForIneligibleAccount(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedByAppPath@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedByAppPath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedForHardwareSupport@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedForHardwareSupport(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedPackageFamily@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedPackageFamily(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedWithA9Disabled@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedWithA9Disabled(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedWithC2DDisabled@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NPEBG@Z
    bool IsExcludedWithC2DDisabled(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZHPolicyEnabled@BlockListHelpers@UnifiedTile@Shell@WindowsInternal@@YA_NXZ
    bool IsZHPolicyEnabled();
};
} // namespace WindowsInternal::Shell::UnifiedTile
