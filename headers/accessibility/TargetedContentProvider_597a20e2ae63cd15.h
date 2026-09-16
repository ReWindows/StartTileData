#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 18 member(s).
namespace winrt::WindowsInternal::Shell::DataStoreCache::TargetedContent::implementation {
class TargetedContentProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@U?$IIterable@Uhstring@winrt@@@Collections@9Windows@7@W4TargetedContentProviderContentOptions@34567@@Z
    WindissectOpaque GetContentAsync(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@Uhstring@7@U?$IIterable@Uhstring@winrt@@@Collections@9Windows@7@W4TargetedContentProviderContentOptions@34567@@Z
    WindissectOpaque GetContentAsync(WindissectOpaque, WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@SA?AU?$IAsyncOperation@UTargetedContentProvider@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@@Foundation@Windows@7@XZ
    static WindissectOpaque GetCurrentAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@SA?AU?$IAsyncOperation@UTargetedContentProvider@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@@Foundation@Windows@7@XZ
    static WindissectOpaque GetDefaultAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportImpression@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAAXXZ
    void ReportImpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveContentAndMappingAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@Uhstring@7@0@Z
    WindissectOpaque SaveContentAndMappingAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveContentAndMappingAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@Uhstring@7@@Z
    WindissectOpaque SaveContentAndMappingAsync(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@QEAA@AEBUIrisService@Iris@Services@WindowsUdk@6@@Z
    TargetedContentProvider(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@UEAA@XZ
    virtual ~TargetedContentProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDownloadedImages@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEBA?AUfire_and_forget@7@XZ
    WindissectOpaque CleanupDownloadedImages() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLogosAndGetUpdateContentAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@UJsonObject@Json@Data@Windows@7@U?$IIterable@Uhstring@winrt@@@Collections@9Windows@7@@Z
    WindissectOpaque EnsureLogosAndGetUpdateContentAsync(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementId@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEBA?AUhstring@7@XZ
    WindissectOpaque GetPlacementId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessedContentRedirectAwareAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@Uhstring@7@U?$IIterable@Uhstring@winrt@@@Collections@9Windows@7@W4TargetedContentProviderContentOptions@34567@@Z
    WindissectOpaque GetProcessedContentRedirectAwareAsync(WindissectOpaque, WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawContentRedirectAwareAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@Uhstring@7@_N@Z
    WindissectOpaque GetRawContentRedirectAwareAsync(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCachedContentAsync@TargetedContentProvider@implementation@TargetedContent@DataStoreCache@Shell@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@UJsonObject@Json@Data@Windows@winrt@@@Foundation@Windows@7@Uhstring@7@U?$IIterable@Uhstring@winrt@@@Collections@9Windows@7@@Z
    WindissectOpaque TryGetCachedContentAsync(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::WindowsInternal::Shell::DataStoreCache::TargetedContent::implementation
