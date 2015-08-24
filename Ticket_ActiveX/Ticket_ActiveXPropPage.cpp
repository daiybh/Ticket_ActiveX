// Ticket_ActiveXPropPage.cpp : CTicket_ActiveXPropPage 属性页类的实现。

#include "stdafx.h"
#include "Ticket_ActiveX.h"
#include "Ticket_ActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CTicket_ActiveXPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CTicket_ActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CTicket_ActiveXPropPage, "TICKET_ACTIVEX.Ticket_ActiveXPropPage.1",
	0xf921e2fd, 0x6e3f, 0x408f, 0x89, 0x6d, 0xc6, 0xac, 0x5d, 0xb, 0x18, 0xa7)



// CTicket_ActiveXPropPage::CTicket_ActiveXPropPageFactory::UpdateRegistry -
// 添加或移除 CTicket_ActiveXPropPage 的系统注册表项

BOOL CTicket_ActiveXPropPage::CTicket_ActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_TICKET_ACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CTicket_ActiveXPropPage::CTicket_ActiveXPropPage - 构造函数

CTicket_ActiveXPropPage::CTicket_ActiveXPropPage() :
	COlePropertyPage(IDD, IDS_TICKET_ACTIVEX_PPG_CAPTION)
{
}



// CTicket_ActiveXPropPage::DoDataExchange - 在页和属性间移动数据

void CTicket_ActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CTicket_ActiveXPropPage 消息处理程序
