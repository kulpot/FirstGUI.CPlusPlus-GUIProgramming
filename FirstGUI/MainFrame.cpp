#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxButton* button = new wxButton(this, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
}