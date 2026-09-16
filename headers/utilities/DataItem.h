#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 45 member(s).
namespace DataStoreCache {
class DataItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DataItem@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDataReference@DataItem@DataStoreCache@@UEAAXAEBU_GUID@@W4ItemDataFlags@2@@Z
    virtual void ClearDataReference(_GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@DataItem@DataStoreCache@@UEBA?AV?$ComPtr@UIDataItem@DataStoreCache@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque Clone() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItem@DataStoreCache@@QEAA@PEAUICollectionUpdateInternal@1@AEBU_GUID@@PEAUHSTRING__@@@Z
    DataItem(WindissectOpaque *, _GUID const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataReference@DataItem@DataStoreCache@@UEAAXAEBU_GUID@@0PEAPEAX@Z
    virtual void GetDataReference(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@DataItem@DataStoreCache@@UEBA?AVDataItemIdentifier@2@XZ
    virtual WindissectOpaque GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DataItem@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DataItem@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DataItem@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DataItem@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasData@DataItem@DataStoreCache@@UEBA_NXZ
    virtual bool HasData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDataReference@DataItem@DataStoreCache@@UEAA_NAEBU_GUID@@@Z
    virtual bool HasDataReference(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DataItem@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DataItem@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataReference@DataItem@DataStoreCache@@UEAAXAEBU_GUID@@W4ItemDataFlags@2@PEAUIUnknown@@@Z
    virtual void SetDataReference(_GUID const &, int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalDataExists@DataItem@DataStoreCache@@UEAAXAEBU_GUID@@W4ItemDataFlags@2@@Z
    virtual void SetExternalDataExists(_GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDataReference@DataItem@DataStoreCache@@UEAA_NAEBU_GUID@@0PEAPEAX@Z
    virtual bool TryGetDataReference(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByReference@DataItem@DataStoreCache@@UEAA_NAEBUDataStorePropertyIdentifier@2@PEAPEAX@Z
    virtual bool TryGetPropertyByReference(WindissectOpaque const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByValue@DataItem@DataStoreCache@@UEAA_NAEBUDataStorePropertyIdentifier@2@IPEAX@Z
    virtual bool TryGetPropertyByValue(WindissectOpaque const &, unsigned int, void *);
};
} // namespace DataStoreCache
