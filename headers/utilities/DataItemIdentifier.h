#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace DataStoreCache {
class DataItemIdentifier {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@PEAUHSTRING__@@@Z
    DataItemIdentifier(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@AEBV01@@Z
    DataItemIdentifier(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@$$QEAV01@@Z
    DataItemIdentifier(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@PEBGI@Z
    DataItemIdentifier(unsigned short const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@PEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    DataItemIdentifier(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@PEBG@Z
    DataItemIdentifier(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DataItemIdentifier@DataStoreCache@@QEBAPEAUHSTRING__@@XZ
    HSTRING__* Get() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawBuffer@DataItemIdentifier@DataStoreCache@@QEBAPEBGPEAI@Z
    unsigned short const * GetRawBuffer(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hash@DataItemIdentifier@DataStoreCache@@QEBA_KXZ
    uint64_t Hash() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemIdentifier@DataStoreCache@@QEAA@XZ
    ~DataItemIdentifier();
};
} // namespace DataStoreCache
