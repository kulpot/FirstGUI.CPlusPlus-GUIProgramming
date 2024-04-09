#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
}