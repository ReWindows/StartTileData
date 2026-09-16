#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
class CuratedTileCollectionDataMigration {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRootIsNotMissingEntries@CuratedTileCollectionDataMigration@@YAXPEAURootCollection@CuratedTileCollection@Data@Windows@@PEAUTileCollectionContainer@345@@Z
    void EnsureRootIsNotMissingEntries(::Windows::Data::CuratedTileCollection::RootCollection *, ::Windows::Data::CuratedTileCollection::TileCollectionContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateCTCDataToNewStruct@CuratedTileCollectionDataMigration@@YAJXZ
    long MigrateCTCDataToNewStruct();
};
