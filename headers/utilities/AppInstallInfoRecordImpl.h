#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 29 member(s).
namespace ContentManagement {
class AppInstallInfoRecordImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallInfoRecordImpl@ContentManagement@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ
    AppInstallInfoRecordImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallInfoRecordImpl@ContentManagement@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HResult@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAJ@Z
    virtual long get_HResult(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SkuId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StoreCampaignId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StoreCampaignId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProductId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SkuId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StoreCampaignId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_StoreCampaignId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ
    virtual ~AppInstallInfoRecordImpl();
};
} // namespace ContentManagement
