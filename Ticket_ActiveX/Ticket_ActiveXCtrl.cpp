// Ticket_ActiveXCtrl.cpp : CTicket_ActiveXCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "Ticket_ActiveX.h"
#include "Ticket_ActiveXCtrl.h"
#include "Ticket_ActiveXPropPage.h"
#include <comutil.h>

#pragma comment(lib, "comsuppw.lib")

BSTR CovertStringToBSTR(char *p){
	return _com_util::ConvertStringToBSTR(p);
}

char* CovertBSTRtoString(LPCTSTR p){
	//return _com_util::ConvertBSTRToString(p);
	return "NULL";
}
char* CovertBSTRtoString(BSTR p){
	return _com_util::ConvertBSTRToString(p);
}
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CTicket_ActiveXCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CTicket_ActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_DESTROY()
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CTicket_ActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "Sub	", 	dispidSub,Sub, VT_I4, 	VTS_PI1 VTS_PI1)
	//DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "LoginSuccess", 			dispidSub,LoginSuccess, VT_I4, 	VT_I4	VT_I4)
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
	DISP_FUNCTION_ID(CTicket_ActiveXCtrl, "LoginSucess2", dispidLoginSucess2, LoginSucess2, VT_I4, VTS_NONE)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CTicket_ActiveXCtrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CTicket_ActiveXCtrl, 1)
PROPPAGEID(CTicket_ActiveXPropPage::guid)
END_PROPPAGEIDS(CTicket_ActiveXCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CTicket_ActiveXCtrl, "TICKET_ACTIVEX.Ticket_ActiveXCtrl.1",
					   0xbf182670, 0x9126, 0x4ea1, 0x8a, 0xc4, 0xd9, 0xa3, 0xc9, 0x21, 0xf8, 0x5d)



					   // 键入库 ID 和版本

					   IMPLEMENT_OLETYPELIB(CTicket_ActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)



					   // 接口 ID

					   const IID BASED_CODE IID_DTicket_ActiveX =
{ 0x88BB85E7, 0xF3EB, 0x45E2, { 0x9E, 0x5, 0xE5, 0x37, 0x41, 0x70, 0xC9, 0xFD } };
const IID BASED_CODE IID_DTicket_ActiveXEvents =
{ 0x8281FCFA, 0x404E, 0x4339, { 0xAF, 0xA7, 0x7C, 0x73, 0x9C, 0x4E, 0xBB, 0x45 } };



// 控件类型信息

static const DWORD BASED_CODE _dwTicket_ActiveXOleMisc =
OLEMISC_ACTIVATEWHENVISIBLE |
OLEMISC_SETCLIENTSITEFIRST |
OLEMISC_INSIDEOUT |
OLEMISC_CANTLINKINSIDE |
OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CTicket_ActiveXCtrl, IDS_TICKET_ACTIVEX, _dwTicket_ActiveXOleMisc)



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::UpdateRegistry -
// 添加或移除 CTicket_ActiveXCtrl 的系统注册表项

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// 授权字符串

static const TCHAR BASED_CODE _szLicFileName[] = _T("Ticket_ActiveX.lic");

static const WCHAR BASED_CODE _szLicString[] =
L"Copyright (c) 2015 ";



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::VerifyUserLicense -
// 检查是否存在用户许可证

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::VerifyUserLicense()
{
	return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName,
		_szLicString);
}



// CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::GetLicenseKey -
// 返回运行时授权密钥

BOOL CTicket_ActiveXCtrl::CTicket_ActiveXCtrlFactory::GetLicenseKey(DWORD dwReserved,
																	BSTR FAR* pbstrKey)
{
	if (pbstrKey == NULL)
		return FALSE;

	*pbstrKey = SysAllocString(_szLicString);
	return (*pbstrKey != NULL);
}


