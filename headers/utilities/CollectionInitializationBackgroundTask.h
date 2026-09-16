#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 31 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CollectionInitializationBackgroundTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CollectionInitializationBackgroundTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFastDelayTaskName@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * GetFastDelayTaskName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLongDelayTaskName@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * GetLongDelayTaskName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediumDelayTaskName@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * GetMediumDelayTaskName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@@Z
    virtual long Run(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CollectionInitializationBackgroundTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractTaskDetails@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@PEAW4PlaceholderTileTaskType@@PEAPEAUIUser@System@9@@Z
    long ExtractTaskDetails(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *, int *, ::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppsIfNecessary@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@W4PlaceholderTileTaskType@@PEAW4InstallDelayType@PlaceholderTileTransformer@DataStoreCache@@@Z
    void InstallAppsIfNecessary(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTilesForPipeline@CollectionInitializationBackgroundTask@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void PopulateTilesForPipeline();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
