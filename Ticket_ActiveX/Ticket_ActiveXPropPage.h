#pragma once

// Ticket_ActiveXPropPage.h : CTicket_ActiveXPropPage ����ҳ���������


// CTicket_ActiveXPropPage : �й�ʵ�ֵ���Ϣ������� Ticket_ActiveXPropPage.cpp��

class CTicket_ActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CTicket_ActiveXPropPage)
	DECLARE_OLECREATE_EX(CTicket_ActiveXPropPage)

// ���캯��
public:
	CTicket_ActiveXPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_TICKET_ACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

