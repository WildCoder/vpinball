/*** Autogenerated by WIDL 9.0-rc1 from vpinball.idl - Do not edit ***/

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

MIDL_DEFINE_GUID(IID, LIBID_VPinballLib, 0x384df69d, 0x3592, 0x4041, 0x84,0x8d, 0x9a,0x2d,0x5c,0xd0,0x81,0xa0);
MIDL_DEFINE_GUID(IID, IID_ICollection, 0xbe073465, 0x7189, 0x4489, 0x93,0xbc, 0x5b,0x6a,0xbb,0xe1,0xf8,0x80);
MIDL_DEFINE_GUID(IID, DIID_ICollectionEvents, 0x5b214770, 0xee20, 0x47f4, 0x9b,0x18, 0xd6,0x49,0x1d,0xc5,0x9d,0x45);
MIDL_DEFINE_GUID(IID, IID_ITable, 0xae85bcac, 0x1734, 0x4e5c, 0x81,0xda, 0x07,0x5a,0xd4,0x7a,0x13,0x6e);
MIDL_DEFINE_GUID(IID, IID_ITableGlobal, 0x2981e0e0, 0x8e64, 0x44fc, 0x9a,0x01, 0x64,0xcf,0xfa,0x1f,0x7d,0xba);
MIDL_DEFINE_GUID(IID, DIID_ITableEvents, 0xd3ad16e8, 0x633b, 0x47de, 0xa3,0xb8, 0x92,0x50,0x7f,0x37,0xcf,0x65);
MIDL_DEFINE_GUID(IID, IID_IVPDebug, 0x8668327a, 0x610e, 0x4041, 0x91,0xc4, 0xaf,0x69,0xd2,0x61,0xe3,0x81);
MIDL_DEFINE_GUID(IID, IID_IWall, 0x882f3e68, 0x8503, 0x4300, 0x8a,0xc0, 0x91,0xe8,0xdf,0x3f,0x8d,0x6d);
MIDL_DEFINE_GUID(IID, DIID_IWallEvents, 0x1128a15e, 0x1388, 0x450f, 0xa5,0x17, 0x28,0x19,0x80,0x8c,0xf7,0xcf);
MIDL_DEFINE_GUID(IID, IID_IControlPoint, 0x353b4f85, 0xbabc, 0x4feb, 0xb6,0x64, 0x91,0xce,0x3d,0xb3,0xc0,0xfa);
MIDL_DEFINE_GUID(IID, IID_IFlipper, 0xb4957ea2, 0x33be, 0x45e6, 0x93,0xc2, 0xca,0x16,0xb8,0x75,0x5b,0xf3);
MIDL_DEFINE_GUID(IID, DIID_IFlipperEvents, 0xc1001167, 0x49ee, 0x4d66, 0xb9,0xf4, 0xa1,0x62,0x38,0x47,0x51,0x0a);
MIDL_DEFINE_GUID(IID, IID_ITimer, 0xc74673fa, 0x0f67, 0x49f0, 0x84,0x69, 0x18,0xad,0xda,0xf5,0x23,0x55);
MIDL_DEFINE_GUID(IID, DIID_ITimerEvents, 0xdc13dc5b, 0xff29, 0x4ef4, 0x93,0xe1, 0x06,0xc4,0xb8,0x60,0x3a,0xef);
MIDL_DEFINE_GUID(IID, IID_IPlunger, 0x3b0bf779, 0xb5d2, 0x4445, 0xb8,0x04, 0xef,0x1e,0x98,0x90,0xfe,0x98);
MIDL_DEFINE_GUID(IID, DIID_IPlungerEvents, 0x9bca5dd9, 0xb893, 0x4595, 0x9d,0x3a, 0x8b,0xd7,0x7f,0xb5,0xde,0x71);
MIDL_DEFINE_GUID(IID, IID_ITextbox, 0x596fcd76, 0xc5e8, 0x4b6a, 0xa3,0x33, 0xfb,0x0d,0x64,0x5e,0x05,0x18);
MIDL_DEFINE_GUID(IID, DIID_ITextboxEvents, 0xf1c767b8, 0x7351, 0x4ebc, 0x80,0x22, 0xe7,0x31,0x43,0xbe,0x6f,0x5d);
MIDL_DEFINE_GUID(IID, IID_IBumper, 0x4cb2fcca, 0x9336, 0x48ff, 0x90,0xbd, 0xf8,0xd0,0x1c,0x16,0xbe,0x8c);
MIDL_DEFINE_GUID(IID, DIID_IBumperEvents, 0xd868ee8d, 0xaf83, 0x4c7a, 0xa6,0x8e, 0x1d,0xba,0x95,0x64,0x34,0xa7);
MIDL_DEFINE_GUID(IID, IID_ITrigger, 0xcd5054c6, 0x016f, 0x4bb5, 0xb1,0x31, 0x12,0xfe,0x29,0x72,0x0d,0xf8);
MIDL_DEFINE_GUID(IID, DIID_ITriggerEvents, 0x8b71cb94, 0x698c, 0x4839, 0x88,0x32, 0x95,0x65,0x01,0xd3,0xde,0xca);
MIDL_DEFINE_GUID(IID, IID_ILight, 0xd3013008, 0x52af, 0x410b, 0xad,0x03, 0x66,0xeb,0x37,0xd1,0xc8,0xac);
MIDL_DEFINE_GUID(IID, DIID_ILightEvents, 0x9c07f82f, 0x325e, 0x482f, 0xbc,0x09, 0x10,0xf0,0x14,0x83,0x47,0x55);
MIDL_DEFINE_GUID(IID, IID_IKicker, 0xdbc4625d, 0x6226, 0x4afa, 0x86,0x49, 0x75,0xb4,0x3c,0x33,0x20,0x41);
MIDL_DEFINE_GUID(IID, DIID_IKickerEvents, 0xba80f24a, 0x78b2, 0x4c5d, 0xa2,0x8d, 0x0f,0x1a,0x9e,0x7c,0x55,0x5c);
MIDL_DEFINE_GUID(IID, IID_IDecal, 0x56ddb212, 0x2f4a, 0x41ef, 0x87,0x5c, 0xc1,0xa9,0xca,0x20,0x38,0xc9);
MIDL_DEFINE_GUID(IID, IID_IPrimitive, 0x5e972141, 0xb842, 0x43c8, 0xba,0x84, 0xb9,0x9d,0xe3,0x4b,0x2e,0x73);
MIDL_DEFINE_GUID(IID, DIID_IPrimitiveEvents, 0x99bdce95, 0x9bd2, 0x42d6, 0xb1,0xf9, 0x1d,0xf8,0x31,0x79,0x32,0xc0);
MIDL_DEFINE_GUID(IID, IID_IHitTarget, 0xa67de998, 0x7d97, 0x4e03, 0xbe,0x91, 0x55,0xbf,0xd3,0xa4,0x8d,0xb6);
MIDL_DEFINE_GUID(IID, DIID_IHitTargetEvents, 0x4bc3733d, 0x7ea2, 0x45f5, 0x86,0xb3, 0xd8,0x63,0x54,0x7c,0x8a,0x44);
MIDL_DEFINE_GUID(IID, IID_IGate, 0x9459ea61, 0x42fe, 0x4315, 0x92,0x89, 0xa2,0xcb,0x29,0x83,0x24,0xcc);
MIDL_DEFINE_GUID(IID, DIID_IGateEvents, 0xd7753568, 0xbfd4, 0x4843, 0xb2,0xb1, 0x76,0x6c,0xcd,0x9a,0x20,0xba);
MIDL_DEFINE_GUID(IID, IID_ISpinner, 0xed5ce186, 0xe654, 0x4aeb, 0x99,0x59, 0xe4,0xdc,0x93,0x12,0x89,0x58);
MIDL_DEFINE_GUID(IID, DIID_ISpinnerEvents, 0x1b57054e, 0xdb6d, 0x4a12, 0xad,0x63, 0xbd,0xab,0x51,0x14,0x85,0x62);
MIDL_DEFINE_GUID(IID, IID_IRamp, 0xa90308cf, 0x09d8, 0x4c38, 0x99,0xb6, 0x9e,0x37,0x1e,0xa4,0x1b,0x97);
MIDL_DEFINE_GUID(IID, IID_IFlasher, 0x87dab93e, 0x7d6f, 0x4fe4, 0xa5,0xf9, 0x63,0x2f,0xd8,0x2b,0xdb,0x4a);
MIDL_DEFINE_GUID(IID, IID_IRubber, 0x496cc241, 0x134d, 0x4543, 0x99,0x74, 0x5b,0x0d,0xf6,0xbc,0x5d,0x1d);
MIDL_DEFINE_GUID(IID, IID_IBall, 0xce5e583f, 0x1264, 0x4927, 0x85,0x09, 0xb1,0x35,0x9c,0xb2,0x30,0x34);
MIDL_DEFINE_GUID(IID, DIID_IRampEvents, 0x4392878d, 0x6b34, 0x404e, 0x8c,0xe5, 0xbd,0x36,0x8c,0x60,0x13,0x3a);
MIDL_DEFINE_GUID(IID, DIID_IFlasherEvents, 0xac861bd8, 0xa2bb, 0x4d29, 0x9e,0xc5, 0xa8,0xe9,0xc4,0x9d,0x80,0xfb);
MIDL_DEFINE_GUID(IID, DIID_IRubberEvents, 0x710ddcd8, 0x919c, 0x4b04, 0x81,0x5b, 0x4f,0xa8,0xa9,0x50,0xb8,0x69);
MIDL_DEFINE_GUID(IID, IID_IDispReel, 0x35265276, 0x0c22, 0x4195, 0x8f,0x2e, 0x71,0x22,0x70,0x38,0x14,0xb8);
MIDL_DEFINE_GUID(IID, DIID_IDispReelEvents, 0x416d3717, 0x1f94, 0x4dae, 0x86,0xff, 0x67,0xea,0x11,0x12,0x85,0x97);
MIDL_DEFINE_GUID(IID, IID_ILightSeq, 0x4f9b83a5, 0xf165, 0x4411, 0x83,0xfd, 0x48,0xee,0xea,0xad,0x43,0xa4);
MIDL_DEFINE_GUID(IID, DIID_ILightSeqEvents, 0xfe6b6615, 0x41b1, 0x4e34, 0xa3,0x7f, 0x44,0x7a,0xe1,0xb7,0x08,0x53);
MIDL_DEFINE_GUID(CLSID, CLSID_Table, 0x8a942b56, 0xf305, 0x468d, 0x97,0xb3, 0xf1,0x00,0x92,0x14,0x87,0xc5);
MIDL_DEFINE_GUID(CLSID, CLSID_Wall, 0xcf3b5615, 0x2271, 0x4fe4, 0xa1,0xbf, 0xe7,0x7d,0x81,0xb8,0x8c,0x5d);
MIDL_DEFINE_GUID(CLSID, CLSID_DragPoint, 0x83296774, 0xcaa2, 0x4a0d, 0xb3,0x30, 0x98,0xda,0x64,0x95,0xdf,0xe0);
MIDL_DEFINE_GUID(CLSID, CLSID_Flipper, 0x68ab2bbc, 0x8209, 0x40f3, 0xb6,0xf4, 0x54,0xf8,0xad,0xaa,0x0d,0xc7);
MIDL_DEFINE_GUID(CLSID, CLSID_Timer, 0xa0b914e6, 0x56a8, 0x4cc1, 0xa8,0x46, 0x45,0xff,0xf4,0xd8,0xca,0x17);
MIDL_DEFINE_GUID(CLSID, CLSID_Plunger, 0x4c43960f, 0xe04c, 0x4a51, 0x9f,0xbd, 0x83,0xae,0x50,0xee,0xcc,0x7b);
MIDL_DEFINE_GUID(CLSID, CLSID_Textbox, 0xcb6071d5, 0xe0e5, 0x4cf9, 0xb1,0x14, 0xbb,0x84,0xea,0x70,0x1e,0x9c);
MIDL_DEFINE_GUID(CLSID, CLSID_Bumper, 0xc242ddff, 0x0d79, 0x4c56, 0x96,0x7f, 0x76,0x5a,0x30,0xde,0x8e,0xd6);
MIDL_DEFINE_GUID(CLSID, CLSID_Trigger, 0x44d58c78, 0x14ba, 0x47f3, 0xb8,0x2c, 0x42,0x58,0x53,0xab,0xb6,0x98);
MIDL_DEFINE_GUID(CLSID, CLSID_Light, 0x31dd37e7, 0xdb9b, 0x4ab1, 0x94,0xc9, 0xfa,0xa0,0x6b,0x25,0x2d,0xfa);
MIDL_DEFINE_GUID(CLSID, CLSID_Kicker, 0x498eb992, 0xc01f, 0x4cd4, 0xb7,0x10, 0xe4,0xe1,0xd2,0x68,0xc9,0x94);
MIDL_DEFINE_GUID(CLSID, CLSID_Gate, 0x5692b7a1, 0xb753, 0x4f59, 0xa9,0xf9, 0x8e,0xe8,0x5e,0x1a,0x1c,0x3d);
MIDL_DEFINE_GUID(CLSID, CLSID_Spinner, 0x355fa5ff, 0xdb59, 0x4d94, 0x99,0xe3, 0x16,0xd3,0xb9,0x93,0xd6,0xb5);
MIDL_DEFINE_GUID(CLSID, CLSID_Ramp, 0x374f02b0, 0x57a4, 0x40bc, 0x87,0x30, 0xd3,0x51,0xc8,0x58,0xb9,0xd3);
MIDL_DEFINE_GUID(CLSID, CLSID_Flasher, 0x847b5f6c, 0x65dc, 0x4b3a, 0xa7,0x21, 0xb8,0xf9,0x31,0xc2,0x31,0x33);
MIDL_DEFINE_GUID(CLSID, CLSID_Rubber, 0xb0715dc0, 0x002f, 0x11e4, 0x91,0x91, 0x08,0x00,0x20,0x0c,0x9a,0x66);
MIDL_DEFINE_GUID(CLSID, CLSID_Ball, 0xd4966068, 0xdedb, 0x4eb9, 0x9a,0xb8, 0x45,0x74,0xcc,0xaa,0x5f,0x1d);
MIDL_DEFINE_GUID(CLSID, CLSID_Collection, 0xd4d4e043, 0x594f, 0x49f0, 0xb5,0x61, 0x4a,0xa9,0x94,0x2d,0xcf,0x18);
MIDL_DEFINE_GUID(CLSID, CLSID_DispReel, 0x47b68e91, 0x098c, 0x44ee, 0xb2,0xb1, 0x04,0xc8,0x76,0x54,0xcf,0x5e);
MIDL_DEFINE_GUID(CLSID, CLSID_LightSeq, 0xf4758e77, 0xad9a, 0x49a6, 0x81,0x46, 0xab,0x94,0x54,0x0f,0x01,0x02);
MIDL_DEFINE_GUID(CLSID, CLSID_Primitive, 0xffa76bf2, 0xb558, 0x4ef6, 0xaa,0x81, 0x5f,0xdc,0x5f,0x71,0xcf,0xe8);
MIDL_DEFINE_GUID(CLSID, CLSID_HitTarget, 0x7770b875, 0x0f54, 0x4187, 0x81,0xe3, 0x38,0x97,0x42,0xd9,0x7b,0xaf);

#ifdef __cplusplus
}
#endif

#undef MIDL_DEFINE_GUID
