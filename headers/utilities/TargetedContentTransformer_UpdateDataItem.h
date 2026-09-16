#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreTransformerTelemetry {
class TargetedContentTransformer_UpdateDataItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetedContentTransformer_UpdateDataItem@DataStoreTransformerTelemetry@@QEAAXPEBG00@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TargetedContentTransformer_UpdateDataItem@DataStoreTransformerTelemetry@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentTransformer_UpdateDataItem@DataStoreTransformerTelemetry@@QEAA@XZ
    ~TargetedContentTransformer_UpdateDataItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetedContentTransformer_UpdateDataItem@DataStoreTransformerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetedContentTransformer_UpdateDataItem@DataStoreTransformerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DataStoreTransformerTelemetry
