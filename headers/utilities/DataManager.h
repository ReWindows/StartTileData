#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 46 member(s).
namespace DataStoreCache {
class DataManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DataManager@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataManager@DataStoreCache@@QEAA@XZ
    DataManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DataManager@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@DataManager@DataStoreCache@@UEAA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@PEAUHSTRING__@@@Z
    virtual WindissectOpaque GetItem(_GUID const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateDataItemCollection@DataManager@DataStoreCache@@UEAA?AV?$ComPtr@UIDataItemCollection@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@@Z
    virtual WindissectOpaque GetOrCreateDataItemCollection(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateSingletonDataItem@DataManager@DataStoreCache@@UEAA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@@Z
    virtual WindissectOpaque GetOrCreateSingletonDataItem(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DataManager@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DataManager@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DataManager@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCacheEvent@DataManager@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void RaiseCacheEvent(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvent@DataManager@DataStoreCache@@UEAAXPEAUIDataItemChangeEvent@2@@Z
    virtual void RaiseEvent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForChangeEvents@DataManager@DataStoreCache@@UEAA?AUNotificationCookie@2@PEAUIDataItemEventHandler@@@Z
    virtual WindissectOpaque RegisterForChangeEvents(IDataItemEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForChangeEventsCache@DataManager@DataStoreCache@@UEAA?AUNotificationCookie@2@PEAUICacheableEventHandler@2@@Z
    virtual WindissectOpaque RegisterForChangeEventsCache(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DataManager@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForChangeEvents@DataManager@DataStoreCache@@UEAAXUNotificationCookie@2@@Z
    virtual void UnregisterForChangeEvents(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForChangeEventsCache@DataManager@DataStoreCache@@UEAAXUNotificationCookie@2@@Z
    virtual void UnregisterForChangeEventsCache(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataManager@DataStoreCache@@UEAA@XZ
    virtual ~DataManager();
};
} // namespace DataStoreCache
