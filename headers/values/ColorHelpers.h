#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
class ColorHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorValueFromString@ColorHelpers@@YAKPEBG@Z
    unsigned long ColorValueFromString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowsUIColorFromString@ColorHelpers@@YA?AUColor@UI@Windows@@PEBG@Z
    ::Windows::UI::Color WindowsUIColorFromString(unsigned short const *);
};
