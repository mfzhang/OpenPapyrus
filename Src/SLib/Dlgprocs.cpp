// DLGPROCS.CPP
// Copyright (c) V.Antonov, A.Osolotkin 1999-2002, 2003, 2004, 2005, 2007, 2008, 2010, 2011, 2013, 2015, 2016
//
#include <slib.h>
#include <tv.h>
#pragma hdrstop

#if 0 // {
struct __ITabEntry {
	int    a;
	int    b;
};

static int FASTCALL i_tab_limited(const __ITabEntry * pTbl, int req, uint count)
{
	for(uint i = 0; i < count; i++) {
		if(pTbl[i].a == req)
			return pTbl[i].b;
	}
	return 0;
}
#endif // } 0

struct __KeyAssoc {
	uint32 Vk;
	uint16 K;
	uint16 SK;
	uint16 CK;
	uint16 AK;
};

static const __KeyAssoc _KeyAssocTab[] = {
	{ VK_RETURN,   kbEnter,     0,          kbCtrlEnter, 0  },
	{ VK_ADD,      kbGrayPlus,  0,          0,           0  },
	{ VK_SUBTRACT, kbGrayMinus, 0,          0x4a00,      kbAltMinus },
	{ VK_INSERT ,  kbIns,       kbShiftIns, kbCtrlIns,   kbAltIns   },
	{ VK_DELETE,   kbDel,       kbShiftDel, kbCtrlDel,   0          },
	{ VK_F1,       kbF1,        kbShiftF1,  kbCtrlF1,    kbAltF1 },
	{ VK_F2,       kbF2,        kbShiftF2,  kbCtrlF2,    kbAltF2 },
	{ VK_F3,       kbF3,        kbShiftF3,  kbCtrlF3,    kbAltF3 },
	{ VK_F4,       kbF4,        kbShiftF4,  kbCtrlF4,    kbAltF4 },
	{ VK_F5,       kbF5,        kbShiftF5,  kbCtrlF5,    kbAltF5 },
	{ VK_F6,       kbF6,        kbShiftF6,  kbCtrlF6,    kbAltF6 },
	{ VK_F7,       kbF7,        kbShiftF7,  kbCtrlF7,    kbAltF7 },
	{ VK_F8,       kbF8,        kbShiftF8,  kbCtrlF8,    kbAltF8 },
	{ VK_F9,       kbF9,        kbShiftF9,  kbCtrlF9,    kbAltF9  },
	{ VK_F10,      kbF10,       kbShiftF10, kbCtrlF10,   kbAltF10 },
	{ VK_F11,      kbF11,       0,          0,           0 },
	{ VK_F12,      kbF12,       0,          0,           0 },
	{ VK_UP,       kbUp,        0,          0,           0 },
	{ VK_DOWN,     kbDown,      0,          0,           0 },
	{ VK_LEFT,     kbLeft,      0,          0,           0 }, 
	{ VK_RIGHT,    kbRight,     0,          0,           0 }
};

static uint16 FASTCALL __MapVk(uint32 vk, uint stateP)
{
	for(uint i = 0; i < SIZEOFARRAY(_KeyAssocTab); i++) {
		if(_KeyAssocTab[i].Vk == vk) {
			switch(stateP) {
				case 0: return _KeyAssocTab[i].K;
				case 1: return _KeyAssocTab[i].SK;
				case 2: return _KeyAssocTab[i].CK;
				case 3: return _KeyAssocTab[i].AK;
				default: return 0;
			}
		}
	}
	return 0;
}

