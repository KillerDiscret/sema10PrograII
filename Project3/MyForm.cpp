#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Project3;
[STAThread]

void main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Project3::MyForm());

}
