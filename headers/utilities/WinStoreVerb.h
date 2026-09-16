#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class WinStoreVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@WinStoreVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WinStoreVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTile@345@PEAUIVerbEnumerationArgs@345@PEAUIVerbStringHelperStatics@2345@PEAUHSTRING__@@33@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinStoreVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~WinStoreVerb();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
