#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 49 member(s).
class AppInstallBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallBroker@@QEAA@XZ
    AppInstallBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePlaceholderLogoFile@AppInstallBroker@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeletePlaceholderLogoFile(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePlaceholderTileLogoFolder@AppInstallBroker@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeletePlaceholderTileLogoFolder(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePlaceholderLogoFolder@AppInstallBroker@@UEAAJXZ
    virtual long EnsurePlaceholderLogoFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataFromStore@AppInstallBroker@@UEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@345@@Z
    virtual long GetAppDataFromStore(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppsSize@AppInstallBroker@@UEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@_K@345@@Z
    virtual long GetAppsSize(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiskSpaceInBytes@AppInstallBroker@@UEAAJPEA_K0@Z
    virtual long GetDiskSpaceInBytes(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppWithPackageFamilyName@AppInstallBroker@@UEAAJPEAUHSTRING__@@000W4InstallOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@W4EntitlementOptions@4567@@Z
    virtual long InstallAppWithPackageFamilyName(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppWithProductId@AppInstallBroker@@UEAAJPEAUHSTRING__@@0000W4InstallOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@W4EntitlementOptions@4567@@Z
    virtual long InstallAppWithProductId(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppsInBatch@AppInstallBroker@@UEAAJPEAUHSTRING__@@0W4EntitlementOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@9Foundation@Windows@@@Z
    virtual long InstallAppsInBatch(HSTRING__*, HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppsInBatchWithPackageFamilyName@AppInstallBroker@@UEAAJPEAUHSTRING__@@0W4EntitlementOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@9Foundation@Windows@@@Z
    virtual long InstallAppsInBatchWithPackageFamilyName(HSTRING__*, HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppInstallBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppInstallBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppInInstallQueue@AppInstallBroker@@UEAAJPEAUHSTRING__@@EPEAE@Z
    virtual long IsAppInInstallQueue(HSTRING__*, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveAppInstallToFrontOfQueue@AppInstallBroker@@UEAAJPEAUHSTRING__@@0@Z
    virtual long MoveAppInstallToFrontOfQueue(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFileToPlaceholderLogoFolder@AppInstallBroker@@UEAAJPEAUHSTRING__@@0PEAPEAU2@@Z
    virtual long MoveFileToPlaceholderLogoFolder(HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallBroker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallAppForUser@AppInstallBroker@@UEAAJPEAUHSTRING__@@PEAUIUser@System@Windows@@@Z
    virtual long UninstallAppForUser(HSTRING__*, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallPackageForUser@AppInstallBroker@@UEAAJPEAUHSTRING__@@PEAUIUser@System@Windows@@@Z
    virtual long UninstallPackageForUser(HSTRING__*, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppInstallWithPackageFamilyName@AppInstallBroker@@UEAAJPEAUHSTRING__@@0W4AppInstallOperation@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long UpdateAppInstallWithPackageFamilyName(HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppInstallWithProductId@AppInstallBroker@@UEAAJPEAUHSTRING__@@0W4AppInstallOperation@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long UpdateAppInstallWithProductId(HSTRING__*, HSTRING__*, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallBroker@@UEAA@XZ
    virtual ~AppInstallBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPackageFamilyNameToProductId@AppInstallBroker@@AEAAJPEAUHSTRING__@@0PEAPEAU2@@Z
    long ConvertPackageFamilyNameToProductId(HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataFromStoreHelper@AppInstallBroker@@AEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAUIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@5@PEAPEAU?$IVectorView@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@345@@Z
    long GetAppDataFromStoreHelper(WindissectOpaque *, ::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstallManager@AppInstallBroker@@AEAAJPEAPEAUIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z
    long GetAppInstallManager(::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentIdAndKeyIdFromProductId@AppInstallBroker@@AEAAJPEAUHSTRING__@@0PEAPEAU2@1@Z
    long GetContentIdAndKeyIdFromProductId(HSTRING__*, HSTRING__*, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicenseSatisfactionResult@AppInstallBroker@@AEAAJPEAUHSTRING__@@0PEAPEAUILicenseSatisfactionResult@LicenseManagement@Store@ApplicationModel@Windows@@@Z
    long GetLicenseSatisfactionResult(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAppsInBatchHelper@AppInstallBroker@@AEAAJPEAUHSTRING__@@0W4EntitlementOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAUIAppManager@ContentManagement@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@9Foundation@Windows@@@Z
    long InstallAppsInBatchHelper(HSTRING__*, HSTRING__*, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStoreAppFree@AppInstallBroker@@AEAAJPEAUHSTRING__@@PEAE@Z
    long IsStoreAppFree(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformAppInstallPrecheck@AppInstallBroker@@AEAAJPEAUHSTRING__@@0000W4EntitlementOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAUIAppManager@ContentManagement@@@Z
    long PerformAppInstallPrecheck(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrecheckAndInstallApp@AppInstallBroker@@AEAAJPEAUHSTRING__@@0000PEAUIAppManager@ContentManagement@@W4InstallOptions@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@W4EntitlementOptions@6789@@Z
    long PrecheckAndInstallApp(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallPackageForUserImpl@AppInstallBroker@@AEAAJPEAUHSTRING__@@PEAUIUser@System@Windows@@@Z
    long UninstallPackageForUserImpl(HSTRING__*, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppInstallWithProductIdImpl@AppInstallBroker@@AEAAJPEAUHSTRING__@@W4AppInstallOperation@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    long UpdateAppInstallWithProductIdImpl(HSTRING__*, int);
};
