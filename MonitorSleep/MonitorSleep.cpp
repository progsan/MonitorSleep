/**
* @author prog_san
* @date 01.09.18 @version 1.0
*/

#include <windows.h>
#include "resource.h"

int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR     lpCmdLine,
					 int       nCmdShow)
{	
	Sleep(1000);

	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, LPARAM(2));

	return TRUE;
}

