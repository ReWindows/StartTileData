#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 30 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileActivationContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUITileActivationContext@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallerWindow@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long SetCallerWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileActivationContext@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileActivationContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerWindowId@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_CallerWindowId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedContext@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_ExtendedContext(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Options@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4ActivationOptions@234@@Z
    virtual long get_Options(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileNotificationArguments@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_TileNotificationArguments(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CallerWindowId@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_CallerWindowId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtendedContext@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long put_ExtendedContext(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Options@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJW4ActivationOptions@234@@Z
    virtual long put_Options(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileNotificationArguments@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long put_TileNotificationArguments(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@@Z
    virtual long put_User(::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileActivationContext@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileActivationContext();
};
} // namespace WindowsInternal::Shell::UnifiedTile
