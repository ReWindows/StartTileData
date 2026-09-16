#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
class DataStoreCacheTelemetry {
public:
    class Cache_DeserializeFromStream;
    class Cache_SerializeToStream;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CRCFailure@DataStoreCacheTelemetry@@SAXXZ
    static void Cache_CRCFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_ForceFlush_@DataStoreCacheTelemetry@@QEAAXPEBG@Z
    void Cache_ForceFlush_(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_LoadFromDisk_@DataStoreCacheTelemetry@@QEAAXPEBG@Z
    void Cache_LoadFromDisk_(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@DataStoreCacheTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
