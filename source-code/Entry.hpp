#ifndef ENTRY_HPP_INCLUDED
#define ENTRY_HPP_INCLUDED

#include "Widget.hpp"


namespace GUI
{

    class Entry : public Widget
    /**
    * \brief A widget where the user can write something stupid
    * \author jejeleterrible
    */
    {

    public:
        /**
        * \brief The default constructor
        */
        Entry();

        /**
        * \brief get the widget as a GtkEntry, from Gtk+
        * \return GtkEntry* : the entry
        */
        GtkEntry *getEntry(void) const;

        /**
        * \brief Set the text of the entry
        * \param std::string text : the text for the entry
        */
        void setText(const std::string &text);

        /**
        * \brief Set the text of the entry
        * \param gchar *text : the text for the entry
        */
        void setText(gchar *text);

        /**
        * \brief Set the buffer of the entry
        * \param GtkEntryBuffer *buffer : the buffer for the entry
        */
        void setBuffer(GtkEntryBuffer *buffer);

        /**
        * \brief Get the text of the entry
        * \return std::string text : the text for the entry
        */
        std::string getText(void) const;

        /**
        * \brief Get the buffer of the entry
        * \return GtkEntryBuffer *buffer : the buffer for the entry
        */
        GtkEntryBuffer *getBuffer(void) const;

    };

};

#endif // ENTRY_HPP_INCLUDED
