#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
class CachedSoftwareBitmapLockWinRT {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPointer@CachedSoftwareBitmapLockWinRT@@UEAAJPEAIPEAPEAE@Z
    virtual long GetDataPointer(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CachedSoftwareBitmapLockWinRT@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CachedSoftwareBitmapLockWinRT@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@CachedSoftwareBitmapLockWinRT@@UEAAJPEAI@Z
    virtual long GetStride(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CachedSoftwareBitmapLockWinRT@@UEAA@XZ
    virtual ~CachedSoftwareBitmapLockWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFallbackBuffer@CachedSoftwareBitmapLockWinRT@@AEAAJPEAIPEAPEAE@Z
    long EnsureFallbackBuffer(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCachedBitmap@CachedSoftwareBitmapLockWinRT@@AEAAJXZ
    long ValidateCachedBitmap();
};
