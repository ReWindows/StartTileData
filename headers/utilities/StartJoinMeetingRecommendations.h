#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace SystemSettings::Start {
class StartJoinMeetingRecommendations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartJoinMeetingRecommendations@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartJoinMeetingRecommendations@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartJoinMeetingRecommendations@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartJoinMeetingRecommendations@Start@SystemSettings@@QEAA@XZ
    StartJoinMeetingRecommendations();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartJoinMeetingRecommendations@Start@SystemSettings@@UEAA@XZ
    virtual ~StartJoinMeetingRecommendations();
};
} // namespace SystemSettings::Start
