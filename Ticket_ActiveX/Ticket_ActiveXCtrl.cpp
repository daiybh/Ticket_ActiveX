// Ticket_ActiveXCtrl.cpp : CTicket_ActiveXCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "Ticket_ActiveX.h"
#include "Ticket_ActiveXCtrl.h"
#include "Ticket_ActiveXPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CTicket_ActiveXCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CTicket_ActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CTicket_ActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PZrPj2", dispidPZrPj, PZrPj2, VT_I4, VTS_I4 VTS_PI1 VTS_I4 VTS_PI1 VTS_PI1 VTS_PI1 VTS_PI1)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PZrPj", dispidPZrPj2, PZrPj, VT_BSTR, VTS_BSTR VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PDelPj", 		4L, PDelPj, VT_BSTR, 		VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PGetPjMc", 		5L, PGetPjMc, VT_BSTR, 		VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PGetCurPj", 		6L, PGetCurPj, VT_BSTR, 	VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PGetCurPh", 		7L, PGetCurPh, VT_BSTR, 	VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PGetCardh", 		8L, PGetCardh, VT_BSTR, 	VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PGetKpr", 		9L, PGetKpr, VT_BSTR, 		VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PZrJks", 		10L,PZrJks, VT_BSTR, 		VTS_BSTR VTS_I4)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PQueryZrPj", 	11L,PQueryZrPj, VT_BSTR, 	VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PQueryZrJks", 	12L,PQueryZrJks, VT_BSTR, 	VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "LoginSuccess	", 	13L,LoginSuccess, VT_I4, 	VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PCheckZf", 		14L,PCheckZf, VT_BSTR, 		VTS_BSTR)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "PFindPh", 		15L,PFindPh, VT_BSTR, 		VTS_BSTR)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CTicket_ActiveXCtrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CTicket_ActiveXCtrl, 1)
PROPPAGEID(CTicket_ActiveXPropPage::guid)
END_PROPPAGEIDS(CTicket_ActiveXCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CTicket_ActiveXCtrl, "TICKET_ACTIVEX.Ticket_ActiveXCtrl.1",
					   0xbf182670, 0x9126, 0x4ea1, 0x8a, 0xc4, 0xd9, 0xa3, 0xc9, 0x21, 0xf8, 0x5d)



					   // ����� ID �Ͱ汾

					   IMPLEMENT_OLETYPELIB(CTicket_ActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)



					   // �ӿ� ID

					   const IID BASED_CODE IID_DTicket_ActiveX =
{ 0x88BB85E7, 0xF3EB, 0x45E2, { 0x9E, 0x5, 0xE5, 0x37, 0x41, 0x70, 0xC9, 0xFD } };
const IID BASED_CODE IID_DTicket_ActiveXEvents =
{ 0x8281FCFA, 0x404E, 0x4339, { 0xAF, 0xA7, 0x7C, 0x73, 0x9C, 0x4E, 0xBB, 0x45 } };



// �ؼ�������Ϣ

static const DWORD BASED_CODE _dwTicket_ActiveXOleMisc =
OLEMISC_ACTIVATEWHENVISIBLE |
OLEMISC_SETCLIENTSITEFIRST |
OLEMISC_INSIDEOUT |
OLEMISC_CANTLINKINSIDE |
OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CTicket_ActiveXCtrl, IDS_TICKET_ACTIVEX, _dwTicket_ActiveXOleMisc)



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CTicket_ActiveXCtrl ��ϵͳע�����

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
		AfxGetInstanceHandle(),
		m_clsid,
		m_lpszProgID,
		IDS_TICKET_ACTIVEX,
		IDB_TICKET_ACTIVEX,
		afxRegApartmentThreading,
		_dwTicket_ActiveXOleMisc,
		_tlid,
		_wVerMajor,
		_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// ��Ȩ�ַ���

static const TCHAR BASED_CODE _szLicFileName[] = _T("Ticket_ActiveX.lic");

static const WCHAR BASED_CODE _szLicString[] =
L"Copyright (c) 2015 ";



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::VerifyUserLicense -
// ����Ƿ�����û����֤

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::VerifyUserLicense()
{
	return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName,
		_szLicString);
}



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::GetLicenseKey -
// ��������ʱ��Ȩ��Կ

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::GetLicenseKey(DWORD dwReserved,
																	BSTR FAR* pbstrKey)
{
	if (pbstrKey == NULL)
		return FALSE;

	*pbstrKey = SysAllocString(_szLicString);
	return (*pbstrKey != NULL);
}



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrl - ���캯��

