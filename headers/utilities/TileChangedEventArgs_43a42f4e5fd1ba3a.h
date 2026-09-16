#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 17 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileChangedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Features@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileFeatures@234@@Z
    virtual long get_Features(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceTransformerId@TileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_SourceTransformerId(_GUID *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
