#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <winsock2.h>
#include <windows.h>
#include <winuser.h>
#include <wininet.h>
#include <windowsx.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


// hInstance is a handle to an instance or module
// hPrev is always 0.
// lpCmdLine has args
// nCmdLine says whether app will be minimized/maximized/shown
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow){
	// program should be invisible (not be shown)
	HWND window_handle;
	AllocConsole();

	// window name is null
	window_handle = FindWindowA("ConsoleWindowClass", NULL);

	// do not show a window for the program
	// 2nd arg is nCmdShow. 
	ShowWindow(window_handle, 0);
} 