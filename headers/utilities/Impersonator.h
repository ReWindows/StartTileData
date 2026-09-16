#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UserHelpers {
class Impersonator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Impersonator@UserHelpers@@QEAA@PEAUIUser@System@Windows@@@Z
    Impersonator(::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Impersonator@UserHelpers@@QEAA@XZ
    ~Impersonator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Impersonator@UserHelpers@@AEAAXPEAUIUser@System@Windows@@@Z
    void Initialize(::Windows::System::IUser *);
};
} // namespace UserHelpers
