#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace UnifiedTileTelemetry {
class StorageItemVerbProviderGetVerbsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StorageItemVerbProviderGetVerbsAsync@UnifiedTileTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StorageItemVerbProviderGetVerbsAsync@UnifiedTileTelemetry@@QEAA@XZ
    ~StorageItemVerbProviderGetVerbsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StorageItemVerbProviderGetVerbsAsync@UnifiedTileTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StorageItemVerbProviderGetVerbsAsync@UnifiedTileTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UnifiedTileTelemetry
