#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CDSStartCollectionWriter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CDSStartCollectionWriter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInitializeTiles@CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool CanInitializeTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCollectionExist@CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool DoesCollectionExist();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionEmpty@CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NXZ
    virtual bool IsCollectionEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideGroupColumnCount@CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXI@Z
    virtual void OverrideGroupColumnCount(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDSStartCollectionWriter@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CDSStartCollectionWriter();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
