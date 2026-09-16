#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CollectionTileVerbSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerb@CollectionTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAUITileVerb@234@@Z
    virtual long FindVerb(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@CollectionTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAU?$IVector@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionTileVerbSource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CollectionTileVerbSource();
};
} // namespace WindowsInternal::Shell::UnifiedTile
