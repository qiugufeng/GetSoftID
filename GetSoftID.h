
// GetSoftID.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CGetSoftIDApp: 
// �йش����ʵ�֣������ GetSoftID.cpp
//

class CGetSoftIDApp : public CWinApp
{
public:
	CGetSoftIDApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CGetSoftIDApp theApp;