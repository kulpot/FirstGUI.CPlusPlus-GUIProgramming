#pragma once
//#include <wx/frame.h>
#include <wx/wx.h>

class MainFrame	: public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void OnButtonClicked(wxCommandEvent& evt);
	void OnButton1Clicked(wxCommandEvent& evt);
	void OnButton2Clicked(wxCommandEvent& evt);
	//void OnSliderChanged(wxCommandEvent& evt);
	//void OnTextChanged(wxCommandEvent& evt);
	//wxDECLARE_EVENT_TABLE(); //static event handling
};