int TView::HandleKeyboardEvent(WPARAM wParam, int isPpyCodeType)
{
#if 0 // {
	//static const int normal_keys[21][2] = {
	static const __ITabEntry normal_keys[] = {
		{ VK_RETURN,   kbEnter     },
		{ VK_ADD,      kbGrayPlus  },
		{ VK_SUBTRACT, kbGrayMinus },
		{ VK_INSERT ,  kbIns       },
		{ VK_DELETE,   kbDel       },
		{ VK_F1,    kbF1 },
		{ VK_F2,    kbF2 },
		{ VK_F3,    kbF3 },
		{ VK_F4,    kbF4 },
		{ VK_F5,    kbF5 },
		{ VK_F6,    kbF6 },
		{ VK_F7,    kbF7 },
		{ VK_F8,    kbF8 },
		{ VK_F9,    kbF9 },
		{ VK_F10,   kbF10 },
		{ VK_F11,   kbF11 },
		{ VK_F12,   kbF12 },
		{ VK_UP,    kbUp   },
		{ VK_DOWN,  kbDown },
		{ VK_LEFT,  kbLeft },
		{ VK_RIGHT, kbRight }
	};
	//static const int shift_keys[12][2] = {
	static const __ITabEntry shift_keys[] = {
		{ VK_INSERT, kbShiftIns },
		{ VK_DELETE, kbShiftDel },
		{ VK_F1,     kbShiftF1  },
		{ VK_F2,     kbShiftF2  },
		{ VK_F3,     kbShiftF3  },
		{ VK_F4,     kbShiftF4  },
		{ VK_F5,     kbShiftF5  },
		{ VK_F6,     kbShiftF6  },
		{ VK_F7,     kbShiftF7  },
		{ VK_F8,     kbShiftF8  },
		{ VK_F9,     kbShiftF9  },
		{ VK_F10,    kbShiftF10 }
	};
	//static const int control_keys[14][2] = {
	static const __ITabEntry control_keys[] = {
		{VK_RETURN,   kbCtrlEnter},
		{VK_INSERT,   kbCtrlIns},
		{VK_DELETE,   kbCtrlDel},
		{VK_F1,       kbCtrlF1 },
		{VK_F2,       kbCtrlF2 },
		{VK_F3,       kbCtrlF3 },
		{VK_F4,       kbCtrlF4 },
		{VK_F5,       kbCtrlF5 },
		{VK_F6,       kbCtrlF6 },
		{VK_F7,       kbCtrlF7 },
		{VK_F8,       kbCtrlF8 },
		{VK_F9,       kbCtrlF9 },
		{VK_F10,      kbCtrlF10},
		{VK_SUBTRACT, 0x4a00}
	};
	//static const int alt_keys[12][2]={
	static const __ITabEntry alt_keys[] = {
		{VK_SUBTRACT, kbAltMinus},
		{VK_INSERT,   kbAltIns},
		{VK_F1,  kbAltF1 },
		{VK_F2,  kbAltF2 },
		{VK_F3,  kbAltF3 },
		{VK_F4,  kbAltF4 },
		{VK_F5,  kbAltF5 },
		{VK_F6,  kbAltF6 },
		{VK_F7,  kbAltF7 },
		{VK_F8,  kbAltF8 },
		{VK_F9,  kbAltF9 },
		{VK_F10, kbAltF10}
	};
#define GETKEYCODE(tab) i_tab_limited(tab, wParam, SIZEOFARRAY(tab))
#endif // } 0
	TEvent event;
	event.what = evKeyDown;
	if(isPpyCodeType)
		event.keyDown.keyCode = (uchar)wParam;
	else {
		if(GetKeyState(VK_SHIFT) & 0x8000) {
			//event.keyDown.keyCode = GETKEYCODE(shift_keys);
			event.keyDown.keyCode = __MapVk(wParam, 1);
		}
		else if(GetKeyState(VK_CONTROL) & 0x8000) {
			if(wParam == VK_F11)
				wParam = VK_RETURN;
			//event.keyDown.keyCode = GETKEYCODE(control_keys);
			event.keyDown.keyCode = __MapVk(wParam, 2);
		}
		else if(GetKeyState(VK_MENU) & 0x8000) {
			//event.keyDown.keyCode = GETKEYCODE(alt_keys);
			event.keyDown.keyCode = __MapVk(wParam, 3);
		}
		else {
			//event.keyDown.keyCode = GETKEYCODE(normal_keys);
			event.keyDown.keyCode = __MapVk(wParam, 0);
		}
	}
	if(event.keyDown.keyCode) {
		handleEvent(event);
		return 1;
	}
	else
		return 0;
#undef GETKEYCODE
}

static int PassMsgToCtrl(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	int    ok = 0;
	TDialog * p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
	if(p_dlg) {
		const short  cntlid = GetDlgCtrlID((HWND)lParam);
		TView * v = p_dlg->P_Last;
		if(v) do {
			if(v->TestId(CLUSTER_ID(LOWORD(cntlid)))) {
				ok = v->handleWindowsMessage(uMsg, wParam, lParam) ? 1 : -1;
				break;
			}
			v = v->prev();
		} while(v != p_dlg->P_Last);
	}
	return ok;
}

