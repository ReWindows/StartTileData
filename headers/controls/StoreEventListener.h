#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 25 member(s).
class StoreEventListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StoreEventListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StoreEventListener@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StoreEventListener@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StoreEventListener@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StoreEventListener@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StoreEventListener@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleted@StoreEventListener@@UEAAJPEAUIInstallControl@Internal@WindowsUpdate@@PEAUIInstallItem@34@@Z
    virtual long OnCompleted(::WindowsUpdate::Internal::IInstallControl *, ::WindowsUpdate::Internal::IInstallItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@StoreEventListener@@UEAAJPEAUIInstallControl@Internal@WindowsUpdate@@PEAUIInstallItem@34@@Z
    virtual long OnProgress(::WindowsUpdate::Internal::IInstallControl *, ::WindowsUpdate::Internal::IInstallItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StoreEventListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StoreEventListener@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StoreEventListener@@QEAA@XZ
    StoreEventListener();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreEventListener@@UEAA@XZ
    virtual ~StoreEventListener();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureListener@StoreEventListener@@AEAAJXZ
    long EnsureListener();
};
