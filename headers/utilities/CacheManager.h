#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 28 member(s).
namespace DataStoreCache {
class CacheManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CacheManager@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CacheManager@DataStoreCache@@QEAA@XZ
    CacheManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFlush@CacheManager@DataStoreCache@@QEAAXXZ
    void ForceFlush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CacheManager@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CacheManager@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CacheManager@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromDisk@CacheManager@DataStoreCache@@UEAA_NXZ
    virtual bool LoadFromDisk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CacheManager@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void OnEvent(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CacheManager@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CacheManager@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheManager@DataStoreCache@@UEAA@XZ
    virtual ~CacheManager();
};
} // namespace DataStoreCache
