#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 5 member(s).
class _bstr_t {
public:
    class Data_t;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@_bstr_t@@QEAAPEAPEAGXZ
    unsigned short * * GetAddress();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_bstr_t@@QEAA@PEBG@Z
    _bstr_t(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_bstr_t@@QEAA@XZ
    ~_bstr_t();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Free@_bstr_t@@AEAAXXZ
    void _Free();
};
