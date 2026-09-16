#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 35 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class ManifestedImageResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJNUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@67@@Z
    virtual long LoadAsync(double, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsync@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long LoadWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ManifestedImageResource();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWithOptionsAsync@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolveWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@QEAAJW4ImageType@DataStoreCache@@PEAUHSTRING__@@PEAUIUnifiedTile@234@_N3_KPEAUIDataManager@6@@Z
    long RuntimeClassInitialize(int, HSTRING__*, WindissectOpaque *, bool, bool, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachingId@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_CachingId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContrastExemptForStandardContrast@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContrastExemptForStandardContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntrinsicallyUnplated@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsIntrinsicallyUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThemeOrContrastAware@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsThemeOrContrastAware(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnresolvedPath@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnresolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesTargetSize@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_UsesTargetSize(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~ManifestedImageResource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternal@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@AEBAJIAEBUSize@Foundation@Windows@@0W4TileImageResourceContrast@234@W4TileImageResourceTheme@234@W4TileImageResourceAlternateForm@234@PEAW48234@PEAW49234@PEAW4TileImageResourceAlternateForm@234@PEAPEAUHSTRING__@@PEAPEAUIRandomAccessStream@Streams@Storage@7@@Z
    long LoadInternal(unsigned int, WindissectOpaque const &, WindissectOpaque const &, int, int, int, int *, int *, int *, HSTRING__* *, ::Windows::Storage::Streams::IRandomAccessStream * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsyncInternal@ManifestedImageResource@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUITileImageResourceOptions@234@_NPEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    long LoadWithOptionsAsyncInternal(WindissectOpaque *, bool, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
