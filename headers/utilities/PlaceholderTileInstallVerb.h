#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache::PlaceholderTileTransformer::Internal {
class PlaceholderTileInstallVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@PlaceholderTileInstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAAJPEAUIVerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PlaceholderTileInstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAUIPlaceholderTileTransformer@34@PEAUIVerbEnumerationArgs@678@PEAUIVerbStringHelperStatics@Private@678@PEAUHSTRING__@@4@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileInstallVerb@Internal@PlaceholderTileTransformer@DataStoreCache@@UEAA@XZ
    virtual ~PlaceholderTileInstallVerb();
};
} // namespace DataStoreCache::PlaceholderTileTransformer::Internal
