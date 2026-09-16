#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 38 member(s).
namespace ContentManagement {
class AppManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppManager@ContentManagement@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppManager@ContentManagement@@QEAA@XZ
    AppManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z
    virtual long GetEntitlement(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long GetIsApplicable(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsAppAllowedToInstall(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z
    virtual long IsStoreBlockedByPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z
    virtual long MoveAppInstallToFrontOfQueue(HSTRING__*, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppManager@ContentManagement@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z
    virtual long StartBatchInstalls(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z
    virtual long StartInstall(HSTRING__*, HSTRING__*, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z
    virtual long StartProductInstall(HSTRING__*, HSTRING__*, unsigned char, unsigned char, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProductInstallByStoreId@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE00@Z
    virtual long StartProductInstallByStoreId(HSTRING__*, unsigned char, unsigned char, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z
    virtual long StartProductInstallWithOverrides(HSTRING__*, unsigned char, unsigned char, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z
    virtual long StartRestore(HSTRING__*, HSTRING__*, HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z
    virtual long UninstallApp(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppManager@ContentManagement@@UEAA@XZ
    virtual ~AppManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z
    long ConvertFromStoreRecords(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z
    long ConvertToStoreRecords(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z
    long GetAppInstallManager(::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z
    long GetEntitlementInternal(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, HSTRING__*);
};
} // namespace ContentManagement
