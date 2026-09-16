#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 26 member(s).
namespace DataStoreCache {
class MRTHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePath@MRTHelper@DataStoreCache@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4ImageType@2@W4DEVICE_SCALE_FACTOR@@W4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@@Z
    ::Microsoft::WRL::Wrappers::HString ResolvePath(HSTRING__*, int, int, int, int, int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePath@MRTHelper@DataStoreCache@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4ImageType@2@GGW4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@W4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@PEAW49UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@PEAW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@@Z
    ::Microsoft::WRL::Wrappers::HString ResolvePath(HSTRING__*, int, unsigned short, unsigned short, int, int, int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveString@MRTHelper@DataStoreCache@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    ::Microsoft::WRL::Wrappers::HString ResolveString(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelper@DataStoreCache@@UEAA@XZ
    virtual ~MRTHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMRTResourceBroker@MRTHelper@DataStoreCache@@IEBAJPEAPEAUIMRTResourceBroker@@@Z
    long CreateMRTResourceBroker(IMRTResourceBroker * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppUriResolver@MRTHelper@DataStoreCache@@IEAAJPEAPEAUIAppUriResolver@@@Z
    long EnsureAppUriResolver(IAppUriResolver * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternateFormFromCandidate@MRTHelper@DataStoreCache@@KAJPEAUIResourceCandidate@@PEAPEAG@Z
    static long GetAlternateFormFromCandidate(IResourceCandidate *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContrastFromCandidate@MRTHelper@DataStoreCache@@KAJPEAUIResourceCandidate@@PEAW4RESOURCE_CONTRAST@@@Z
    static long GetContrastFromCandidate(IResourceCandidate *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResourceWithPathNormalization@MRTHelper@DataStoreCache@@KAJPEBGPEAUIResourceMap@@PEAPEAUINamedResource@@@Z
    static long GetNamedResourceWithPathNormalization(unsigned short const *, IResourceMap *, INamedResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeFromCandidate@MRTHelper@DataStoreCache@@KAJPEAUIResourceCandidate@@PEAPEAG@Z
    static long GetThemeFromCandidate(IResourceCandidate *, unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MRTHelper@DataStoreCache@@IEAA@PEAUIUser@System@Windows@@@Z
    MRTHelper(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImageWithAlternateForm@MRTHelper@DataStoreCache@@KAJPEBGW4ImageResolutionType@12@PEAUIResourceMap@@PEAUIResourceContext@@W4DEVICE_SCALE_FACTOR@@GGPEBW4RESOURCE_CONTRAST@@00PEAW47@PEAPEAG77@Z
    static long ResolveImageWithAlternateForm(unsigned short const *, int, IResourceMap *, IResourceContext *, int, unsigned short, unsigned short, int const *, unsigned short const *, unsigned short const *, int *, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImageWithoutAlternateForm@MRTHelper@DataStoreCache@@KAJPEBGW4ImageResolutionType@12@PEAUIResourceMap@@PEAUIResourceContext@@W4DEVICE_SCALE_FACTOR@@GPEBW4RESOURCE_CONTRAST@@0PEAW47@PEAPEAG7@Z
    static long ResolveImageWithoutAlternateForm(unsigned short const *, int, IResourceMap *, IResourceContext *, int, unsigned short, int const *, unsigned short const *, int *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePathInternal@MRTHelper@DataStoreCache@@IEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@W4ImageResolutionType@12@W4DEVICE_SCALE_FACTOR@@GGPEBW4RESOURCE_CONTRAST@@PEBG4PEAW4RESOURCE_CONTRAST@@PEAPEAG6@Z
    ::Microsoft::WRL::Wrappers::HString ResolvePathInternal(HSTRING__*, int, int, unsigned short, unsigned short, int const *, unsigned short const *, unsigned short const *, int *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveResourceCandidate@MRTHelper@DataStoreCache@@KAJPEAUIResourceContext@@PEAUINamedResource@@PEAW4RESOURCE_CONTRAST@@PEAPEAG3PEAPEAUIResourceCandidate@@@Z
    static long ResolveResourceCandidate(IResourceContext *, INamedResource *, int *, unsigned short * *, unsigned short * *, IResourceCandidate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimplifyFullyQualifiedResourceStringIfApplicable@MRTHelper@DataStoreCache@@KA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z
    static ::Microsoft::WRL::Wrappers::HString SimplifyFullyQualifiedResourceStringIfApplicable(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateMrtAlternateFormToUtmAlternateForm@MRTHelper@DataStoreCache@@KA?AW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@PEBG@Z
    static int TranslateMrtAlternateFormToUtmAlternateForm(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateMrtThemeToUtmTheme@MRTHelper@DataStoreCache@@KA?AW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@PEBG@Z
    static int TranslateMrtThemeToUtmTheme(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateUtmAlternateFormToMrtAlternateForm@MRTHelper@DataStoreCache@@KAPEBGW4TileImageResourceAlternateForm@UnifiedTile@Shell@WindowsInternal@@@Z
    static unsigned short const * TranslateUtmAlternateFormToMrtAlternateForm(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateUtmContrastToMrtContrast@MRTHelper@DataStoreCache@@KAPEBW4RESOURCE_CONTRAST@@W4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4ImageType@2@AEAW43@@Z
    static int const * TranslateUtmContrastToMrtContrast(int, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateUtmThemeToMrtTheme@MRTHelper@DataStoreCache@@KAPEBGW4TileImageResourceTheme@UnifiedTile@Shell@WindowsInternal@@@Z
    static unsigned short const * TranslateUtmThemeToMrtTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslatetMrtContrastToUtmContrast@MRTHelper@DataStoreCache@@KA?AW4TileImageResourceContrast@UnifiedTile@Shell@WindowsInternal@@W4RESOURCE_CONTRAST@@@Z
    static int TranslatetMrtContrastToUtmContrast(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureResourceManagerAndMap@MRTHelper@DataStoreCache@@IEAAJPEAPEAUIMrtResourceManager@@PEAPEAUIResourceMap@@@Z
    long TryEnsureResourceManagerAndMap(IMrtResourceManager * *, IResourceMap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResolveDllReference@MRTHelper@DataStoreCache@@KAJPEBGIPEA_NPEAPEAG@Z
    static long TryResolveDllReference(unsigned short const *, unsigned int, bool *, unsigned short * *);
};
} // namespace DataStoreCache
