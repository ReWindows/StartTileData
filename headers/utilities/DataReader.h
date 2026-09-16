#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 3 member(s).
namespace winrt::Windows::Storage::Streams {
class DataReader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataReader@Streams@Storage@Windows@winrt@@QEAA@AEBUIInputStream@1234@@Z
    DataReader(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromBuffer@DataReader@Streams@Storage@Windows@winrt@@SA@AEBUIBuffer@2345@@Z
    static FromBuffer(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataReader@Streams@Storage@Windows@winrt@@QEAA@XZ
    ~DataReader();
};
} // namespace winrt::Windows::Storage::Streams
