#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
class NotificationTelemetry {
public:
    class ClearNotifications;
    class GetPayload;
    class NotificationReady;
    class NotificationsArrived;
    class ParsePayload;
    class SendSingleBadgeNotification;
    class SendSingleReadyNotification;
    class TileRequestNotificationCompleted_Final;
    class TileRequestNotificationCompleted_Initial;
    class TileRequestNotificationCompleted_TaskPool;
    class TileSessionNotificationCleared_Final;
    class TileSessionNotificationCleared_Initial;
    class TileSessionUpdated_Final;
    class TileSessionUpdated_Initial;
    class WPNInitialization;
    class WPNReInitialization;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTimerComplete@NotificationTelemetry@@SAXXZ
    static void ScrollTimerComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserScrolled@NotificationTelemetry@@SAXXZ
    static void UserScrolled();
};
