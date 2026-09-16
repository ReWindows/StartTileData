#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 83 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheWinRT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireReaderLock@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void AcquireReaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireWriterLock@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void AcquireWriterLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@W4VisualCacheContentType@2345@IIPEAI@Z
    virtual long AddEntry(_GUID, int, unsigned int, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long DeleteEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushToDisk@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long FlushToDisk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryID@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJU_GUID@@W4VisualCacheContentType@2345@IPEAEPEAI@Z
    virtual long GetEntryID(_GUID, int, unsigned int, unsigned char *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryReader@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUIStartVisualCacheEntry@2345@@Z
    virtual long GetEntryReader(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryWriter@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUIStartVisualCacheEntry@2345@@Z
    virtual long GetEntryWriter(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderDataPointer@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIPEAPEAUTILECACHEENTRY@VisualCacheInterfaces@@@Z
    virtual long GetHeaderDataPointer(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreLoad@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long PreLoad(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReaderLock@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void ReleaseReaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWriterLock@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAXXZ
    virtual void ReleaseWriterLock();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    StartVisualCacheWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllAppsCount@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_AllAppsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeedsCompaction@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_NeedsCompaction(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PinnedAppsCount@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_PinnedAppsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualStates@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUCacheVisualStates@2345@@Z
    virtual long get_VisualStates(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllAppsCount@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_AllAppsCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PinnedAppsCount@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_PinnedAppsCount(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDataEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAII@Z
    unsigned int AllocateDataEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHeaderEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAIIII@Z
    unsigned int AllocateHeaderEntry(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewTransientData@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXIIPEAPEAUTRANSIENTCACHEDATA@VisualCacheInterfaces@@@Z
    void AllocateNewTransientData(unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXI@Z
    void ClearEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFiles@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void CloseFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFilesAndMappings@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void CloseFilesAndMappings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMapping@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@CAXPEAUCACHE_FILE_DATA@VisualCacheInterfaces@@@Z
    static void CloseMapping(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMappings@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void CloseMappings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFiles@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void CreateFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFiles@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long DeleteFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long EnsureInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUnusedEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAII@Z
    unsigned int FindUnusedEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCacheFileToDisk@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUCACHE_FILE_DATA@VisualCacheInterfaces@@@Z
    long FlushCacheFileToDisk(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfig@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAPEBUVISUAL_CACHE_CONFIG@VisualCacheInterfaces@@XZ
    WindissectOpaque const * GetConfig();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntry@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAPEAUTILECACHEENTRY@VisualCacheInterfaces@@I@Z
    WindissectOpaque * GetEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDataFile@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void InitializeDataFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHeaderFile@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void InitializeHeaderFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFragmentationData@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXXZ
    void LogFragmentationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFilesAndMappings@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long OpenFilesAndMappings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenOrCreateDataFile@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJ_NPEBGPEAUCACHE_FILE_DATA@VisualCacheInterfaces@@@Z
    long OpenOrCreateDataFile(bool, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreLoadDataIntoBuffer@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAXPEBEIPEAEPEAPEAE@Z
    void PreLoadDataIntoBuffer(unsigned char const *, unsigned int, unsigned char *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIDs@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long ReadIDs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemapOrGrowMappings@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJKK@Z
    long RemapOrGrowMappings(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateMapping@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUCACHE_FILE_DATA@VisualCacheInterfaces@@@Z
    long TryCreateMapping(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateHeader@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUTILECACHEHEADER@VisualCacheInterfaces@@I@Z
    long ValidateHeader(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateID@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@AEAAJI@Z
    long ValidateID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetThemeFlags@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@CA?AW4ENTRY_STATE_FLAGS@VisualCacheInterfaces@@W4TileThemeSelector@2345@_N@Z
    static int s_GetThemeFlags(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetFileSize@StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@CAXPEAXI@Z
    static void s_SetFileSize(void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartVisualCacheWinRT@VisualCache@UnifiedTile@Shell@WindowsInternal@@EEAA@XZ
    virtual ~StartVisualCacheWinRT();
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
