#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace SystemSettings::Start {
class StartPlacesSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StartPlacesSettings@Start@SystemSettings@@SAJPEBUSettingDBItem@DataModel@3@PEAPEAUISettingItem@53@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppId@StartPlacesSettings@Start@SystemSettings@@EEAAPEBGXZ
    virtual unsigned short const * GetAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacesId@StartPlacesSettings@Start@SystemSettings@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & GetPlacesId();
};
} // namespace SystemSettings::Start
