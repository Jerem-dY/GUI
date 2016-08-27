#include "ComboBox.hpp"


namespace GUI{


    ComboBox::ComboBox(bool entry)
    {

        if(entry){
            m_widget = gtk_combo_box_text_new_with_entry();
        }
        else{
            m_widget = gtk_combo_box_text_new();
        }

    }


    GtkComboBoxText *ComboBox::getComboBoxText(){

        return GTK_COMBO_BOX_TEXT(m_widget);

    }


    template <>
    void ComboBox::append<std::string>(const std::string &value){

        gtk_combo_box_text_append(getComboBoxText(), NULL, value.c_str());

    }


    template <typename T>
    void ComboBox::append(const T &value){

        std::string temp = std::to_string(value);
        gtk_combo_box_text_append(getComboBoxText(), NULL, temp.c_str());

    }


    std::string ComboBox::getActiveText(){

        std::string temp = gtk_combo_box_text_get_active_text(getComboBoxText());
        return temp;

    }



}
