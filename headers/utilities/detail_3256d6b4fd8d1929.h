#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace boost {
class detail {
public:
    class once_context;
    class shared_count;
    class sp_counted_base;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?name_once_mutex@detail@boost@@YAXPEADPEAX@Z
    void name_once_mutex(char *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?rollback_once_region@detail@boost@@YAXAEAUonce_flag@2@AEAUonce_context@12@@Z
    void rollback_once_region(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?sp_enable_shared_from_this@detail@boost@@YAXZZ
    void sp_enable_shared_from_this(...);
};
} // namespace boost
