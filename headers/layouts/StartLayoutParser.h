#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class StartLayoutParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportCurrentLayout@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIXmlWriter@@PEBULayoutRoot@Internal@2345@PEBG@Z
    virtual long ExportCurrentLayout(IXmlWriter *, WindissectOpaque const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartLayoutParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDesktopTile@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBVLayoutTile@Internal@2345@PEAUIXmlWriter@@PEBG@Z
    void AppendDesktopTile(WindissectOpaque const *, IXmlWriter *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendModernTile@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBVLayoutTile@Internal@2345@PEAUIXmlWriter@@PEBG@Z
    void AppendModernTile(WindissectOpaque const *, IXmlWriter *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSecondaryTile@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBVLayoutTile@Internal@2345@PEAUIXmlWriter@@PEBG@Z
    void AppendSecondaryTile(WindissectOpaque const *, IXmlWriter *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSecondaryTileLogoUri@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUIXmlWriter@@QEBGPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    void AppendSecondaryTileLogoUri(IXmlWriter *, unsigned short const * const, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTargetContentTile@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBVLayoutTile@Internal@2345@PEAUIXmlWriter@@PEBG@Z
    void AppendTargetContentTile(WindissectOpaque const *, IXmlWriter *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseStartTileSizeAttribute@StartLayoutParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA?AUtagSIZE@@PEAUIXMLDOMElement@@@Z
    tagSIZE ParseStartTileSizeAttribute(IXMLDOMElement *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
