#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 13 member(s).
namespace ExtendedPropertiesLib {
class ExtendedProperties {
public:
    class CaseInsensitiveHash;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppObject@ExtendedProperties@ExtendedPropertiesLib@@QEAA?AUJsonObject@Json@Data@Windows@winrt@@UTile@StartScreen@UI@WindowsUdk@7@@Z
    WindissectOpaque GetAppObject(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundTaskBuilder@ExtendedProperties@ExtendedPropertiesLib@@QEAA?AUBackgroundTaskBuilder@Background@ApplicationModel@Windows@winrt@@AEBW4BackgroundTaskTrigger@ExtendedPropertiesTransformer@DataStoreCache@Shell@WindowsInternal@7@I@Z
    WindissectOpaque GetBackgroundTaskBuilder(int const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateInstance@ExtendedProperties@ExtendedPropertiesLib@@SAAEAV12@XZ
    static ::ExtendedPropertiesLib::ExtendedProperties & GetOrCreateInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCTAPolicyEnabled@ExtendedProperties@ExtendedPropertiesLib@@QEAA_NXZ
    bool IsCTAPolicyEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBackgroundTaskIfNotAlreadyRegistered@ExtendedProperties@ExtendedPropertiesLib@@QEAA_NXZ
    bool RegisterBackgroundTaskIfNotAlreadyRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTask@ExtendedProperties@ExtendedPropertiesLib@@QEAA_NAEBW4BackgroundTaskTrigger@ExtendedPropertiesTransformer@DataStoreCache@Shell@WindowsInternal@winrt@@AEBUBackgroundTaskBuilder@Background@ApplicationModel@Windows@8@@Z
    bool RegisterTask(int const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleNextBackgroundTaskRefresh@ExtendedProperties@ExtendedPropertiesLib@@QEAA_NAEBW4BackgroundTaskTrigger@ExtendedPropertiesTransformer@DataStoreCache@Shell@WindowsInternal@winrt@@I@Z
    bool ScheduleNextBackgroundTaskRefresh(int const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBackgroundTask@ExtendedProperties@ExtendedPropertiesLib@@QEAA?AUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@winrt@@PEBG@Z
    WindissectOpaque TryGetBackgroundTask(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCacheWithAPSResponseAndReturnCategory@ExtendedProperties@ExtendedPropertiesLib@@QEAA?AW4AppCategory@UnifiedTile@Shell@WindowsInternal@@AEBUJsonObject@Json@Data@Windows@winrt@@@Z
    int UpdateCacheWithAPSResponseAndReturnCategory(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCacheWithAPSResponseData@ExtendedProperties@ExtendedPropertiesLib@@QEAAXAEBUJsonObject@Json@Data@Windows@winrt@@@Z
    void UpdateCacheWithAPSResponseData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDWORDDataToRegistry@ExtendedProperties@ExtendedPropertiesLib@@QEAAXPEBG0I@Z
    void WriteDWORDDataToRegistry(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtendedProperties@ExtendedPropertiesLib@@QEAA@XZ
    ~ExtendedProperties();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExtendedProperties@ExtendedPropertiesLib@@AEAA@XZ
    ExtendedProperties();
};
} // namespace ExtendedPropertiesLib
