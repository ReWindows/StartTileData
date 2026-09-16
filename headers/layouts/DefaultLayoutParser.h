#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class DefaultLayoutParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportCurrentLayout@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIXmlWriter@@PEBULayoutRoot@Internal@2345@W4ExportLayoutOptions@2345@@Z
    virtual long ExportCurrentLayout(IXmlWriter *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutStream@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStream@@@Z
    virtual long ParseLayoutStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutXml@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEBG@Z
    virtual long ParseLayoutXml(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~DefaultLayoutParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutInternal@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMDocument2@@@Z
    long ParseLayoutInternal(IXMLDOMDocument2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseOfficeTileSuites@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMElement@@@Z
    long ParseOfficeTileSuites(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseStartLayouts@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNodeList@@@Z
    long ParseStartLayouts(IXMLDOMNodeList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWindows8UpgradeGroups@DefaultLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNodeList@@@Z
    long ParseWindows8UpgradeGroups(IXMLDOMNodeList *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
