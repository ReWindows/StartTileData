#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace winrt::Windows::Graphics::Imaging {
class BitmapEncoder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsync@BitmapEncoder@Imaging@Graphics@Windows@winrt@@SA@AEBUguid@5@AEBUIRandomAccessStream@Streams@Storage@45@@Z
    static CreateAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PngEncoderId@BitmapEncoder@Imaging@Graphics@Windows@winrt@@SA@XZ
    static PngEncoderId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BitmapEncoder@Imaging@Graphics@Windows@winrt@@QEAA@XZ
    ~BitmapEncoder();
};
} // namespace winrt::Windows::Graphics::Imaging
