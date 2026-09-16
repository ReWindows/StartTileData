#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 34 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class PlaceholderTileImageResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJNUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@67@@Z
    virtual long LoadAsync(double, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsync@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long LoadWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    PlaceholderTileImageResource();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWithOptionsAsync@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolveWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachingId@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_CachingId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContrastExemptForStandardContrast@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContrastExemptForStandardContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntrinsicallyUnplated@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsIntrinsicallyUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThemeOrContrastAware@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsThemeOrContrastAware(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnresolvedPath@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnresolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesTargetSize@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_UsesTargetSize(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~PlaceholderTileImageResource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternal@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@AEBAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long LoadInternal(::Windows::Storage::Streams::IRandomAccessStream * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsyncInternal@PlaceholderTileImageResource@UnifiedTile@Shell@WindowsInternal@@AEAAJ_NPEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    long LoadWithOptionsAsyncInternal(bool, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
