#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class StartGlobalPropertiesChangedArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartGlobalPropertiesChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell::CDSProperties
