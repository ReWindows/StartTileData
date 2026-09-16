#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSTilePropertiesBatchedFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@W4CDSTilePropertiesKinds@234@PEAPEAUICDSTilePropertiesBatched@234@@Z
    virtual long Create(::Windows::System::IUser *, int, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSTilePropertiesBatchedFactory@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell::CDSProperties
