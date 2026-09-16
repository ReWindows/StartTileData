#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace winrt::Windows::Internal::StateRepository {
class TileView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndTileId@TileView@StateRepository@Internal@Windows@winrt@@SA@AEBUApplication@2345@AEBUhstring@param@5@@Z
    static GetByApplicationAndTileId(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileView@StateRepository@Internal@Windows@winrt@@QEAA@XZ
    ~TileView();
};
} // namespace winrt::Windows::Internal::StateRepository
