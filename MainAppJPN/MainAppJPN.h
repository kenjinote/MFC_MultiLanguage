// MainAppJPN.h : MainAppJPN DLL のメイン ヘッダー ファイル
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMainAppJPNApp
// このクラスの実装に関しては MainAppJPN.cpp をご覧ください
//

class CMainAppJPNApp : public CWinApp
{
public:
	CMainAppJPNApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