DLL_Connect			m_pDLLConnect=NULL;
DLL_PZrPj			m_pDLL_PZrPj=NULL;
DLL_PDelPj			m_pDLL_PDelPj		=NULL;
DLL_PGetPjMc		m_pDLL_PGetPjMc	    =NULL;
DLL_PGetCurPj		m_pDLL_PGetCurPj	=NULL;
DLL_PGetCurPh		m_pDLL_PGetCurPh	=NULL;
DLL_PGetCardh		m_pDLL_PGetCardh	=NULL;
DLL_PGetKpr			m_pDLL_PGetKpr		=NULL;
DLL_PZrJks			m_pDLL_PZrJks		=NULL;
DLL_PQueryZrPj		m_pDLL_PQueryZrPj	=NULL;
DLL_PQueryZrJks		m_pDLL_PQueryZrJks	=NULL;
DLL_PLoginSuccess	m_pDLL_PLoginSuccess =NULL;
DLL_PCheckZf		m_pDLL_PCheckZf	    =NULL;
DLL_PFindPh			m_pDLL_PFindPh		=NULL;
;

HINSTANCE m_hHinstance=NULL;

// CTicket_ActiveXCtrl::CTicket_ActiveXCtrl - 构造函数

CTicket_ActiveXCtrl::CTicket_ActiveXCtrl()
{
	InitializeIIDs(&IID_DTicket_ActiveX, &IID_DTicket_ActiveXEvents);
	// TODO: 在此初始化控件的实例数据。
	m_bConnected=FALSE;
	

}



// CTicket_ActiveXCtrl::~CTicket_ActiveXCtrl - 析构函数

CTicket_ActiveXCtrl::~CTicket_ActiveXCtrl()
{

	// TODO: 在此清理控件的实例数据。
	/*if(m_hHinstance)
	{
		FreeLibrary(m_hHinstance);
		m_hHinstance = NULL;
	}
	/**/
}



// CTicket_ActiveXCtrl::OnDraw - 绘图函数

void CTicket_ActiveXCtrl::OnDraw(
								 CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CTicket_ActiveXCtrl::DoPropExchange - 持久性支持

void CTicket_ActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CTicket_ActiveXCtrl::OnResetState - 将控件重置为默认状态

void CTicket_ActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CTicket_ActiveXCtrl::AboutBox - 向用户显示“关于”框

void CTicket_ActiveXCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_TICKET_ACTIVEX);
	dlgAbout.DoModal();
}



// CTicket_ActiveXCtrl 消息处理程序

LONG CTicket_ActiveXCtrl::Sub(LONG a, LONG b)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此添加调度处理程序代码
	return a+b;
}

