#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class LocalXmlStartCollectionProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderLoggingName@LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEBGXZ
    virtual unsigned short const * GetProviderLoggingName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultLayoutOverrideStream@LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStream@@@Z
    virtual long SetDefaultLayoutOverrideStream(IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~LocalXmlStartCollectionProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDefaultLayoutsParsedIfExistsAndValid@LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long EnsureDefaultLayoutsParsedIfExistsAndValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindows8UpgradeChecked@LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void EnsureWindows8UpgradeChecked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXMLStreamFromStartUISettings@LocalXmlStartCollectionProvider@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAPEAUIStream@@@Z
    long GetXMLStreamFromStartUISettings(IStream * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
