#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace SystemSettings::Start {
class StartStoreRecentlyOpenedItems {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartStoreRecentlyOpenedItems@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetNamedValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartStoreRecentlyOpenedItems@Start@SystemSettings@@QEAA@XZ
    StartStoreRecentlyOpenedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartStoreRecentlyOpenedItems@Start@SystemSettings@@UEAA@XZ
    virtual ~StartStoreRecentlyOpenedItems();
};
} // namespace SystemSettings::Start
