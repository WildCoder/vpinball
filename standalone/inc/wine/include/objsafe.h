/*** Autogenerated by WIDL 9.0-rc1 from include/objsafe.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __objsafe_h__
#define __objsafe_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IObjectSafety_FWD_DEFINED__
#define __IObjectSafety_FWD_DEFINED__
typedef interface IObjectSafety IObjectSafety;
#ifdef __cplusplus
interface IObjectSafety;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#define INTERFACESAFE_FOR_UNTRUSTED_CALLER 1
#define INTERFACESAFE_FOR_UNTRUSTED_DATA 2
#define INTERFACE_USES_DISPEX 4
#define INTERFACE_USES_SECURITY_MANAGER 8
DEFINE_GUID(CATID_SafeForScripting, 0x7dd95801,0x9882,0x11cf,0x9f,0xa9,0x00,0xaa,0x00,0x6c,0x42,0xc4);
DEFINE_GUID(CATID_SafeForInitializing, 0x7dd95802,0x9882,0x11cf,0x9f,0xa9,0x00,0xaa,0x00,0x6c,0x42,0xc4);
/*****************************************************************************
 * IObjectSafety interface
 */
#ifndef __IObjectSafety_INTERFACE_DEFINED__
#define __IObjectSafety_INTERFACE_DEFINED__

DEFINE_GUID(IID_IObjectSafety, 0xcb5bdc81, 0x93c1, 0x11cf, 0x8f,0x20, 0x00,0x80,0x5f,0x2c,0xd0,0x64);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cb5bdc81-93c1-11cf-8f20-00805f2cd064")
IObjectSafety : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetInterfaceSafetyOptions(
        REFIID riid,
        DWORD *pdwSupportedOptions,
        DWORD *pdwEnabledOptions) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInterfaceSafetyOptions(
        REFIID riid,
        DWORD dwOptionSetMask,
        DWORD dwEnabledOptions) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IObjectSafety, 0xcb5bdc81, 0x93c1, 0x11cf, 0x8f,0x20, 0x00,0x80,0x5f,0x2c,0xd0,0x64)
#endif
#else
typedef struct IObjectSafetyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectSafety *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectSafety *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectSafety *This);

    /*** IObjectSafety methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInterfaceSafetyOptions)(
        IObjectSafety *This,
        REFIID riid,
        DWORD *pdwSupportedOptions,
        DWORD *pdwEnabledOptions);

    HRESULT (STDMETHODCALLTYPE *SetInterfaceSafetyOptions)(
        IObjectSafety *This,
        REFIID riid,
        DWORD dwOptionSetMask,
        DWORD dwEnabledOptions);

    END_INTERFACE
} IObjectSafetyVtbl;

interface IObjectSafety {
    CONST_VTBL IObjectSafetyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IObjectSafety_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IObjectSafety_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IObjectSafety_Release(This) (This)->lpVtbl->Release(This)
/*** IObjectSafety methods ***/
#define IObjectSafety_GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions) (This)->lpVtbl->GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions)
#define IObjectSafety_SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions) (This)->lpVtbl->SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IObjectSafety_QueryInterface(IObjectSafety* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IObjectSafety_AddRef(IObjectSafety* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IObjectSafety_Release(IObjectSafety* This) {
    return This->lpVtbl->Release(This);
}
/*** IObjectSafety methods ***/
static __WIDL_INLINE HRESULT IObjectSafety_GetInterfaceSafetyOptions(IObjectSafety* This,REFIID riid,DWORD *pdwSupportedOptions,DWORD *pdwEnabledOptions) {
    return This->lpVtbl->GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions);
}
static __WIDL_INLINE HRESULT IObjectSafety_SetInterfaceSafetyOptions(IObjectSafety* This,REFIID riid,DWORD dwOptionSetMask,DWORD dwEnabledOptions) {
    return This->lpVtbl->SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions);
}
#endif
#endif

#endif


#endif  /* __IObjectSafety_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __objsafe_h__ */
