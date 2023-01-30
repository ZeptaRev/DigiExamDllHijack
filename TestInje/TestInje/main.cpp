#include <metahost.h>
#include <memory>
#include <stdio.h>  
#include <iostream>
#include <xlocbuf>
#include <locale>
#include <codecvt>
//https://www.unknowncheats.me/forum/general-programming-and-reversing/332825-inject-net-dll-using-clr-hosting.html
//https://www.unknowncheats.me/forum/general-programming-and-reversing/332825-inject-net-dll-using-clr-hosting.html
#pragma comment(lib, "mscoree.lib")
#include <filesystem>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_DEPRICATE
#define _CRT_SECURE_NO_WARNINGS
using namespace std::filesystem;
std::string replace_all(
	const std::string& str,   // where to work
	const std::string& find,  // substitute 'find'
	const std::string& replace //      by 'replace'
) {
	using namespace std;
	string result;
	size_t find_len = find.size();
	size_t pos, from = 0;
	while (string::npos != (pos = str.find(find, from))) {
		result.append(str, from, pos - from);
		result.append(replace);
		from = pos + find_len;
	}
	result.append(str, from, string::npos);
	return result;
	/*
		This code might be an improvement to James Kanze's
		because it uses std::string methods instead of
		general algorithms [as 'std::search()'].
	*/
}
int main()
{
	ICLRMetaHost* metaHost = nullptr;
	ICLRRuntimeInfo* Info  = nullptr;
	ICLRRuntimeHost* Host  = nullptr;
	if (CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&metaHost) == S_OK) 
		if (metaHost->GetRuntime(L"v4.0.30319", IID_ICLRRuntimeInfo, (LPVOID*)&Info) == S_OK) 
			if (Info->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&Host) == S_OK)
				if (Host->Start() == S_OK) {
					std::unique_ptr<DWORD> pReturnValue(new DWORD);
					Host->ExecuteInDefaultAppDomain(L"C:\\Utlis\\Browser.dll", L"Browser.Program", L"TestMethod", L"It works!!", pReturnValue.get());
					Info->Release();
					metaHost->Release();
					Host->Release();
				}

	return 0;
}

BOOL __stdcall DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH: {
		auto Thread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
		if (Thread)
			return TRUE;
		else
			return FALSE;
	}
	case DLL_THREAD_ATTACH:
	{

	}
	break;
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

