#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace SuspensionHelpers {
class AutoDeferral {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoDeferral@SuspensionHelpers@@QEAA@XZ
    AutoDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@AutoDeferral@SuspensionHelpers@@UEAA?AW4DeferralCompletion@2@XZ
    virtual int Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AutoDeferral@SuspensionHelpers@@QEAAJPEAUISuspendingEventArgs@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::ISuspendingEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoDeferral@SuspensionHelpers@@UEAA@XZ
    virtual ~AutoDeferral();
};
} // namespace SuspensionHelpers
