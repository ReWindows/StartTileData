#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
class CacheCRCHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCRC@CacheCRCHelper@@YAJPEAEIPEA_K@Z
    long ComputeCRC(unsigned char *, unsigned int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEntryCRC@CacheCRCHelper@@YAJQEAUTILECACHEENTRY@VisualCacheInterfaces@@@Z
    long UpdateEntryCRC(WindissectOpaque * const);
};
