/*** Autogenerated by WIDL 9.0-rc1 from ../inc/flexdmd/FlexUDMD.idl - Do not edit ***/

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

#ifndef __flexudmd_i_h__
#define __flexudmd_i_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __DMDObject_FWD_DEFINED__
#define __DMDObject_FWD_DEFINED__
#ifdef __cplusplus
typedef class DMDObject DMDObject;
#else
typedef struct DMDObject DMDObject;
#endif /* defined __cplusplus */
#endif /* defined __DMDObject_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __FlexUDMD_LIBRARY_DEFINED__
#define __FlexUDMD_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_FlexUDMD, 0x62f0e6a3, 0xd1af, 0x45cf, 0x88,0x93, 0x84,0x6e,0xce,0xb3,0x8d,0xfe);

/*****************************************************************************
 * DMDObject coclass
 */

DEFINE_GUID(CLSID_DMDObject, 0xe1612654, 0x304a, 0x4e07, 0xa2,0x36, 0xeb,0x64,0xd6,0xd4,0xf5,0x11);

#ifdef __cplusplus
class DECLSPEC_UUID("e1612654-304a-4e07-a236-eb64d6d4f511") DMDObject;
#ifdef __CRT_UUID_DECL
#ifndef __STANDALONE__
__CRT_UUID_DECL(DMDObject, 0xe1612654, 0x304a, 0x4e07, 0xa2,0x36, 0xeb,0x64,0xd6,0xd4,0xf5,0x11)
#endif
#endif
#endif

#endif /* __FlexUDMD_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __flexudmd_i_h__ */
