#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class MDMPolicyInitializationPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationFinished@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void InitializationFinished();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializationNeeded@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA_NPEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual bool IsInitializationNeeded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateNeeded@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA?AUUpdateResult@CollectionInitializationPolicy@2345@PEAW4StartInitializationReason@StartLayoutTelemetryData@@@Z
    virtual WindissectOpaque IsUpdateNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectionData@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAXPEAUSelectionData@2345@@Z
    virtual void OverrideSelectionData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    ~MDMPolicyInitializationPolicy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMDMPolicyLastAppliedChangeStamp@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAKXZ
    unsigned long GetMDMPolicyLastAppliedChangeStamp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartLayoutPolicy@MDMPolicyInitializationPolicy@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBAJW4PMPolicyRequestedDataFlags@@PEAPEAG@Z
    long GetStartLayoutPolicy(int, unsigned short * *) const;
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
