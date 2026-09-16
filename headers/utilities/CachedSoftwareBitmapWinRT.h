#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 29 member(s).
class CachedSoftwareBitmapWinRT {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CachedSoftwareBitmapWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@CachedSoftwareBitmapWinRT@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CachedSoftwareBitmapWinRT@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CachedSoftwareBitmapWinRT@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CachedSoftwareBitmapWinRT@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@CachedSoftwareBitmapWinRT@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CachedSoftwareBitmapWinRT@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CachedSoftwareBitmapWinRT@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CachedSoftwareBitmapWinRT@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CachedSoftwareBitmapWinRT@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z
    virtual long Lock(WICRect const *, unsigned long, IWICBitmapLock * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CachedSoftwareBitmapWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CachedSoftwareBitmapWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPalette@CachedSoftwareBitmapWinRT@@UEAAJPEAUIWICPalette@@@Z
    virtual long SetPalette(IWICPalette *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolution@CachedSoftwareBitmapWinRT@@UEAAJNN@Z
    virtual long SetResolution(double, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CachedSoftwareBitmapWinRT@@UEAA@XZ
    virtual ~CachedSoftwareBitmapWinRT();
};
