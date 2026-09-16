#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
namespace SystemSettings::Start {
class StartChooseLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartChooseLayout@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@StartChooseLayout@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetNamedValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartChooseLayout@Start@SystemSettings@@UEAAKXZ
    virtual unsigned long GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartChooseLayout@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartChooseLayout@Start@SystemSettings@@UEAAJK@Z
    virtual long SetValue(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartChooseLayout@Start@SystemSettings@@QEAA@XZ
    StartChooseLayout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartChooseLayout@Start@SystemSettings@@UEAA@XZ
    virtual ~StartChooseLayout();
};
} // namespace SystemSettings::Start
