#include "Students.h"
#include <cstdlib>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(array<String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Students::Students Students;
	Application::Run(%Students);
}
