#include "Advisors.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Advisors::Advisors form;
	Application::Run(%form);
}
