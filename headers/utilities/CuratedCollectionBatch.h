#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 23 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CuratedCollectionBatch {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedCollectionBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollectionBatch@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedCollectionBatch();
};
} // namespace WindowsInternal::Shell::UnifiedTile
