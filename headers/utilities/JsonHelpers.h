#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace winrt::WindowsInternal::Shell::JumpList {
class JsonHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromColorRef@JsonHelpers@JumpList@Shell@WindowsInternal@winrt@@YA?AUColor@UI@Windows@5@K@Z
    WindissectOpaque FromColorRef(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JsonObjectToValueSet@JsonHelpers@JumpList@Shell@WindowsInternal@winrt@@YA?AUValueSet@Collections@Foundation@Windows@5@AEBUJsonObject@Json@Data@95@@Z
    WindissectOpaque JsonObjectToValueSet(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NamedPropertyStoreToJsonObject@JsonHelpers@JumpList@Shell@WindowsInternal@winrt@@YA?AUJsonObject@Json@Data@Windows@5@PEAUINamedPropertyStore@@@Z
    WindissectOpaque NamedPropertyStoreToJsonObject(INamedPropertyStore *);
};
} // namespace winrt::WindowsInternal::Shell::JumpList
