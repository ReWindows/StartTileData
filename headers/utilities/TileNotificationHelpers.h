#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
class TileNotificationHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreNotificationsEnabled@TileNotificationHelpers@@YAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_KW4NotificationType@1@PEA_N@Z
    long AreNotificationsEnabled(WindissectOpaque *, uint64_t, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableNotifications@TileNotificationHelpers@@YAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_K_NW4NotificationType@1@@Z
    long EnableNotifications(WindissectOpaque *, uint64_t, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWpnSettingsEndpoint@TileNotificationHelpers@@YAJ_KPEAPEAUIWpnSettingsEndpoint@@@Z
    long GetWpnSettingsEndpoint(uint64_t, IWpnSettingsEndpoint * *);
};
