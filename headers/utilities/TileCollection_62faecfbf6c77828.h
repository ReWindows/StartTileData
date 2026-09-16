#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace Windows::Data::CuratedTileCollection {
class TileCollection {
public:
    class Schema;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileCollection@CuratedTileCollection@Data@Windows@@QEAA@XZ
    TileCollection();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileCollection@CuratedTileCollection@Data@Windows@@QEAA@AEBU0123@@Z
    TileCollection(::Windows::Data::CuratedTileCollection::TileCollection const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileCollection@CuratedTileCollection@Data@Windows@@QEAA@$$QEAU0123@@Z
    TileCollection(::Windows::Data::CuratedTileCollection::TileCollection &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?swap@TileCollection@CuratedTileCollection@Data@Windows@@QEAAXAEAU1234@@Z
    void swap(::Windows::Data::CuratedTileCollection::TileCollection &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileCollection@CuratedTileCollection@Data@Windows@@QEAA@XZ
    ~TileCollection();
};
} // namespace Windows::Data::CuratedTileCollection
