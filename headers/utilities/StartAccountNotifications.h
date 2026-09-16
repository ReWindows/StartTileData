#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace SystemSettings::Start {
class StartAccountNotifications {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartAccountNotifications@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartAccountNotifications@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartAccountNotifications@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartAccountNotifications@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartAccountNotifications@Start@SystemSettings@@QEAA@XZ
    StartAccountNotifications();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartAccountNotifications@Start@SystemSettings@@UEAA@XZ
    virtual ~StartAccountNotifications();
};
} // namespace SystemSettings::Start
