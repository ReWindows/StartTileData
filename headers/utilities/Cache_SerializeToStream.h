#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreCacheTelemetry {
class Cache_SerializeToStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Cache_SerializeToStream@DataStoreCacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Cache_SerializeToStream@DataStoreCacheTelemetry@@QEAA@XZ
    ~Cache_SerializeToStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Cache_SerializeToStream@DataStoreCacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Cache_SerializeToStream@DataStoreCacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreCacheTelemetry
