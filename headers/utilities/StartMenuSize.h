#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
namespace SystemSettings::Start {
class StartMenuSize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartMenuSize@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@StartMenuSize@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetNamedValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPossibleValues@StartMenuSize@Start@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetPossibleValues(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartMenuSize@Start@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartMenuSize@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartMenuSize@Start@SystemSettings@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartMenuSize@Start@SystemSettings@@UEAAJPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long SetValue(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartMenuSize@Start@SystemSettings@@QEAA@XZ
    StartMenuSize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartMenuSize@Start@SystemSettings@@UEAA@XZ
    virtual ~StartMenuSize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowLargeStartInfoBar@StartMenuSize@Start@SystemSettings@@AEBA_NXZ
    bool ShouldShowLargeStartInfoBar() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DisplayChangeWndProc@StartMenuSize@Start@SystemSettings@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DisplayChangeWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace SystemSettings::Start
