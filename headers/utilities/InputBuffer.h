#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace bond {
class InputBuffer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputBuffer@bond@@QEAA@AEBV01@@Z
    InputBuffer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@InputBuffer@bond@@QEAAXAEAE@Z
    void Read(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@InputBuffer@bond@@QEAAXI@Z
    void Skip(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputBuffer@bond@@QEAA@XZ
    ~InputBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EofException@InputBuffer@bond@@IEBAXI@Z
    void EofException(unsigned int) const;
};
} // namespace bond
