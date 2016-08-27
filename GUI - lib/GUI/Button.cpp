#include "Button.hpp"


namespace GUI{

    Button::Button(){

        m_widget = gtk_button_new();

    }


    Button::Button(const std::string &label){

        m_widget = gtk_button_new_with_label(label.c_str());

    }


    Button::Button(const gchar *id){

        m_widget = gtk_button_new_from_stock(id);

    }


}
