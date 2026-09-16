#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 46 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class AppsListGeneratedCollection {
public:
    class SuiteHasher;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    AppsListGeneratedCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCuratedCollectionBatch@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedCollectionBatch@234@@Z
    virtual long CreateCuratedCollectionBatch(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTilesRecursive@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVUnifiedTile@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllTilesRecursive(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainers@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetContainers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiles@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetTiles(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIDataManager@DataStoreCache@@PEAUHSTRING__@@PEAUIUnifiedTileManager@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContentsChanged@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContentsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionId@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CollectionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedCollectionInfo@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileCollection@CuratedTileCollections@234@@Z
    virtual long get_CuratedCollectionInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CuratedGroupInfo@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUICuratedTileGroup@CuratedTileCollections@234@@Z
    virtual long get_CuratedGroupInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUITileCollectionContainer@234@@Z
    virtual long get_ParentContainer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortName@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContentsChanged@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContentsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContainerForTile@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@AEAAJAEBVDataItemIdentifier@DataStoreCache@@PEAUIUnifiedTile@234@PEAPEAVSimpleContainer@234@PEA_N@Z
    long EnsureContainerForTile(WindissectOpaque const &, WindissectOpaque *, WindissectOpaque * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTileContainer@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@AEBAJAEBVDataItemIdentifier@DataStoreCache@@PEAPEAVSimpleContainer@234@PEAPEAVCollectionTile@234@@Z
    long FindTileContainer(WindissectOpaque const &, WindissectOpaque * *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTilesFromSuite@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAVUnifiedTile@2Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAU?$IVector@PEAVUnifiedTile@1Shell@WindowsInternal@@@678@PEAUITileCollectionContainer@234@@Z
    static long GetTilesFromSuite(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTileFromContainer@AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@AEAAJAEBVDataItemIdentifier@DataStoreCache@@PEAVSimpleContainer@234@@Z
    long RemoveTileFromContainer(WindissectOpaque const &, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppsListGeneratedCollection@UnifiedTile@Shell@WindowsInternal@@EEAA@XZ
    virtual ~AppsListGeneratedCollection();
};
} // namespace WindowsInternal::Shell::UnifiedTile