CTicket_ActiveXCtrl::CTicket_ActiveXCtrl()
{
	InitializeIIDs(&IID_DTicket_ActiveX, &IID_DTicket_ActiveXEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�

	m_bConnected=FALSE;
	m_pDLLConnect=NULL;
	m_pDLL_PZrPj=NULL;
	m_hHinstance = NULL;

	m_pDLL_PDelPj		=NULL;
	m_pDLL_PGetPjMc	    =NULL;
	m_pDLL_PGetCurPj	=NULL;
	m_pDLL_PGetCurPh	=NULL;
	m_pDLL_PGetCardh	=NULL;
	m_pDLL_PGetKpr		=NULL;
	m_pDLL_PZrJks		=NULL;
	m_pDLL_PQueryZrPj	=NULL;
	m_pDLL_PQueryZrJks	=NULL;
	m_pDLL_PLoginSuccess =NULL;
	m_pDLL_PCheckZf	    =NULL;
	m_pDLL_PFindPh		=NULL;

}



// CTicket_ActiveXCtrl::~CTicket_ActiveXCtrl - ��������

CTicket_ActiveXCtrl::~CTicket_ActiveXCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
	if(m_hHinstance)
	{
		FreeLibrary(m_hHinstance);
		m_hHinstance = NULL;
	}
}



// CTicket_ActiveXCtrl::OnDraw - ��ͼ����

void CTicket_ActiveXCtrl::OnDraw(
								 CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CTicket_ActiveXCtrl::DoPropExchange - �־���֧��

void CTicket_ActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CTicket_ActiveXCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CTicket_ActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CTicket_ActiveXCtrl::AboutBox - ���û���ʾ�����ڡ���

void CTicket_ActiveXCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_TICKET_ACTIVEX);
	dlgAbout.DoModal();
}



// CTicket_ActiveXCtrl ��Ϣ�������

LONG CTicket_ActiveXCtrl::Sub(LONG a, LONG b)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: �ڴ���ӵ��ȴ���������
	return a+b;
}

BOOL CTicket_ActiveXCtrl::CheckDllStatus(CString &strResult)
{
	if(m_pDLL_PZrPj==NULL || m_pDLLConnect ==NULL)
	{
		if(m_hHinstance)
			FreeLibrary(m_hHinstance);

		m_hHinstance = LoadLibrary("InvoicePay.dll");
		if(!m_hHinstance)
		{
			strResult=(_T("LoadLibrary InvoicePay.dll failed."));
			return -1;
		}
		m_pDLLConnect=(DLL_Connect)GetProcAddress(m_hHinstance,"PConnect");  //get address of the function 
		if(m_pDLLConnect==NULL) 
		{ 
			strResult=("get the address of the function[PConnect] Fail"); 
			return -2;
		} 
		m_pDLL_PZrPj=(DLL_PZrPj)GetProcAddress(m_hHinstance,"PZrPj");  //get address of the function 
		if(m_pDLL_PZrPj==NULL) 
		{ 
			strResult=("get the address of the function[PZrPj] Fail"); 
			return -3;
		} 
		m_pDLL_PDelPj		=(DLL_PDelPj)GetProcAddress(m_hHinstance,"PDelPj");
		if(!m_pDLL_PDelPj) 
		{ 
			strResult=("get the address of the function[PDelPj] Fail"); 
			return -4;
		} 
		m_pDLL_PGetPjMc	    =(DLL_PGetPjMc)GetProcAddress(m_hHinstance,"PGetPjMc");
		if(!m_pDLL_PGetPjMc) 
		{ 
			strResult=("get the address of the function[PGetPjMc] Fail"); 
			return -5;
		} 
		m_pDLL_PGetCurPj	=(DLL_PGetCurPj)GetProcAddress(m_hHinstance,"PGetCurPj");
		if(!m_pDLL_PGetCurPj) 
		{ 
			strResult=("get the address of the function[PGetCurPj] Fail"); 
			return -6;
		} 
		m_pDLL_PGetCurPh	=(DLL_PGetCurPh)GetProcAddress(m_hHinstance,"PGetCurPh");
		if(!m_pDLL_PGetCurPh) 
		{ 
			strResult=("get the address of the function[PGetCurPh] Fail"); 
			return -7;
		} 
		m_pDLL_PGetCardh	=(DLL_PGetCardh)GetProcAddress(m_hHinstance,"PGetCardh");
		if(!m_pDLL_PGetCardh) 
		{ 
			strResult=("get the address of the function[PGetCardh] Fail"); 
			return -8;
		} 
		m_pDLL_PGetKpr		=(DLL_PGetKpr)GetProcAddress(m_hHinstance,"PGetKpr");
		if(!m_pDLL_PGetKpr) 
		{ 
			strResult=("get the address of the function[PGetKpr] Fail"); 
			return -9;
		} 
		m_pDLL_PZrJks		=(DLL_PZrJks)GetProcAddress(m_hHinstance,"PZrJks");
		if(!m_pDLL_PZrJks) 
		{ 
			strResult=("get the address of the function[PZrJks] Fail"); 
			return -10;
		} 
		m_pDLL_PQueryZrPj	=(DLL_PQueryZrPj)GetProcAddress(m_hHinstance,"PQueryZrPj");
		if(!m_pDLL_PQueryZrPj) 
		{ 
			strResult=("get the address of the function[PQueryZrPj] Fail"); 
			return -11;
		} 
		m_pDLL_PQueryZrJks	=(DLL_PQueryZrJks)GetProcAddress(m_hHinstance,"PQueryZrJks");
		if(!m_pDLL_PQueryZrJks) 
		{ 
			strResult=("get the address of the function[PQueryZrJks] Fail"); 
			return -12;
		} 
		m_pDLL_PLoginSuccess =(DLL_PLoginSuccess	)GetProcAddress(m_hHinstance,"PLoginSuccess");
		if(!m_pDLL_PLoginSuccess) 
		{ 
			strResult=("get the address of the function[PLoginSuccess] Fail"); 
			return -13;
		} 
		m_pDLL_PCheckZf	    =(DLL_PCheckZf)GetProcAddress(m_hHinstance,"PCheckZf");
		if(!m_pDLL_PCheckZf) 
		{ 
			strResult=("get the address of the function[PCheckZf] Fail"); 
			return -14;
		} 
		m_pDLL_PFindPh		=(DLL_PFindPh)GetProcAddress(m_hHinstance,"PFindPh");
		if(!m_pDLL_PFindPh) 
		{ 
			strResult=("get the address of the function[PFindPh] Fail"); 
			return -15;
		} 
	}
	if(!m_bConnected)
	{
		m_bConnected = m_pDLLConnect();

	}
	{
		strResult = "Connected "+(!m_bConnected)?"failed.":"sucess";
	}
	return m_bConnected;
}

