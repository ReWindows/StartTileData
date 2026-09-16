#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
class _variant_t {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z
    void ChangeType(unsigned short, _variant_t const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z
    _variant_t(IDispatch *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_variant_t@@QEAA@XZ
    ~_variant_t();
};
