#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 30 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheManagerWinRT {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFileCleanup@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJW4VisualCacheCleanupOption@VisualCacheInterfaces@@PEA_N@Z
    virtual long CacheFileCleanup(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@IW4TileThemeSelector@2345@W4VisualCacheOptions@2345@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *, HSTRING__*, unsigned int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartVisualCacheManagerWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDegraded@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsDegraded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReaderLock@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCacheReaderLock@2345@@Z
    virtual long get_ReaderLock(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WriterLock@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCacheWriterLock@2345@@Z
    virtual long get_WriterLock(WindissectOpaque * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@MEAA@XZ
    virtual ~StartVisualCacheManagerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCacheFiles@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJW4VisualCacheCleanupOption@VisualCacheInterfaces@@PEA_N@Z
    long DeleteCacheFiles(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheFilePath@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEBA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@XZ
    WindissectOpaque GetCacheFilePath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheFileSpec@StartVisualCacheManagerWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEBA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@XZ
    WindissectOpaque GetCacheFileSpec() const;
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
