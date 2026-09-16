#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 14 member(s).
class StoreEventListenerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleted@StoreEventListenerImpl@@UEAAJPEAUIUnknown@@0@Z
    virtual long OnCompleted(IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@StoreEventListenerImpl@@UEAAJPEAUIUnknown@@0@Z
    virtual long OnProgress(IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StoreEventListenerImpl@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StoreEventListenerImpl@@QEAA@XZ
    StoreEventListenerImpl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreEventListenerImpl@@UEAA@XZ
    virtual ~StoreEventListenerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceholderTile@StoreEventListenerImpl@@AEAAXPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallItem@3WindowsUpdate@@@Z
    void CreatePlaceholderTile(::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *, ::WindowsUpdate::Internal::IInstallItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStateRepositoryStatics@StoreEventListenerImpl@@AEAAXPEAPEAUIApplicationStatics@StateRepository@Internal@Windows@@PEAPEAUIPrimaryTileViewStatics@345@@Z
    void EnsureStateRepositoryStatics(::Windows::Internal::StateRepository::IApplicationStatics * *, ::Windows::Internal::StateRepository::IPrimaryTileViewStatics * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrackedByIdentity@StoreEventListenerImpl@@AEAA_NPEBG@Z
    bool IsTrackedByIdentity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishAppLifecycleWnfState@StoreEventListenerImpl@@AEAAXPEBGW4AppInstallStateTrigger@Triggers@CreativeFramework@@@Z
    void PublishAppLifecycleWnfState(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishAppLifecycleWnfStateIfNecessary@StoreEventListenerImpl@@AEAAXPEBG0AEBU_WNF_STATE_NAME@@@Z
    void PublishAppLifecycleWnfStateIfNecessary(unsigned short const *, unsigned short const *, _WNF_STATE_NAME const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePlaceholdertile@StoreEventListenerImpl@@AEAAXPEAUHSTRING__@@PEAUIInstallItem@Internal@WindowsUpdate@@@Z
    void RemovePlaceholdertile(HSTRING__*, ::WindowsUpdate::Internal::IInstallItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIsVisibleInAppList@StoreEventListenerImpl@@AEAAJ_KPEAUHSTRING__@@PEA_N@Z
    long TryGetIsVisibleInAppList(uint64_t, HSTRING__*, bool *);
};
