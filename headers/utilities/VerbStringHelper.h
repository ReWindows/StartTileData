#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 22 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class VerbStringHelper {
public:
    class CaseInsensitiveConstStringHasher;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadVerbDisplayName@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long LoadVerbDisplayName(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadVerbDisplayName@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@SAJPEAUHSTRING__@@PEAPEAU6@@Z
    static long s_LoadVerbDisplayName(HSTRING__*, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDisplayNameMap@VerbStringHelper@Private@UnifiedTile@Shell@WindowsInternal@@CAJXZ
    static long EnsureDisplayNameMap();
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
