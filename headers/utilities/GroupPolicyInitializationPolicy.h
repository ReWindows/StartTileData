#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class GroupPolicyInitializationPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationFinished@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void InitializationFinished();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializationNeeded@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual bool IsInitializationNeeded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateNeeded@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA?AUUpdateResult@CollectionInitializationPolicy@2345@PEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual WindissectOpaque IsUpdateNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectionData@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXPEAUSelectionData@2345@@Z
    virtual void OverrideSelectionData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~GroupPolicyInitializationPolicy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionGroupPolicyAppliedTime@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA?AU_FILETIME@@XZ
    _FILETIME GetCollectionGroupPolicyAppliedTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGPFileTime@GroupPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAA?AU_FILETIME@@XZ
    _FILETIME GetGPFileTime();
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
