#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class ContentsChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ContentsChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUITileCollectionContainer@234@0PEAUICollectionTile@234@1@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddedContainers@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_AddedContainers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddedTiles@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_AddedTiles(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedContainers@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedContainers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedTiles@ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedTiles(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~ContentsChangedEventArgs();
};
} // namespace WindowsInternal::Shell::UnifiedTile
