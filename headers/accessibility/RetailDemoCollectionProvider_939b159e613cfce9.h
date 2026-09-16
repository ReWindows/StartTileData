#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace StartLayoutTelemetry {
class RetailDemoCollectionProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RetailDemoCollectionProvider@StartLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RetailDemoCollectionProvider@StartLayoutTelemetry@@QEAA@XZ
    ~RetailDemoCollectionProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RetailDemoCollectionProvider@StartLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RetailDemoCollectionProvider@StartLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartLayoutTelemetry
