#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace CommonStartTelemetry {
class LogAllTilesActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderLogged@LogAllTilesActivity@CommonStartTelemetry@@QEAAXAEBUFolder@LauncherTelemetry@@@Z
    void FolderLogged(::LauncherTelemetry::Folder const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupLogged@LogAllTilesActivity@CommonStartTelemetry@@QEAAXAEBUGroup@LauncherTelemetry@@@Z
    void GroupLogged(::LauncherTelemetry::Group const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutCustomizationRestrictionType@LogAllTilesActivity@CommonStartTelemetry@@QEAAXI@Z
    void LayoutCustomizationRestrictionType(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LogAllTilesActivity@CommonStartTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LogAllTilesActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@@Z
    void Stop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileLogged@LogAllTilesActivity@CommonStartTelemetry@@QEAAXAEBUTile@LauncherTelemetry@@@Z
    void TileLogged(::LauncherTelemetry::Tile const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileLoggedFailure@LogAllTilesActivity@CommonStartTelemetry@@QEAAXAEBUTile@LauncherTelemetry@@@Z
    void TileLoggedFailure(::LauncherTelemetry::Tile const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LogAllTilesActivity@CommonStartTelemetry@@QEAA@XZ
    ~LogAllTilesActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LogAllTilesActivity@CommonStartTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LogAllTilesActivity@CommonStartTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CommonStartTelemetry
