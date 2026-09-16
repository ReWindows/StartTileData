#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 28 member(s).
namespace DataStoreCache {
class DataItemCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DataItemCollection@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemCollection@DataStoreCache@@QEAA@AEBU_GUID@@PEAUIEventManager@1@@Z
    DataItemCollection(_GUID const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DataItemCollection@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@DataItemCollection@DataStoreCache@@UEAA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@AEBU_GUID@@PEAUHSTRING__@@@Z
    virtual WindissectOpaque GetItem(_GUID const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@DataItemCollection@DataStoreCache@@UEAA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual WindissectOpaque GetItem(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DataItemCollection@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DataItemCollection@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DataItemCollection@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetType() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DataItemCollection@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DataItemCollection@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemCollection@DataStoreCache@@UEAA@XZ
    virtual ~DataItemCollection();
};
} // namespace DataStoreCache
