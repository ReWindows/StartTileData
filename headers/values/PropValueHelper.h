#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace SystemSettings::DataModel {
class PropValueHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBoolean@PropValueHelper@DataModel@SystemSettings@@SAJEPEAPEAUIInspectable@@@Z
    static long CreateBoolean(unsigned char, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@PropValueHelper@DataModel@SystemSettings@@SAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    static long CreateString(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@PropValueHelper@DataModel@SystemSettings@@SAJPEBGPEAPEAUIInspectable@@@Z
    static long CreateString(unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32@PropValueHelper@DataModel@SystemSettings@@SAJIPEAPEAUIInspectable@@@Z
    static long CreateUInt32(unsigned int, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPVStatics@PropValueHelper@DataModel@SystemSettings@@CAJXZ
    static long _GetPVStatics();
};
} // namespace SystemSettings::DataModel
