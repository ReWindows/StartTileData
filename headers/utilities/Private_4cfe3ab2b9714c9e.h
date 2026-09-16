#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 1 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class Private {
public:
    class LiteTaskbarPinUnpinTileVerb;
    class SettingsUninstallVerb;
    class SettingsVerb;
    class StartPinUnpinTileVerb;
    class StorageItemVerbProvider;
    class TileActivateVerb;
    class TileShellItemVerb;
    class TileUninstallVerb;
    class TileVerbGroup;
    class TileVerbSeparator;
    class TileVerbWrapper;
    class UnifiedTilePinUnpinVerbProvider;
    class UnifiedTileUserPinHelperFactory;
    class VerbStringHelper;
    class WinStoreVerb;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyVerbEnumerationArgs@Private@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIVerbEnumerationArgs@234@PEAPEAU5234@@Z
    long CopyVerbEnumerationArgs(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
