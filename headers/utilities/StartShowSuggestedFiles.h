#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace SystemSettings::Start {
class StartShowSuggestedFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartShowSuggestedFiles@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@StartShowSuggestedFiles@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetNamedValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartShowSuggestedFiles@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartShowSuggestedFiles@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartShowSuggestedFiles@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartShowSuggestedFiles@Start@SystemSettings@@QEAA@XZ
    StartShowSuggestedFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartShowSuggestedFiles@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartShowSuggestedFiles@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowSuggestedFiles@Start@SystemSettings@@UEAA@XZ
    virtual ~StartShowSuggestedFiles();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsJumpListsEffectivelyOn@StartShowSuggestedFiles@Start@SystemSettings@@AEBA_NXZ
    bool IsJumpListsEffectivelyOn() const;
};
} // namespace SystemSettings::Start
