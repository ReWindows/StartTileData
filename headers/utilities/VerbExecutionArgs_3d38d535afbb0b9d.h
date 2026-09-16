#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 27 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class VerbExecutionArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallerWindow@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long SetCallerWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    VerbExecutionArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerWindowId@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_CallerWindowId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyModifiers@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_KeyModifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegenerateEnvironmentVariables@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_RegenerateEnvironmentVariables(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CallerWindowId@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_CallerWindowId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyModifiers@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long put_KeyModifiers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RegenerateEnvironmentVariables@VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_RegenerateEnvironmentVariables(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~VerbExecutionArgs();
};
} // namespace WindowsInternal::Shell::UnifiedTile
