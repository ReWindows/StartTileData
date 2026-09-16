#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 54 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class StartGlobalProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisiblePlaces@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@U_GUID@@@Collections@Foundation@Windows@@@Z
    virtual long GetVisiblePlaces(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAXPEAUIDataManager@DataStoreCache@@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAXW4DataStoreCacheInit@DataStoreCache@@@Z
    virtual void SetInitializationStage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisiblePlaces@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@Windows@@@Z
    virtual long SetVisiblePlaces(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    StartGlobalProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertiesChanged@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVStartGlobalProperties@CDSProperties@Shell@WindowsInternal@@PEAVStartGlobalPropertiesChangedArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertiesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreenMode@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_FullScreenMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideAppList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_HideAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideFrequentList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_HideFrequentList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideRecentList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_HideRecentList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacesInitialized@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_PlacesInitialized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacesInitializedVersion@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_PlacesInitializedVersion(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartMenuRelativeHeightPixels@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_StartMenuRelativeHeightPixels(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartViewRestoring@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_StartViewRestoring(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FullScreenMode@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_FullScreenMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideAppList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_HideAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideFrequentList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_HideFrequentList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideRecentList@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_HideRecentList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacesInitialized@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_PlacesInitialized(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacesInitializedVersion@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_PlacesInitializedVersion(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartMenuRelativeHeightPixels@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_StartMenuRelativeHeightPixels(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartViewRestoring@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_StartViewRestoring(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertiesChanged@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertiesChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@UEAA@XZ
    virtual ~StartGlobalProperties();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalProperties@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAXPEAULocalStartGlobalProperties@UnifiedTile@Data@Windows@@@Z
    void GetLocalProperties(::Windows::Data::UnifiedTile::LocalStartGlobalProperties *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoamedProperties@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAXPEAU1UnifiedTile@Data@Windows@@@Z
    void GetRoamedProperties(::Windows::Data::UnifiedTile::StartGlobalProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalPropertiesChangeHandler@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAJAEBULocalStartGlobalProperties@UnifiedTile@Data@Windows@@@Z
    long LocalPropertiesChangeHandler(::Windows::Data::UnifiedTile::LocalStartGlobalProperties const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoamedPropertiesChangeHandler@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAJAEBU1UnifiedTile@Data@Windows@@@Z
    long RoamedPropertiesChangeHandler(::Windows::Data::UnifiedTile::StartGlobalProperties const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalProperties@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAJAEBULocalStartGlobalProperties@UnifiedTile@Data@Windows@@@Z
    long SetLocalProperties(::Windows::Data::UnifiedTile::LocalStartGlobalProperties const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoamedProperties@StartGlobalProperties@CDSProperties@Shell@WindowsInternal@@AEAAJAEBU1UnifiedTile@Data@Windows@@@Z
    long SetRoamedProperties(::Windows::Data::UnifiedTile::StartGlobalProperties const &);
};
} // namespace WindowsInternal::Shell::CDSProperties
