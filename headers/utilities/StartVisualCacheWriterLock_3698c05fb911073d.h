#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheWriterLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIStartVisualCache@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartVisualCacheWriterLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Writer@StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCache@2345@@Z
    virtual long get_Writer(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartVisualCacheWriterLock@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartVisualCacheWriterLock();
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
