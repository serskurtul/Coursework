#include "Logic.h"
#include "LoginWindow.h"
#include "AdminPanel.h"
#include "MainWindow.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace HotelProgram;
[STAThreadAttribute] int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew LoginWindow);
	if(LOGIN::success_login)
		Application::Run(gcnew MainWindow);

	return 0;
}
