#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 31 member(s).
namespace DataStoreCache {
class AppUsageTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUsageTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUsageTransformer@DataStoreCache@@QEAA@PEAUIDataManager@1@W4AppUsageFeatures@1@PEAUIUser@System@Windows@@PEAUICDSTilePropertiesBatched@CDSProperties@Shell@WindowsInternal@@@Z
    AppUsageTransformer(WindissectOpaque *, int, ::Windows::System::IUser *, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@AppUsageTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUsageTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUsageTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUsageTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUsageTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUsageTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@AppUsageTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@AppUsageTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileActivated@AppUsageTransformer@DataStoreCache@@UEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long TileActivated(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageTransformer@DataStoreCache@@UEAA@XZ
    virtual ~AppUsageTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAppUsagePropertiesDefault@AppUsageTransformer@DataStoreCache@@CA_NPEAUICDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@@Z
    static bool AreAppUsagePropertiesDefault(::WindowsInternal::Shell::CDSProperties::ICDSLocalVolatileTileProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAppUsagePropertiesEqual@AppUsageTransformer@DataStoreCache@@CA_NPEAUICDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@0@Z
    static bool AreAppUsagePropertiesEqual(::WindowsInternal::Shell::CDSProperties::ICDSLocalVolatileTileProperties *, ::WindowsInternal::Shell::CDSProperties::ICDSLocalVolatileTileProperties *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdhocMode@AppUsageTransformer@DataStoreCache@@AEAA_NXZ
    bool IsAdhocMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppResolverPresent@AppUsageTransformer@DataStoreCache@@CA_NXZ
    static bool IsAppResolverPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLocalVolatileTilePropertiesChanged@AppUsageTransformer@DataStoreCache@@AEAAJPEAUICDSTilePropertiesBatchedChangedArgs@CDSProperties@Shell@WindowsInternal@@@Z
    long OnLocalVolatileTilePropertiesChanged(::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatchedChangedArgs *);
};
} // namespace DataStoreCache
