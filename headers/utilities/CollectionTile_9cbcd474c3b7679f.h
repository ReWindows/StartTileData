#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CollectionTile {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CollectionTile@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CollectionTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CollectionTile@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUnifiedTile@234@PEAUITileCollectionContainer@234@PEAUIUnifiedTileManager@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedTileInfo@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTile@CuratedTileCollections@234@@Z
    virtual long get_CuratedTileInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tile@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTile@234@@Z
    virtual long get_Tile(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIVerbSource@234@@Z
    virtual long get_Verbs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionTile@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CollectionTile();
};
} // namespace WindowsInternal::Shell::UnifiedTile
