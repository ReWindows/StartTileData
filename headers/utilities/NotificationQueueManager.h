#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 93 member(s).
class NotificationQueueManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NotificationQueueManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppSettingChanged@NotificationQueueManager@@QEAAJPEBG@Z
    long AppSettingChanged(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@NotificationQueueManager@@QEAAJXZ
    long Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllTileNotifications@NotificationQueueManager@@UEAAJXZ
    virtual long ClearAllTileNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleTimerFired@NotificationQueueManager@@QEAAJXZ
    long CycleTimerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableNotificationThrottlingForTile@NotificationQueueManager@@UEAAJU_GUID@@H@Z
    virtual long DisableNotificationThrottlingForTile(_GUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableNotificationThrottlingForUnifiedTile@NotificationQueueManager@@UEAAJPEAUHSTRING__@@H@Z
    virtual long DisableNotificationThrottlingForUnifiedTile(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpiryTimerFired@NotificationQueueManager@@QEAAJXZ
    long ExpiryTimerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRefreshAllTiles@NotificationQueueManager@@UEAAJXZ
    virtual long ForceRefreshAllTiles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NotificationQueueManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NotificationQueueManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileCycleEnabled@NotificationQueueManager@@UEAAJPEBGUtagSIZE@@PEAH@Z
    virtual long GetTileCycleEnabled(unsigned short const *, tagSIZE, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileNotificationEnabled@NotificationQueueManager@@UEAAJPEAUIUnknown@@PEAH@Z
    virtual long GetTileNotificationEnabled(IUnknown *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NotificationQueueManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewNotificationsAvailable@NotificationQueueManager@@UEAAJPEAUIUnknown@@@Z
    virtual long NewNotificationsAvailable(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationQueueManager@@QEAA@XZ
    NotificationQueueManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreUIVisible@NotificationQueueManager@@UEAAJXZ
    virtual long PreUIVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNotificationsForTile@NotificationQueueManager@@QEAAJPEAVTileNotificationManager@@_N@Z
    long ProcessNotificationsForTile(TileNotificationManager *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NotificationQueueManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTileNotifications@NotificationQueueManager@@UEAAJPEAUIUnknown@@@Z
    virtual long RefreshTileNotifications(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NotificationQueueManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNotifications@NotificationQueueManager@@QEAAJPEAVTileNotificationManager@@@Z
    long RequestNotifications(TileNotificationManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NotificationQueueManager@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTimerFired@NotificationQueueManager@@QEAAJXZ
    long ScrollTimerFired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastVisibleNotification@NotificationQueueManager@@UEAAJPEAUIUnknown@@IPEBGW4TilePresentedFlags@@@Z
    virtual long SetLastVisibleNotification(IUnknown *, unsigned int, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@NotificationQueueManager@@UEAAJW4_NQMOPTIONS@@@Z
    virtual long SetOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileNotificationEnabled@NotificationQueueManager@@UEAAJPEAUIUnknown@@H@Z
    virtual long SetTileNotificationEnabled(IUnknown *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIVisible@NotificationQueueManager@@UEAAJH@Z
    virtual long SetUIVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnifiedTileManager@NotificationQueueManager@@UEAAJPEAUIUnknown@@@Z
    virtual long SetUnifiedTileManager(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualStates@NotificationQueueManager@@UEAAJW4DEVICE_SCALE_FACTOR@@W4_VisualTheme@@@Z
    virtual long SetVisualStates(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileIsRealized@NotificationQueueManager@@UEAAJPEAUIUnknown@@PEAUINotificationPresenter@@@Z
    virtual long TileIsRealized(IUnknown *, INotificationPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileIsUnrealized@NotificationQueueManager@@UEAAJPEAUIUnknown@@@Z
    virtual long TileIsUnrealized(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestNotificationCompleted@NotificationQueueManager@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileRequestNotificationCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestResourceCompleted@NotificationQueueManager@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0004@@K@Z
    virtual long TileRequestResourceCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0004const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionImageDownloadUpdated@NotificationQueueManager@@UEAAJKH@Z
    virtual long TileSessionImageDownloadUpdated(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionNotificationCleared@NotificationQueueManager@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0005@@K@Z
    virtual long TileSessionNotificationCleared(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0005const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionUpdated@NotificationQueueManager@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileSessionUpdated(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserInteraction@NotificationQueueManager@@UEAAJXZ
    virtual long UserInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserScrolled@NotificationQueueManager@@UEAAJXZ
    virtual long UserScrolled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WPNInitialized@NotificationQueueManager@@UEAAJPEAUIWpnPresentationEndpoint@@PEAUIWpnSettingsEndpoint@@@Z
    virtual long WPNInitialized(IWpnPresentationEndpoint *, IWpnSettingsEndpoint *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyImmediateStateTransitions@NotificationQueueManager@@AEAAXXZ
    void ApplyImmediateStateTransitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreBadgeNotificationsEqual@NotificationQueueManager@@CA_NPEAUIStartTileNotification@@0@Z
    static bool AreBadgeNotificationsEqual(IStartTileNotification *, IStartTileNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackgroundThread_RequestNotifications@NotificationQueueManager@@AEAAJPEAVTileNotificationManager@@@Z
    long BackgroundThread_RequestNotifications(TileNotificationManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupWpnConnection@NotificationQueueManager@@AEAAJXZ
    long CleanupWpnConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllDeferredClearedTiles@NotificationQueueManager@@AEAAJXZ
    long ClearAllDeferredClearedTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleTimerCallback@NotificationQueueManager@@CAJPEAX@Z
    static long CycleTimerCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpiryTimerCallBack@NotificationQueueManager@@CAJPEAX@Z
    static long ExpiryTimerCallBack(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPastExpiries@NotificationQueueManager@@AEAAJXZ
    long FlushPastExpiries();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoamedTileProperties@NotificationQueueManager@@AEAAJPEAUHSTRING__@@PEAPEAUICDSRoamedTileProperties@CDSProperties@Shell@WindowsInternal@@@Z
    long GetRoamedTileProperties(HSTRING__*, ::WindowsInternal::Shell::CDSProperties::ICDSRoamedTileProperties * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileFromNotificationId@NotificationQueueManager@@AEAAJPEBGPEAPEAVTileNotificationManager@@@Z
    long GetTileFromNotificationId(unsigned short const *, TileNotificationManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWpnConnection@NotificationQueueManager@@AEAAJXZ
    long InitializeWpnConnection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyBadge@NotificationQueueManager@@CA_NPEAUIStartTileNotification@@@Z
    static bool IsEmptyBadge(IStartTileNotification *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNotificationExpired@NotificationQueueManager@@AEAAJPEAUIStartTileNotification@@PEA_N@Z
    long IsNotificationExpired(IStartTileNotification *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationIdExists@NotificationQueueManager@@AEAA_NPEAUIObjectCollection@@I@Z
    bool NotificationIdExists(IObjectCollection *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationProcessingShouldBeDeferred@NotificationQueueManager@@AEAA_NPEAVTileNotificationManager@@@Z
    bool NotificationProcessingShouldBeDeferred(TileNotificationManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRandomNotification@NotificationQueueManager@@AEAAJ_N@Z
    long ProcessRandomNotification(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStaggeredAllNewNotifications@NotificationQueueManager@@AEAAJXZ
    long ProcessStaggeredAllNewNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStaggeredBadgedTileNotifications@NotificationQueueManager@@AEAAJXZ
    long ProcessStaggeredBadgedTileNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshAllUpdatedTileNotifications@NotificationQueueManager@@AEAAJ_N@Z
    long RefreshAllUpdatedTileNotifications(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCanPresent@NotificationQueueManager@@AEAAXPEAUHSTRING__@@@Z
    void RefreshCanPresent(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTimerCallback@NotificationQueueManager@@CAJPEAX@Z
    static long ScrollTimerCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAllOutstandingBadgeNotifications@NotificationQueueManager@@AEAAXXZ
    void SendAllOutstandingBadgeNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSingleBadgeNotification@NotificationQueueManager@@AEAA_NPEAUHSTRING__@@PEAUIStartTileNotification@@@Z
    bool SendSingleBadgeNotification(HSTRING__*, IStartTileNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSingleReadyNotification@NotificationQueueManager@@AEAAJPEAUHSTRING__@@@Z
    long SendSingleReadyNotification(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCycleTimer@NotificationQueueManager@@AEAAJXZ
    long UpdateCycleTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpiry@NotificationQueueManager@@AEAAJPEAUHSTRING__@@PEAUIStartTileNotification@@@Z
    long UpdateExpiry(HSTRING__*, IStartTileNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReadyNotifications@NotificationQueueManager@@AEAAJPEAVTileNotificationManager@@PEAUIObjectCollection@@@Z
    long UpdateReadyNotifications(TileNotificationManager *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReadyTileSet@NotificationQueueManager@@AEAAJXZ
    long UpdateReadyTileSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSchedulerState@NotificationQueueManager@@AEAAXW4SchedulerState@1@@Z
    void UpdateSchedulerState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationQueueManager@@EEAA@XZ
    virtual ~NotificationQueueManager();
};
