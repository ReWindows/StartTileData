#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
class TileNotificationImagePayload {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileNotificationImagePayload@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAltText@TileNotificationImagePayload@@UEAAJPEAPEAG@Z
    virtual long GetAltText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@TileNotificationImagePayload@@UEAAJPEAK@Z
    virtual long GetID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileNotificationImagePayload@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImage@TileNotificationImagePayload@@UEAAJPEAPEAG@Z
    virtual long GetImage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileNotificationImagePayload@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileNotificationImagePayload@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileNotificationImagePayload@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileNotificationImagePayload@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileNotificationImagePayload@@QEAA@XZ
    TileNotificationImagePayload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileNotificationImagePayload@@UEAA@XZ
    virtual ~TileNotificationImagePayload();
};
