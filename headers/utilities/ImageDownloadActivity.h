#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
namespace IQMTelemetry {
class ImageDownloadActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ImageDownloadActivity@IQMTelemetry@@QEAA?AV12@XZ
    ::IQMTelemetry::ImageDownloadActivity Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ImageDownloadActivity@IQMTelemetry@@QEAAXPEBG0IAEBU_GUID@@II@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, _GUID const &, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageDownloadActivity@IQMTelemetry@@QEAA@XZ
    ~ImageDownloadActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ImageDownloadActivity@IQMTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ImageDownloadActivity@IQMTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace IQMTelemetry
