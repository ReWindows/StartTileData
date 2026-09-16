#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace SystemSettings::DataModel {
class Details {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPluginRegistrationData@Details@DataModel@SystemSettings@@YAJPEAUHSTRING__@@_KPEBUSettingPluginRegistrationData@23@PEAPEBUSettingDBItem@23@@Z
    long FindPluginRegistrationData(HSTRING__*, uint64_t, WindissectOpaque const *, WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlersResourceMap@Details@DataModel@SystemSettings@@YAJPEAPEAUIResourceMap@Core@Resources@ApplicationModel@Windows@@@Z
    long GetHandlersResourceMap(::Windows::ApplicationModel::Resources::Core::IResourceMap * *);
};
} // namespace SystemSettings::DataModel
