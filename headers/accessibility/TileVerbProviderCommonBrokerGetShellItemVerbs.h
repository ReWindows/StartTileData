#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class TileVerbProviderCommonBrokerGetShellItemVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileVerbProviderCommonBrokerGetShellItemVerbs@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileVerbProviderCommonBrokerGetShellItemVerbs@UnifiedTileTelemetry@@QEAA@XZ
    ~TileVerbProviderCommonBrokerGetShellItemVerbs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileVerbProviderCommonBrokerGetShellItemVerbs@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileVerbProviderCommonBrokerGetShellItemVerbs@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
