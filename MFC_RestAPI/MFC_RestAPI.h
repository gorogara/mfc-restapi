
// MFC_RestAPI.h: PROJECT_NAME 애플리케이션에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'pch.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.
#include <cpprest/http_listener.h>


// CMFCRestAPIApp:
// 이 클래스의 구현에 대해서는 MFC_RestAPI.cpp을(를) 참조하세요.
//

class CMFCRestAPIApp : public CWinApp
{
public:
	CMFCRestAPIApp();

// 재정의입니다.
public:
	virtual BOOL InitInstance();

	void Open();
	void Close();

public:
	web::http::experimental::listener::http_listener* listener;

// 구현입니다.

	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CMFCRestAPIApp theApp;
