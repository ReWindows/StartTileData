#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace DataStoreCache {
class PropertyBagLookaside {
public:
    class LookasidePropertyHSTRING;
    class LookasidePropertyPCWSTR;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PropertyBagLookaside@DataStoreCache@@UEAA?AV?$ComPtr@VPropertyBagLookaside@DataStoreCache@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque Copy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedPropertyBag@PropertyBagLookaside@DataStoreCache@@QEAAXPEAUIDataStorePropertyBag@2@@Z
    void SetCachedPropertyBag(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLookasideHSTRING@PropertyBagLookaside@DataStoreCache@@QEAAXAEBUDataStorePropertyIdentifier@2@PEBG@Z
    void SetLookasideHSTRING(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLookasideHSTRING@PropertyBagLookaside@DataStoreCache@@QEAAXAEBUDataStorePropertyIdentifier@2@PEAUHSTRING__@@@Z
    void SetLookasideHSTRING(WindissectOpaque const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLookasideHSTRING@PropertyBagLookaside@DataStoreCache@@QEAAXAEBUDataStorePropertyIdentifier@2@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z
    void SetLookasideHSTRING(WindissectOpaque const &, ::Microsoft::WRL::Wrappers::HString &&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLookasidePCWSTR@PropertyBagLookaside@DataStoreCache@@QEAAXAEBUDataStorePropertyIdentifier@2@PEBG@Z
    void SetLookasidePCWSTR(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByReference@PropertyBagLookaside@DataStoreCache@@UEAA_NAEBUDataStorePropertyIdentifier@2@PEAPEAX@Z
    virtual bool TryGetPropertyByReference(WindissectOpaque const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByValue@PropertyBagLookaside@DataStoreCache@@UEAA_NAEBUDataStorePropertyIdentifier@2@IPEAX@Z
    virtual bool TryGetPropertyByValue(WindissectOpaque const &, unsigned int, void *);
};
} // namespace DataStoreCache
