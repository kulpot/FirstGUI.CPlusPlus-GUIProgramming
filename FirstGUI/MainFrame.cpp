#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	
	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55));

}