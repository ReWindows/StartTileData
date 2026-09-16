#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheReaderLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartVisualCacheReaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reader@StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCache@2345@@Z
    virtual long get_Reader(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartVisualCacheReaderLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartVisualCacheReaderLock();
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