BOOL CTicket_ActiveXCtrl::CheckDllStatus(CString &strResult)
{
	if(m_pDLL_PZrPj==NULL || m_pDLLConnect ==NULL)
	{
		if(m_hHinstance)
			FreeLibrary(m_hHinstance);

		m_hHinstance = LoadLibrary(_T("InvoicePay.dll"));
		if(!m_hHinstance)
		{
			strResult=(_T("LoadLibrary InvoicePay.dll failed."));
			return -1;
		}		
		m_pDLLConnect=(DLL_Connect)GetProcAddress(m_hHinstance,("PConnect"));  //get address of the function 
		if(m_pDLLConnect==NULL) 
		{ 
			strResult=_T("get the address of the function[PConnect] Fail"); 
			return -2;
		} 
		m_pDLL_PZrPj=(DLL_PZrPj)GetProcAddress(m_hHinstance,("PZrPj"));  //get address of the function 
		if(m_pDLL_PZrPj==NULL) 
		{ 
			strResult=_T("get the address of the function[PZrPj] Fail"); 
			return -3;
		} 
		m_pDLL_PDelPj		=(DLL_PDelPj)GetProcAddress(m_hHinstance,("PDelPj"));
		if(!m_pDLL_PDelPj) 
		{ 
			strResult=_T("get the address of the function[PDelPj] Fail"); 
			return -4;
		} 
		m_pDLL_PGetPjMc	    =(DLL_PGetPjMc)GetProcAddress(m_hHinstance,("PGetPjMc"));
		if(!m_pDLL_PGetPjMc) 
		{ 
			strResult=_T("get the address of the function[PGetPjMc] Fail"); 
			return -5;
		} 
		m_pDLL_PGetCurPj	=(DLL_PGetCurPj)GetProcAddress(m_hHinstance,("PGetCurPj"));
		if(!m_pDLL_PGetCurPj) 
		{ 
			strResult=_T("get the address of the function[PGetCurPj] Fail"); 
			return -6;
		} 
		m_pDLL_PGetCurPh	=(DLL_PGetCurPh)GetProcAddress(m_hHinstance,("PGetCurPh"));
		if(!m_pDLL_PGetCurPh) 
		{ 
			strResult=_T("get the address of the function[PGetCurPh] Fail"); 
			return -7;
		} 
		m_pDLL_PGetCardh	=(DLL_PGetCardh)GetProcAddress(m_hHinstance,("PGetCardh"));
		if(!m_pDLL_PGetCardh) 
		{ 
			strResult=_T("get the address of the function[PGetCardh] Fail"); 
			return -8;
		} 
		m_pDLL_PGetKpr		=(DLL_PGetKpr)GetProcAddress(m_hHinstance,("PGetKpr"));
		if(!m_pDLL_PGetKpr) 
		{ 
			strResult=_T("get the address of the function[PGetKpr] Fail"); 
			return -9;
		} 
		m_pDLL_PZrJks		=(DLL_PZrJks)GetProcAddress(m_hHinstance,("PZrJks"));
		if(!m_pDLL_PZrJks) 
		{ 
			strResult=_T("get the address of the function[PZrJks] Fail"); 
			return -10;
		} 
		m_pDLL_PQueryZrPj	=(DLL_PQueryZrPj)GetProcAddress(m_hHinstance,("PQueryZrPj"));
		if(!m_pDLL_PQueryZrPj) 
		{ 
			strResult=_T("get the address of the function[PQueryZrPj] Fail"); 
			return -11;
		} 
		m_pDLL_PQueryZrJks	=(DLL_PQueryZrJks)GetProcAddress(m_hHinstance,("PQueryZrJks"));
		if(!m_pDLL_PQueryZrJks) 
		{ 
			strResult=_T("get the address of the function[PQueryZrJks] Fail"); 
			return -12;
		} 
		m_pDLL_PLoginSuccess =(DLL_PLoginSuccess	)GetProcAddress(m_hHinstance,("PLoginSuccess"));
		if(!m_pDLL_PLoginSuccess) 
		{ 
			strResult=_T("get the address of the function[PLoginSuccess] Fail"); 
			return -13;
		} 
		m_pDLL_PCheckZf	    =(DLL_PCheckZf)GetProcAddress(m_hHinstance,("PCheckZf"));
		if(!m_pDLL_PCheckZf) 
		{ 
			strResult=_T("get the address of the function[PCheckZf] Fail"); 
			return -14;
		} 
		m_pDLL_PFindPh		=(DLL_PFindPh)GetProcAddress(m_hHinstance,("PFindPh"));
		if(!m_pDLL_PFindPh) 
		{ 
			strResult=_T("get the address of the function[PFindPh] Fail"); 
			return -15;
		} 
	}
	if(!m_bConnected)
	{
		m_bConnected = m_pDLLConnect();

	}
	{
		strResult .Format( _T("Connected %s"),(!m_bConnected)?_T("failed."):_T("sucess"));
	}
	return m_bConnected;
}

BSTR CTicket_ActiveXCtrl::PZrPj(BSTR ZrTxt, LONG IsPrn, BSTR PjLx, BSTR Bz, BSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());


	return PZrPj2(1,ZrTxt,IsPrn,PjLx,Bz,StreamNo);
}

