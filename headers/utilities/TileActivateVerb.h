#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class TileActivateVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TileActivateVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileActivateVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTile@345@PEAUITileActivator@345@W4ActivationOptions@345@PEAUIVerbEnumerationArgs@345@PEAUIVerbStringHelperStatics@2345@PEAUHSTRING__@@5_N5@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, bool, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileActivateVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileActivateVerb();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileActivateVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileActivateVerb();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
