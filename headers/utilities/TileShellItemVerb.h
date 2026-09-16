#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace WindowsInternal::Shell::UnifiedTile::Private {
class TileShellItemVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIVerbExecutionArgs@345@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbs@TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@SAJPEAUIShellItem@@PEAUIVerbEnumerationArgs@345@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVTileVerb@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Z
    static long GetVerbs(IShellItem *, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    TileShellItemVerb();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ
    virtual ~TileShellItemVerb();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConcatGroupPath@TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@CAJPEAUHSTRING__@@0PEAPEAU6@@Z
    static long ConcatGroupPath(HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbCanonicalName@TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@CAJPEAUIContextMenu@@I_NPEAPEAUHSTRING__@@@Z
    static long GetVerbCanonicalName(IContextMenu *, unsigned int, bool, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbDisplayName@TileShellItemVerb@Private@UnifiedTile@Shell@WindowsInternal@@CAJAEBUtagMENUITEMINFOW@@PEAUHMENU__@@PEAPEAUHSTRING__@@22@Z
    static long GetVerbDisplayName(tagMENUITEMINFOW const &, HMENU__*, HSTRING__* *, HSTRING__* *, HSTRING__* *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::Private
