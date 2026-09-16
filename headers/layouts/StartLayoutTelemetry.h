#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 1 member(s).
class StartLayoutTelemetry {
public:
    class DefaultLayoutManager_DoesApplicationAppearInStart;
    class InitializingStartLayout;
    class RetailDemoCollectionProvider;
    class WritingStartLayoutToStorage;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedTileIdentifier@StartLayoutTelemetry@@CA?AVHString@Wrappers@WRL@Microsoft@@AEAVLayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    static ::Microsoft::WRL::Wrappers::HString GetSerializedTileIdentifier(WindissectOpaque &);
};
