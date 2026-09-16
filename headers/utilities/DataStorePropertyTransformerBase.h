#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 20 member(s).
namespace DataStoreCache {
class DataStorePropertyTransformerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataStorePropertyTransformerBase@DataStoreCache@@QEAA@XZ
    DataStorePropertyTransformerBase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataStorePropertyTransformerBase@DataStoreCache@@QEAA@XZ
    ~DataStorePropertyTransformerBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManagerInternal@DataStorePropertyTransformerBase@DataStoreCache@@IEAAXPEAUIDataManager@2@@Z
    void SetDataManagerInternal(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowOrFailFastIf@DataStorePropertyTransformerBase@DataStoreCache@@CAXJ_N@Z
    static void ThrowOrFailFastIf(long, bool);
};
} // namespace DataStoreCache
