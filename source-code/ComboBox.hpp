#ifndef COMBOBOX_HPP_INCLUDED
#define COMBOBOX_HPP_INCLUDED

#include "Widget.hpp"
#include <vector>


namespace GUI{

    class ComboBox : public Widget
    /**
    * \brief A widget used to choose from a list of items
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Default constructor
        * \param bool entry : put an entry ?
        */
        ComboBox(bool entry=false);


        /**
        * \brief get the ComboBox as a GtkComboBoxText, from Gtk+
        * \return GtkComboBoxText* : the ComboBox
        */
        GtkComboBoxText *getComboBoxText();


        /**
        * \brief append a value into the combobox
        * \arg typename T : the type of the value
        * \param const T &value : the value
        */
        template <typename T>
        void append(const T &value);


        /**
        * \brief Get the text selected or entered in the entry
        * \return std::string : the text
        */
        std::string getActiveText();


    };


};


#endif // COMBOBOX_HPP_INCLUDED
