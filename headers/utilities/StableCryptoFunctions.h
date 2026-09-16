#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace SlimObfuscationManager {
class StableCryptoFunctions {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSymmetricKeys@StableCryptoFunctions@SlimObfuscationManager@@YA?AUSymmetricKeys@2@IIII@Z
    WindissectOpaque GetSymmetricKeys(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSymmetricSeeds@StableCryptoFunctions@SlimObfuscationManager@@YA?AUSymmmetricSeeds@12@III@Z
    WindissectOpaque GetSymmetricSeeds(unsigned int, unsigned int, unsigned int);
};
} // namespace SlimObfuscationManager
