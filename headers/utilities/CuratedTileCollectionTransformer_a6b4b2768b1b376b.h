#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 47 member(s).
namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct::Internal {
class CuratedTileCollectionTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStoredSingletons@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXXZ
    virtual void ClearStoredSingletons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLayoutRoot@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteLayoutRoot(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLayoutRoot@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXPEBG@Z
    virtual void DeleteLayoutRoot(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLayoutRoot@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NPEBG@Z
    virtual bool HasLayoutRoot(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLayoutRoot@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA_NAEBU_GUID@@@Z
    virtual bool HasLayoutRoot(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXPEAUIDataManager@4@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDetectTornContainers@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAX_N@Z
    virtual void SetDetectTornContainers(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXW4DataStoreCacheInit@4@@Z
    virtual void SetInitializationStage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseCommitTimer@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAAXPEBG_N@Z
    virtual void SetUseCommitTimer(unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@UEAA@XZ
    virtual ~CuratedTileCollectionTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRootToCollection@CuratedTileCollectionTransformer@Internal@CuratedTileCollectionTransformer_OneStruct@DataStoreCache@@AEAAXPEBG@Z
    void AddRootToCollection(unsigned short const *);
};
} // namespace DataStoreCache::CuratedTileCollectionTransformer_OneStruct::Internal