BSTR CTicket_ActiveXCtrl::PZrPj2(LONG IEHandle,  BSTR  ZrTxt, LONG IsPrn,  BSTR  PjLx,  BSTR  Bz,  BSTR  StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	// TODO: 在此添加调度处理程序代码
	
	CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];
	char *pZrTxt = CovertBSTRtoString(ZrTxt);
	char *pPjLx =CovertBSTRtoString(PjLx);
	char *pBz =CovertBSTRtoString(Bz);
	char *pStreamNo = CovertBSTRtoString(StreamNo);
	nRet = m_pDLL_PZrPj(IEHandle,pZrTxt,IsPrn,
		pPjLx,pBz,pStreamNo,xRes);
	xRes[nRet]='\0';

	delete []pZrTxt;
	delete [] pPjLx;
	delete []pBz;
	delete []pStreamNo;

	return CovertStringToBSTR(xRes);
}

BSTR CTicket_ActiveXCtrl::PDelPj(BSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];
	char*pPjstr = CovertBSTRtoString(PjStr);
	nRet = m_pDLL_PDelPj(pPjstr,xRes);
	xRes[nRet]='\0';
	delete[] pPjstr;
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PGetPjMc()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	nRet = m_pDLL_PGetPjMc(xRes);
	xRes[nRet]='\0';
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PGetCurPj(BSTR Pj)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strResult;
	int nRet =CheckDllStatus(strResult);	
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[1024];	
	char*pPj = CovertBSTRtoString(Pj);
	nRet = m_pDLL_PGetCurPj(pPj,xRes);
	xRes[nRet]='\0';
	delete [] pPj;
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PGetCurPh(BSTR Pj)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char *pPj = CovertBSTRtoString(Pj);
	nRet = m_pDLL_PGetCurPh(pPj,xRes);
	xRes[nRet]='\0';
	delete [] pPj;
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PGetCardh()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	nRet = m_pDLL_PGetCardh(xRes);
	xRes[nRet]='\0';
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PGetKpr()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	nRet = m_pDLL_PGetKpr(xRes);
	xRes[nRet]='\0';
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PZrJks(BSTR ZrTxt,LONG IsPrn)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char * pZrTxt = CovertBSTRtoString(ZrTxt);
	nRet = m_pDLL_PZrJks(pZrTxt,IsPrn,xRes);
	xRes[nRet]='\0';

	delete [] pZrTxt;

	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PQueryZrPj(BSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char * pStreamNo = CovertBSTRtoString(StreamNo);
	nRet = m_pDLL_PQueryZrPj(pStreamNo,xRes);
	xRes[nRet]='\0';
	delete [] pStreamNo;
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PQueryZrJks(BSTR StreamNo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char * pStreamNo = CovertBSTRtoString(StreamNo);
	nRet = m_pDLL_PQueryZrJks(pStreamNo,xRes);
	xRes[nRet]='\0';
	delete [] pStreamNo;
	return CovertStringToBSTR(xRes);
}
LONG CTicket_ActiveXCtrl::LoginSuccess(void)
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
BSTR CTicket_ActiveXCtrl::PCheckZf(BSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char *pPjstr=CovertBSTRtoString(PjStr);
	nRet = m_pDLL_PCheckZf(pPjstr,xRes);
	xRes[nRet]='\0';
	delete []pPjstr;
	return CovertStringToBSTR(xRes);
}
BSTR CTicket_ActiveXCtrl::PFindPh(BSTR PjStr)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());CString strResult;
	int nRet =CheckDllStatus(strResult);
	if(nRet<1){
		//strResult.Format(_T("CheckDllStatus() failed.[%d]"),nRet);;
		return strResult.AllocSysString();
	}
	char xRes[255];	
	char *pPjstr=CovertBSTRtoString(PjStr);
	nRet = m_pDLL_PFindPh(pPjstr,xRes);
	xRes[nRet]='\0';
	delete []pPjstr;
	return CovertStringToBSTR(xRes);
}
LONG CTicket_ActiveXCtrl::LoginSucess2(void)
{
	return LoginSuccess();
}

void CTicket_ActiveXCtrl::OnDestroy()
{
	COleControl::OnDestroy();	
}
