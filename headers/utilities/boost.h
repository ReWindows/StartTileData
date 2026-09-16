#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 7 member(s).
class boost {
public:
    class detail;
    class exception;
    class exception_detail;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?call_once@boost@@YAXAEAUonce_flag@1@P6AXXZ@Z
    void call_once(WindissectOpaque &, void ( *)(void));
    // Category: Method | Source: PDB Internal
    // Symbol: ?on_process_enter@boost@@YAXXZ
    void on_process_enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?on_process_exit@boost@@YAXXZ
    void on_process_exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?on_thread_exit@boost@@YAXXZ
    void on_thread_exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?tss_cleanup_implemented@boost@@YAXXZ
    void tss_cleanup_implemented();
};
