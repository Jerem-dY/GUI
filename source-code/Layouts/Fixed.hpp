#ifndef FIXED_HPP_INCLUDED
#define FIXED_HPP_INCLUDED

#include <iostream>
#include "gtk/gtk.h"
#include "../Container.hpp"


namespace GUI{


    class Fixed : public Container
    /**
    * \brief Layout that can contains other widgets and organize them with absolute position
    * \author jejeleterrible
    */
    {


    public:
        /**
        * \brief Default constructor of the class
        */
        Fixed();

        /**
        * \brief Get the widget as a GtkFixed, from Gtk+
        * \return GtkFixed* : the fixed
        */
        GtkFixed *getFixed(void);

        /**
        * \brief Put a widget into the fixed, at location <i>x, y</i>
        * \param Widget &widget : the widget that will be placed into the fixed
        * \param int x : the <i>x</i> coordinate
        * \param int y : the <i>y</i> coordinate
        */
        void addWidget(Widget &widget, int x, int y);


        /**
        * \brief Put a widget into the fixed, at location <i>1, 1</i>
        * \param Widget &widget : the widget that will be placed into the fixed
        */
        void addWidget(Widget &widget);


        /**
        * \brief Put a widget into the fixed, at location <i>1, 1</i>
        * \param GtkWidget *widget : the widget that will be placed into the fixed
        */
        void addWidget(GtkWidget *widget);


        /**
        * \brief move a widget that is in the fixed, at location <i>x, y</i>
        * \param Widget &widget : the widget that will be moved on the fixed
        * \param int x : the <i>x</i> coordinate
        * \param int y : the <i>y</i> coordinate
        */
        void move(Widget &widget, int x, int y);


        /**
        * \brief move a widget that is in the fixed, at location <i>x, y</i>
        * \param GtkWidget *widget : the widget that will be moved on the fixed
        * \param int x : the <i>x</i> coordinate
        * \param int y : the <i>y</i> coordinate
        */
        void move(GtkWidget *widget, int x, int y);


    };


};




#endif // FIXED_HPP_INCLUDED
