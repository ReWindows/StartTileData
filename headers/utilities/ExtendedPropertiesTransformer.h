#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 39 member(s).
namespace DataStoreCache {
class ExtendedPropertiesTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ExtendedPropertiesTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExtendedPropertiesTransformer@DataStoreCache@@QEAA@PEAUIDataManager@1@@Z
    ExtendedPropertiesTransformer(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@ExtendedPropertiesTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ExtendedPropertiesTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ExtendedPropertiesTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ExtendedPropertiesTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ExtendedPropertiesTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ExtendedPropertiesTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileExtendedProperties@ExtendedPropertiesTransformer@DataStoreCache@@UEAAXXZ
    virtual void ReconcileExtendedProperties();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ExtendedPropertiesTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@ExtendedPropertiesTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@ExtendedPropertiesTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtendedPropertiesTransformer@DataStoreCache@@UEAA@XZ
    virtual ~ExtendedPropertiesTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCachedData@ExtendedPropertiesTransformer@DataStoreCache@@AEAAXXZ
    void LoadCachedData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileWithDataStore@ExtendedPropertiesTransformer@DataStoreCache@@AEAAXXZ
    void ReconcileWithDataStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDataItemEvents@ExtendedPropertiesTransformer@DataStoreCache@@AEAAXXZ
    void RegisterForDataItemEvents();
};
} // namespace DataStoreCache
