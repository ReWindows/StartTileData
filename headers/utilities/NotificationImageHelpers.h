#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 4 member(s).
class NotificationImageHelpers {
public:
    class ValueSetHelper;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendImagePayloadFromNotificationPayload@NotificationImageHelpers@@YAJPEAUIInspectable@@PEAV?$CCoSimpleArray@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@@@@@Z
    long AppendImagePayloadFromNotificationPayload(IInspectable *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPayloadItemType@NotificationImageHelpers@@YAJPEAUIInspectable@@PEAW4PayloadItemType@1@@Z
    long GetPayloadItemType(IInspectable *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPayloadRecursive@NotificationImageHelpers@@YAJPEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@W4PayloadItemType@1@PEAV?$CCoSimpleArray@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@@@@@Z
    long GetPayloadRecursive(WindissectOpaque *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertItem@NotificationImageHelpers@@YAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG1@Z
    long InsertItem(WindissectOpaque *, unsigned short const *, unsigned short const *);
};
