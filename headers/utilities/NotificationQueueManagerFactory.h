#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 21 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Notifications {
class NotificationQueueManagerFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUser@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@PEAPEAUINotificationQueueManager@2345@@Z
    virtual long CreateForUser(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithUnifiedTileManager@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTileManager@345@PEAPEAUINotificationQueueManager@2345@@Z
    virtual long CreateWithUnifiedTileManager(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NotificationQueueManagerFactory@Notifications@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Notifications
