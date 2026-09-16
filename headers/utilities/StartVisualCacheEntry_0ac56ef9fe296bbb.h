#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 87 member(s).
namespace WindowsInternal::Shell::UnifiedTile::VisualCache {
class StartVisualCacheEntry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataCRC@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long GetDataCRC(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmapReference@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJIIIIEPEAPEAUIInspectable@@@Z
    virtual long GetSoftwareBitmapReference(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransientDataWritablePointer@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAPEAUTRANSIENTCACHEDATA@VisualCacheInterfaces@@XZ
    virtual WindissectOpaque * GetTransientDataWritablePointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@QEAA@PEAUIStartVisualCacheManager@1234@PEAUTILECACHEHEADER@VisualCacheInterfaces@@PEAUTILECACHEENTRY@7@PEAEPEAUTRANSIENTCACHEDATA@7@I_N@Z
    StartVisualCacheEntry(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char *, WindissectOpaque *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccentColor@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_AccentColor(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArrivalTime@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_ArrivalTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BrandingFlags@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_BrandingFlags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachedBitmapDimensions@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_CachedBitmapDimensions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long get_Data(::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EntrySize@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_EntrySize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCacheEntryHeader@2345@@Z
    virtual long get_Header(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderWriter@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIStartVisualCacheEntryHeaderWriter@2345@@Z
    virtual long get_HeaderWriter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsColorful@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsColorful(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInMemory@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsInMemory(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpaque@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsOpaque(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUnplated@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long get_IsUnplated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationId@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_NotificationId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SubContentType@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4VisualCacheAppspaceType@2345@@Z
    virtual long get_SubContentType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Theme@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TileThemeSelector@2345@@Z
    virtual long get_Theme(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThumbnailCacheId@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEA_K@Z
    virtual long get_ThumbnailCacheId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualCacheContentType@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4VisualCacheContentType@2345@@Z
    virtual long get_VisualCacheContentType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AccentColor@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_AccentColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ArrivalTime@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_ArrivalTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BrandingFlags@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_BrandingFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CachedBitmapDimensions@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_CachedBitmapDimensions(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long put_Data(::Windows::Storage::Streams::IBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsColorful@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsColorful(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOpaque@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsOpaque(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUnplated@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJE@Z
    virtual long put_IsUnplated(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotificationId@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_NotificationId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SubContentType@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJW4VisualCacheAppspaceType@2345@@Z
    virtual long put_SubContentType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Theme@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJW4TileThemeSelector@2345@@Z
    virtual long put_Theme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ThumbnailCacheId@StartVisualCacheEntry@VisualCache@UnifiedTile@Shell@WindowsInternal@@UEAAJ_K@Z
    virtual long put_ThumbnailCacheId(uint64_t);
};
} // namespace WindowsInternal::Shell::UnifiedTile::VisualCache
