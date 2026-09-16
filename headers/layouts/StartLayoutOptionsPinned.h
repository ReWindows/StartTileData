#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace SystemSettings::Start {
class StartLayoutOptionsPinned {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartLayoutOptionsPinned@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartLayoutOptionsPinned@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartLayoutOptionsPinned@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartLayoutOptionsPinned@Start@SystemSettings@@QEAA@XZ
    StartLayoutOptionsPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartLayoutOptionsPinned@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartLayoutOptionsPinned@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartLayoutOptionsPinned@Start@SystemSettings@@UEAA@XZ
    virtual ~StartLayoutOptionsPinned();
};
} // namespace SystemSettings::Start
