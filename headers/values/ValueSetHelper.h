#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace NotificationImageHelpers {
class ValueSetHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookUp@ValueSetHelper@NotificationImageHelpers@@QEAA?AV12@PEBG@Z
    WindissectOpaque LookUp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookUp@ValueSetHelper@NotificationImageHelpers@@QEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    long LookUp(unsigned short const *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ValueSetHelper@NotificationImageHelpers@@QEAA@PEAUIInspectable@@@Z
    ValueSetHelper(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValueSetHelper@NotificationImageHelpers@@QEAA@XZ
    ~ValueSetHelper();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ValueSetHelper@NotificationImageHelpers@@AEAA@PEAUIInspectable@@J@Z
    ValueSetHelper(IInspectable *, long);
};
} // namespace NotificationImageHelpers
