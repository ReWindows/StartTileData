#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache {
class PhoneticNameGenerator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhoneticNameAsync@PhoneticNameGenerator@DataStoreCache@@QEAAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@PEAUHSTRING__@@K00@Z
    WindissectOpaque * GetPhoneticNameAsync(HSTRING__*, unsigned long, HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhoneticNameAsync@PhoneticNameGenerator@DataStoreCache@@QEAAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@PEAUHSTRING__@@@Z
    WindissectOpaque * GetPhoneticNameAsync(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKanjiCharacters@PhoneticNameGenerator@DataStoreCache@@SA_NPEAUHSTRING__@@@Z
    static bool HasKanjiCharacters(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPhoneticNameApplicable@PhoneticNameGenerator@DataStoreCache@@SA_NPEAUHSTRING__@@K@Z
    static bool IsPhoneticNameApplicable(HSTRING__*, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGenerator@PhoneticNameGenerator@DataStoreCache@@AEAAXXZ
    void EnsureGenerator();
};
} // namespace DataStoreCache
