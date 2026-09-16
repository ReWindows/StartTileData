#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache::PlaceholderTileTransformer::Internal {
class PlaceholderTileUninstallVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@PlaceholderTileUninstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PlaceholderTileUninstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAUIPlaceholderTileTransformer@34@PEAUIVerbEnumerationArgs@678@PEAUIVerbStringHelperStatics@Private@678@PEAUHSTRING__@@4@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileUninstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAA@XZ
    virtual ~PlaceholderTileUninstallVerb();
};
} // namespace DataStoreCache::PlaceholderTileTransformer::Internal
