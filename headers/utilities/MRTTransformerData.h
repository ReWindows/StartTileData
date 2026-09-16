#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 46 member(s).
namespace DataStoreCache {
class MRTTransformerData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MRTTransformerData@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteResolveSortNameTest@MRTTransformerData@DataStoreCache@@UEAAXXZ
    virtual void CompleteResolveSortNameTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeCachedItem@MRTTransformerData@DataStoreCache@@UEAAXPEAE_K@Z
    virtual void DeserializeCachedItem(unsigned char *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MRTTransformerData@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawObjectNoRef@MRTTransformerData@DataStoreCache@@UEAAPEAV12@XZ
    virtual WindissectOpaque * GetRawObjectNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MRTTransformerData@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MRTTransformerData@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedData@MRTTransformerData@DataStoreCache@@UEBAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@2@Z
    virtual void InvalidateCachedData(WindissectOpaque *, int, HSTRING__*, HSTRING__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedData@MRTTransformerData@DataStoreCache@@UEBAXPEAUIDataItem@2@W4ItemDataFlags@2@@Z
    virtual void InvalidateCachedData(WindissectOpaque *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSortNameValid@MRTTransformerData@DataStoreCache@@UEAA_NXZ
    virtual bool IsSortNameValid();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MRTTransformerData@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MRTTransformerData@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDisplayName@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveDisplayName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImagePath@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4ImageType@2@GGW4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@PEAW49UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveImagePath(HSTRING__*, int, unsigned short, unsigned short, int, int, int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImagePath@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4ImageType@2@W4DEVICE_SCALE_FACTOR@@W4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveImagePath(HSTRING__*, int, int, int, int, int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveShortDisplayName@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveShortDisplayName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSortName@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@0@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveSortName(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSuiteName@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveSuiteName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSuiteSortName@MRTTransformerData@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@0@Z
    virtual ::Microsoft::WRL::Wrappers::HString ResolveSuiteSortName(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMRTData@MRTTransformerData@DataStoreCache@@UEBAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@2@Z
    virtual void UpdateMRTData(WindissectOpaque *, int, HSTRING__*, HSTRING__*) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTTransformerData@DataStoreCache@@UEAA@XZ
    virtual ~MRTTransformerData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTryResolve@MRTTransformerData@DataStoreCache@@AEBA_NXZ
    bool CanTryResolve() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveText@MRTTransformerData@DataStoreCache@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4TextType@12@_N@Z
    ::Microsoft::WRL::Wrappers::HString ResolveText(HSTRING__*, int, bool);
};
} // namespace DataStoreCache
