#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 67 member(s).
class TileNotification {
public:
    class RecursedPayloadInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileNotification@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdaptiveTemplateName@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetAdaptiveTemplateName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationUserModelId@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetApplicationUserModelId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArguments@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetArguments(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeValue@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetBadgeValue(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrandingFlagsOverride@TileNotification@@UEAAJPEAW4TILE_BRANDING_FLAGS@@@Z
    virtual long GetBrandingFlagsOverride(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOverride@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetDisplayNameOverride(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpiry@TileNotification@@UEAAJPEA_K@Z
    virtual long GetExpiry(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@TileNotification@@UEAAJPEAI@Z
    virtual long GetId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileNotification@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImages@TileNotification@@UEAAJPEAPEAUIObjectCollection@@@Z
    virtual long GetImages(IObjectCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyTemplateName@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetLegacyTemplateName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageId@TileNotification@@UEAAJPEAU_GUID@@@Z
    virtual long GetMessageId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayHint@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetOverlayHint(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationHint@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetPresentationHint(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertySet@TileNotification@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetPropertySet(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileNotification@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@TileNotification@@UEAAJPEAPEAUIObjectCollection@@@Z
    virtual long GetText(IObjectCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileID@TileNotification@@UEAAJPEAPEAG@Z
    virtual long GetTileID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileNotification@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@TileNotification@@UEAAJPEAW4_SharedModelTileNotificationType@@@Z
    virtual long GetType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBackgroundImage@TileNotification@@UEAAJPEAH@Z
    virtual long HasBackgroundImage(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPreviouslyBeenPresented@TileNotification@@UEAAJPEAH@Z
    virtual long HasPreviouslyBeenPresented(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageDownloadResults@TileNotification@@UEAAJHHPEBUIMAGE_DOWNLOAD_RESULT@@@Z
    virtual long ImageDownloadResults(int, int, IMAGE_DOWNLOAD_RESULT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPeekNotification@TileNotification@@UEAAJPEAH@Z
    virtual long IsPeekNotification(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReady@TileNotification@@UEAAJPEAH@Z
    virtual long IsReady(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@TileNotification@@QEAA_NXZ
    bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationProcessed@TileNotification@@QEAAJPEAUIInspectable@@@Z
    long NotificationProcessed(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePayload@TileNotification@@UEAAJW4DEVICE_SCALE_FACTOR@@W4_VisualTheme@@@Z
    virtual long PreparePayload(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentFailed@TileNotification@@UEAAJXZ
    virtual long PresentFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentFailedAndLog@TileNotification@@UEAAJJ@Z
    virtual long PresentFailedAndLog(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentSucceeded@TileNotification@@UEAAJXZ
    virtual long PresentSucceeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNotifications@TileNotification@@QEAAJPEAUINotificationDetailsWrapper@@W4DEVICE_SCALE_FACTOR@@W4_VisualTheme@@@Z
    long ProcessNotifications(INotificationDetailsWrapper *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileNotification@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileNotification@@QEAAJ_KPEAUITileNotificationManager@@PEAUINotificationDetailsWrapper@@_NW4_SharedModelTileNotificationType@@@Z
    long RuntimeClassInitialize(uint64_t, ITileNotificationManager *, INotificationDetailsWrapper *, bool, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileNotification@@QEAA@XZ
    TileNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileNotification@@UEAA@XZ
    virtual ~TileNotification();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDownloadRequestsForAdaptivePayload@TileNotification@@AEAAJPEAUIInspectable@@PEAV?$CCoSimpleArray@UIMAGE_DOWNLOAD_REQUEST@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UIMAGE_DOWNLOAD_REQUEST@@@@@@@Z
    long BuildDownloadRequestsForAdaptivePayload(IInspectable *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForKnownProperties@TileNotification@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAV?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@PEAURecursedPayloadInfo@1@@Z
    long CheckForKnownProperties(WindissectOpaque &, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureReady@TileNotification@@AEAAJW4DEVICE_SCALE_FACTOR@@W4_VisualTheme@@@Z
    long EnsureReady(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRecursedPayload@TileNotification@@AEAAJXZ
    long EnsureRecursedPayload();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationPayloadForUser@TileNotification@@CAJ_KPEAUINotificationDetailsWrapper@@IW4_VisualTheme@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    static long GetNotificationPayloadForUser(uint64_t, INotificationDetailsWrapper *, unsigned int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentSuccess@TileNotification@@AEAAJ_N@Z
    long PresentSuccess(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecurseOrderedNodes@TileNotification@@AEAAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAURecursedPayloadInfo@1@@Z
    long RecurseOrderedNodes(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursePayload@TileNotification@@AEAAJAEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAURecursedPayloadInfo@1@@Z
    long RecursePayload(WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeNameForLogoOnlyNotification@TileNotification@@AEAAJPEBGPEA_N@Z
    long ShouldIncludeNameForLogoOnlyNotification(unsigned short const *, bool *);
};
