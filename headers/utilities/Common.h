#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 10 member(s).
namespace ShellMRTHelper {
class Common {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z
    long ConvertMsAppXUriToMsResourceUri(WindissectOpaque *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z
    long ConvertMsAppXUriToMsResourceUri(HSTRING__*, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceScaleFactorFromScalePercent@Common@ShellMRTHelper@@YA?AW4DEVICE_SCALE_FACTOR@@I@Z
    int DeviceScaleFactorFromScalePercent(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool HasMsAppDataUriScheme(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool HasMsAppXUriScheme(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool HasMsResourceUriScheme(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResolvableStringReference@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool IsResolvableStringReference(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleFactorToResourceScale@Common@ShellMRTHelper@@YA?AW4RESOURCE_SCALE@@W4DEVICE_SCALE_FACTOR@@@Z
    int ScaleFactorToResourceScale(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z
    long TryFallbackToFilePath(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z
    long TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(HSTRING__*, unsigned short * *);
};
} // namespace ShellMRTHelper
