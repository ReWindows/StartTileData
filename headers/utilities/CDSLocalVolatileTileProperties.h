#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 56 member(s).
namespace WindowsInternal::Shell::CDSProperties {
class CDSLocalVolatileTileProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChanges@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJ_NAEAULocalStartVolatileTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    virtual long ApplyChanges(bool, ::Windows::Data::UnifiedTile::LocalStartVolatileTileProperties &, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@QEAA@XZ
    CDSLocalVolatileTileProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearUsageData@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJXZ
    virtual long ClearUsageData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDailyLaunchCountSummary@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJIEPEAI@Z
    virtual long GetDailyLaunchCountSummary(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDayKeyForToday@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@SA_KXZ
    static uint64_t GetDayKeyForToday();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedPropertyKinds@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAA?AW4CDSLocalVolatileTilePropertyKinds@234@XZ
    virtual int GetUpdatedPropertyKinds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementLaunchCount@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJMUDateTime@Foundation@Windows@@@Z
    virtual long IncrementLaunchCount(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeChanges@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUICDSLocalVolatileTilePropertiesPriv@234@@Z
    virtual long MergeChanges(::WindowsInternal::Shell::CDSProperties::ICDSLocalVolatileTilePropertiesPriv *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@QEAAJPEAUHSTRING__@@AEBULocalStartVolatileTileProperties@UnifiedTile@Data@Windows@@PEAUICDSTilePropertiesBatched@234@@Z
    long RuntimeClassInitialize(HSTRING__*, ::Windows::Data::UnifiedTile::LocalStartVolatileTileProperties const &, ::WindowsInternal::Shell::CDSProperties::ICDSTilePropertiesBatched *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUsageData@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJMIUDateTime@Foundation@Windows@@@Z
    virtual long SetUsageData(float, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DailyLaunchCount@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IMap@_KI@Collections@Foundation@Windows@@@Z
    virtual long get_DailyLaunchCount(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAW4CDSTilePropertiesKinds@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLaunchTime@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_LastLaunchTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchCount@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAI@Z
    virtual long get_LaunchCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentLaunches@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long get_MostRecentLaunches(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Relevance@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAM@Z
    virtual long get_Relevance(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DailyLaunchCount@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$IMap@_KI@Collections@Foundation@Windows@@@Z
    virtual long put_DailyLaunchCount(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastLaunchTime@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_LastLaunchTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchCount@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJI@Z
    virtual long put_LaunchCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MostRecentLaunches@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJPEAU?$IVectorView@_K@Collections@Foundation@Windows@@@Z
    virtual long put_MostRecentLaunches(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Relevance@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAAJM@Z
    virtual long put_Relevance(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@UEAA@XZ
    virtual ~CDSLocalVolatileTileProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChangesInternal@CDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@AEAAXAEAULocalStartVolatileTileProperties@UnifiedTile@Data@Windows@@PEA_N@Z
    void ApplyChangesInternal(::Windows::Data::UnifiedTile::LocalStartVolatileTileProperties &, bool *);
};
} // namespace WindowsInternal::Shell::CDSProperties
