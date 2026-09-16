#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace SlimObfuscationManager {
class SymmetricKeyObfuscationProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSaltSize@SymmetricKeyObfuscationProvider@SlimObfuscationManager@@QEAAIKI@Z
    unsigned int GetSaltSize(unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrambleData@SymmetricKeyObfuscationProvider@SlimObfuscationManager@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@AEBUhstring@7@AEBU_FILETIME@@@Z
    WindissectOpaque ScrambleData(WindissectOpaque const &, _FILETIME const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnscrambleData@SymmetricKeyObfuscationProvider@SlimObfuscationManager@@QEAA?AUhstring@winrt@@UIBuffer@Streams@Storage@Windows@4@AEBU_FILETIME@@@Z
    WindissectOpaque UnscrambleData(WindissectOpaque, _FILETIME const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SymmetricKeyObfuscationProvider@SlimObfuscationManager@@QEAA@XZ
    ~SymmetricKeyObfuscationProvider();
};
} // namespace SlimObfuscationManager
