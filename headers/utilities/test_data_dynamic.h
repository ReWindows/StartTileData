#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace tip2 {
class test_data_dynamic {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1test_data_dynamic@tip2@@QEAA@XZ
    ~test_data_dynamic();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?evaluate@test_data_dynamic@tip2@@IEAAXXZ
    void evaluate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z
    void serialize_properties(WindissectOpaque &);
};
} // namespace tip2
