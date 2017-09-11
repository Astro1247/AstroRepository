#include "MainForm.h"
#include "StationManagement.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void StationManagementMain(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BusAppCLR::StationManagement busForm(BusAppCLR::MainForm);
	//Application::Run(%busForm);
}