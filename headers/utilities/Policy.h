#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace CreativeFramework {
class Policy {
public:
    class Details;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyDWORD@Policy@CreativeFramework@@YAKPEBG0_N@Z
    unsigned long GetGroupPolicyDWORD(unsigned short const *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMDMPolicyInt@Policy@CreativeFramework@@YAHPEBG0@Z
    int GetMDMPolicyInt(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorePolicy@Policy@CreativeFramework@@YA?AW4StorePolicy@12@XZ
    int GetStorePolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAllowedByCloudContentPolicy@Policy@CreativeFramework@@YA_NPEBG0_N@Z
    bool IsAllowedByCloudContentPolicy(unsigned short const *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentDeliveryPolicyEnforced@Policy@CreativeFramework@@YA_NXZ
    bool IsContentDeliveryPolicyEnforced();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnterpriseRemoteSession@Policy@CreativeFramework@@YA_NXZ
    bool IsEnterpriseRemoteSession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMDMPolicyConfigured@Policy@CreativeFramework@@YA_NPEBG0@Z
    bool IsMDMPolicyConfigured(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlacementPolicyAllowed@Policy@CreativeFramework@@YA_NW4ContentDeliveryPolicy@12@W4StorePolicy@12@PEAW4412@@Z
    bool IsPlacementPolicyAllowed(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldConfigurePlacement@Policy@CreativeFramework@@YA_NW4ContentDeliveryPolicy@12@PEA_N@Z
    bool ShouldConfigurePlacement(int, bool *);
};
} // namespace CreativeFramework
