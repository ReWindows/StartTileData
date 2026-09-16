#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace boost::detail {
class sp_counted_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ref_copy@sp_counted_base@detail@boost@@QEAAXXZ
    void add_ref_copy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?destroy@sp_counted_base@detail@boost@@UEAAXXZ
    virtual void destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?release@sp_counted_base@detail@boost@@QEAAXXZ
    void release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0sp_counted_base@detail@boost@@QEAA@XZ
    sp_counted_base();
    // Category: Method | Source: PDB Internal
    // Symbol: ?weak_release@sp_counted_base@detail@boost@@QEAAXXZ
    void weak_release();
};
} // namespace boost::detail
