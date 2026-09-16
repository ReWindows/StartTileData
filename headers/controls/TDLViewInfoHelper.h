#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace TileDataLayerItemWrappers {
class TDLViewInfoHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TDLViewInfoHelper@TileDataLayerItemWrappers@@QEAAJW4ViewBoolProperty@2@PEA_N@Z
    long GetProperty(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TDLViewInfoHelper@TileDataLayerItemWrappers@@QEAAJW4ViewStringProperty@2@PEAPEAG@Z
    long GetProperty(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TDLViewInfoHelper@TileDataLayerItemWrappers@@QEAAJW4ViewUintProperty@2@PEAI@Z
    long GetProperty(int, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TDLViewInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileViewInformation@@@Z
    TDLViewInfoHelper(ITileViewInformation *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TDLViewInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ
    ~TDLViewInfoHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRetryPropertyTables@TDLViewInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ
    void ClearRetryPropertyTables();
};
} // namespace TileDataLayerItemWrappers