BSTR CTicket_ActiveXCtrl::PZrPj(LPCTSTR ZrTxt, LONG IsPrn, LPCTSTR PjLx, LPCTSTR Bz, LPCTSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());


	return PZrPj2(1,ZrTxt,IsPrn,PjLx,Bz,StreamNo);
}

BSTR CTicket_ActiveXCtrl::PZrPj2(LONG IEHandle,  LPCTSTR  ZrTxt, LONG IsPrn,  LPCTSTR  PjLx,  LPCTSTR  Bz,  LPCTSTR  StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	// TODO: �ڴ���ӵ��ȴ���������
	TCHAR xRes[255];
	CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	nRet = m_pDLL_PZrPj(IEHandle,ZrTxt,IsPrn,PjLx,Bz,StreamNo,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}

BSTR CTicket_ActiveXCtrl::PDelPj(LPCTSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];
	nRet = m_pDLL_PDelPj(PjStr,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PGetPjMc()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PGetPjMc(xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PGetCurPj(LPCTSTR Pj)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PGetCurPj(Pj,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PGetCurPh(LPCTSTR Pj)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PGetCurPh(Pj,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PGetCardh()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PGetCardh(xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PGetKpr()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PGetKpr(xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PZrJks(LPCTSTR ZrTxt,LONG IsPrn)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PZrJks(ZrTxt,IsPrn,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PQueryZrPj(LPCTSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PQueryZrPj(StreamNo,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PQueryZrJks(LPCTSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PQueryZrJks(StreamNo,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
LONG CTicket_ActiveXCtrl::LoginSuccess()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return nRet;
	}
	nRet = m_pDLL_PLoginSuccess();
	return nRet;
}
BSTR CTicket_ActiveXCtrl::PCheckZf(LPCTSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PCheckZf(PjStr,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}
BSTR CTicket_ActiveXCtrl::PFindPh(LPCTSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	TCHAR xRes[255];	
	nRet = m_pDLL_PFindPh(PjStr,xRes);
	strResult.Format(_T("%s"),xRes);
	return strResult.AllocSysString();
}