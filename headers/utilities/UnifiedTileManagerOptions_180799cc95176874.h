#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 43 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileManagerOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransformer@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@PEAUIInspectable@@@Z
    virtual long AddTransformer(_GUID, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformers@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAU?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetTransformers(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockEditing@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long LockEditing();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTileManagerOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheFilePath@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CacheFilePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCacheFileReadOnly@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsCacheFileReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPostSyncProcessingEnabled@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsPostSyncProcessingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocaleId@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LocaleId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedPrimaryTileFilters@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedTileEnumerationFilters@234@@Z
    virtual long get_PackagedPrimaryTileFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackagedSecondaryTileFilters@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4PackagedTileEnumerationFilters@234@@Z
    virtual long get_PackagedSecondaryTileFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CacheFilePath@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CacheFilePath(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCacheFileReadOnly@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsCacheFileReadOnly(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPostSyncProcessingEnabled@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsPostSyncProcessingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Language@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Language(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocaleId@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_LocaleId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackagedPrimaryTileFilters@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJW4PackagedTileEnumerationFilters@234@@Z
    virtual long put_PackagedPrimaryTileFilters(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackagedSecondaryTileFilters@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJW4PackagedTileEnumerationFilters@234@@Z
    virtual long put_PackagedSecondaryTileFilters(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUser@System@Windows@@@Z
    virtual long put_User(::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTileManagerOptions@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnifiedTileManagerOptions();
};
} // namespace WindowsInternal::Shell::UnifiedTile
