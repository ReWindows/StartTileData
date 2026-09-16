#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class StoreMetadataDataGatherer {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreMetadataDataGatherer@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StoreMetadataDataGatherer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataFromStore@StoreMetadataDataGatherer@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@789@@Z
    void GetAppDataFromStore(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
