#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace DataStoreTransformerTelemetry {
class RefreshEdpStatusOnTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RefreshEdpStatusOnTile@DataStoreTransformerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshEdpStatusOnTile@DataStoreTransformerTelemetry@@QEAA@XZ
    ~RefreshEdpStatusOnTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RefreshEdpStatusOnTile@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RefreshEdpStatusOnTile@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
