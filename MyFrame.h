//
// Created by matteo on 31/07/17.
//

#ifndef SCNOTEPAD_MYFRAME_H
#define SCNOTEPAD_MYFRAME_H

#include <wx/frame.h>

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size);

private:
    void OnHello(wxCommandEvent &event);
    void OnExit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);

    wxDECLARE_EVENT_TABLE();
};


#endif //SCNOTEPAD_MYFRAME_H
