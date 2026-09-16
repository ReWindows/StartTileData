#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 27 member(s).
namespace WindowsInternal::Shell::LauncherPolicy {
class LauncherPolicyFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@PEAPEAUILauncherPolicy@234@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::WindowsInternal::Shell::LauncherPolicy::ILauncherPolicy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherPolicyFactory@LauncherPolicy@Shell@WindowsInternal@@UEAA@XZ
    virtual ~LauncherPolicyFactory();
};
} // namespace WindowsInternal::Shell::LauncherPolicy
