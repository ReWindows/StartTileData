#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 36 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class SimpleContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCollectionTile@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAAJAEBVDataItemIdentifier@DataStoreCache@@PEAVCollectionTile@234@_N@Z
    long AddCollectionTile(WindissectOpaque const &, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataItem@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataItem@DataStoreCache@@_N@Z
    long AddDataItem(WindissectOpaque *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionTile@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEBAJAEBVDataItemIdentifier@DataStoreCache@@PEAPEAVCollectionTile@234@@Z
    long GetCollectionTile(WindissectOpaque const &, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainers@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetContainers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCollectionTile@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEBA_NAEBVDataItemIdentifier@DataStoreCache@@@Z
    bool HasCollectionTile(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeContentsChanged@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIContentsChangedEventArgs@234@@Z
    long InvokeContentsChanged(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCollectionTile@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAAJAEBVDataItemIdentifier@DataStoreCache@@_NPEAPEAVCollectionTile@234@@Z
    long RemoveCollectionTile(WindissectOpaque const &, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUITileCollectionContainer@234@PEAUIUnifiedTileManager@234@PEAUHSTRING__@@2@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, HSTRING__*, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    SimpleContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@QEBAIXZ
    unsigned int Size() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContentsChanged@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContentsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedGroupInfo@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@CuratedTileCollections@234@@Z
    virtual long get_CuratedGroupInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContentsChanged@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContentsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SimpleContainer@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~SimpleContainer();
};
} // namespace WindowsInternal::Shell::UnifiedTile
