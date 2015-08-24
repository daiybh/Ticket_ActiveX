#pragma once

// Ticket_ActiveXPropPage.h : CTicket_ActiveXPropPage 属性页类的声明。


// CTicket_ActiveXPropPage : 有关实现的信息，请参阅 Ticket_ActiveXPropPage.cpp。

class CTicket_ActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CTicket_ActiveXPropPage)
	DECLARE_OLECREATE_EX(CTicket_ActiveXPropPage)

// 构造函数
public:
	CTicket_ActiveXPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_TICKET_ACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

