#ifndef BOX_HPP_INCLUDED
#define BOX_HPP_INCLUDED

#include "../Container.hpp"



namespace GUI{


    class Box : public Container
    /**
    * \brief A box layout organize widgets on a single row or a single column
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Default constructor
        * \param bool orientation : orientation of the box (0=horizontal)
        * \param int spacing : empty space between widgets
        */
        Box(bool orientation=0, int spacing=5);


        /**
        * \brief Get the box as a GtkBox, from Gtk+
        * \return GtkBox* : the box
        */
        GtkBox *getBox();


        /**
        * \brief Pack the child from the start of the box
        * \param Widget &widget : the child
        * \param bool expand : give extra space to the widget
        * \param bool fill : if expand is <i>true</i>, fill the space
        */
        void pack(Widget &widget, bool expand=false, bool fill=false, unsigned int padding=0);


        /**
        * \brief Pack the child from the start of the box
        * \param GtkWidget *widget : the child
        * \param bool expand : give extra space to the widget
        * \param bool fill : if expand is <i>true</i>, fill the space
        */
        void pack(GtkWidget *widget, bool expand=false, bool fill=false, unsigned int padding=0);


        /**
        * \brief Pack the child from the end of the box
        * \param Widget &widget : the child
        * \param bool expand : give extra space to the widget
        * \param bool fill : if expand is <i>true</i>, fill the space
        */
        void packEnd(Widget &widget, bool expand=false, bool fill=false, unsigned int padding=0);


        /**
        * \brief Pack the child from the end of the box
        * \param Widget &widget : the child
        * \param bool expand : give extra space to the widget
        * \param bool fill : if expand is <i>true</i>, fill the space
        */
        void packEnd(GtkWidget *widget, bool expand=false, bool fill=false, unsigned int padding=0);

    };


};

#endif // BOX_HPP_INCLUDED
