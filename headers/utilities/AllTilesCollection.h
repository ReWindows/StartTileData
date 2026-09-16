#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class AllTilesCollection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    AllTilesCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTilesRecursive@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVUnifiedTile@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllTilesRecursive(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainers@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetContainers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataManager@DataStoreCache@@PEAUIUnifiedTileManager@234@W4FilterKind@1234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContentsChanged@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContentsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionId@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CollectionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedCollectionInfo@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileCollection@CuratedTileCollections@234@@Z
    virtual long get_CuratedCollectionInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedGroupInfo@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@CuratedTileCollections@234@@Z
    virtual long get_CuratedGroupInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContentsChanged@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContentsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeTile@AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@AEBA_NPEAUIUnifiedTile@234@@Z
    bool ShouldIncludeTile(WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllTilesCollection@UnifiedTile@Shell@WindowsInternal@@EEAA@XZ
    virtual ~AllTilesCollection();
};
} // namespace WindowsInternal::Shell::UnifiedTile
