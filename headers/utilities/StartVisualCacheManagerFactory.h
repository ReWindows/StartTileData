#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 26 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheManagerFactory {
public:
    class CacheInstanceReaderData;
    class CacheInstanceWriterData;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllAppsListContent@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStartVisualCacheManager@2345@U_GUID@@@Z
    virtual long DeleteAllAppsListContent(WindissectOpaque *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePinnedAppsContent@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStartVisualCacheManager@2345@U_GUID@@@Z
    virtual long DeletePinnedAppsContent(WindissectOpaque *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppSpaceEntryToReUse@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStartVisualCache@2345@U_GUID@@W4VisualCacheAppspaceType@2345@IPEAI@Z
    virtual long FindAppSpaceEntryToReUse(WindissectOpaque *, _GUID, int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingAppSpaceEntry@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStartVisualCacheManager@2345@U_GUID@@W4VisualCacheAppspaceType@2345@IPEAIPEAE3@Z
    virtual long FindExistingAppSpaceEntry(WindissectOpaque *, _GUID, int, unsigned int, unsigned int *, unsigned char *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMostRecentNotification@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIStartVisualCacheManager@2345@U_GUID@@W4VisualCacheAppspaceType@2345@PEAEPEAI@Z
    virtual long FindMostRecentNotification(WindissectOpaque *, _GUID, int, unsigned char *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@IW4TileThemeSelector@2345@W4VisualCacheOptions@2345@PEAPEAUIStartVisualCacheManager@2345@@Z
    virtual long GetInstance(::Windows::System::IUser *, HSTRING__*, unsigned int, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteContent@StartVisualCacheManagerFactory@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJU_GUID@@W4VisualCacheContentType@2345@AEBUCacheInstanceWriterData@12345@@Z
    long DeleteContent(_GUID, int, WindissectOpaque const &);
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
