#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Shell::UnifiedTile::Shim::implementation {
class UnifiedTileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsync@UnifiedTileManager@implementation@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@SA?AU?$IAsyncOperation@UUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@@Foundation@Windows@7@AEBUUser@System@Windows@7@Uhstring@7@W4TileFeatures@34567@W4TileSources@34567@W4TileManagerOptions@34567@@Z
    static WindissectOpaque CreateAsync(WindissectOpaque const &, WindissectOpaque, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTile@UnifiedTileManager@implementation@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@QEBA?AU434567@AEBUUnifiedTileIdentifier@34567@@Z
    WindissectOpaque FindTile(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@UnifiedTileManager@implementation@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA?AUUnifiedTileCollection@34567@W4CollectionProvider@34567@@Z
    WindissectOpaque GetCollection(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileManager@implementation@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@AEBU03456@AEBUCDSTilePropertiesBatched@CDSProperties@456@@Z
    UnifiedTileManager(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileManager@implementation@Shim@UnifiedTile@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~UnifiedTileManager();
};
} // namespace winrt::WindowsInternal::Shell::UnifiedTile::Shim::implementation
