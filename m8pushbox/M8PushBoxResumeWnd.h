#ifndef _M8PUSHBOXRESUME_WND_H
#define _M8PUSHBOXRESUME_WND_H

// 包含需要用到的 MZFC 库头文件
#include <mzfc_inc.h>
#include <ShellNotifyMsg.h>
#include "utils.h"

class M8PushBoxResumeWnd :
	public CMzWndEx
{
	MZ_DECLARE_DYNAMIC(M8PushBoxResumeWnd);

public:
	M8PushBoxResumeWnd(void);
	virtual ~M8PushBoxResumeWnd(void);
protected:
	UiWin m_bg;
	UiPicture2 m_pic_bg;
	ImagingHelper m_pic_bgHelper;

	UiButton_Image m_returnGameBtn;
	UiButton_Image m_returnMenuBtn;

	ImagingHelper m_pic_gameBtnHelper[2];
	ImagingHelper m_pic_menuBtnHelper[2];
protected:
	// 初始化窗体
	virtual BOOL OnInitDialog();

	// 工具栏的按键处理
	virtual void OnMzCommand(WPARAM wParam, LPARAM lParam);

	// 窗口消息处理
	virtual LRESULT MzDefWndProc(UINT message, WPARAM wParam, LPARAM lParam);


	virtual void OnLButtonDown(UINT fwKeys, int xPos, int yPos);
	virtual void OnMouseMove(UINT fwKeys, int xPos, int yPos);
	virtual void OnLButtonUp(UINT fwKeys, int xPos, int yPos);
};

#endif