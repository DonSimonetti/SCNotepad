//
// Created by matteo on 31/07/17.
//

#include "MainApp.h"
#include "MyFrame.h"

bool MainApp::OnInit()
{
    MyFrame *frame=new MyFrame("HW",wxPoint(50,50),wxSize(450,340));
    frame->Show(true);
    return true;
}
