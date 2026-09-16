#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 11 member(s).
namespace SystemSettings::Start {
class ManageCompanion {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@ManageCompanion@Start@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetProperty(HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ManageCompanion@Start@SystemSettings@@QEAA@XZ
    ManageCompanion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManageCompanion@Start@SystemSettings@@QEAAJAEBUCompanionInfo@?$StartMenuCompanionManager@UDefaultCompanionManagerLogger@@UDefaultCompanionManagerConfiguration@@UFileWatcherConfig@2@@@@Z
    long RuntimeClassInitialize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@ManageCompanion@Start@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ManageCompanion@Start@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@ManageCompanion@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@ManageCompanion@Start@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManageCompanion@Start@SystemSettings@@UEAA@XZ
    virtual ~ManageCompanion();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ManageCompanion@Start@SystemSettings@@MEAAJPEAUHWND__@@@Z
    virtual long Invoke(HWND__*);
};
} // namespace SystemSettings::Start
