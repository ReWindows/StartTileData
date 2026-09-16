#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileVerbSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerb@UnifiedTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAUITileVerb@234@@Z
    virtual long FindVerb(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@UnifiedTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAU?$IVector@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnifiedTileVerbSource@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTile@234@PEAUIUnifiedTileVerbProviderAggregator@Private@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileVerbSource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTileVerbSource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnifiedTileVerbSource();
};
} // namespace WindowsInternal::Shell::UnifiedTile
