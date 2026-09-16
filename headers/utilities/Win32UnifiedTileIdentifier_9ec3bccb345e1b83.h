#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 30 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class Win32UnifiedTileIdentifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAE@Z
    virtual long IsEqual(WindissectOpaque *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAAJQEAUHSTRING__@@_N@Z
    long RuntimeClassInitialize(HSTRING__* const, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    Win32UnifiedTileIdentifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppResolverAppId@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppResolverAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileIdentifierKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationId@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NotificationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SerializedIdentifier@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SerializedIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TelemetryId@Win32UnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TelemetryId(HSTRING__* *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
