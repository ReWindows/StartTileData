#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class PreserveLayoutPostProcessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPostProcessorLoggingName@PreserveLayoutPostProcessor@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEBGXZ
    virtual unsigned short const * GetPostProcessorLoggingName();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PreserveLayoutPostProcessor@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~PreserveLayoutPostProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateSecondaryTileInformation@PreserveLayoutPostProcessor@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAVLayoutTile@Internal@2345@PEAUISecondaryTileStaticsPrivate@StartScreen@UI@7Windows@@@Z
    void PopulateSecondaryTileInformation(WindissectOpaque *, ::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
