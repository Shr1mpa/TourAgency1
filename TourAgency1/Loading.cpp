#include "Loading.h"



#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <Windows.h>
#include <sstream>
#include <msclr/marshal_cppstd.h>





using namespace std;

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


[STAThreadAttribute]

int main(cli::array<String^>^ args) {


	Application::SetCompatibleTextRenderingDefault(false);
	//Application::EnableVisualStyles();
	/*Application::Run(gcnew MainForm);*/
	TourAgency1::AdminForm form;
	Application::Run(% form);

	return 0;
}

