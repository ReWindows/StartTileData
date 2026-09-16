#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace winrt::Windows::ApplicationModel::Activation::Private {
class ApplicationActivation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@6@0IAEBUValueSet@Collections@Foundation@56@AEBUUser@System@56@@Z
    static ActivateApplication(WindissectOpaque const &, WindissectOpaque const &, unsigned int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationForPlugin@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@6@AEBUguid@6@AEBU?$vector_view@Uhstring@winrt@@@86@IAEBUValueSet@Collections@Foundation@56@AEBUUser@System@56@@Z
    static ActivateApplicationForPlugin(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, unsigned int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationForProtocol@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@6@AEBUUri@Foundation@56@IAEBUValueSet@Collections@Foundation@56@AEBUUser@System@56@@Z
    static ActivateApplicationForProtocol(WindissectOpaque const &, WindissectOpaque const &, unsigned int, WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::ApplicationModel::Activation::Private
