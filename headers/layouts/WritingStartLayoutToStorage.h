#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace StartLayoutTelemetry {
class WritingStartLayoutToStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderWriteFailure@WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAAXAEAVLayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEBD@Z
    void FolderWriteFailure(WindissectOpaque &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderWriteSuccess@WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAAXAEAVLayoutFolder@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    void FolderWriteSuccess(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAAXW4LayoutStorageType@StartLayoutTelemetryData@@@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileWriteFailure@WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAAXAEAVLayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEBD@Z
    void TileWriteFailure(WindissectOpaque &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileWriteSuccess@WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAAXAEAVLayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    void TileWriteSuccess(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WritingStartLayoutToStorage@StartLayoutTelemetry@@QEAA@XZ
    ~WritingStartLayoutToStorage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WritingStartLayoutToStorage@StartLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WritingStartLayoutToStorage@StartLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartLayoutTelemetry
