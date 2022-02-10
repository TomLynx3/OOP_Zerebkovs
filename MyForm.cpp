

#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#include "MyForm.h"
#include <stdlib.h>
#include <time.h> 

using namespace System;
using namespace System::Windows::Forms;
int main()
{
	srand((unsigned)time(NULL));

	Application::EnableVisualStyles();
	OPP1Zerebkovs::MyForm form;
	Application::Run(% form);
}
