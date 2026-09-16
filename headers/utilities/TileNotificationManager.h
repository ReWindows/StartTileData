#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 41 member(s).
class TileNotificationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileNotificationManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EligibleToAnimateAgain@TileNotificationManager@@QEBA_NXZ
    bool EligibleToAnimateAgain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationUserModelId@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetApplicationUserModelId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileNotificationManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageQueueManager@TileNotificationManager@@UEAAJPEAPEAUIImageQueueManager@@@Z
    virtual long GetImageQueueManager(IImageQueueManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNotificationId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifications@TileNotificationManager@@UEAAJPEAPEAUIObjectCollection@@@Z
    virtual long GetNotifications(IObjectCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPackageFamilyName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPackageFullName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileID@TileNotificationManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetTileID(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileNotificationManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWNSId@TileNotificationManager@@SAJPEAUIUnknown@@PEAPEAUHSTRING__@@@Z
    static long GetWNSId(IUnknown *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppSettingsChanged@TileNotificationManager@@QEAAXXZ
    void OnAppSettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotificationReady@TileNotificationManager@@UEAAJIAEBU_GUID@@_N@Z
    virtual long OnNotificationReady(unsigned int, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentSuccess@TileNotificationManager@@UEAAJH@Z
    virtual long PresentSuccess(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileNotificationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileNotificationManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileNotificationManager@@QEAAJ_KPEAUIRefreshTileNotifications@@PEAUIImageQueueManager@@PEAUIUnknown@@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@PEAUINotificationPresenter@@@Z
    long RuntimeClassInitialize(uint64_t, IRefreshTileNotifications *, IImageQueueManager *, IUnknown *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *, INotificationPresenter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastDisplayedNotification@TileNotificationManager@@UEAAJIPEBG@Z
    virtual long SetLastDisplayedNotification(unsigned int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifications@TileNotificationManager@@UEAAJPEAUIObjectCollection@@@Z
    virtual long SetNotifications(IObjectCollection *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileNotificationManager@@QEAA@XZ
    TileNotificationManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileNotificationManager@@UEAA@XZ
    virtual ~TileNotificationManager();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTileProperties@TileNotificationManager@@AEAAJPEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z
    long GetLocalTileProperties(::WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManager@TileNotificationManager@@AEAAJPEAPEAUIRefreshTileNotifications@@@Z
    long GetManager(IRefreshTileNotifications * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNotificationBeenPreviouslyPresented@TileNotificationManager@@AEAA_NI@Z
    bool HasNotificationBeenPreviouslyPresented(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSeenNotificationList@TileNotificationManager@@AEAAJXZ
    long UpdateSeenNotificationList();
};
