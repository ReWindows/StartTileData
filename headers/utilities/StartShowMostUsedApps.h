#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace SystemSettings::Start {
class StartShowMostUsedApps {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartShowMostUsedApps@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartShowMostUsedApps@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartShowMostUsedApps@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartShowMostUsedApps@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartShowMostUsedApps@Start@SystemSettings@@QEAA@XZ
    StartShowMostUsedApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartShowMostUsedApps@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartShowMostUsedApps@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetValue@StartShowMostUsedApps@Start@SystemSettings@@SA_NXZ
    static bool s_GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetValue@StartShowMostUsedApps@Start@SystemSettings@@SAJ_N@Z
    static long s_SetValue(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowMostUsedApps@Start@SystemSettings@@UEAA@XZ
    virtual ~StartShowMostUsedApps();
};
} // namespace SystemSettings::Start
