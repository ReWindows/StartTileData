#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace DataStoreCache::PlaceholderTileTransformer {
class PlaceholderTileMigrationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTileMigration@PlaceholderTileMigrationManager@PlaceholderTileTransformer@DataStoreCache@@QEAAXPEBG0@Z
    void AddTileMigration(unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTileMigrationManager@PlaceholderTileTransformer@DataStoreCache@@QEAA@XZ
    PlaceholderTileMigrationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileMigrated@PlaceholderTileMigrationManager@PlaceholderTileTransformer@DataStoreCache@@QEAA?AUevent_token@winrt@@U?$TypedEventHandler@UITileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@winrt@@UTileMigratedEventArgs@2345@@Foundation@Windows@5@@Z
    WindissectOpaque TileMigrated(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileMigrationManager@PlaceholderTileTransformer@DataStoreCache@@UEAA@XZ
    virtual ~PlaceholderTileMigrationManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMigrationsToRegistry@PlaceholderTileMigrationManager@PlaceholderTileTransformer@DataStoreCache@@AEAAXXZ
    void WriteMigrationsToRegistry();
};
} // namespace DataStoreCache::PlaceholderTileTransformer
