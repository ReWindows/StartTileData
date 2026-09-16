#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace StartPlaceHolderTelemetry {
class PlaceholderTileActivated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickedWhileInstalled@PlaceholderTileActivated@StartPlaceHolderTelemetry@@QEAAXXZ
    void ClickedWhileInstalled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickedWhileInstalling@PlaceholderTileActivated@StartPlaceHolderTelemetry@@QEAAXXZ
    void ClickedWhileInstalling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovedToFrontOfInstallQueue@PlaceholderTileActivated@StartPlaceHolderTelemetry@@QEAAXXZ
    void MovedToFrontOfInstallQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PlaceholderTileActivated@StartPlaceHolderTelemetry@@QEAAXPEBGW4ActivationSource@2@@Z
    void StartActivity(unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileActivated@StartPlaceHolderTelemetry@@QEAA@XZ
    ~PlaceholderTileActivated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PlaceholderTileActivated@StartPlaceHolderTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PlaceholderTileActivated@StartPlaceHolderTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartPlaceHolderTelemetry
