#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 12 member(s).
namespace SystemSettings::Start {
class PrivacyStoreAppUsage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PrivacyStoreAppUsage@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@PrivacyStoreAppUsage@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNotification@PrivacyStoreAppUsage@Start@SystemSettings@@UEAAXW4StartSettingNotificationType@23@@Z
    virtual void HandleNotification(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrivacyStoreAppUsage@Start@SystemSettings@@QEAA@XZ
    PrivacyStoreAppUsage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@PrivacyStoreAppUsage@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@PrivacyStoreAppUsage@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@PrivacyStoreAppUsage@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrivacyStoreAppUsage@Start@SystemSettings@@UEAA@XZ
    virtual ~PrivacyStoreAppUsage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHiddenFromFrequentApps@PrivacyStoreAppUsage@Start@SystemSettings@@CAJXZ
    static long ClearHiddenFromFrequentApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMRU@PrivacyStoreAppUsage@Start@SystemSettings@@CAXXZ
    static void ClearMRU();
};
} // namespace SystemSettings::Start
