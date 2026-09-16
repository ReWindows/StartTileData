#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreCacheTelemetry {
class Cache_DeserializeFromStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Cache_DeserializeFromStream@DataStoreCacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Cache_DeserializeFromStream@DataStoreCacheTelemetry@@QEAA@XZ
    ~Cache_DeserializeFromStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Cache_DeserializeFromStream@DataStoreCacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Cache_DeserializeFromStream@DataStoreCacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreCacheTelemetry
