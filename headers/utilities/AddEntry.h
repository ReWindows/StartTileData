#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace CacheTelemetry {
class AddEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddEntry@CacheTelemetry@@QEAAXAEBU_GUID@@W4VisualCacheContentType@VisualCache@UnifiedTile@Shell@WindowsInternal@@II@Z
    void StartActivity(_GUID const &, int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddEntry@CacheTelemetry@@QEAA@XZ
    ~AddEntry();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddEntry@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddEntry@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
