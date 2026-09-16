#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 26 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class UnifiedTilePinUnpinVerbProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIUnifiedTile@345@PEAUIVerbEnumerationArgs@345@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    virtual long GetVerbs(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@QEAAJW4TileSources@345@PEAUIUnifiedTileManager@345@@Z
    long RuntimeClassInitialize(int, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    UnifiedTilePinUnpinVerbProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerbProviderId@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VerbProviderId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~UnifiedTilePinUnpinVerbProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLiteTaskbarPinUnpinVerbIfApplicable@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTile@345@PEAUIVerbEnumerationArgs@345@PEAU?$IVector@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    long AddLiteTaskbarPinUnpinVerbIfApplicable(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStartPinUnpinVerbIfApplicable@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTile@345@PEAUIUnifiedTileManager@345@PEAUIVerbEnumerationArgs@345@PEAU?$IVector@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    long AddStartPinUnpinVerbIfApplicable(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTaskbarPinUnpinVerbIfApplicable@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUIUnifiedTile@345@PEAUIUnifiedTileManager@345@PEAUIVerbEnumerationArgs@345@PEAU?$IVector@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    long AddTaskbarPinUnpinVerbIfApplicable(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLauncherPolicy@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAPEAUILauncherPolicy@LauncherPolicy@45@@Z
    long EnsureLauncherPolicy(::WindowsInternal::Shell::LauncherPolicy::ILauncherPolicy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTaskbarPinnableSurface@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJ_NPEAPEAUIPinnableSurface@ApplicationModel@Internal@Windows@@@Z
    long EnsureTaskbarPinnableSurface(bool, ::Windows::Internal::ApplicationModel::IPinnableSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserIfApplicable@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEBAJPEAPEAUIUser@System@Windows@@@Z
    long GetUserIfApplicable(::Windows::System::IUser * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTileVerbProviderDesktopBroker@UnifiedTilePinUnpinVerbProvider@Private@UnifiedTile@Shell@WindowsInternal@@AEAAJ_NPEAPEAUITileVerbProviderDesktopBrokerStatics@2345@@Z
    long TryGetTileVerbProviderDesktopBroker(bool, WindissectOpaque * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
