#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class RefreshEdpStatusOnCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RefreshEdpStatusOnCollection@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshEdpStatusOnCollection@DataStoreTransformerTelemetry@@QEAA@XZ
    ~RefreshEdpStatusOnCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RefreshEdpStatusOnCollection@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RefreshEdpStatusOnCollection@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
