#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 25 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class CuratedContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainer@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileCollectionContainer@234@@Z
    virtual long AddContainer(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICollectionTile@234@@Z
    virtual long AddTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedContainer@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAUITileCollectionContainer@234@@Z
    virtual long GetContainer(_GUID const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainers@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetContainers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAUICollectionTile@234@@Z
    virtual long GetTile(_GUID const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeContentsChangedEventSource@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIContentsChangedEventArgs@234@@Z
    virtual long InvokeContentsChangedEventSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokePropertiesChangedEventSource@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIInspectable@@@Z
    virtual long InvokePropertiesChangedEventSource(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContainer@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveContainer(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveTile(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTileByUnifiedTileIdRecursive@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAUIUnifiedTileIdentifier@234@PEAPEAUICollectionTile@234@PEAPEAUITileCollectionContainer@234@@Z
    virtual bool TryFindTileByUnifiedTileIdRecursive(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContentsChanged@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContentsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedGroupInfo@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@CuratedTileCollections@234@@Z
    virtual long get_CuratedGroupInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContentsChanged@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContentsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedContainer@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedContainer();
};
} // namespace WindowsInternal::Shell::UnifiedTile
