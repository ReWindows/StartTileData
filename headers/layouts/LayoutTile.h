#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal {
class LayoutTile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AUtagPOINT@@XZ
    tagPOINT GetLocation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA?AUtagSIZE@@XZ
    tagSIZE GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileType@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA?BW4LayoutTileType@23456@XZ
    int GetTileType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA?AU_GUID@@XZ
    _GUID GetUniqueId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEBUtagPOINT@@@Z
    void SetLocation(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEBUtagSIZE@@@Z
    void SetSize(tagSIZE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTileIdentifier@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEAUIUnifiedTileIdentifier@456@@Z
    void UpdateTileIdentifier(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~LayoutTile();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAA@PEAUIUnifiedTileIdentifier@345@W4LayoutTileType@12345@@Z
    LayoutTile(WindissectOpaque *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@IEAA@XZ
    LayoutTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageFamilyName@LayoutTile@Internal@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUIUnifiedTileIdentifier@456@@Z
    void EnsurePackageFamilyName(WindissectOpaque *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Internal
