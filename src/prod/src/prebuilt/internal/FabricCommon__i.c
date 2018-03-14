// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


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

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_FabricCommonInternalLib,0xba19d79c,0x06a9,0x4e30,0xb9,0xb3,0xaf,0x75,0xdc,0xf3,0xd8,0xd8);


MIDL_DEFINE_GUID(IID, IID_IFabricDeploymentSpecification,0x5C36B827,0x0297,0x4355,0xB5,0x91,0x7E,0xB7,0x21,0x15,0x48,0xAE);


MIDL_DEFINE_GUID(IID, IID_IFabricWinFabStoreLayoutSpecification,0xD07D4CB7,0x0E31,0x4930,0x8A,0xC1,0xDC,0x1A,0x10,0x62,0x24,0x1D);


MIDL_DEFINE_GUID(IID, IID_IFabricWinFabRunLayoutSpecification,0x2B299756,0xA1DA,0x450D,0x88,0xA0,0x11,0xB7,0x19,0x0E,0xA3,0xA0);


MIDL_DEFINE_GUID(IID, IID_IFabricBuildLayoutSpecification,0xa5344964,0x3542,0x41bd,0xa2,0x71,0xf2,0xf2,0x1a,0xc5,0x41,0xa8);


MIDL_DEFINE_GUID(IID, IID_IFabricBuildLayoutSpecification2,0x93f7ca0f,0x8be0,0x4601,0x92,0xa9,0xad,0x86,0x4b,0x4a,0x79,0x8d);


MIDL_DEFINE_GUID(IID, IID_IFabricStoreLayoutSpecification,0xa4e94cf4,0xa47b,0x4767,0x85,0x3f,0xcb,0xd5,0x91,0x46,0x41,0xd6);


MIDL_DEFINE_GUID(IID, IID_IFabricRunLayoutSpecification,0x53636fde,0x84ca,0x4657,0x99,0x27,0x1d,0x22,0xdc,0x37,0x29,0x7d);


MIDL_DEFINE_GUID(IID, IID_IFabricConfigStore,0xedd6091d,0x5230,0x4064,0xa7,0x31,0x5d,0x2e,0x6b,0xac,0x34,0x36);


MIDL_DEFINE_GUID(IID, IID_IFabricConfigStore2,0xc8beea34,0x1f9d,0x4d3b,0x97,0x0d,0xf2,0x6c,0xa0,0xe4,0xa7,0x62);


MIDL_DEFINE_GUID(IID, IID_IFabricConfigStoreUpdateHandler,0x792d2f8d,0x15bd,0x449f,0xa6,0x07,0x00,0x2c,0xb6,0x00,0x47,0x09);


MIDL_DEFINE_GUID(IID, IID_IFabricStringMapResult,0xce7ebe69,0xf61b,0x4d62,0xba,0x2c,0x59,0xcf,0x07,0x03,0x02,0x06);


MIDL_DEFINE_GUID(IID, IID_IFabricStoreLayoutSpecification2,0xe4a20405,0x2cef,0x4da0,0xbd,0x6c,0xb4,0x66,0xa5,0x84,0x5d,0x48);


MIDL_DEFINE_GUID(IID, IID_IFabricRunLayoutSpecification2,0x10AD836A,0x12E5,0x4581,0x93,0x03,0x65,0xDE,0x07,0x10,0xEB,0x88);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


