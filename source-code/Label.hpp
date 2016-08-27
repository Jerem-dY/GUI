#ifndef LABEL_HPP_INCLUDED
#define LABEL_HPP_INCLUDED

#include <iostream>
#include "gtk/gtk.h"
#include "Widget.hpp"


namespace GUI{

    class Label : public Widget
    /**
    * \brief Class representing a label, wich show text
    * \author jejeleterrible
    */
    {
    public:
        /**
        * \brief Constructor of the class
        * \param std::string <b>text</b> : the text of the label
        */
        Label(const std::string &text="");

        /**
        * \brief Set the text of the label
        * \param std::string <b>text</b> : the new text of the label
        * \param bool utf8 : convert to utf8
        * \param bool markup : use pango tags to format the label
        */
        void setText(const std::string &text, bool utf8=false, bool markup=false);


        /**
        * \brief Set the justify of the text
        * \param GtkJustification <b>type</b> : the justification of the text
        */
        void setJustify(GtkJustification type);

        /**
        * \brief Get the text
        * \return std::string : the text of the label
        */
        std::string getText(void) const;

        /**
        * \brief Get the widget as a GtkLabel, from Gtk+
        * \return GtkLabel* : the label
        */
        GtkLabel *getLabel(void) const;


    };

};


#endif // LABEL_HPP_INCLUDED
