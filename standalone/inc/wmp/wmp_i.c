/*** Autogenerated by WIDL 9.0-rc1 from wmp.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#elif defined(__cplusplus)

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    EXTERN_C const type DECLSPEC_SELECTANY name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#else

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    const type DECLSPEC_SELECTANY name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif

#ifdef __cplusplus
extern "C" {
#endif

MIDL_DEFINE_GUID(IID, LIBID_WMPLib, 0x6bf52a50, 0x394a, 0x11d3, 0xb1,0x53, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);
MIDL_DEFINE_GUID(IID, IID_IWMPPlaylist, 0xd5f0f4f1, 0x130c, 0x11d3, 0xb1,0x4e, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);
MIDL_DEFINE_GUID(IID, IID_IWMPMedia, 0x94d55e95, 0x3fac, 0x11d3, 0xb1,0x55, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);
MIDL_DEFINE_GUID(IID, IID_IWMPControls, 0x74c09e02, 0xf828, 0x11d2, 0xa7,0x4b, 0x00,0xa0,0xc9,0x05,0xf3,0x6e);
MIDL_DEFINE_GUID(IID, IID_IWMPControls2, 0x6f030d25, 0x0890, 0x480f, 0x97,0x75, 0x1f,0x7e,0x40,0xab,0x5b,0x8e);
MIDL_DEFINE_GUID(IID, IID_IWMPRemoteMediaServices, 0xcbb92747, 0x741f, 0x44fe, 0xab,0x5b, 0xf1,0xa4,0x8f,0x3b,0x2a,0x59);
MIDL_DEFINE_GUID(IID, IID_IWMPSettings, 0x9104d1ab, 0x80c9, 0x4fed, 0xab,0xf0, 0x2e,0x64,0x17,0xa6,0xdf,0x14);
MIDL_DEFINE_GUID(IID, IID_IWMPStringCollection, 0x4a976298, 0x8c0d, 0x11d3, 0xb3,0x89, 0x00,0xc0,0x4f,0x68,0x57,0x4b);
MIDL_DEFINE_GUID(IID, IID_IWMPMediaCollection, 0x8363bc22, 0xb4b4, 0x4b19, 0x98,0x9d, 0x1c,0xd7,0x65,0x74,0x9d,0xd1);
MIDL_DEFINE_GUID(IID, IID_IWMPPlaylistArray, 0x679409c0, 0x99f7, 0x11d3, 0x9f,0xb7, 0x00,0x10,0x5a,0xa6,0x20,0xbb);
MIDL_DEFINE_GUID(IID, IID_IWMPPlaylistCollection, 0x10a13217, 0x23a7, 0x439b, 0xb1,0xc0, 0xd8,0x47,0xc7,0x9b,0x77,0x74);
MIDL_DEFINE_GUID(IID, IID_IWMPNetwork, 0xec21b779, 0xedef, 0x462d, 0xbb,0xa4, 0xad,0x9d,0xde,0x2b,0x29,0xa7);
MIDL_DEFINE_GUID(IID, IID_IWMPCdrom, 0xcfab6e98, 0x8730, 0x11d3, 0xb3,0x88, 0x00,0xc0,0x4f,0x68,0x57,0x4b);
MIDL_DEFINE_GUID(IID, IID_IWMPCdromCollection, 0xee4c8fe2, 0x34b2, 0x11d3, 0xa3,0xbf, 0x00,0x60,0x97,0xc9,0xb3,0x44);
MIDL_DEFINE_GUID(IID, IID_IWMPDVD, 0x8da61686, 0x4668, 0x4a5c, 0xae,0x5d, 0x80,0x31,0x93,0x29,0x3d,0xbe);
MIDL_DEFINE_GUID(IID, IID_IWMPClosedCaption, 0x4f2df574, 0xc588, 0x11d3, 0x9e,0xd0, 0x00,0xc0,0x4f,0xb6,0xe9,0x37);
MIDL_DEFINE_GUID(IID, IID_IWMPErrorItem, 0x3614c646, 0x3b3b, 0x4de7, 0xa8,0x1e, 0x93,0x0e,0x3f,0x21,0x27,0xb3);
MIDL_DEFINE_GUID(IID, IID_IWMPMedia2, 0xab7c88bb, 0x143e, 0x4ea4, 0xac,0xc3, 0xe4,0x35,0x0b,0x21,0x06,0xc3);
MIDL_DEFINE_GUID(IID, IID_IWMPMedia3, 0xf118efc7, 0xf03a, 0x4fb4, 0x99,0xc9, 0x1c,0x02,0xa5,0xc1,0x06,0x5b);
MIDL_DEFINE_GUID(IID, IID_IWMPError, 0xa12dcf7d, 0x14ab, 0x4c1b, 0xa8,0xcd, 0x63,0x90,0x9f,0x06,0x02,0x5b);
MIDL_DEFINE_GUID(IID, IID_IWMPPlayerApplication, 0x40897764, 0xceab, 0x47be, 0xad,0x4a, 0x8e,0x28,0x53,0x7f,0x9b,0xbf);
MIDL_DEFINE_GUID(IID, IID_IWMPCore, 0xd84cca99, 0xcce2, 0x11d2, 0x9e,0xcc, 0x00,0x00,0xf8,0x08,0x59,0x81);
MIDL_DEFINE_GUID(IID, IID_IWMPCore2, 0xbc17e5b7, 0x7561, 0x4c18, 0xbb,0x90, 0x17,0xd4,0x85,0x77,0x56,0x59);
MIDL_DEFINE_GUID(IID, IID_IWMPCore3, 0x7587c667, 0x628f, 0x499f, 0x88,0xe7, 0x6a,0x6f,0x4e,0x88,0x84,0x64);
MIDL_DEFINE_GUID(IID, IID_IWMPPlayer4, 0x6c497d62, 0x8919, 0x413c, 0x82,0xdb, 0xe9,0x35,0xfb,0x3e,0xc5,0x84);
MIDL_DEFINE_GUID(IID, IID_IWMPPlayer, 0x6bf52a4f, 0x394a, 0x11d3, 0xb1,0x53, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);
MIDL_DEFINE_GUID(IID, IID_IWMPSyncDevice, 0x82a2986c, 0x0293, 0x4fd0, 0xb2,0x79, 0xb2,0x1b,0x86,0xc0,0x58,0xbe);
MIDL_DEFINE_GUID(IID, IID_IWMPSyncDevice2, 0x88afb4b2, 0x140a, 0x44d2, 0x91,0xe6, 0x45,0x43,0xda,0x46,0x7c,0xd1);
MIDL_DEFINE_GUID(IID, IID_IWMPCdromRip, 0x56e2294f, 0x69ed, 0x4629, 0xa8,0x69, 0xae,0xa7,0x2c,0x0d,0xcc,0x2c);
MIDL_DEFINE_GUID(IID, IID_IWMPCdromBurn, 0xbd94dbeb, 0x417f, 0x4928, 0xaa,0x06, 0x08,0x7d,0x56,0xed,0x9b,0x59);
MIDL_DEFINE_GUID(IID, IID_IWMPLibrary, 0x3df47861, 0x7df1, 0x4c1f, 0xa8,0x1b, 0x4c,0x26,0xf0,0xf7,0xa7,0xc6);
MIDL_DEFINE_GUID(IID, IID_IWMPEvents, 0x19a6627b, 0xda9e, 0x47c1, 0xbb,0x23, 0x00,0xb5,0xe6,0x68,0x23,0x6a);
MIDL_DEFINE_GUID(IID, IID_IWMPEvents2, 0x1e7601fa, 0x47ea, 0x4107, 0x9e,0xa9, 0x90,0x04,0xed,0x96,0x84,0xff);
MIDL_DEFINE_GUID(IID, IID_IWMPEvents3, 0x1f504270, 0xa66b, 0x4223, 0x8e,0x96, 0x26,0xa0,0x6c,0x63,0xd6,0x9f);
MIDL_DEFINE_GUID(IID, IID_IWMPEvents4, 0x26dabcfa, 0x306b, 0x404d, 0x9a,0x6f, 0x63,0x0a,0x84,0x05,0x04,0x8d);
MIDL_DEFINE_GUID(IID, IID__WMPOCXEvents, 0x6bf52a51, 0x394a, 0x11d3, 0xb1,0x53, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);
MIDL_DEFINE_GUID(CLSID, CLSID_WindowsMediaPlayer, 0x6bf52a52, 0x394a, 0x11d3, 0xb1,0x53, 0x00,0xc0,0x4f,0x79,0xfa,0xa6);

#ifdef __cplusplus
}
#endif

#undef MIDL_DEFINE_GUID
