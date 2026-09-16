#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 21 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileIdentifierExtractorFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractFromStorageItem@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStorageItem@Storage@Windows@@PEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long ExtractFromStorageItem(::Windows::Storage::IStorageItem *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractFromTileStoreTileUniqueId@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAPEAUIUnifiedTileIdentifier@234@@Z
    virtual long ExtractFromTileStoreTileUniqueId(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileIdentifierExtractorFactory@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell::UnifiedTile
