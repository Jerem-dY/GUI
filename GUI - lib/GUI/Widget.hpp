#ifndef WIDGET_HPP_INCLUDED
#define WIDGET_HPP_INCLUDED

#include <iostream>
#include "gtk/gtk.h"
#include "Color.hpp"



namespace GUI{


    class Widget
    /**
    * \brief Abstract class that represents widgets
    * \author jejeleterrible
    */
    {

    public:


        /**
        * \brief Get the widget as a GObject from the glib
        */
        GObject *getGObject() const;

        /**
        * \brief Get the widget as a GtkWidget from Gtk+
        */
        GtkWidget *getWidget() const;


        /**
        * \brief Set the widget (warning ! will overwrite the previous widget)
        * \param GtkWidget *widget : the new widget
        */
        void setWidget(GtkWidget *widget);


        /**
        * \brief Connect the widget with the function <i>func</i> to the signal <i>signal</i>
        * \param int signal : the wished signal
        * \param void (*func) () : the callback function
        * \param gpointer data : a pointer to a data
        */
        void connect(const std::string &signal, void (*func)(), gpointer data=NULL);


        /**
        * \brief Connect the widget with the function <i>func</i> to the signal <i>signal</i>
        * \param int signal : the wished signal
        * \param void (*func) () : the callback function
        * \param gpointer data : a pointer to a data
        */
        void connect(const std::string &signal, void (*func)(GtkWidget*, void*), gpointer data=NULL);


        /**
        * \brief Set the widget's background color
        * \param Color &color : the color to set
        */
        void setBg(Color *color);


        /**
        * \brief Set the widget's foreground color
        * \param Color &color : the color to set
        */
        void setFg(Color *color);


        /**
        * \brief Show the widget
        */
        void show() const;


        /**
        * \brief Show the widget and its children
        */
        void showAll() const;


        /**
        * \brief Hide the widget
        */
        void hide() const;


        static const std::string SHOW;
        static const std::string HIDE;


        virtual ~Widget();




    protected:

        GtkWidget *m_widget; /**< Pointer to the widget*/



    };


};


#endif // WIDGET_HPP_INCLUDED
