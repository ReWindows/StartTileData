#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 21 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class StorageItemVerbProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbsAsync@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@PEAUIStorageItem@Storage@8@PEAUIVerbEnumerationArgs@345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Foundation@8@@Z
    virtual long GetVerbsAsync(::Windows::System::IUser *, ::Windows::Storage::IStorageItem *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@StorageItemVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
