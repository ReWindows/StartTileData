#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnknownUnifiedTileIdentifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAE@Z
    virtual long IsEqual(WindissectOpaque *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAAJQEAUHSTRING__@@_N@Z
    long RuntimeClassInitialize(HSTRING__* const, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnknownUnifiedTileIdentifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileIdentifierKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationId@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NotificationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SerializedIdentifier@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SerializedIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TelemetryId@UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TelemetryId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnknownUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnknownUnifiedTileIdentifier();
};
} // namespace WindowsInternal::Shell::UnifiedTile
