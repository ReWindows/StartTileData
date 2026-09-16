#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace ExtendedPropertiesTelemetry {
class ExtendedProperties_DecompressMappingsFilePerf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExtendedProperties_DecompressMappingsFilePerf@ExtendedPropertiesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtendedProperties_DecompressMappingsFilePerf@ExtendedPropertiesTelemetry@@QEAA@XZ
    ~ExtendedProperties_DecompressMappingsFilePerf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExtendedProperties_DecompressMappingsFilePerf@ExtendedPropertiesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExtendedProperties_DecompressMappingsFilePerf@ExtendedPropertiesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ExtendedPropertiesTelemetry
