#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
class UserHelpers {
public:
    class Impersonator;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUser@UserHelpers@@YAJPEAPEAUIUser@System@Windows@@@Z
    long GetCurrentUser(::Windows::System::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRepositoryUser@UserHelpers@@YA?AV?$ComPtr@UIUser@StateRepository@Internal@Windows@@@WRL@Microsoft@@PEAUIUser@System@Windows@@@Z
    WindissectOpaque GetStateRepositoryUser(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContextToken@UserHelpers@@YA_KPEAUIUser@System@Windows@@@Z
    uint64_t GetUserContextToken(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemAccount@UserHelpers@@YA_NPEAX@Z
    bool IsSystemAccount(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadEffectiveToken@UserHelpers@@YA_NPEAX@Z
    bool IsThreadEffectiveToken(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadEffectiveUser@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z
    bool IsThreadEffectiveUser(::Windows::System::IUser *);
};
