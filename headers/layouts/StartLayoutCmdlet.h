#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
class StartLayoutCmdlet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportEdgeAssets@StartLayoutCmdlet@@UEAAJPEBG@Z
    virtual long ExportEdgeAssets(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportStartLayout@StartLayoutCmdlet@@UEAAJPEBG@Z
    virtual long ExportStartLayout(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportStartLayoutWithDesktopApplicationIDs@StartLayoutCmdlet@@UEAAJPEBG@Z
    virtual long ExportStartLayoutWithDesktopApplicationIDs(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLayoutFile@StartLayoutCmdlet@@UEAAJPEBG@Z
    virtual long ValidateLayoutFile(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAllAssetsForTile@StartLayoutCmdlet@@AEAAJPEAUISecondaryTileVisualElements@StartScreen@UI@Windows@@PEAUIXmlWriter@@@Z
    long AppendAllAssetsForTile(::Windows::UI::StartScreen::ISecondaryTileVisualElements *, IXmlWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTileAsset@StartLayoutCmdlet@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUIXmlWriter@@@Z
    long AppendTileAsset(WindissectOpaque *, IXmlWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportStartLayoutUndocked@StartLayoutCmdlet@@AEAAJPEBG@Z
    long ExportStartLayoutUndocked(unsigned short const *);
};
