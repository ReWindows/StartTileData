#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace winrt::WindowsInternal::Shell::UnifiedTile::factory_implementation {
class PlaceholderTileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromRestorableTiles@PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXU?$array_view@$$CBURestorableTile@AppRestore@Shell@Internal@Windows@winrt@@@6@@Z
    void CreateFromRestorableTiles(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholdersForProgrammableTiles@PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXU?$array_view@$$CBUJsonObject@Json@Data@Windows@winrt@@@6@AEBUhstring@6@@Z
    void CreatePlaceholdersForProgrammableTiles(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Migrate@PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXAEBUhstring@6@0@Z
    void Migrate(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveForRestorableTile@PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@QEAAXAEBUhstring@6@AEBW4RestorableTileRemovedKind@AppRestore@4Internal@Windows@6@@Z
    void RemoveForRestorableTile(WindissectOpaque const &, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~PlaceholderTileManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTileActivationInvariants@PlaceholderTileManager@factory_implementation@UnifiedTile@Shell@WindowsInternal@winrt@@AEAAXAEBURestorableTile@AppRestore@4Internal@Windows@6@AEBW4ClickAction@849Windows@6@@Z
    void CheckTileActivationInvariants(WindissectOpaque const &, int const &);
};
} // namespace winrt::WindowsInternal::Shell::UnifiedTile::factory_implementation
