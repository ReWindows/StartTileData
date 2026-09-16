#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class LiteTaskbarPinUnpinTileVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LiteTaskbarPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LiteTaskbarPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@_N1PEAUIVerbEnumerationArgs@345@00PEAUIPinnableSurface@ApplicationModel@Internal@Windows@@@Z
    long RuntimeClassInitialize(HSTRING__*, bool, bool, WindissectOpaque *, HSTRING__*, HSTRING__*, ::Windows::Internal::ApplicationModel::IPinnableSurface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LiteTaskbarPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~LiteTaskbarPinUnpinTileVerb();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
