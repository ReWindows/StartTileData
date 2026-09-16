#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace ExtendedPropertiesTelemetry {
class ExtendedProperties_FetchNewMappingsPerf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExtendedProperties_FetchNewMappingsPerf@ExtendedPropertiesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtendedProperties_FetchNewMappingsPerf@ExtendedPropertiesTelemetry@@QEAA@XZ
    ~ExtendedProperties_FetchNewMappingsPerf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExtendedProperties_FetchNewMappingsPerf@ExtendedPropertiesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExtendedProperties_FetchNewMappingsPerf@ExtendedPropertiesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ExtendedPropertiesTelemetry
