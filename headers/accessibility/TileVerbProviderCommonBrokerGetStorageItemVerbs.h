#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class TileVerbProviderCommonBrokerGetStorageItemVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileVerbProviderCommonBrokerGetStorageItemVerbs@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileVerbProviderCommonBrokerGetStorageItemVerbs@UnifiedTileTelemetry@@QEAA@XZ
    ~TileVerbProviderCommonBrokerGetStorageItemVerbs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileVerbProviderCommonBrokerGetStorageItemVerbs@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileVerbProviderCommonBrokerGetStorageItemVerbs@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
