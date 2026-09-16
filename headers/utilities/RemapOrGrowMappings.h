#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CacheTelemetry {
class RemapOrGrowMappings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemapOrGrowMappings@CacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@RemapOrGrowMappings@CacheTelemetry@@QEAAXII@Z
    void Stop(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemapOrGrowMappings@CacheTelemetry@@QEAA@XZ
    ~RemapOrGrowMappings();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemapOrGrowMappings@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemapOrGrowMappings@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
