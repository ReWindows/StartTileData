#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class LayoutModificationXMLParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportCurrentLayout@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIXmlWriter@@PEAUIInitialCollectionProvider@2345@W4ExportLayoutOptions@2345@@Z
    virtual long ExportCurrentLayout(IXmlWriter *, WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutCustomizationRestrictionType@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4LayoutCustomizationRestrictionType@TileDataLayerItemWrappers@@@Z
    virtual long GetLayoutCustomizationRestrictionType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOfficeTilesType@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4OfficeTilesType@2345@@Z
    virtual long GetOfficeTilesType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartTileGroupCellWidth@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAJ@Z
    virtual long GetStartTileGroupCellWidth(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartTileGroupsColumnCount@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAJ@Z
    virtual long GetStartTileGroupsColumnCount(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLStreamFromStartUISettings@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAJPEAUIUser@System@Windows@@PEAPEAUIStream@@@Z
    static long GetXMLStreamFromStartUISettings(::Windows::System::IUser *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutModification@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStream@@@Z
    virtual long ParseLayoutModification(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutStream@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStream@@@Z
    virtual long ParseLayoutStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutXml@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEBG@Z
    virtual long ParseLayoutXml(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~LayoutModificationXMLParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDefaultLayoutOverride@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNode@@@Z
    long ParseDefaultLayoutOverride(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutInternal@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMDocument2@@@Z
    long ParseLayoutInternal(IXMLDOMDocument2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLayoutOptions@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMElement@@@Z
    long ParseLayoutOptions(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseOfficeTiles@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMElement@@@Z
    long ParseOfficeTiles(IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseRequiredStartGroups@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNodeList@@@Z
    long ParseRequiredStartGroups(IXMLDOMNodeList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseRequiredStartTiles@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNode@@@Z
    long ParseRequiredStartTiles(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTopMfuApps@LayoutModificationXMLParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIXMLDOMNode@@@Z
    long ParseTopMfuApps(IXMLDOMNode *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
