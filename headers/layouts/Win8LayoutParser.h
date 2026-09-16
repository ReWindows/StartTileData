#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class Win8LayoutParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutXml@Win8LayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEBG@Z
    virtual long ParseLayoutXml(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Win8LayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~Win8LayoutParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseStartTileSizeAttribute@Win8LayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA?AUtagSIZE@@AEAV?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Z
    tagSIZE ParseStartTileSizeAttribute(WindissectOpaque &);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
