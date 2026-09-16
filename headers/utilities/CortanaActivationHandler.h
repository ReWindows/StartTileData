#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CortanaActivationHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTile@CortanaActivationHandler@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTile@234@PEAUITileActivationContext@234@@Z
    virtual long ActivateTile(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHandleActivation@CortanaActivationHandler@UnifiedTile@Shell@WindowsInternal@@UEBA_NPEAUIUnifiedTileIdentifier@234@@Z
    virtual bool CanHandleActivation(WindissectOpaque *) const;
};
} // namespace WindowsInternal::Shell::UnifiedTile
