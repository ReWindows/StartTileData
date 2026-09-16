#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace TileDataLayerItemWrappers {
class TDLTileInfoHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z
    long GetAppUserModelId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z
    long GetShellProperty(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPEAG@Z
    long GetShellProperty(int, unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z
    TDLTileInfoHelper(ITileInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ
    ~TDLTileInfoHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ
    void ClearRetryPropertyTables();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerViewPropertyName@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJW4TilePerViewTypedProperty@2@AEBU_GUID@@PEAPEAG@Z
    long GetPerViewPropertyName(int, _GUID const &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z
    long GetStringMetaProperty(unsigned short const *, unsigned short * *);
};
} // namespace TileDataLayerItemWrappers
