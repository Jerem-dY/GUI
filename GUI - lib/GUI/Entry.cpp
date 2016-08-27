#include "Entry.hpp"


namespace GUI{

    Entry::Entry(){

        m_widget = gtk_entry_new();

    }


    GtkEntry *Entry::getEntry() const{

        return GTK_ENTRY(m_widget);

    }

    void Entry::setText(const std::string &text){

        gtk_entry_set_text(getEntry(), text.c_str());

    }

    void Entry::setText(gchar *text){

        gtk_entry_set_text(getEntry(), text);

    }


    void Entry::setBuffer(GtkEntryBuffer *buffer){

        gtk_entry_set_buffer(getEntry(), buffer);

    }



    std::string Entry::getText() const{

        std::string str(gtk_entry_get_text(getEntry()));

        return str;

    }



    GtkEntryBuffer *Entry::getBuffer() const{

        return gtk_entry_get_buffer(getEntry());

    }


}
