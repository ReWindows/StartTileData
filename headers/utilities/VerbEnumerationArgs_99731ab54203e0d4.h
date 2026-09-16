#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 37 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class VerbEnumerationArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingGroupPath@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsMatchingGroupPath(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingVerbCanonicalName@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsMatchingVerbCanonicalName(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingVerbProviderId@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsMatchingVerbProviderId(HSTRING__*, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    VerbEnumerationArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupPathPrefix@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GroupPathPrefix(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Options@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4VerbEnumerationOptions@234@@Z
    virtual long get_Options(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbCanonicalName@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbCanonicalName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupPathPrefix@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_GroupPathPrefix(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Options@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJW4VerbEnumerationOptions@234@@Z
    virtual long put_Options(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@@Z
    virtual long put_User(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerbCanonicalName@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_VerbCanonicalName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerbProviderId@VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_VerbProviderId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~VerbEnumerationArgs();
};
} // namespace WindowsInternal::Shell::UnifiedTile
