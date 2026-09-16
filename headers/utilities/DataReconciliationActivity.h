#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CuratedTileCollectionTransformerTelemetry {
class DataReconciliationActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DataReconciliationActivity@CuratedTileCollectionTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataReconciliationActivity@CuratedTileCollectionTransformerTelemetry@@QEAA@XZ
    ~DataReconciliationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DataReconciliationActivity@CuratedTileCollectionTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DataReconciliationActivity@CuratedTileCollectionTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CuratedTileCollectionTransformerTelemetry
