#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class SelectionDataParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z
    virtual long ParseSelectionAttributes(WindissectOpaque &, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    SelectionDataParser();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~SelectionDataParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z
    long ParseOfficeSKUAttributeValue(unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z
    long ParseSKUAttributeValue(unsigned short const *, WindissectOpaque &);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
