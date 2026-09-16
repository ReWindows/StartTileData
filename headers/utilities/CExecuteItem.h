#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
class CExecuteItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteItem@@QEAA@PEAUIShellItem@@@Z
    CExecuteItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteItem@@QEAAJXZ
    long Execute();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExecuteItem@@QEAA@XZ
    ~CExecuteItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CExecuteItem@@AEAAJPEAPEAUIContextMenu@@@Z
    long _GetContextMenu(IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMembers@CExecuteItem@@AEAAXXZ
    void _InitMembers();
};
