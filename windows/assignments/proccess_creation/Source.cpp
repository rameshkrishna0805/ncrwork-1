#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc, TCHAR	*argv[])
{
	STARTUPINFOA si;
	PROCESS_INFORMATION pi;
	//char arg[] = "envi_expansion";
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	if (CreateProcessA(NULL,argv[1],NULL,NULL,FALSE,0,NULL,NULL,&si,&pi))
	{
		cout<<"CreateProcess done \n";
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	else
	{
		cout<<"there is an error here\n"<< GetLastError();
	}
	system("pause");
}