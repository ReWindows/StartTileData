#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace SystemSettings {
class DataModel {
public:
    class AutoMTAUsageCookie;
    class CAutoWinRtInit;
    class CBoolSetting;
    class CBoolSetting_False;
    class CBoolSetting_True;
    class CDwordRangeSetting;
    class CListSetting;
    class CSettingBase;
    class Details;
    class PropValueHelper;
    class UserImpersonator;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceStringById@DataModel@SystemSettings@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long GetResourceStringById(unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHstringEqual@DataModel@SystemSettings@@YA_NPEAUHSTRING__@@PEBG@Z
    bool IsHstringEqual(HSTRING__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowsCreateString@DataModel@SystemSettings@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long WindowsCreateString(unsigned short const *, HSTRING__* *);
};
} // namespace SystemSettings
