#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 20 member(s).
namespace WindowsInternal::TracelogRecording {
class TracelogRecordingSessionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRecordingStarted@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJPEAUHSTRING__@@0@Z
    virtual long EnsureRecordingStarted(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapTrace@TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAAJXZ
    virtual long SnapTrace();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@QEAA@XZ
    TracelogRecordingSessionManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TracelogRecordingSessionManager@TracelogRecording@WindowsInternal@@UEAA@XZ
    virtual ~TracelogRecordingSessionManager();
};
} // namespace WindowsInternal::TracelogRecording
