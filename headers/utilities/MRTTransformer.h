#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 55 member(s).
namespace DataStoreCache {
class MRTTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MRTTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@MRTTransformer@DataStoreCache@@UEAA?AV?$ComPtr@UIMRTTransformerData@DataStoreCache@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual WindissectOpaque GetData(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@MRTTransformer@DataStoreCache@@UEBAAEBU_GUID@@XZ
    virtual _GUID const & GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MRTTransformer@DataStoreCache@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMRTHash@MRTTransformer@DataStoreCache@@UEAA_KXZ
    virtual uint64_t GetMRTHash();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrTryGeneratePhoneticName@MRTTransformer@DataStoreCache@@UEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@0U_GUID@@@Z
    virtual ::Microsoft::WRL::Wrappers::HString GetOrTryGeneratePhoneticName(HSTRING__*, HSTRING__*, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MRTTransformer@DataStoreCache@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MRTTransformer@DataStoreCache@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedDataForPackageFullName@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@@Z
    virtual void InvalidateCachedDataForPackageFullName(WindissectOpaque *, int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedDataForPriFilePath@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@@Z
    virtual void InvalidateCachedDataForPriFilePath(WindissectOpaque *, int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedDataForUnresolvableItem@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataItem@2@W4ItemDataFlags@2@@Z
    virtual void InvalidateCachedDataForUnresolvableItem(WindissectOpaque *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MRTTransformer@DataStoreCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MRTTransformer@DataStoreCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataManager@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataManager@2@@Z
    virtual void SetDataManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationStage@MRTTransformer@DataStoreCache@@UEAAXW4DataStoreCacheInit@2@@Z
    virtual void SetInitializationStage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFullName@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@@Z
    virtual void SetPackageFullName(WindissectOpaque *, int, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPriFilePath@MRTTransformer@DataStoreCache@@UEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@@Z
    virtual void SetPriFilePath(WindissectOpaque *, int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGeneratePhoneticName@MRTTransformer@DataStoreCache@@UEBA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@0@Z
    virtual ::Microsoft::WRL::Wrappers::HString TryGeneratePhoneticName(HSTRING__*, HSTRING__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetData@MRTTransformer@DataStoreCache@@UEAA?AV?$ComPtr@UIMRTTransformerData@DataStoreCache@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    virtual WindissectOpaque TryGetData(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTTransformer@DataStoreCache@@UEAA@XZ
    virtual ~MRTTransformer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistentQualifierLastChangeStamp@MRTTransformer@DataStoreCache@@CAIXZ
    static unsigned int GetPersistentQualifierLastChangeStamp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWNFs@MRTTransformer@DataStoreCache@@AEAAXXZ
    void InitializeWNFs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAllMRTData@MRTTransformer@DataStoreCache@@AEAAXXZ
    void InvalidateAllMRTData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedDataAndUpdateMRTData@MRTTransformer@DataStoreCache@@AEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@2@Z
    void InvalidateCachedDataAndUpdateMRTData(WindissectOpaque *, int, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SchedulePhoneticNameRetryTimerCallbackIfApplicable@MRTTransformer@DataStoreCache@@AEAAXXZ
    void SchedulePhoneticNameRetryTimerCallbackIfApplicable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerRefreshIfNeeded@MRTTransformer@DataStoreCache@@AEBAXXZ
    void TriggerRefreshIfNeeded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayLanguage@MRTTransformer@DataStoreCache@@AEAAXXZ
    void UpdateDisplayLanguage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMRTData@MRTTransformer@DataStoreCache@@AEAAXPEAUIDataItem@2@W4ItemDataFlags@2@PEAUHSTRING__@@2@Z
    void UpdateMRTData(WindissectOpaque *, int, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCache@MRTTransformer@DataStoreCache@@AEAAXXZ
    void ValidateCache();
};
} // namespace DataStoreCache
