#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
class SecondaryTileFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileFactory@@QEAA@PEAUIDataItemCollection@DataStoreCache@@PEAUIPlaceholderTileTransformer@PlaceholderTileTransformer@2@@Z
    SecondaryTileFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileFactory@@QEAA@XZ
    ~SecondaryTileFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFactories@SecondaryTileFactory@@AEAAXXZ
    void EnsureFactories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateSecondaryTile@SecondaryTileFactory@@AEAAJPEAVPlaceholderTile@PlaceholderTileTransformer@DataStoreCache@@PEAUHSTRING__@@1PEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long RecreateSecondaryTile(WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque *);
};
