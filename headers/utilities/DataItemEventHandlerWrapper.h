#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 6 member(s).
namespace DataStoreCache {
class DataItemEventHandlerWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemEventHandlerWrapper@DataStoreCache@@QEAA@XZ
    DataItemEventHandlerWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@DataItemEventHandlerWrapper@DataStoreCache@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnEvent(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DataItemEventHandlerWrapper@DataStoreCache@@QEAAJPEAUIDataItemEventHandler@@@Z
    long RuntimeClassInitialize(IDataItemEventHandler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemEventHandlerWrapper@DataStoreCache@@UEAA@XZ
    virtual ~DataItemEventHandlerWrapper();
};
} // namespace DataStoreCache
