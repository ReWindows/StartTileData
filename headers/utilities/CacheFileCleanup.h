#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace CacheTelemetry {
class CacheFileCleanup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CacheFileCleanup@CacheTelemetry@@QEAAXW4VisualCacheCleanupOption@VisualCacheInterfaces@@@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CacheFileCleanup@CacheTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheFileCleanup@CacheTelemetry@@QEAA@XZ
    ~CacheFileCleanup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CacheFileCleanup@CacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CacheFileCleanup@CacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CacheTelemetry
