#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class TileUninstallVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TileUninstallVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileUninstallVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTile@345@PEAUIVerbEnumerationArgs@345@PEAUIVerbStringHelperStatics@2345@PEAUHSTRING__@@3@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileUninstallVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileUninstallVerb();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
