#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 8 member(s).
namespace rapidjson {
class internal {
public:
    class DiyFp;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigitGen@internal@rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z
    void DigitGen(WindissectOpaque const &, WindissectOpaque const &, uint64_t, char *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Grisu2@internal@rapidjson@@YAXNPEADPEAH1@Z
    void Grisu2(double, char *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrisuRound@internal@rapidjson@@YAXPEADH_K111@Z
    void GrisuRound(char *, int, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prettify@internal@rapidjson@@YAPEADPEADHHH@Z
    char * Prettify(char *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteExponent@internal@rapidjson@@YAPEADHPEAD@Z
    char * WriteExponent(int, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dtoa@internal@rapidjson@@YAPEADNPEADH@Z
    char * dtoa(double, char *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?u32toa@internal@rapidjson@@YAPEADIPEAD@Z
    char * u32toa(unsigned int, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?u64toa@internal@rapidjson@@YAPEAD_KPEAD@Z
    char * u64toa(uint64_t, char *);
};
} // namespace rapidjson