static void RemoveUnusedControls(TDialog * pDlg)
{
	const HWND h_wnd = pDlg->H();
	TView * v = pDlg->P_Last;
	if(v) do {
		while(v) {
			const  uint ctl_id = v->GetId();
			if(GetDlgItem(h_wnd, ctl_id) || GetDlgItem(h_wnd, MAKE_BUTTON_ID(ctl_id, 1)))
				break;
			else {
				TView * p_to_remove_view = v;
				v = v->prev();
				pDlg->remove(p_to_remove_view);
				delete p_to_remove_view;
				if(v == pDlg->P_Last)
					return;
			}
		}
		v = v->prev();
	} while(v != pDlg->P_Last);
}

static TView * FASTCALL CtrlIdToView(TDialog * pDlg, long id)
{
	TView * v = pDlg->P_Last;
	if(v)
		do {
			if(v->TestId(id))
				return v;
			else
				v = v->prev();
		} while(v != pDlg->P_Last);
	return 0;
}

static BOOL CALLBACK SetupCtrlTextProc(HWND hwnd, LPARAM lParam)
{
	SString temp_buf;
	TView::SGetWindowText(hwnd, temp_buf);
	if(temp_buf.NotEmpty()) {
		SString subst;
		if(SLS.SubstString(temp_buf, 1, subst) > 0) {
			TView::SSetWindowText(hwnd, subst); // @v9.1.5 
		}
		else if(SLS.ExpandString(temp_buf, CTRANSF_UTF8_TO_OUTER) > 0) { // @v9.2.1 
			TView::SSetWindowText(hwnd, temp_buf);
		}
	}
	return TRUE;
}

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	TDialog * p_dlg;
	TView * v;
	TEvent event;
	switch(uMsg) {
		case WM_INITDIALOG:
			if(lParam) {
				TView::SetWindowUserData(hwndDlg, (void *)lParam);
				p_dlg = (TDialog *)lParam;
				p_dlg->HW = hwndDlg;
				TView::message(p_dlg, evCommand, cmInit);
				SetupCtrlTextProc(p_dlg->H(), 0);
				RemoveUnusedControls(p_dlg);
				if((v = p_dlg->P_Last) != 0) {
					do {
						HWND   ctrl = GetDlgItem(hwndDlg, v->GetId());
						SETIFZ(ctrl, GetDlgItem(hwndDlg, MAKE_BUTTON_ID(v->GetId(), 1)));
						if(IsWindow(ctrl)) {
							v->Parent = hwndDlg;
							v->handleWindowsMessage(uMsg, wParam, lParam);
							EnableWindow(ctrl, !v->IsInState(sfDisabled));
						}
					} while((v = v->prev()) != p_dlg->P_Last);
				}
				if(!p_dlg->CheckFlag(TDialog::fExport))
					EnumChildWindows(hwndDlg, SetupCtrlTextProc, 0);
			}
			return 1;
		case WM_DESTROY:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				if((v = p_dlg->P_Last) != 0)  // @todo ����������� ������, �� ������� ������������, 0. ��-�� ����, ��� p_dlg->P_Last ���������� ������, ��� ������������ ������ ����. ��������� ���������.
					do {
						if(((long)v) == 0xddddddddL)
							break;
						v->handleWindowsMessage(uMsg, wParam, lParam);
					} while((v = v->prev()) != p_dlg->P_Last);
			}
			TView::SetWindowUserData(hwndDlg, (void *)0);
			break;
		case WM_KILLFOCUS:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				long prev_id = CLUSTER_ID(GetDlgCtrlID((HWND)lParam));
				if((v = p_dlg->P_Last) != 0)
					do {
						if(v->TestId(prev_id)) {
							TView::message(p_dlg, evBroadcast, cmReleasedFocus, v);
		 					if(!(p_dlg->MsgLockFlags & TGroup::fLockMsgChangedFocus)) {
								p_dlg->MsgLockFlags |= TGroup::fLockMsgChangedFocus;
								TView::message(p_dlg, evBroadcast, cmChangedFocus, v);
								p_dlg->MsgLockFlags &= ~TGroup::fLockMsgChangedFocus;
							}
							break;
						}
					} while((v = v->prev()) != p_dlg->P_Last);
			}
			break;
		case WM_SETFOCUS:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				if(lParam) {
					long prev_id = CLUSTER_ID(GetDlgCtrlID((HWND)lParam));
					if((v = p_dlg->P_Last) != 0)
						do {
							if(v->TestId(prev_id)) {
								TView::message(p_dlg, evBroadcast, cmReceivedFocus, v);
								v->setState(sfSelected, true);
								p_dlg->P_Current = v;
								break;
							}
						} while((v = v->prev()) != p_dlg->P_Last);
				}
				else if((v = p_dlg->P_Current) != 0) {
					HWND h_ctl = GetDlgItem(hwndDlg, v->GetId());
					if(h_ctl)
						SetFocus(h_ctl);
				}
			}
			break;
		case WM_COMMAND:
			{
				uint16 hiw = HIWORD(wParam);
				uint16 low = LOWORD(wParam);
				p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
#if 0 // {
				if(APPL->UICfg.WndViewKindID == UserInterfaceSettings::wndVKFancy && hiw == 0 && low != IDCANCEL) {
					if(p_dlg && p_dlg->P_Current && p_dlg->P_Current->IsSubSign(TV_SUBSIGN_BUTTON))
						low = p_dlg->P_Current->Id;
				}
#endif // } 0
				if(GetKeyState(VK_CONTROL) & 0x8000 && low != cmaCalculate && hiw != EN_UPDATE && hiw != EN_CHANGE)
					return 0;
				else if(p_dlg) {
					if(hiw == 0 && low == IDCANCEL) {
						TView::message(p_dlg, evCommand, cmCancel, p_dlg);
						return 0;
					}
					else {
						if(lParam == 0) {
							if(hiw == 0) { // from menu
								event.what = evKeyDown;
								event.keyDown.keyCode = low;
								p_dlg->handleEvent(event);
							}
							else if(hiw == 1) { // from accelerator
								event.what = evCommand;
								event.message.command = low;
								p_dlg->handleEvent(event);
							}
						}
						v = CtrlIdToView(p_dlg, CLUSTER_ID(low));
						CALLPTRMEMB(v, handleWindowsMessage(uMsg, wParam, lParam));
					}
				}
				else
					return 0;
			}
			break;
		case WM_LBUTTONDBLCLK:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				event.what              = evMouseDown;
				event.mouse.buttons     = (uchar)wParam;
				event.mouse.WhereX      = LOWORD(lParam);
				event.mouse.WhereY      = HIWORD(lParam);
				event.mouse.doubleClick = 1;
				p_dlg->handleEvent(event);
			}
			break;
		case WM_LBUTTONDOWN:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				event.what = evMouseDown;
				event.mouse.buttons = (uchar)wParam;
				event.mouse.WhereX = LOWORD(lParam);
				event.mouse.WhereY = HIWORD(lParam);
				p_dlg->handleEvent(event);
			}
			break;
		case WM_RBUTTONDOWN:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg && HIWORD(wParam) == 1) {
				if((v = p_dlg->P_Current) != 0)
					v->handleWindowsMessage(uMsg, wParam, lParam);
			}
			break;
		case WM_LBUTTONUP:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				event.what = evMouseUp;
				event.mouse.buttons = (uchar)wParam;
				event.mouse.WhereX = LOWORD(lParam);
				event.mouse.WhereY = HIWORD(lParam);
				p_dlg->handleEvent(event);
			}
			break;
		case WM_RBUTTONUP:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg && HIWORD(wParam) != 1) {
				event.what = evKeyDown;
				event.keyDown.keyCode = kbShiftF10;
				p_dlg->handleEvent(event);
			}
			break;
		case WM_MOUSEMOVE:
			{
				p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
				if(p_dlg) {
					event.what = evMouseMove;
					event.mouse.buttons = (uchar)wParam;
					event.mouse.WhereX = LOWORD(lParam);
					event.mouse.WhereY = HIWORD(lParam);
					p_dlg->handleEvent(event);
				}
			}
		case WM_VKEYTOITEM:
			if(PassMsgToCtrl(hwndDlg, uMsg, wParam, lParam) == -1) {
				p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
				CALLPTRMEMB(p_dlg, HandleKeyboardEvent(LOWORD(wParam)));
			}
			SendMessage(hwndDlg, WM_USER_KEYDOWN, wParam, lParam);
			return -2;
		case WM_KEYUP:
			PassMsgToCtrl(hwndDlg, uMsg, wParam, lParam);
			return 0;
		case WM_USER_KEYDOWN:
			{
				if((wParam >= VK_F1 && wParam <= VK_F12) || (wParam >= 48 && wParam <= 57) || (wParam >= 65 && wParam <= 90) || (wParam >= 97 && wParam <= 122)) {
					TDialog * p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
					KeyDownCommand key_cmd;
					key_cmd.State = 0;
					if(GetKeyState(VK_MENU) & 0x8000)
						key_cmd.State |= KeyDownCommand::stateAlt;
					if(GetKeyState(VK_CONTROL) & 0x8000)
						key_cmd.State |= KeyDownCommand::stateCtrl;
					if(GetKeyState(VK_SHIFT) & 0x8000)
						key_cmd.State |= KeyDownCommand::stateShift;
					key_cmd.Code = (uint16)wParam;
					event.what = evCommand;
					event.message.command = cmWinKeyDown;
					event.message.infoPtr = (void*)&key_cmd;
					p_dlg->handleEvent(event);
				}
			}
			return 0;
		case WM_CHAR:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				short  ctrl_id = GetDlgCtrlID((HWND)lParam);
				short  def_inln_id = (p_dlg->DefInputLine && GetDlgItem(hwndDlg, p_dlg->DefInputLine)) ? p_dlg->DefInputLine : 0;
				if(def_inln_id && def_inln_id != ctrl_id) {
					::SetFocus(GetDlgItem(hwndDlg, def_inln_id));
					// @v9.1.5 ::SendDlgItemMessage(hwndDlg, def_inln_id, WM_SETTEXT, 0, (LPARAM)onecstr((char)LOWORD(wParam)));
					SString temp_buf; // @v9.1.5 
					temp_buf.CatChar((char)LOWORD(wParam)); // @v9.1.5 
					TView::SSetWindowText(GetDlgItem(hwndDlg, def_inln_id), temp_buf); // @v9.1.5 
					::SendDlgItemMessage(hwndDlg, def_inln_id, WM_KEYDOWN, VK_END, 0);
					return 0;
				}
			}
			if(PassMsgToCtrl(hwndDlg, uMsg, wParam, lParam) == -1) {
				if(wParam != VK_RETURN) {
					p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
					CALLPTRMEMB(p_dlg, HandleKeyboardEvent(LOWORD(wParam), 1));
					return -2;
				}
			}
			return 0;
		case WM_MOUSEWHEEL:
		case WM_VSCROLL:
			PassMsgToCtrl(hwndDlg, uMsg, wParam, lParam);
			break;
		case WM_NOTIFY:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg && (v = p_dlg->P_Last) != 0) {
				do {
					if(v->TestId(wParam)) {
						v->handleWindowsMessage(uMsg, wParam, lParam);
						break;
					}
				} while((v = v->prev()) != p_dlg->P_Last);
			}
			break;
		case WM_ACTIVATE:
			return TRUE;
		case WM_SIZE:
		case WM_SIZING:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				event.what = evCommand;
				event.message.command = cmResize;
				event.message.infoPtr = (uMsg == WM_SIZING) ? (void *)lParam : 0;
				p_dlg->handleEvent(event);
				APPL->DrawControl(hwndDlg, uMsg, wParam, lParam);
			}
			break;
		case WM_GETMINMAXINFO:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			CALLPTRMEMB(p_dlg, SetDlgTrackingSize((MINMAXINFO *)lParam));
			return 0;
		case WM_MEASUREITEM:
			{
				MEASUREITEMSTRUCT * p_mis = (MEASUREITEMSTRUCT *)lParam;
				for(int i = 0; i < 32; i++)
					if(OwnerDrawCtrls[i].CtrlID == wParam) {
						p_mis->itemHeight = OwnerDrawCtrls[i].ExtraParam;
						break;
					}
				APPL->DrawControl(hwndDlg, uMsg, wParam, lParam);
			}
			return TRUE;
		case WM_ERASEBKGND:
			/*
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg && APPL->EraseBackground(p_dlg, hwndDlg, (HDC)wParam, 0) > 0)
				return 1;
			*/
			return 0;
		case WM_DRAWITEM:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				DRAWITEMSTRUCT * p_dis = (DRAWITEMSTRUCT *)lParam;
				TDrawItemData di;
				di.CtlType = p_dis->CtlType;
				di.CtlID   = p_dis->CtlID;
				di.ItemID  = p_dis->itemID;
				di.ItemAction = p_dis->itemAction;
				di.ItemState  = p_dis->itemState;
				di.H_Item     = p_dis->hwndItem;
				di.H_DC       = p_dis->hDC;
				di.ItemRect   = p_dis->rcItem;
				di.P_View   = p_dlg->getCtrlView(LOWORD(di.CtlID));
				di.ItemData = p_dis->itemData;
				TView::message(p_dlg, evCommand, cmDrawItem, &di);
				if(APPL->DrawControl(hwndDlg, uMsg, wParam, lParam) > 0)
					di.ItemAction = p_dis->itemAction;
				if(di.ItemAction == 0)
					return FALSE;
			}
			break;
		/*
		case WM_INPUTLANGCHANGE: // @v6.4.4 AHTOXA
			PostMessage(GetParent(hwndDlg), uMsg, wParam, lParam);
			break;
		*/
		case WM_CTLCOLORSTATIC:
		case WM_CTLCOLOREDIT:
		case WM_CTLCOLORSCROLLBAR:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(p_dlg) {
				TDrawCtrlData dc;
				if(uMsg == WM_CTLCOLORSTATIC)
					dc.Src = TDrawCtrlData::cStatic;
				else if(uMsg == WM_CTLCOLOREDIT)
					dc.Src = TDrawCtrlData::cEdit;
				else if(uMsg == WM_CTLCOLORSCROLLBAR)
					dc.Src = TDrawCtrlData::cScrollBar;
				else
					dc.Src = 0;
				dc.H_Ctl = (HWND)lParam;
				dc.H_DC  = (HDC)wParam;
				dc.H_Br  = 0;
				if(TView::message(p_dlg, evCommand, cmCtlColor, &dc))
					return (BOOL)dc.H_Br;
			}
			// no break: ret FALSE by default
		case WM_PAINT:
			p_dlg = (TDialog *)TView::GetWindowUserData(hwndDlg);
			if(TView::message(p_dlg, evCommand, cmPaint))
				return (BOOL)0;
		default:
			return FALSE;
	}
	return TRUE;
}

