#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 28 member(s).
namespace SystemSettings::DataModel {
class CSettingBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitializationResult@CSettingBase@DataModel@SystemSettings@@UEAAJXZ
    virtual long GetInitializationResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEnabledForUser@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long GetIsEnabledForUser(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetProperty(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueForUser@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@0PEAPEAUIInspectable@@@Z
    virtual long GetValueForUser(HSTRING__*, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUICoreWindow@Core@UI@Windows@@URect@Foundation@7@@Z
    virtual long Invoke(::Windows::UI::Core::ICoreWindow *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsAppResuming@CSettingBase@DataModel@SystemSettings@@UEAAJXZ
    virtual long OnSettingsAppResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsAppSuspending@CSettingBase@DataModel@SystemSettings@@UEAAJXZ
    virtual long OnSettingsAppSuspending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@CSettingBase@DataModel@SystemSettings@@QEAAXPEBG@Z
    void OnValueChanged(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUpdating@CSettingBase@DataModel@SystemSettings@@UEAA_NE@Z
    virtual bool SetIsUpdating(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageSessionId@CSettingBase@DataModel@SystemSettings@@UEAAJU_GUID@@@Z
    virtual long SetPageSessionId(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetProperty(HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetValue(HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueForUser@CSettingBase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@@Z
    virtual long SetValueForUser(HSTRING__*, HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SettingChanged@CSettingBase@DataModel@SystemSettings@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SettingChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@CSettingBase@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CSettingBase@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@CSettingBase@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@CSettingBase@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@CSettingBase@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUpdating@CSettingBase@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsUpdating(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PageSessionId@CSettingBase@DataModel@SystemSettings@@UEAAJPEAU_GUID@@@Z
    virtual long get_PageSessionId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CSettingBase@DataModel@SystemSettings@@UEAAJPEAW4SettingType@23@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SettingChanged@CSettingBase@DataModel@SystemSettings@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SettingChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingBase@DataModel@SystemSettings@@UEAA@XZ
    virtual ~CSettingBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingBase@DataModel@SystemSettings@@IEAA@XZ
    CSettingBase();
};
} // namespace SystemSettings::DataModel
