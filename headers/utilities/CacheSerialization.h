#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache {
class CacheSerialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeFromStream@CacheSerialization@DataStoreCache@@QEBAJPEAUIStream@@@Z
    long DeserializeFromStream(IStream *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeToStream@CacheSerialization@DataStoreCache@@QEBAJPEAUIStream@@@Z
    long SerializeToStream(IStream *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheSerialization@DataStoreCache@@QEAA@XZ
    ~CacheSerialization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CRCCheckStream@CacheSerialization@DataStoreCache@@AEBAJPEAUIStream@@PEA_K@Z
    long CRCCheckStream(IStream *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetOSVersionHash@CacheSerialization@DataStoreCache@@CA_KXZ
    static uint64_t s_GetOSVersionHash();
};
} // namespace DataStoreCache
