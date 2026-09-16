#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace DataStoreCache {
class MRTHelperForPackage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MRTHelperForPackage@DataStoreCache@@QEAA@PEAUHSTRING__@@PEAUIUser@System@Windows@@@Z
    MRTHelperForPackage(HSTRING__*, ::Windows::System::IUser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelperForPackage@DataStoreCache@@UEAA@XZ
    virtual ~MRTHelperForPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateResourceManager@MRTHelperForPackage@DataStoreCache@@EEBAJPEAPEAUIMrtResourceManager@@@Z
    virtual long TryCreateResourceManager(IMrtResourceManager * *) const;
};
} // namespace DataStoreCache
