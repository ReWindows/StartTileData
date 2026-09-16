#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 26 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class VerbSourceBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVerbAsync@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAU?$IAsyncOperation@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long FindVerbAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbEnumerationArgs@234@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetVerbsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    VerbSourceBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureArgs@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@IEAAJPEAUIVerbEnumerationArgs@234@PEAPEAU5234@@Z
    long EnsureArgs(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@IEAAJPEAUIUnknown@@@Z
    long RuntimeClassInitialize(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerbSourceBase@UnifiedTile@Shell@WindowsInternal@@MEAA@XZ
    virtual ~VerbSourceBase();
};
} // namespace WindowsInternal::Shell::UnifiedTile
