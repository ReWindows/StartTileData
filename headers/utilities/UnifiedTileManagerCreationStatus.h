#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 17 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileManagerCreationStatus {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTileManagerCreationStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreationThreadId@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_CreationThreadId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CreationThreadId@UnifiedTileManagerCreationStatus@UnifiedTile@Shell@WindowsInternal@@QEAAXI@Z
    void put_CreationThreadId(unsigned int);
};
} // namespace WindowsInternal::Shell::UnifiedTile
