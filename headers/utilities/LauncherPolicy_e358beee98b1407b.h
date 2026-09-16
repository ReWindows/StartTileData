#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 32 member(s).
namespace WindowsInternal::Shell::LauncherPolicy {
class LauncherPolicy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LauncherPolicy@1Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartPlacePolicy@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAW4StartPlacePolicy@123@@Z
    virtual long GetStartPlacePolicy(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherPolicy@0Shell@WindowsInternal@@QEAA@XZ
    LauncherPolicy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LauncherPolicy@1Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LauncherPolicy@1Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LauncherPolicy@1Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceStartSizePolicy@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAW4ForceStartSizePolicy@123@@Z
    virtual long get_ForceStartSizePolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrequentAppsPolicy@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAW4FrequentAppsPolicy@123@@Z
    virtual long get_FrequentAppsPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideAppListPolicy@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAW4HideAppListPolicy@123@@Z
    virtual long get_HideAppListPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContextMenuInvocationDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContextMenuInvocationDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLauncherCustomizationDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsLauncherCustomizationDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLauncherCustomizationDisabledPolicySet@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsLauncherCustomizationDisabledPolicySet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLayoutOverrideGroupCustomizationDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsLayoutOverrideGroupCustomizationDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPersonalizedStartDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsPersonalizedStartDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPinningJumpListsDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsPinningJumpListsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRecentJumpListsDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsRecentJumpListsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRecentlyAddedAppsListDisabled@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsRecentlyAddedAppsListDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartLayoutGroupPolicyScope@LauncherPolicy@1Shell@WindowsInternal@@UEAAJPEAW4StartLayoutGroupPolicyScope@123@@Z
    virtual long get_StartLayoutGroupPolicyScope(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherPolicy@0Shell@WindowsInternal@@UEAA@XZ
    virtual ~LauncherPolicy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLauncherCustomizationDisabledPolicySetInternal@LauncherPolicy@1Shell@WindowsInternal@@CA_NXZ
    static bool IsLauncherCustomizationDisabledPolicySetInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMdmOrGpPolicyEnforcedForUserOrMachine@LauncherPolicy@1Shell@WindowsInternal@@CAJPEBG0W4PolicyDataType@1123@PEAEPEBU_GUID@@@Z
    static long IsMdmOrGpPolicyEnforcedForUserOrMachine(unsigned short const *, unsigned short const *, int, unsigned char *, _GUID const *);
};
} // namespace WindowsInternal::Shell::LauncherPolicy
