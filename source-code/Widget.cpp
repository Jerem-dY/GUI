#include "Widget.hpp"


namespace GUI{



    GObject *Widget::getGObject(void) const{

        return G_OBJECT(m_widget);

    }


    GtkWidget *Widget::getWidget(void) const{

        return m_widget;

    }


    void Widget::setWidget(GtkWidget *widget){

        m_widget = widget;

    }


    void Widget::connect( const std::string &signal, void (*func)(), gpointer data){

        g_signal_connect(G_OBJECT(m_widget), signal.c_str(), G_CALLBACK(func), data);

    }


    void Widget::connect(const std::string &signal, void (*func)(GtkWidget*, void*), gpointer data){

        g_signal_connect(G_OBJECT(m_widget), signal.c_str(), G_CALLBACK(func), data);

    }


    void Widget::setBg(Color *color){

        gtk_widget_modify_bg(m_widget, GTK_STATE_NORMAL,color->getGdkColor());

    }


    void Widget::setFg(Color *color){

        gtk_widget_modify_fg(m_widget, GTK_STATE_NORMAL, color->getGdkColor());

    }


     void Widget::show(void) const{

        gtk_widget_show(m_widget);

    }


    void Widget::showAll(void) const{

        gtk_widget_show_all(m_widget);

    }


    void Widget::hide(void) const{

        gtk_widget_hide(m_widget);

    }


    Widget::~Widget(){

        //delete m_widget;
        gtk_widget_destroy(m_widget);

    }

    std::string const Widget::SHOW{ "show" };
    std::string const Widget::HIDE{ "hide" };


}
