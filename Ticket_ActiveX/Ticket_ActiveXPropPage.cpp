// Ticket_ActiveXPropPage.cpp : CTicket_ActiveXPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "Ticket_ActiveX.h"
#include "Ticket_ActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CTicket_ActiveXPropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CTicket_ActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CTicket_ActiveXPropPage, "TICKET_ACTIVEX.Ticket_ActiveXPropPage.1",
	0xf921e2fd, 0x6e3f, 0x408f, 0x89, 0x6d, 0xc6, 0xac, 0x5d, 0xb, 0x18, 0xa7)



// CTicket_ActiveXPropPage::CTicket_ActiveXPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CTicket_ActiveXPropPage ��ϵͳע�����

BOOL CTicket_ActiveXPropPage::CTicket_ActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_TICKET_ACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CTicket_ActiveXPropPage::CTicket_ActiveXPropPage - ���캯��

CTicket_ActiveXPropPage::CTicket_ActiveXPropPage() :
	COlePropertyPage(IDD, IDS_TICKET_ACTIVEX_PPG_CAPTION)
{
}



// CTicket_ActiveXPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CTicket_ActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CTicket_ActiveXPropPage ��Ϣ�������
