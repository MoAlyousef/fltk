//
// "$Id$"
//
// Definition of Apple Cocoa window driver.
//
// Copyright 1998-2016 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//


#include "../../config_lib.h"
#include "Fl_Cocoa_Window_Driver.h"


Fl_Window_Driver *Fl_Window_Driver::newWindowDriver(Fl_Window *w)
{
  return new Fl_Cocoa_Window_Driver(w);
}


Fl_Cocoa_Window_Driver::Fl_Cocoa_Window_Driver(Fl_Window *win)
: Fl_Window_Driver(win)
{
}


extern Fl_Window *fl_xfocus;


void Fl_Cocoa_Window_Driver::take_focus()
{
  set_key_window();
}


//
// End of "$Id$".
//