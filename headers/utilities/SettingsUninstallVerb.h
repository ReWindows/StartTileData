#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class SettingsUninstallVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@SettingsUninstallVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SettingsUninstallVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIVerbEnumerationArgs@345@PEAUIVerbStringHelperStatics@2345@PEAUHSTRING__@@2_NPEBG@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, bool, unsigned short const *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
