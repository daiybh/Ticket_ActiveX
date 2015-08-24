#pragma once

// Ticket_ActiveXCtrl.h : CTicket_ActiveXCtrl ActiveX 控件类的声明。


// CTicket_ActiveXCtrl : 有关实现的信息，请参阅 Ticket_ActiveXCtrl.cpp。

typedef int (*DLL_Connect)() ;
//typedef int (* DLL_PZrPj)(LONG IEHandle, char*ZrTxt, LONG IsPrn,  char*PjLx, char*Bz,  char*StreamNo,  char* Res) ; 
typedef int (* DLL_PZrPj)(LONG IEHandle, LPCTSTR ZrTxt, LONG IsPrn,  LPCTSTR PjLx, LPCTSTR Bz,  LPCTSTR StreamNo,  char* Res) ; 
typedef int (* DLL_PDelPj)(LPCTSTR PjStr,  char* Res) ; 
typedef int (* DLL_PGetPjMc)(char* Res) ; 
typedef int (* DLL_PGetCurPj)(LPCTSTR PjStr,  char* Res) ; 
typedef int (* DLL_PGetCurPh)(LPCTSTR PjStr,  char* Res) ; 
typedef int (* DLL_PGetCardh)(char* Res) ; 
typedef int (* DLL_PGetKpr)(char* Res) ; 
typedef int (* DLL_PZrJks)(LPCTSTR ZrTxt,LONG IsPrn,  char* Res) ; 
typedef int (* DLL_PQueryZrPj)(LPCTSTR StreamNo,  char* Res) ; 
typedef int (* DLL_PQueryZrJks)(LPCTSTR StreamNo,  char* Res) ; 
typedef int (* DLL_PLoginSuccess)() ; 
typedef int (* DLL_PCheckZf)(LPCTSTR PjStr,  char* Res) ; 
typedef int (* DLL_PFindPh)(LPCTSTR PjStr,  char* Res) ; 

class CTicket_ActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CTicket_ActiveXCtrl)

// 构造函数
public:
	CTicket_ActiveXCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CTicket_ActiveXCtrl();

	BEGIN_OLEFACTORY(CTicket_ActiveXCtrl)        // 类工厂和 guid
		virtual BOOL VerifyUserLicense();
		virtual BOOL GetLicenseKey(DWORD, BSTR FAR*);
	END_OLEFACTORY(CTicket_ActiveXCtrl)

	DECLARE_OLETYPELIB(CTicket_ActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CTicket_ActiveXCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CTicket_ActiveXCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidPZrPj2 = 3L,
		dispidPZrPj = 2L,
		dispidSub = 1L
	};
protected:
	LONG Sub(LONG a, LONG b);
	BOOL CheckDllStatus(CString &strResult);

	BOOL m_bConnected;
	DLL_Connect m_pDLLConnect;
	DLL_PZrPj m_pDLL_PZrPj;
	DLL_PDelPj			m_pDLL_PDelPj		;
	DLL_PGetPjMc		m_pDLL_PGetPjMc	    ;
	DLL_PGetCurPj		m_pDLL_PGetCurPj	;
	DLL_PGetCurPh		m_pDLL_PGetCurPh	;
	DLL_PGetCardh		m_pDLL_PGetCardh	;
	DLL_PGetKpr			m_pDLL_PGetKpr		;
	DLL_PZrJks			m_pDLL_PZrJks		;
	DLL_PQueryZrPj		m_pDLL_PQueryZrPj	;
	DLL_PQueryZrJks		m_pDLL_PQueryZrJks	;
	DLL_PLoginSuccess	m_pDLL_PLoginSuccess ;
	DLL_PCheckZf		m_pDLL_PCheckZf	    ;
	DLL_PFindPh			m_pDLL_PFindPh		;
	;

	HINSTANCE m_hHinstance;


	BSTR PZrPj2(LONG IEHandle,  LPCTSTR  ZrTxt, LONG IsPrn,  LPCTSTR  PjLx,  LPCTSTR  Bz,  LPCTSTR  StreamNo);
	BSTR PZrPj(LPCTSTR ZrTxt, LONG IsPrn, LPCTSTR PjLx, LPCTSTR Bz, LPCTSTR StreamNo);

	BSTR PDelPj(LPCTSTR PjStr);
	BSTR PGetPjMc();
	BSTR PGetCurPj(LPCTSTR Pj);
	BSTR PGetCurPh(LPCTSTR Pj);
	BSTR PGetCardh();
	BSTR PGetKpr();
	BSTR PZrJks(LPCTSTR ZrTxt,LONG IsPrn);
	BSTR PQueryZrPj(LPCTSTR StreamNo);
	BSTR PQueryZrJks(LPCTSTR StreamNo);
	LONG LoginSuccess();
	BSTR PCheckZf(LPCTSTR PjStr);
	BSTR PFindPh(LPCTSTR PjStr);
};

