#include <cstdio>
#include <iostream>
#include <Shlwapi.h>
#include <metahost.h>
#include <iostream>
#include <locale>
#include <codecvt>
#include "func.hpp"

//Create a console and bind the out in to the right place.
void CreateConsole(){
	if (!AllocConsole()) 
		return;

	FILE* d;
	freopen_s(&d, "CONOUT$", "w", stdout);
	freopen_s(&d, "CONOUT$", "w", stderr);
	freopen_s(&d, "CONIN$", "r", stdin);
	std::cout.clear();
	std::clog.clear();
	std::cerr.clear();
	std::cin.clear();

	HANDLE co = CreateFile((L"CONOUT$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	HANDLE ci = CreateFile((L"CONIN$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	SetStdHandle(STD_OUTPUT_HANDLE, co);
	SetStdHandle(STD_ERROR_HANDLE, co);
	SetStdHandle(STD_INPUT_HANDLE, ci);

	std::wcout.clear();
	std::wclog.clear();
	std::wcerr.clear();
	std::wcin.clear();
}
HWND sharp_hwnd;

//DigiExam or to be more precise electron loads winmm 3 times and this wil create 3 consoles. Which is not really wanted but has no effect for us.
//You could loop enumerate through all the threads or windows to remove unwanted.
void main() {
	HINSTANCE li = LoadLibrary(L"TestInje.dll"); // A dll to inject a winform that is in C:/Utils. This is a custom made browser called
	//Sharp-Browser. 
	if (li == nullptr) {
		std::cout << "failed" << std::endl;
		return;
	}
	//Find the window handles so we can hide and show them.
	sharp_hwnd = FindWindowA(nullptr, "Google - SharpBrowser"); // The browser is from SharpBrowser github resp. 
	if (sharp_hwnd == nullptr) {
		std::cout << "Did not found browser! \n";
		return;
	}
	while (true) {
		HWND digi_hwnd = FindWindowA(nullptr, "DigiExam");
		if (digi_hwnd == nullptr) {
			std::cout << "Did not found digi! \n";
			break;
		}

		if (GetKeyState(VK_F3) & 0x8000) { // Open browser
			while (1) {
				SetWindowPos(digi_hwnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
				SetWindowPos(sharp_hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE); 
				SetForegroundWindow(sharp_hwnd);
				EnableWindow(digi_hwnd, FALSE);
				EnableWindow(sharp_hwnd, TRUE);
				ShowWindow(digi_hwnd, SW_HIDE);
				ShowWindow(sharp_hwnd, SW_SHOW);

				if (GetAsyncKeyState(VK_F7)) {
					break;
				}
			}
		}
		if (GetKeyState(VK_F2) & 0x8000) { // Open DigiExam
			while (1) {
				SetWindowPos(sharp_hwnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
				SetWindowPos(digi_hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE); 
				SetForegroundWindow(digi_hwnd);
				EnableWindow(sharp_hwnd, FALSE);
				EnableWindow(digi_hwnd, TRUE);
				ShowWindow(sharp_hwnd, SW_HIDE);
				ShowWindow(digi_hwnd, SW_SHOW);

				if (GetAsyncKeyState(VK_F7)) {
					break;
				}
			}
		}
		
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved){
	if (dwReason == DLL_PROCESS_ATTACH){
		DisableThreadLibraryCalls(hModule);
	
		if (Init()){
			CreateConsole();
			SetWindowText(GetConsoleWindow(), L"Hello");

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
		}
	}
	return TRUE;
}

