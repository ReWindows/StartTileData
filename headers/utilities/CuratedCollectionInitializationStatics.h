#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 44 member(s).
namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections {
class CuratedCollectionInitializationStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEdgeAssets@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@0@Z
    virtual long CreateEdgeAssets(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEdgeAssetsFromIconPath@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long CreateEdgeAssetsFromIconPath(HSTRING__*, HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ
    CuratedCollectionInitializationStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishedProcessingCollectionMigration@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long FinishedProcessingCollectionMigration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationUserModelIdFromLinkFile@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetApplicationUserModelIdFromLinkFile(HSTRING__* const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkPathFromApplicationUserModelId@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetLinkPathFromApplicationUserModelId(HSTRING__* const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMigrationData@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAK0PEAPEAUHSTRING__@@1@Z
    virtual long GetMigrationData(unsigned long *, unsigned long *, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyLayoutFileTimestamp@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAUDateTime@Foundation@Windows@@@Z
    virtual long GetPolicyLayoutFileTimestamp(HSTRING__* const, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMigrationPending@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAE@Z
    virtual long IsMigrationPending(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCloudDefaultLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long LoadCloudDefaultLayout(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDefaultLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long LoadDefaultLayout(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFallbackDefaultLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long LoadFallbackDefaultLayout(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadLayoutModification@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long LoadLayoutModification(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPolicyLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJQEAUHSTRING__@@PEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long LoadPolicyLayout(HSTRING__* const, ::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWindows8MigratedLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long LoadWindows8MigratedLayout(HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameWindows8MigratedLayout@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long RenameWindows8MigratedLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryImportEdgeAssets@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJXZ
    virtual long TryImportEdgeAssets();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirectoryRecursive@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBG@Z
    long CreateDirectoryRecursive(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeBase64ImageContent@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUHSTRING__@@PEAPEAEPEAI@Z
    long DecodeBase64ImageContent(HSTRING__*, unsigned char * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecompressItemStoreXML@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAXPEAULayoutFileHeader@2345@PEAPEAG@Z
    long DecompressItemStoreXML(void *, WindissectOpaque *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDirectoriesCreation@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEAUHSTRING__@@@Z
    long EnsureDirectoriesCreation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportEdgeAssetNode@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGPEAUIXMLDOMNode@@@Z
    long ImportEdgeAssetNode(unsigned short const *, IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportEdgeAssets@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJXZ
    long ImportEdgeAssets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFileStream@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGPEAPEAUIStream@@@Z
    long LoadFileStream(unsigned short const *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadLayoutFromAppData@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGPEAPEAUIStream@@@Z
    long LoadLayoutFromAppData(unsigned short const *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFileIsXml@CuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBG@Z
    long ValidateFileIsXml(unsigned short const *);
};
} // namespace WindowsInternal::Shell::UnifiedTile::CuratedTileCollections
