#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 19 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileMigrationEventSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@QEAAJ_KPEAUIPlaceholderTileTransformer@PlaceholderTileTransformer@DataStoreCache@@@Z
    long RuntimeClassInitialize(uint64_t, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileMigrationEventSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TileMigrated@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAUITileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@PEAVTileMigratedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TileMigrated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TileMigrated@TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TileMigrated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileMigrationEventSource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileMigrationEventSource();
};
} // namespace WindowsInternal::Shell::UnifiedTile
