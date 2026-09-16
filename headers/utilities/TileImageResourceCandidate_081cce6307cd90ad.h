#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TileImageResourceCandidate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@QEAAJW4TileImageResourceContrast@234@W4TileImageResourceTheme@234@W4TileImageResourceAlternateForm@234@PEAUIRandomAccessStream@Streams@Storage@Windows@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(int, int, int, ::Windows::Storage::Streams::IRandomAccessStream *, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileImageResourceCandidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlternateForm@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceAlternateForm@234@@Z
    virtual long get_AlternateForm(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contrast@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceContrast@234@@Z
    virtual long get_Contrast(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadedImage@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long get_LoadedImage(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResolvedPath@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Theme@TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileImageResourceTheme@234@@Z
    virtual long get_Theme(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileImageResourceCandidate();
};
} // namespace WindowsInternal::Shell::UnifiedTile
