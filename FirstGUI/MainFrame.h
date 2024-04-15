#pragma once
//#include <wx/frame.h>
#include <wx/wx.h>

class MainFrame	: public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void OnButtonClicked(wxCommandEvent& evt);
	void OnSliderChanged(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};

