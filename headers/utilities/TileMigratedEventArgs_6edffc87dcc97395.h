#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileMigratedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileMigratedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromTileId@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_FromTileId(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Revision@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToTileId@TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long get_ToTileId(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileMigratedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileMigratedEventArgs();
};
} // namespace WindowsInternal::Shell::UnifiedTile
