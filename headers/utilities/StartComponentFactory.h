#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace WindowsInternal::Shell {
class StartComponentFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartComponentFactory@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@StartComponentFactory@Shell@WindowsInternal@@UEAAJPEAUIInspectable@@E@Z
    virtual long Disconnect(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartComponentFactory@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartComponentFactory@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartComponentFactory@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StartComponentFactory@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StartComponentFactory@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@StartComponentFactory@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@1PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@89@@Z
    virtual long LaunchAsync(HSTRING__*, HSTRING__*, IInspectable *, IInspectable *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartComponentFactory@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartComponentFactory@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace WindowsInternal::Shell
