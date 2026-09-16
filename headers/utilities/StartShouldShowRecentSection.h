#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace SystemSettings::Start {
class StartShouldShowRecentSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartShouldShowRecentSection@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartShouldShowRecentSection@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartShouldShowRecentSection@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartShouldShowRecentSection@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartShouldShowRecentSection@Start@SystemSettings@@QEAA@XZ
    StartShouldShowRecentSection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShouldShowRecentSection@Start@SystemSettings@@UEAA@XZ
    virtual ~StartShouldShowRecentSection();
};
} // namespace SystemSettings::Start
