#include "menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void jack(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::menu form;
	Application::Run(%form);
}
