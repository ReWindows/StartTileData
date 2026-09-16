#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 34 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class DesktopIconImageResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    DesktopIconImageResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJNUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@67@@Z
    virtual long LoadAsync(double, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsync@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long LoadWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWithOptionsAsync@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolveWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachingId@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_CachingId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContrastExemptForStandardContrast@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContrastExemptForStandardContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntrinsicallyUnplated@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsIntrinsicallyUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThemeOrContrastAware@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsThemeOrContrastAware(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnresolvedPath@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnresolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesTargetSize@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_UsesTargetSize(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~DesktopIconImageResource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternal@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@AEBAJAEBUSize@Foundation@Windows@@PEAPEAUIRandomAccessStream@Streams@Storage@7@@Z
    long LoadInternal(WindissectOpaque const &, ::Windows::Storage::Streams::IRandomAccessStream * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsyncInternal@DesktopIconImageResource@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUITileImageResourceOptions@234@_NPEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    long LoadWithOptionsAsyncInternal(WindissectOpaque *, bool, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
