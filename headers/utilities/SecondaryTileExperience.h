#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 9 member(s).
class SecondaryTileExperience {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTilePinned@SecondaryTileExperience@@UEAAJPEBG00PEAH@Z
    virtual long IsTilePinned(unsigned short const *, unsigned short const *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTileCreated@SecondaryTileExperience@@UEAAJU_GUID@@W4DefaultTileSize@@@Z
    virtual long SecondaryTileCreated(_GUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTileCreationRequested@SecondaryTileExperience@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long SecondaryTileCreationRequested(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsPinning@SecondaryTileExperience@@UEAAJPEBGPEAH@Z
    virtual long SupportsPinning(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileDeleted@SecondaryTileExperience@@UEAAJPEBG0@Z
    virtual long TileDeleted(unsigned short const *, unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedIdentifierForAumid@SecondaryTileExperience@@AEAAJPEBG0PEAPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetUnifiedIdentifierForAumid(unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedIdentifierForTileId@SecondaryTileExperience@@AEAAJPEAU_GUID@@PEAPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetUnifiedIdentifierForTileId(_GUID *, WindissectOpaque * *);
};
