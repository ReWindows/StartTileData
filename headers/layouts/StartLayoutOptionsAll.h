#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace SystemSettings::Start {
class StartLayoutOptionsAll {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartLayoutOptionsAll@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartLayoutOptionsAll@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartLayoutOptionsAll@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartLayoutOptionsAll@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartLayoutOptionsAll@Start@SystemSettings@@QEAA@XZ
    StartLayoutOptionsAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartLayoutOptionsAll@Start@SystemSettings@@UEAA@XZ
    virtual ~StartLayoutOptionsAll();
};
} // namespace SystemSettings::Start
