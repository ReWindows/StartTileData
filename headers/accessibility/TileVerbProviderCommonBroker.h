#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 24 member(s).
class TileVerbProviderCommonBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileVerbProviderCommonBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileVerbProviderCommonBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileVerbProviderCommonBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItemVerbs@TileVerbProviderCommonBroker@@UEAAJPEAUIShellItem@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long GetShellItemVerbs(IShellItem *, IUnknown *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageItemVerbs@TileVerbProviderCommonBroker@@UEAAJPEAUIStorageItem@Storage@Windows@@PEAUIVerbEnumerationArgs@UnifiedTile@Shell@WindowsInternal@@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@4@@Z
    virtual long GetStorageItemVerbs(::Windows::Storage::IStorageItem *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileVerbProviderCommonBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@TileVerbProviderCommonBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@TileVerbProviderCommonBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileVerbProviderCommonBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileVerbProviderCommonBroker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileVerbProviderCommonBroker@@QEAA@XZ
    TileVerbProviderCommonBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShellExperienceCapability@TileVerbProviderCommonBroker@@AEAAJXZ
    long EnsureShellExperienceCapability();
};
