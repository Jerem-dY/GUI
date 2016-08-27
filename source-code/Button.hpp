#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED

#include <iostream>
#include "gtk/gtk.h"
#include "Container.hpp"


namespace GUI{

    class Button : public Container
    /**
    * \brief A class that represents buttons, wich can be clicked to do something
    * \author jejeleterrible
    */
    {

public:

    /**
    * \brief The default constructor of the class
    */
    Button(void);

    /**
    * \brief The second constructor of the class, with the text of the button
    * \param std::string label : the text of the button
    */
    Button(const std::string &label);

    /**
    * \brief The third constructor of the class, with the id of the GTK_STOCK
    * \param const gchar id : the id of the GTK_STOCK item
    */
    Button(const gchar *id);



    };


};


#endif // BUTTON_HPP_INCLUDED
