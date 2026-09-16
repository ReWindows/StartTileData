#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CacheTelemetry {
class ReadIDs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReadIDs@CacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ReadIDs@CacheTelemetry@@QEAAXIII@Z
    void Stop(unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReadIDs@CacheTelemetry@@QEAA@XZ
    ~ReadIDs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReadIDs@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReadIDs@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
