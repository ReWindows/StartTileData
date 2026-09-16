#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 37 member(s).
class ImageQueueManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImageQueueManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@ImageQueueManager@@UEAAJXZ
    virtual long Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ImageQueueManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ImageQueueManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ImageQueueManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageQueueManager@@QEAA@XZ
    ImageQueueManager();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImageQueueManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImageQueueManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualAttributes@ImageQueueManager@@UEAAJKK@Z
    virtual long SetVisualAttributes(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestNotificationCompleted@ImageQueueManager@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileRequestNotificationCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileRequestResourceCompleted@ImageQueueManager@@UEAAJPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0004@@K@Z
    virtual long TileRequestResourceCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0019_0004const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileResourceRequest@ImageQueueManager@@UEAAJPEAUIStartTileNotification@@IAEBU_GUID@@IPEAUIMAGE_DOWNLOAD_REQUEST@@W4_IQMResourceDownloadPriority@@@Z
    virtual long TileResourceRequest(IStartTileNotification *, unsigned int, _GUID const &, unsigned int, IMAGE_DOWNLOAD_REQUEST *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionImageDownloadUpdated@ImageQueueManager@@UEAAJKH@Z
    virtual long TileSessionImageDownloadUpdated(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionNotificationCleared@ImageQueueManager@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0005@@K@Z
    virtual long TileSessionNotificationCleared(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0005const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileSessionUpdated@ImageQueueManager@@UEAAJKPEBU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@K@Z
    virtual long TileSessionUpdated(unsigned long, __MIDL___MIDL_itf_wpnplatform_0000_0019_0003const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WPNInitialized@ImageQueueManager@@UEAAJPEAUIWpnPresentationEndpoint@@PEAUIWpnSettingsEndpoint@@@Z
    virtual long WPNInitialized(IWpnPresentationEndpoint *, IWpnSettingsEndpoint *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageQueueManager@@UEAA@XZ
    virtual ~ImageQueueManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpExpiredImageQueueResourceRequests@ImageQueueManager@@AEAAXXZ
    void CleanUpExpiredImageQueueResourceRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRequestWithNoImages@ImageQueueManager@@AEAAXPEAUImageQueueItem@@_N@Z
    void CompleteRequestWithNoImages(ImageQueueItem *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDownloadInProgress@ImageQueueManager@@AEAA_NXZ
    bool IsDownloadInProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetryImageQueueResourceRequest@ImageQueueManager@@AEAAXPEAUImageQueueItem@@@Z
    void RetryImageQueueResourceRequest(ImageQueueItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendImageQueueResourceRequest@ImageQueueManager@@AEAAXPEBGPEAUImageQueueItem@@@Z
    void SendImageQueueResourceRequest(unsigned short const *, ImageQueueItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewRequest@ImageQueueManager@@AEAAXXZ
    void StartNewRequest();
};
