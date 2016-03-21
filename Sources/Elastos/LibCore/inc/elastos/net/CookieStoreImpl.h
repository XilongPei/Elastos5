
#ifndef __ELASTOS_NET_COOKIESTOREIMPL_H__
#define __ELASTOS_NET_COOKIESTOREIMPL_H__

#include "Elastos.CoreLibrary.Net.h"
#include "Object.h"

using Elastos::Utility::IList;
using Elastos::Utility::IMap;

using Elastos::Net::IURI;

DEFINE_OBJECT_HASH_FUNC_FOR(IURI)

namespace Elastos {
namespace Net {

class CookieStoreImpl
    : public Object
    , public ICookieStore
{
public:
    CAR_INTERFACE_DECL()

    CookieStoreImpl();
    ~CookieStoreImpl();

    CARAPI Add(
        /* [in] */ IURI* uri,
        /* [in] */ IHttpCookie* cookie);

    CARAPI Get(
        /* [in] */ IURI* uri,
        /* [out] */ IList** httpCookies);

    CARAPI GetCookies(
        /* [out] */ IList** httpCookies);

    CARAPI GetURIs(
        /* [out] */ IList** URIs);

    CARAPI Remove(
        /* [in] */ IURI* uri,
        /* [in] */ IHttpCookie* cookie,
        /* [out] */ Boolean* succeeded);

    CARAPI RemoveAll(
        /* [out] */ Boolean* succeeded);

private:
    CARAPI_(AutoPtr<IURI>) GetCookiesUri(
        /* [in] */ IURI* uri);

private:
    /** this map may have null keys! */
    AutoPtr<IMap> mMap;
};

} // namespace Net
} // namespace Elastos

#endif //__ELASTOS_NET_COOKIESTOREIMPL_H__
