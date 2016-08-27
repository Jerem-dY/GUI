#include "Label.hpp"

#define UTF8(string) g_locale_to_utf8(string, -1, NULL, NULL, NULL)

namespace GUI{


    Label::Label(const std::string &text){

        m_widget = gtk_label_new(text.c_str());

    }


    void Label::setText(const std::string &text, bool utf8, bool markup){

        const char *temp;

        if(utf8)
            temp = UTF8(text.c_str());
        else
            temp = text.c_str();


        if(markup)
            gtk_label_set_markup(getLabel(), temp);

        else
            gtk_label_set_text(getLabel(), temp);

    }


    void Label::setJustify(GtkJustification type){

        gtk_label_set_justify(getLabel(), type);

    }


    std::string Label::getText(void) const{

        std::string str(gtk_label_get_text(getLabel()));

        return str;

    }


    GtkLabel *Label::getLabel(void) const {

        return GTK_LABEL(m_widget);


    }

}
