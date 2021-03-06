
// IOCP_TestDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"


// CIOCP_TestDlg 대화 상자
class CIOCP_TestDlg : public CDialog
{
// 생성입니다.
public:
	CIOCP_TestDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_IOCP_TEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CButton m_Start;
	CButton m_Stop;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
