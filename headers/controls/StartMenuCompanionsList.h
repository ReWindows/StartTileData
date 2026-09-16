#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace SystemSettings::Start {
class StartMenuCompanionsList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartMenuCompanionsList@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoGetValueAsyncWork@StartMenuCompanionsList@Start@SystemSettings@@UEAAXXZ
    virtual void DoGetValueAsyncWork();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartMenuCompanionsList@Start@SystemSettings@@QEAA@XZ
    StartMenuCompanionsList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@StartMenuCompanionsList@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartMenuCompanionsList@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartMenuCompanionsList@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartMenuCompanionsList@Start@SystemSettings@@UEAA@XZ
    virtual ~StartMenuCompanionsList();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCollection@StartMenuCompanionsList@Start@SystemSettings@@MEAAJXZ
    virtual long GetSettingsCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCompanionToList@StartMenuCompanionsList@Start@SystemSettings@@AEAAJUCompanionInfo@?$StartMenuCompanionManager@UDefaultCompanionManagerLogger@@UDefaultCompanionManagerConfiguration@@UFileWatcherConfig@2@@@@Z
    long AddCompanionToList(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteStaleListItems@StartMenuCompanionsList@Start@SystemSettings@@AEAAJXZ
    long DeleteStaleListItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkListItemsAsStale@StartMenuCompanionsList@Start@SystemSettings@@AEAAJXZ
    long MarkListItemsAsStale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshStartMenuCompanionsList@StartMenuCompanionsList@Start@SystemSettings@@AEAAJXZ
    long RefreshStartMenuCompanionsList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompanionInList@StartMenuCompanionsList@Start@SystemSettings@@AEAAJPEAUISettingItem@DataModel@3@UCompanionInfo@?$StartMenuCompanionManager@UDefaultCompanionManagerLogger@@UDefaultCompanionManagerConfiguration@@UFileWatcherConfig@2@@@@Z
    long UpdateCompanionInList(WindissectOpaque *, WindissectOpaque);
};
} // namespace SystemSettings::Start
