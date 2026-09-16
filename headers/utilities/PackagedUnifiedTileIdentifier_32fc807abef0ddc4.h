#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 31 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class PackagedUnifiedTileIdentifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAE@Z
    virtual long IsEqual(WindissectOpaque *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    PackagedUnifiedTileIdentifier();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSecondaryTileId@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsSecondaryTileId(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileIdentifierKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationId@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NotificationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SerializedIdentifier@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SerializedIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TelemetryId@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TelemetryId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@PackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
