#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
class TransformerFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheManagerDump@TransformerFactory@@UEAAJPEAUICacheableDataStoreTransformer@DataStoreCache@@PEAPEAUICacheManagerDump@3@@Z
    virtual long GetCacheManagerDump(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCuratedTileCollectionTransformer@TransformerFactory@@UEAAJUCuratedTileCollectionTransformerCreationArgs@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetCuratedTileCollectionTransformer(CuratedTileCollectionTransformerCreationArgs, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEdpTransformerDumpable@TransformerFactory@@UEAAJPEAPEAUICacheableDataStoreTransformer@DataStoreCache@@@Z
    virtual long GetEdpTransformerDumpable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMRTTransformerDumpable@TransformerFactory@@UEAAJPEAPEAUICacheableDataStoreTransformer@DataStoreCache@@@Z
    virtual long GetMRTTransformerDumpable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRepositoryTransformerDumpable@TransformerFactory@@UEAAJPEAPEAUICacheableDataStoreTransformer@DataStoreCache@@@Z
    virtual long GetStateRepositoryTransformerDumpable(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileStoreTransformerDumpable@TransformerFactory@@UEAAJPEAPEAUICacheableDataStoreTransformer@DataStoreCache@@@Z
    virtual long GetTileStoreTransformerDumpable(WindissectOpaque * *);
};
