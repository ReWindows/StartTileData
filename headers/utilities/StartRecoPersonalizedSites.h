#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace SystemSettings::Start {
class StartRecoPersonalizedSites {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartRecoPersonalizedSites@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartRecoPersonalizedSites@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartRecoPersonalizedSites@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartRecoPersonalizedSites@Start@SystemSettings@@QEAA@XZ
    StartRecoPersonalizedSites();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartRecoPersonalizedSites@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartRecoPersonalizedSites@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartRecoPersonalizedSites@Start@SystemSettings@@UEAA@XZ
    virtual ~StartRecoPersonalizedSites();
};
} // namespace SystemSettings::Start
