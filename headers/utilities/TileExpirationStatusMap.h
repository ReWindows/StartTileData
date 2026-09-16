#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
class TileExpirationStatusMap {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEarliestExpiringTileFileTime@TileExpirationStatusMap@@QEAA_NPEAU_FILETIME@@@Z
    bool GetEarliestExpiringTileFileTime(_FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@TileExpirationStatusMap@@QEAAJPEAUHSTRING__@@@Z
    long RemoveTile(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNotificationExpiry@TileExpirationStatusMap@@QEAAJPEAUHSTRING__@@IAEBU_FILETIME@@@Z
    long UpdateNotificationExpiry(HSTRING__*, unsigned int, _FILETIME const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileExpirationStatusMap@@QEAA@XZ
    ~TileExpirationStatusMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNearestExpiringTileFileTime@TileExpirationStatusMap@@AEAA?AU_FILETIME@@XZ
    _FILETIME CalculateNearestExpiringTileFileTime();
};
