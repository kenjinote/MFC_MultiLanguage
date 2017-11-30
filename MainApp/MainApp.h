
// MainApp.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMainAppApp:
// このクラスの実装については、MainApp.cpp を参照してください
//

class CMainAppApp : public CWinApp
{
public:
	CMainAppApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	virtual HINSTANCE LoadAppLangResourceDLL();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMainAppApp theApp;
