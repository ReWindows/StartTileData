#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 53 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheDegradedStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireReaderLock@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void AcquireReaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireWriterLock@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void AcquireWriterLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@W4VisualCacheContentType@2345@IIPEAI@Z
    virtual long AddEntry(_GUID, int, unsigned int, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEntry@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long DeleteEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushToDisk@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long FlushToDisk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryID@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@W4VisualCacheContentType@2345@IPEAEPEAI@Z
    virtual long GetEntryID(_GUID, int, unsigned int, unsigned char *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryReader@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUIStartVisualCacheEntry@2345@@Z
    virtual long GetEntryReader(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryWriter@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUIStartVisualCacheEntry@2345@@Z
    virtual long GetEntryWriter(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreLoad@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long PreLoad(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReaderLock@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void ReleaseReaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWriterLock@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void ReleaseWriterLock();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartVisualCacheDegradedStub();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllAppsCount@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_AllAppsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeedsCompaction@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_NeedsCompaction(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PinnedAppsCount@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_PinnedAppsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualStates@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUCacheVisualStates@2345@@Z
    virtual long get_VisualStates(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllAppsCount@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_AllAppsCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PinnedAppsCount@StartVisualCacheDegradedStub@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_PinnedAppsCount(unsigned int);
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
