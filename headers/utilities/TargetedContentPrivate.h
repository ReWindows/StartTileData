#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
class TargetedContentPrivate {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInstallApp@TargetedContentPrivate@@YA_NNAEAUTargetedContentInstallInfo@1@@Z
    bool CanInstallApp(double, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOEMSlot@TargetedContentPrivate@@YA_NAEBUhstring@winrt@@@Z
    bool IsOEMSlot(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateDiskSpace@TargetedContentPrivate@@YAXAEAUTargetedContentInstallInfo@1@@Z
    void PopulateDiskSpace(WindissectOpaque &);
};
