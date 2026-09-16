#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 35 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class TargetedContentImageResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJNUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@67@@Z
    virtual long LoadAsync(double, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsync@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long LoadWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWithOptionsAsync@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolveWithOptionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@QEAAJW4ImageType@DataStoreCache@@PEAUHSTRING__@@PEAUIUnifiedTile@234@_KPEAUIDataManager@6@@Z
    long RuntimeClassInitialize(int, HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TargetedContentImageResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachingId@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAU_GUID@@@Z
    virtual long get_CachingId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ChangeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContrastExemptForStandardContrast@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsContrastExemptForStandardContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntrinsicallyUnplated@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsIntrinsicallyUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThemeOrContrastAware@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsThemeOrContrastAware(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnresolvedPath@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnresolvedPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesTargetSize@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_UsesTargetSize(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TargetedContentImageResource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternal@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@AEBAJIW4TileImageResourceContrast@234@W4TileImageResourceTheme@234@PEAW45234@PEAW46234@PEAPEAUHSTRING__@@PEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long LoadInternal(unsigned int, int, int, int *, int *, HSTRING__* *, ::Windows::Storage::Streams::IRandomAccessStream * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithOptionsAsyncInternal@TargetedContentImageResource@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUITileImageResourceOptions@234@_NPEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    long LoadWithOptionsAsyncInternal(WindissectOpaque *, bool, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
