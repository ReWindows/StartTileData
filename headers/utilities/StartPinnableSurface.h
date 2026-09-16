#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 25 member(s).
namespace Windows::Internal::ApplicationModel {
class StartPinnableSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinTile@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUISecondaryTile@StartScreen@UI@4@PEAE@Z
    virtual long CanPinTile(HSTRING__*, ::Windows::UI::StartScreen::ISecondaryTile *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUnpinTile@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long CanUnpinTile(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTilePinned@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsTilePinned(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinTile@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUISecondaryTile@StartScreen@UI@4@@Z
    virtual long PinTile(HSTRING__*, ::Windows::UI::StartScreen::ISecondaryTile *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPinTile@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAUISecondaryTile@StartScreen@UI@4@UWindowId@WindowManagement@234@PEAE@Z
    virtual long RequestPinTile(HSTRING__*, HSTRING__*, ::Windows::UI::StartScreen::ISecondaryTile *, ::Windows::Internal::ApplicationModel::WindowManagement::WindowId, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartPinnableSurface@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartPinnableSurface@ApplicationModel@Internal@Windows@@QEAA@XZ
    StartPinnableSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinTile@StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@0@Z
    virtual long UnpinTile(HSTRING__*, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPinnableSurface@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~StartPinnableSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStartScreenManagerInitialized@StartPinnableSurface@ApplicationModel@Internal@Windows@@AEAAJXZ
    long EnsureStartScreenManagerInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedIdentifierForAumid@StartPinnableSurface@ApplicationModel@Internal@Windows@@AEAAJPEBG0PEAPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetUnifiedIdentifierForAumid(unsigned short const *, unsigned short const *, WindissectOpaque * *);
};
} // namespace Windows::Internal::ApplicationModel
