#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class StartGlobalPropertiesFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIStartGlobalProperties@234@@Z
    virtual long Create(::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::IStartGlobalProperties * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartGlobalPropertiesFactory@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell::CDSProperties
