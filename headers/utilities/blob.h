#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace bond {
class blob {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@XZ
    blob();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@$$QEAV01@@Z
    blob(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@AEBV?$shared_ptr@$$BY0A@D@boost@@I@Z
    blob(WindissectOpaque const &, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@AEBV?$shared_ptr@$$BY0A@D@boost@@II@Z
    blob(WindissectOpaque const &, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1blob@bond@@QEAA@XZ
    ~blob();
};
} // namespace bond
