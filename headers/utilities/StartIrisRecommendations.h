#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace SystemSettings::Start {
class StartIrisRecommendations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartIrisRecommendations@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartIrisRecommendations@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartIrisRecommendations@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartIrisRecommendations@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartIrisRecommendations@Start@SystemSettings@@QEAA@XZ
    StartIrisRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartIrisRecommendations@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartIrisRecommendations@Start@SystemSettings@@UEAA@XZ
    virtual ~StartIrisRecommendations();
};
} // namespace SystemSettings::Start
