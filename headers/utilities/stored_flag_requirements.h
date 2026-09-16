#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
namespace tip2::details {
class stored_flag_requirements {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z
    bool evaluate(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1stored_flag_requirements@details@tip2@@QEAA@XZ
    ~stored_flag_requirements();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?flags_to_test_requirement@stored_flag_requirements@details@tip2@@CAPEAUtest_requirement@3@AEBVtest_state@3@AEAV?$vector_nothrow@Utest_flag@tip2@@@3@AEAPEAU43@PEBU43@_K@Z
    static WindissectOpaque * flags_to_test_requirement(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque * &, WindissectOpaque const *, uint64_t);
};
} // namespace tip2::details
