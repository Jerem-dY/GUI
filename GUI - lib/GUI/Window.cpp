#include "Window.hpp"

namespace GUI{


    Window::Window(void){
        m_widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    }

    Window::Window(const std::string &title){

        m_widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        gtk_window_set_title(GTK_WINDOW(m_widget), (const gchar*)title.c_str());
    }



    GtkWindow *Window::getWindow(void) const{

        return GTK_WINDOW(m_widget);

    }


    void Window::iconify(bool isIconified){

        if(isIconified)
            gtk_window_iconify(getWindow());

        else
            gtk_window_deiconify(getWindow());

    }


    void Window::maximize(bool isMaximized){

        if(isMaximized)
            gtk_window_maximize(getWindow());

        else
            gtk_window_unmaximize(getWindow());

    }


    void Window::setIconFromFile(const std::string &filename){

        gtk_window_set_icon_from_file(getWindow(), filename.c_str(), NULL);

    }


    void Window::setTitle(const std::string &title){

        gtk_window_set_title(getWindow(), title.c_str());

    }



    void Window::setDefaultSize(int width, int height){

        gtk_window_set_default_size(getWindow(), width, height);

    }


    void Window::setSize(int width, int height){

        gtk_window_resize(getWindow(), width, height);

    }


    std::string Window::getTitle(){

        std::string title = gtk_window_get_title(getWindow());
        return title;

    }


    void Window::move(int x, int y){

        gtk_window_move(getWindow(), x, y);

    }



    std::vector<int> Window::getPosition(){

        std::vector<int> vec;
        int *temp;

        gtk_window_get_position(getWindow(), temp, ++temp);

        vec.push_back(*(--temp));
        vec.push_back(*(++temp));

        return vec;

    }



    std::string const Window::DELETED{ "delete-event" };



}
