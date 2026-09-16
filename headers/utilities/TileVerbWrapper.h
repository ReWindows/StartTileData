#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class TileVerbWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUITileVerb@345@PEAUHSTRING__@@1_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUITileVerb@345@PEAUHSTRING__@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileVerbWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Glyph@TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@@Z
    long put_Glyph(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GlyphFontFamily@TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@@Z
    long put_GlyphFontFamily(HSTRING__*);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileVerbWrapper@Private@UnifiedTile@Shell@WindowsInternal@@EEAA@XZ
    virtual ~TileVerbWrapper();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
