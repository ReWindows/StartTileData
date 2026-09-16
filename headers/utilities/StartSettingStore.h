#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace SystemSettings::Start {
class StartSettingStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@StartSettingStore@Start@SystemSettings@@SAAEAV123@XZ
    static ::SystemSettings::Start::StartSettingStore & GetInstance();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartSettingStore@Start@SystemSettings@@UEAA@XZ
    virtual ~StartSettingStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSingletonDeinit@StartSettingStore@Start@SystemSettings@@EEAAXXZ
    virtual void OnSingletonDeinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSingletonInit@StartSettingStore@Start@SystemSettings@@EEAAJXZ
    virtual long OnSingletonInit();
};
} // namespace SystemSettings::Start
