#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
class SlimObfuscationManager {
public:
    class StableCryptoFunctions;
    class SymmetricKeyObfuscationProvider;
    class SymmetricKeys;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSalt@SlimObfuscationManager@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@IAEBUDataReader@3456@@Z
    WindissectOpaque ReadSalt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scramble@SlimObfuscationManager@@YAXAEBUDataWriter@Streams@Storage@Windows@winrt@@AEBUhstring@6@@Z
    void Scramble(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unscramble@SlimObfuscationManager@@YA?AUhstring@winrt@@AEBUDataReader@Streams@Storage@Windows@3@@Z
    WindissectOpaque Unscramble(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnscrambleImpl@SlimObfuscationManager@@YA?AUhstring@winrt@@AEBUDataReader@Streams@Storage@Windows@3@@Z
    WindissectOpaque UnscrambleImpl(WindissectOpaque const &);
};
