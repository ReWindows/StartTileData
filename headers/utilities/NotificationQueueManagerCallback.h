#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
class NotificationQueueManagerCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppSettingChanged@NotificationQueueManagerCallback@@UEAAJPEBG@Z
    virtual long AppSettingChanged(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NotificationQueueManagerCallback@@QEAAJPEAVNotificationQueueManager@@@Z
    long RuntimeClassInitialize(NotificationQueueManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestNotificationCompleted@NotificationQueueManagerCallback@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileRequestNotificationCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestResourceCompleted@NotificationQueueManagerCallback@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0004@@K@Z
    virtual long TileRequestResourceCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0004const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionImageDownloadUpdated@NotificationQueueManagerCallback@@UEAAJKH@Z
    virtual long TileSessionImageDownloadUpdated(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionNotificationCleared@NotificationQueueManagerCallback@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0005@@K@Z
    virtual long TileSessionNotificationCleared(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0005const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionUpdated@NotificationQueueManagerCallback@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileSessionUpdated(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationQueueManagerCallback@@UEAA@XZ
    virtual ~NotificationQueueManagerCallback();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedAsyncInterface@NotificationQueueManagerCallback@@AEAAJPEAPEAUAsyncIWpnPresentationTileSink@@@Z
    long GetResolvedAsyncInterface(AsyncIWpnPresentationTileSink * *);
};
