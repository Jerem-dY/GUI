#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include <iostream>
#include <vector>
#include "gtk/gtk.h"
#include "Container.hpp"

namespace GUI{

    class Window : public Container
    /**
    * \brief This class represents windows (toplevel).
    * \author jejeleterrible
    */
    {

    public:
        /**
        * \brief The default constructor of the class
        */
        Window();

        /**
        * \brief The second constructor, with the title of the window
        * \param std::string title : the title of the window
        */
        Window(const std::string &title);

        /**
        * \brief Get the widget as a GtkWindow, from Gtk+
        * \return GtkWindow* : the window
        */
        GtkWindow *getWindow() const;

        /**
        * \brief Minimize the window
        * \param bool isMinimized : set the state
        */
        void iconify(bool isIconified);


        /**
        * \brief Maximize the window
        * \param bool isMaximized : set the state
        */
        void maximize(bool isMaximized);


        /**
        * \brief Set the window's icon from a file
        * \param const std::string &filename : name of the image file (path)
        */
        void setIconFromFile(const std::string &filename);


        /**
        * \brief Set the title of the window
        * \param const std::string &title : new title
        */
        void setTitle(const std::string &title);


        /**
        * \brief Get the window's title
        * \return std::string : the title
        */
        std::string getTitle();


        /**
        * \brief Set the title of the window
        * \param int width : width of the default size
        * \param int height : height of the default size
        */
        void setDefaultSize(int width, int height);


        /**
        * \brief Set the title of the window
        * \param int width : width of the size
        * \param int height : height of the size
        */
        void setSize(int width, int height);


        /**
        * \brief Move the window to the given coordinates
        * \param int x : the <i>x</i> coordinate
        * \param int y : the <i>y</i> coordinate
        */
        void move(int x, int y);



        std::vector<int> getPosition();


        static const std::string DELETED;




    };

};



#endif // WINDOW_HPP_INCLUDED
