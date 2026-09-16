#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace SystemSettings::Start {
class StartShowAllPinsByDefault {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartShowAllPinsByDefault@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StartShowAllPinsByDefault@Start@SystemSettings@@UEAA_NXZ
    virtual bool GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StartShowAllPinsByDefault@Start@SystemSettings@@UEAAJ_N@Z
    virtual long SetValue(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartShowAllPinsByDefault@Start@SystemSettings@@QEAA@XZ
    StartShowAllPinsByDefault();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartShowAllPinsByDefault@Start@SystemSettings@@UEAA@XZ
    virtual ~StartShowAllPinsByDefault();
};
} // namespace SystemSettings::Start
