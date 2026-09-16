#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 17 member(s).
class TileNotificationTextPayload {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileNotificationTextPayload@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@TileNotificationTextPayload@@UEAAJPEAK@Z
    virtual long GetID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileNotificationTextPayload@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileNotificationTextPayload@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@TileNotificationTextPayload@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileNotificationTextPayload@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileNotificationTextPayload@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileNotificationTextPayload@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileNotificationTextPayload@@UEAA@XZ
    virtual ~TileNotificationTextPayload();
};
