#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 24 member(s).
class EdpTileBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdpTileBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdpTileBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdpTileBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdpTileBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@EdpTileBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@EdpTileBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpEnabledForAumid@EdpTileBroker@@UEAAJQEAUHSTRING__@@PEAE1@Z
    virtual long IsEdpEnabledForAumid(HSTRING__* const, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpEnabledForPackageFullName@EdpTileBroker@@UEAAJQEAUHSTRING__@@PEAE1@Z
    virtual long IsEdpEnabledForPackageFullName(HSTRING__* const, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpEnabledForWin32Application@EdpTileBroker@@UEAAJQEAUHSTRING__@@PEAE1@Z
    virtual long IsEdpEnabledForWin32Application(HSTRING__* const, unsigned char *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdpTileBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdpTileBroker@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpEnabledForEnterpriseContext@EdpTileBroker@@AEAAXQEBGPEBUEDP_CONTEXT@@PEAE2@Z
    void IsEdpEnabledForEnterpriseContext(unsigned short const * const, EDP_CONTEXT const *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpEnabledForPackageFullName@EdpTileBroker@@AEAAJQEBGPEAE1@Z
    long IsEdpEnabledForPackageFullName(unsigned short const * const, unsigned char *, unsigned char *);
};
