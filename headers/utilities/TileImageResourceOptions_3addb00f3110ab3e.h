#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 29 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileImageResourceOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileImageResourceOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contrast@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceContrast@234@@Z
    virtual long get_Contrast(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleFactor@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_ScaleFactor(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallLogoAlternateForm@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceAlternateForm@234@@Z
    virtual long get_SmallLogoAlternateForm(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetSize@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_TargetSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetSizeAlternateForm@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_TargetSizeAlternateForm(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Theme@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceTheme@234@@Z
    virtual long get_Theme(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Contrast@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJW4TileImageResourceContrast@234@@Z
    virtual long put_Contrast(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleFactor@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_ScaleFactor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SmallLogoAlternateForm@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJW4TileImageResourceAlternateForm@234@@Z
    virtual long put_SmallLogoAlternateForm(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetSize@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_TargetSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetSizeAlternateForm@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_TargetSizeAlternateForm(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Theme@TileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJW4TileImageResourceTheme@234@@Z
    virtual long put_Theme(int);
};
} // namespace WindowsInternal::Shell::UnifiedTile