#if 0 // @v7.7.7 {

#define WM_NOTIFY_MAIN_DIALOG WM_USER+1

BOOL CALLBACK PropertySheetDialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	TabbedDialog * t = (TabbedDialog *)TView::GetWindowUserData(GetParent(hwndDlg));
	int    n = t ? t->findPageByHandle(hwndDlg) : -1;
	switch(uMsg) {
		case WM_INITDIALOG:
			{
				PROPSHEETPAGE * psp = (PROPSHEETPAGE*)lParam;
				TView::SetWindowUserData(GetParent(hwndDlg), TabbedDialog::topTabbedDialog);
				TabbedDialog::topTabbedDialog->pages[psp->lParam].hWnd = hwndDlg;
				if(psp->lParam == 0)
					DialogProc(hwndDlg, uMsg, wParam, (long)TabbedDialog::topTabbedDialog->pages[0].dialog);
				return 1;
			}
		case WM_NOTIFY_MAIN_DIALOG:
			TView::message((TDialog *)lParam, evCommand, wParam, (TDialog *)lParam);
			break;
		case WM_NOTIFY:
			switch(((NMHDR FAR *)lParam)->code) {
				case PSN_KILLACTIVE:
					if(t->P_Current)
						t->lastCommand = cmOK;
					TView::SetWindowProp(hwndDlg, DWL_MSGRESULT, 0L);
					return TRUE;
				case PSN_SETACTIVE:
					if(n != 0 && n != -1) // open new child dialog
						PostMessage(hwndDlg, WM_NOTIFY_MAIN_DIALOG, t->pages[n].command, (long)t->pages[0].dialog);
					if(n == 0 && t->lastCommand == cmCancel)
						SendMessage(GetParent(hwndDlg), PSM_PRESSBUTTON, PSBTN_APPLYNOW, 0);
					t->P_Current = n;
					TView::SetWindowProp(hwndDlg, DWL_MSGRESULT, 0L);
					return TRUE;
				case PSN_APPLY:
					t->lastCommand = cmOK;
					TView::SetWindowProp(hwndDlg, DWL_MSGRESULT, PSNRET_NOERROR);
					return TRUE;
				case PSN_QUERYCANCEL:
					t->lastCommand = cmCancel;
					if(t->P_Current)
						SendMessage(GetParent(hwndDlg), PSM_SETCURSEL, 0, 0);
					return FALSE;
			}
		default:
			if(n != -1 && t->pages[n].dialog)
				return DialogProc(hwndDlg, uMsg, wParam, lParam);
	}
	return FALSE;
}

#endif // } 0 @v7.7.7

