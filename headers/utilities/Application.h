#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 2 member(s).
namespace winrt::Windows::Internal::StateRepository {
class Application {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@Application@StateRepository@Internal@Windows@winrt@@SA@AEBUUser@2345@AEBUhstring@param@5@@Z
    static GetByUserAndApplicationUserModelId(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application@StateRepository@Internal@Windows@winrt@@QEAA@XZ
    ~Application();
};
} // namespace winrt::Windows::Internal::StateRepository
