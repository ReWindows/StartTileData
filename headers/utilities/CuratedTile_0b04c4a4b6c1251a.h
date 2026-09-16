#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 48 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedTile {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedTile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetCustomProperty(HSTRING__* const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomProperty@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAE@Z
    virtual long HasCustomProperty(HSTRING__* const, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCustomProperty@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@@Z
    virtual long RemoveCustomProperty(HSTRING__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomProperty@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAU6@@Z
    virtual long SetCustomProperty(HSTRING__* const, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Identifier@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUnifiedTileIdentifier@345@@Z
    virtual long get_Identifier(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Location@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Location(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueId@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_UniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Location@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Location(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_Size(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CuratedTile();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
