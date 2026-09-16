#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 30 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CuratedCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainer@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileCollectionContainer@234@@Z
    virtual long AddContainer(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICollectionTile@234@@Z
    virtual long AddTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedCollection@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTilesRecursive@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVUnifiedTile@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllTilesRecursive(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionOptions@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAA?AW4CollectionOptions@234@XZ
    virtual int GetCollectionOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAUITileCollectionContainer@234@@Z
    virtual long GetContainer(_GUID const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainers@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetContainers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAUICollectionTile@234@@Z
    virtual long GetTile(_GUID const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeContentsChangedEventSource@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIContentsChangedEventArgs@234@@Z
    virtual long InvokeContentsChangedEventSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokePropertiesChangedEventSource@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIInspectable@@@Z
    virtual long InvokePropertiesChangedEventSource(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContainer@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveContainer(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveTile(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUICuratedTileCollectionTransformer@CuratedTileCollectionTransformer@DataStoreCache@@PEAUHSTRING__@@PEAUIUnifiedTileManager@234@W4CollectionOptions@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTileByUnifiedTileIdRecursive@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAUIUnifiedTileIdentifier@234@PEAPEAUICollectionTile@234@PEAPEAUITileCollectionContainer@234@@Z
    virtual bool TryFindTileByUnifiedTileIdRecursive(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContentsChanged@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContentsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionId@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CollectionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedCollectionInfo@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileCollection@CuratedTileCollections@234@@Z
    virtual long get_CuratedCollectionInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedGroupInfo@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@CuratedTileCollections@234@@Z
    virtual long get_CuratedGroupInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContentsChanged@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContentsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedCollection();
};
} // namespace WindowsInternal::Shell::UnifiedTile
