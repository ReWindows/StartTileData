#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 23 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedTileCollectionOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedTileCollectionOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlockCreationOnAppRegistration@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_BlockCreationOnAppRegistration(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRegisterBackgroundTask@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_CanRegisterBackgroundTask(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasExplicitCreationPermission@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_HasExplicitCreationPermission(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlockCreationOnAppRegistration@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_BlockCreationOnAppRegistration(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanRegisterBackgroundTask@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_CanRegisterBackgroundTask(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasExplicitCreationPermission@CuratedTileCollectionOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_HasExplicitCreationPermission(unsigned char);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
