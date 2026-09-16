#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 33 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TargetedContentUnifiedTileIdentifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileIdentifier@234@PEAE@Z
    virtual long IsEqual(WindissectOpaque *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAAJQEAUHSTRING__@@0@Z
    long RuntimeClassInitialize(HSTRING__* const, HSTRING__* const);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TargetedContentUnifiedTileIdentifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentAlias@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentAlias(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4UnifiedTileIdentifierKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationId@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NotificationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SerializedIdentifier@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SerializedIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SubscriptionId@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SubscriptionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TelemetryId@TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TelemetryId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TargetedContentUnifiedTileIdentifier();
};
} // namespace WindowsInternal::Shell::UnifiedTile
