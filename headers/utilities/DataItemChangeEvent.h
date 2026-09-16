#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 21 member(s).
namespace DataStoreCache {
class DataItemChangeEvent {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DataItemChangeEvent@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeId@DataItemChangeEvent@DataStoreCache@@UEBA_KXZ
    virtual uint64_t GetChangeId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeSource@DataItemChangeEvent@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetChangeSource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeType@DataItemChangeEvent@DataStoreCache@@UEBA?AW4ChangeType@2@XZ
    virtual int GetChangeType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangedItem@DataItemChangeEvent@DataStoreCache@@UEBA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetChangedItem() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DataItemChangeEvent@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DataItemChangeEvent@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DataItemChangeEvent@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DataItemChangeEvent@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DataItemChangeEvent@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DataStoreCache
