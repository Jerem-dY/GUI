#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED


#include <iostream>
#include "gtk/gtk.h"
#include "Widget.hpp"

namespace GUI{

    class Container : public Widget
    /**
    * \brief An abstract class wich represents widgets that can contains other widgets
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Get the widget as a GtkContainer, from Gtk+
        * \return GtkContainer* : the container
        */
        GtkContainer *getContainer() const;

        /**
        * \brief Add a widget into the container
        * \param Widget &widget : the widget that will be added
        */
        virtual void addWidget(Widget &widget);

        /**
        * \brief Add a widget (as a GtkWidget) into the container
        * \param GtkWidget *widget : the widget that will be added
        */
        virtual void addWidget(GtkWidget *widget);

        /**
        * \brief Remove a widget from the container
        * \param Widget &widget : the widget that will be removed
        */
        virtual void removeWidget(Widget &widget);

        /**
        * \brief Remove a widget (as a GtkWidget) from the container
        * \param GtkWidget *widget : the widget that will be removed
        */
        virtual void removeWidget(GtkWidget *widget);

    };

};


#endif // CONTAINER_H_INCLUDED
