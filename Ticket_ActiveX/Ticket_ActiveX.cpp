// Ticket_ActiveX.cpp : CTicket_ActiveXApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "Ticket_ActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CTicket_ActiveXApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0xF02458B1, 0xA391, 0x4350, { 0x8D, 0x7F, 0xFF, 0x40, 0x45, 0x14, 0xE5, 0xC4 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CTicket_ActiveXApp::InitInstance - DLL ��ʼ��

BOOL CTicket_ActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CTicket_ActiveXApp::ExitInstance - DLL ��ֹ

int CTicket_ActiveXApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
