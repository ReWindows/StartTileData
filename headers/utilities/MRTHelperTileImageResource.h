#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 33 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class MRTHelperTileImageResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJNUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@67@@Z
    virtual long LoadAsync(double, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsync@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long LoadWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWithOptionsAsync@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolveWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIMRTHelper@234@U_GUID@@_KPEAUHSTRING__@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, _GUID, uint64_t, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachingId@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_CachingId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContrastExemptForStandardContrast@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContrastExemptForStandardContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntrinsicallyUnplated@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsIntrinsicallyUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThemeOrContrastAware@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsThemeOrContrastAware(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnresolvedPath@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnresolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesTargetSize@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_UsesTargetSize(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~MRTHelperTileImageResource();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvePathOptions@MRTHelperTileImageResource@UnifiedTile@Shell@WindowsInternal@@AEBA?AW4MRTHelperResolvePathOptions@234@_N@Z
    int GetResolvePathOptions(bool) const;
};
} // namespace WindowsInternal::Shell::UnifiedTile
