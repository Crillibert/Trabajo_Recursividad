#include "MyForm.h"
#include <iostream>
#include <fstream>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabajoRecursividad::MyForm form;
	Application::Run(% form);
	return 0;
}