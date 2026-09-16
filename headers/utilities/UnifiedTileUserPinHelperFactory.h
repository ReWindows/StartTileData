#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class UnifiedTileUserPinHelperFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUserPinnedShortcutTile@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long CreateUserPinnedShortcutTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteUserPinnedShortcutTile@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@345@@Z
    virtual long DeleteUserPinnedShortcutTile(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUserPinned@UnifiedTileUserPinHelperFactory@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTileIdentifier@345@_N@Z
    long SetIsUserPinned(WindissectOpaque *, bool);
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
