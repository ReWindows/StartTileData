#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel {
class StartPinnableSurfaceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPinnableSurface@234@@Z
    virtual long GetCurrent(::Windows::Internal::ApplicationModel::IPinnableSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@QEAA@XZ
    StartPinnableSurfaceFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~StartPinnableSurfaceFactory();
};
} // namespace Windows::Internal::ApplicationModel
