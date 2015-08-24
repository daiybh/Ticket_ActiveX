

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Aug 21 23:40:06 2015
 */
/* Compiler settings for .\Ticket_ActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __Ticket_ActiveXidl_h__
#define __Ticket_ActiveXidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DTicket_ActiveX_FWD_DEFINED__
#define ___DTicket_ActiveX_FWD_DEFINED__
typedef interface _DTicket_ActiveX _DTicket_ActiveX;
#endif 	/* ___DTicket_ActiveX_FWD_DEFINED__ */


#ifndef ___DTicket_ActiveXEvents_FWD_DEFINED__
#define ___DTicket_ActiveXEvents_FWD_DEFINED__
typedef interface _DTicket_ActiveXEvents _DTicket_ActiveXEvents;
#endif 	/* ___DTicket_ActiveXEvents_FWD_DEFINED__ */


#ifndef __Ticket_ActiveX_FWD_DEFINED__
#define __Ticket_ActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class Ticket_ActiveX Ticket_ActiveX;
#else
typedef struct Ticket_ActiveX Ticket_ActiveX;
#endif /* __cplusplus */

#endif 	/* __Ticket_ActiveX_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Ticket_ActiveXLib_LIBRARY_DEFINED__
#define __Ticket_ActiveXLib_LIBRARY_DEFINED__

/* library Ticket_ActiveXLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_Ticket_ActiveXLib;

#ifndef ___DTicket_ActiveX_DISPINTERFACE_DEFINED__
#define ___DTicket_ActiveX_DISPINTERFACE_DEFINED__

/* dispinterface _DTicket_ActiveX */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DTicket_ActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("88BB85E7-F3EB-45E2-9E05-E5374170C9FD")
    _DTicket_ActiveX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DTicket_ActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DTicket_ActiveX * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DTicket_ActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DTicket_ActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DTicket_ActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DTicket_ActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DTicket_ActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DTicket_ActiveX * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DTicket_ActiveXVtbl;

    interface _DTicket_ActiveX
    {
        CONST_VTBL struct _DTicket_ActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DTicket_ActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DTicket_ActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DTicket_ActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DTicket_ActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DTicket_ActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DTicket_ActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DTicket_ActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DTicket_ActiveX_DISPINTERFACE_DEFINED__ */


#ifndef ___DTicket_ActiveXEvents_DISPINTERFACE_DEFINED__
#define ___DTicket_ActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DTicket_ActiveXEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DTicket_ActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8281FCFA-404E-4339-AFA7-7C739C4EBB45")
    _DTicket_ActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DTicket_ActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DTicket_ActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DTicket_ActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DTicket_ActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DTicket_ActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DTicket_ActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DTicket_ActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DTicket_ActiveXEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DTicket_ActiveXEventsVtbl;

    interface _DTicket_ActiveXEvents
    {
        CONST_VTBL struct _DTicket_ActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DTicket_ActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DTicket_ActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DTicket_ActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DTicket_ActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DTicket_ActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DTicket_ActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DTicket_ActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DTicket_ActiveXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Ticket_ActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("BF182670-9126-4EA1-8AC4-D9A3C921F85D")
Ticket_ActiveX;
#endif
#endif /* __Ticket_ActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


