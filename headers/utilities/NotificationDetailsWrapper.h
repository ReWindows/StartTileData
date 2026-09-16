#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
class NotificationDetailsWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpiry@NotificationDetailsWrapper@@UEAA_KXZ
    virtual uint64_t GetExpiry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageId@NotificationDetailsWrapper@@UEAA?AU_GUID@@XZ
    virtual _GUID GetMessageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@NotificationDetailsWrapper@@UEAAKXZ
    virtual unsigned long GetNotificationId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationValueSet@NotificationDetailsWrapper@@UEAAJPEAPEAUINotificationValueSet@Notifications@Internal@Windows@@@Z
    virtual long GetNotificationValueSet(::Windows::Internal::Notifications::INotificationValueSet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@NotificationDetailsWrapper@@UEAAKXZ
    virtual unsigned long GetType();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationDetailsWrapper@@QEAA@XZ
    NotificationDetailsWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NotificationDetailsWrapper@@QEAAJPEAU__MIDL___MIDL_itf_wpnplatform_0000_0019_0003@@PEAUINotificationValueSet@Notifications@Internal@Windows@@@Z
    long RuntimeClassInitialize(__MIDL___MIDL_itf_wpnplatform_0000_0019_0003*, ::Windows::Internal::Notifications::INotificationValueSet *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationDetailsWrapper@@UEAA@XZ
    virtual ~NotificationDetailsWrapper();
};
