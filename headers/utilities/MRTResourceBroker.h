#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 24 member(s).
class MRTResourceBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MRTResourceBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MRTResourceBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceManagerForFile@MRTResourceBroker@@UEAAJPEBGPEAPEAUIMrtResourceManager@@@Z
    virtual long GetResourceManagerForFile(unsigned short const *, IMrtResourceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceManagerForPackage@MRTResourceBroker@@UEAAJPEBGPEAPEAUIMrtResourceManager@@@Z
    virtual long GetResourceManagerForPackage(unsigned short const *, IMrtResourceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MRTResourceBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MRTResourceBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MRTResourceBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@MRTResourceBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MRTResourceBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MRTResourceBroker@@UEAAKXZ
    virtual unsigned long Release();
};
