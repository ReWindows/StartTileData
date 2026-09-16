#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace SystemSettings::Start {
class StartHideUserInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartHideUserInformation@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartHideUserInformation@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartHideUserInformation@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartHideUserInformation@Start@SystemSettings@@QEAA@XZ
    StartHideUserInformation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartHideUserInformation@Start@SystemSettings@@UEAA@XZ
    virtual ~StartHideUserInformation();
};
} // namespace SystemSettings::Start
