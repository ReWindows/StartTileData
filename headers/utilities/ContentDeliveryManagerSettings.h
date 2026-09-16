#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace CreativeFramework {
class ContentDeliveryManagerSettings {
public:
    class Details;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z
    long DoesKeyExist(unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z
    long GetBoolSetting(unsigned short const *, unsigned short const *, bool, bool *);
};
} // namespace CreativeFramework
