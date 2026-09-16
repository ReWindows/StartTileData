#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class SelectionData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG@Z
    void AddRegionCode(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z
    bool ContainsOfficeSKU(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionSKU@2345@@Z
    bool ContainsSKU(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateLoggingData@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z
    void PopulateLoggingData(WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z
    SelectionData(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~SelectionData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z
    void Copy(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z
    int GetSelectionScore(WindissectOpaque const &);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
