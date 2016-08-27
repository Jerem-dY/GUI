#ifndef GUI_HPP_INCLUDED
#define GUI_HPP_INCLUDED

#include "gtk/gtk.h"

#include "Window.hpp"
#include "Label.hpp"
#include "Button.hpp"
#include "Entry.hpp"
#include "ProgressBar.hpp"
#include "Slider.hpp"
#include "Color.hpp"
#include "Image.hpp"
#include "ComboBox.hpp"

#include "Layouts/Fixed.hpp"
#include "Layouts/Box.hpp"
#include "Layouts/Frame.hpp"


namespace GUI
/**
* \brief The GUI namespace
* \author jejeleterrible
*/
{


    /**
    * \brief Initialize the GUI
    * \param int *argc
    * \param char ***argv
    */
    void init(int *argc, char ***argv);


    /**
    * \brief Start the mainloop of the GUI
    */
    void mainLoop();

};





#endif // GUI_HPP_INCLUDED
