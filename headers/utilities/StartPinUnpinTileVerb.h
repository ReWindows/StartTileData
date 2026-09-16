#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class StartPinUnpinTileVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@StartPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTileIdentifier@345@_NPEAUIVerbEnumerationArgs@345@PEAUHSTRING__@@3PEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@1@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, WindissectOpaque *, HSTRING__*, HSTRING__*, ::WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPinUnpinTileVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartPinUnpinTileVerb();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
