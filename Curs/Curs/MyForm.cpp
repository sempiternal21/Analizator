#include "MyForm.h"
#include <Windows.h>
using namespace Curs;
using namespace System;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
//System::Diagnostics::Debug::Write(gcnew System::String(d));