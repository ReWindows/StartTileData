#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 24 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileMRTHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForPackageFullName@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@SAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAPEAUIMRTHelper@234@@Z
    static long CreateForPackageFullName(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForPriFolderPath@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@SAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAPEAUIMRTHelper@234@@Z
    static long CreateForPriFolderPath(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTileImageResource@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@_KPEAUHSTRING__@@EPEAPEAUITileImageResource@234@@Z
    virtual long CreateTileImageResource(_GUID, uint64_t, HSTRING__*, unsigned char, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePath@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@W4MRTHelperResolvePathOptions@234@PEAUITileImageResourceOptions@234@PEAPEAUITileImageResourceCandidate@234@@Z
    virtual long ResolvePath(HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePathAsync@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@W4MRTHelperResolvePathOptions@234@PEAUITileImageResourceOptions@234@PEAPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@Z
    virtual long ResolvePathAsync(HSTRING__*, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveString@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long ResolveString(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveStringAsync@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long ResolveStringAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTileMRTHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnifiedTileMRTHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStorageFileHelper@UnifiedTileMRTHelper@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAPEAUIStorageFileStartExperienceStatic@Storage@Internal@Windows@@@Z
    long EnsureStorageFileHelper(::Windows::Internal::Storage::IStorageFileStartExperienceStatic * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
