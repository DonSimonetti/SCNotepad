//
// Created by matteo on 31/07/17.
//

#include "MyFrame.h"
#include "MainApp.h"
#include <wx/menu.h>
#include <wx/log.h>
#include <wx/app.h>

wxBEGIN_EVENT_TABLE(MyFrame,wxFrame)
                EVT_MENU(1,MyFrame::OnHello)
                EVT_MENU(wxID_EXIT,MyFrame::OnExit)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MainApp);

MyFrame::MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size) : wxFrame(NULL,wxID_ANY,title,pos,size)
{
    wxMenu *menu=new wxMenu;
    menu->Append(1,"wggwgw","gggg");
    menu->Append(wxID_EXIT);

    wxMenuBar * menuBar=new wxMenuBar;
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("eheheh");
}

void MyFrame::OnExit(wxCommandEvent &event)
{
    Close(true);
}
void MyFrame::OnHello(wxCommandEvent &event)
{
    wxLogMessage("test");
}