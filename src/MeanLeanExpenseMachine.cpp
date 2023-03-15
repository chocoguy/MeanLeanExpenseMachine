// MeanLeanExpenseMachine.cpp : Defines the entry point for the application.
//

#include <wx/string.h>
#include "MeanLeanExpenseMachine.h"
#include "menu.h"

IMPLEMENT_APP(MyApp)
wxIMPLEMENT_WXWIN_MAIN_CONSOLE;


using namespace std;

bool MyApp::OnInit()
{
	SubMenu* subMenu = new SubMenu(wxT("Subway"));
	subMenu->Show(true);

	return true;
}


//int main()
//{
//	string HelperText;
//	cout << "Hello CMake." << endl;
//	cin >> HelperText;
//	return 0;
//}
