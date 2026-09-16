#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSTilePropertiesBatchedChangedArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    CDSTilePropertiesBatchedChangedArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@QEAAJPEAU?$IVector@PEAUICDSTilePropertiesItem@CDSProperties@Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAU?$IVector@PEAUHSTRING__@@@678@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangedTiles@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAUICDSTilePropertiesItem@CDSProperties@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_ChangedTiles(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedTiles@CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedTiles(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CDSTilePropertiesBatchedChangedArgs();
};
} // namespace WindowsInternal::Shell::CDSProperties
