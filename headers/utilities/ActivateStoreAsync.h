#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreTransformerTelemetry {
class ActivateStoreAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateStoreAsync@DataStoreTransformerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateStoreAsync@DataStoreTransformerTelemetry@@QEAA@XZ
    ~ActivateStoreAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateStoreAsync@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateStoreAsync@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
