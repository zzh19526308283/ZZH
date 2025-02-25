﻿#pragma once
#include <afxdialogex.h>
#include <afxwin.h>
#include <minwindef.h>
#include <windef.h>
#include <basetsd.h>
#include <afxbutton.h>
// CMFCApplication2Dlg 对话框
class CMFCApplication2Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void OnTimer(UINT_PTR nIDEvent);
	UINT_PTR m_nTimerID;
	UINT_PTR m_nTimer;
	CStatic m_name;
	CStatic m_localtime;
	CStatic m_systemtime;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnDestroy();
};
