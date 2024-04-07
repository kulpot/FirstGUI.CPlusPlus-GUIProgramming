//ref link:https://www.youtube.com/watch?v=ONYW3hBbk-8&list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G&index=2
//------Set Config-------------
//FirstGUI->properties
//->Config set->All Config
//->Platform set->All Platform
//->Config Prop->C / C++->Additional Include Directories->edit->click New line(folderIcon)
//->$(WXWIN)C:\Users\sunny\wxWidgets - \include->click New line(folderIcon)
//->$(WXWIN)C:\Users\sunny\wxWidgets - \include\msvc
//->Config Prop->Linker->System->SubSystem->change toConsole to Windows
//ChangePlatform->Win32->Config Prop->Linker->General->Additional Library Directories
//->$(WXWIN)C:\Users\sunny\wxWidgets - \lib\vc_lib
//->ChangePlatform->x64->Config Prop->Linker->General->Additional Library Directories
//->$(WXWIN)C:\Users\sunny\wxWidgets - \lib\vc_x64_lib
//

//#include <wx/wx.h>
//
//class App : public wxApp {
//public:
//    bool OnInit() {
//        wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(600, 400));
//        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
//        wxStaticText* text = new wxStaticText(window, wxID_ANY, "Well Done!\nEverything seems to be working",
//            wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
//        text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
//        sizer->Add(text, 1, wxALIGN_CENTER);
//        window->SetSizer(sizer);
//        window->Show();
//        return true;
//    }
//};
//
//wxIMPLEMENT_APP(App);