#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
namespace SystemSettings::Start {
class WorkAroundForegroundBugServiceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@WorkAroundForegroundBugServiceProvider@Start@SystemSettings@@UEAAJPEAUICreateProcessOutputs@@@Z
    virtual long OnCreated(ICreateProcessOutputs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@WorkAroundForegroundBugServiceProvider@Start@SystemSettings@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
};
} // namespace SystemSettings::Start
