#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 33 member(s).
namespace DataStoreCache {
class EdpTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdpTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdpTransformer@DataStoreCache@@QEAA@QEAUIDataManager@1@QEAUIUser@System@Windows@@@Z
    EdpTransformer(WindissectOpaque * const, ::Windows::System::IUser * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@EdpTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdpTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdpTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdpTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdpTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdpTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@EdpTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@EdpTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdpTransformer@DataStoreCache@@UEAA@XZ
    virtual ~EdpTransformer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshItems@EdpTransformer@DataStoreCache@@AEAAXXZ
    void RefreshItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItem@EdpTransformer@DataStoreCache@@AEAAXAEBVDataItemIdentifier@2@_N1@Z
    void UpdateItem(WindissectOpaque const &, bool, bool);
};
} // namespace DataStoreCache
