#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class PlaceholderImageHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PlaceholderImageHandler@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderImageHandler@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~PlaceholderImageHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesApplicationNeedImagesRetrieved@PlaceholderImageHandler@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA_NPEAUPipelineApplicationData@2345@@Z
    bool DoesApplicationNeedImagesRetrieved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadImageAssetsForModernApplication@PlaceholderImageHandler@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUPipelineApplicationData@2345@@Z
    void DownloadImageAssetsForModernApplication(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateApplicationImages@PlaceholderImageHandler@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUPipelineApplicationData@2345@@Z
    void PopulateApplicationImages(WindissectOpaque *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
