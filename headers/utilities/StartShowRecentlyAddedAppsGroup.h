#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace SystemSettings::Start {
class StartShowRecentlyAddedAppsGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@QEAA@XZ
    StartShowRecentlyAddedAppsGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowRecentlyAddedAppsGroup@Start@SystemSettings@@UEAA@XZ
    virtual ~StartShowRecentlyAddedAppsGroup();
};
} // namespace SystemSettings::Start
