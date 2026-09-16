#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
class CacheTelemetry {
public:
    class AddEntry;
    class CacheFileCleanup;
    class CreateFiles;
    class DeleteEntry;
    class DeleteFiles;
    class GetSoftwareBitmap;
    class Initialize;
    class ReadIDs;
    class RemapOrGrowMappings;
    class SetData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFileCorrupt_DataCRCIsCorrupt@CacheTelemetry@@SAXXZ
    static void CacheFileCorrupt_DataCRCIsCorrupt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFileCorrupt_EntryAlreadyInMap@CacheTelemetry@@SAXXZ
    static void CacheFileCorrupt_EntryAlreadyInMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFileCorrupt_EntryCRCIsCorrupt@CacheTelemetry@@SAXXZ
    static void CacheFileCorrupt_EntryCRCIsCorrupt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFileCorrupt_EntryDataOffsetOrSizeIsCorrupt@CacheTelemetry@@SAXXZ
    static void CacheFileCorrupt_EntryDataOffsetOrSizeIsCorrupt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualCacheFragmentationInfo_@CacheTelemetry@@QEAAXIIII@Z
    void VisualCacheFragmentationInfo_(unsigned int, unsigned int, unsigned int, unsigned int);
};
