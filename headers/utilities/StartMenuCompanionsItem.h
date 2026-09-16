#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 15 member(s).
namespace SystemSettings::Start {
class StartMenuCompanionsItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppLogoPath@StartMenuCompanionsItem@Start@SystemSettings@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetAppLogoPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomLogoPath@StartMenuCompanionsItem@Start@SystemSettings@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetCustomLogoPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartMenuCompanionsItem@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartMenuCompanionsItem@Start@SystemSettings@@QEAAJUCompanionInfo@?$StartMenuCompanionManager@UDefaultCompanionManagerLogger@@UDefaultCompanionManagerConfiguration@@UFileWatcherConfig@2@@@@Z
    long RuntimeClassInitialize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartMenuCompanionsItem@Start@SystemSettings@@QEAA@XZ
    StartMenuCompanionsItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@StartMenuCompanionsItem@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Companion@StartMenuCompanionsItem@Start@SystemSettings@@QEAAJAEBUCompanionInfo@?$StartMenuCompanionManager@UDefaultCompanionManagerLogger@@UDefaultCompanionManagerConfiguration@@UFileWatcherConfig@2@@@@Z
    long set_Companion(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartMenuCompanionsItem@Start@SystemSettings@@UEAA@XZ
    virtual ~StartMenuCompanionsItem();
};
} // namespace SystemSettings::Start
