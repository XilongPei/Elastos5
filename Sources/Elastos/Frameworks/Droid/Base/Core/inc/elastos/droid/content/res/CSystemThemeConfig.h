
#ifndef __ELASTOS_DROID_CONTENT_RES_CSYSTEMTHEMECONFIG_H__
#define __ELASTOS_DROID_CONTENT_RES_CSYSTEMTHEMECONFIG_H__

#include "_Elastos_Droid_Content_Res_CSystemThemeConfig.h"
#include "elastos/droid/content/res/CThemeConfig.h"

namespace Elastos {
namespace Droid {
namespace Content {
namespace Res {

CarClass(CSystemThemeConfig)
    , public ThemeConfig
{
public:
    CAR_OBJECT_DECL()

    CARAPI constructor();
};

} // namespace Res
} // namespace Content
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_CONTENT_RES_CSYSTEMTHEMECONFIG_H__
