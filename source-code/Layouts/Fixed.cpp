#include "Fixed.hpp"


namespace GUI{


    Fixed::Fixed(){

        m_widget = gtk_fixed_new();

    }


    GtkFixed *Fixed::getFixed(){

        return GTK_FIXED(m_widget);

    }


    void Fixed::addWidget(Widget &widget, int x, int y){

        gtk_fixed_put(getFixed(), widget.getWidget(), x, y);

    }


    void Fixed::addWidget(Widget &widget){

        gtk_fixed_put(getFixed(), widget.getWidget(), 1, 1);

    }


    void Fixed::addWidget(GtkWidget *widget){

        gtk_fixed_put(getFixed(), widget, 1, 1);

    }


    void Fixed::move(Widget &widget, int x, int y){

        gtk_fixed_move(getFixed(), widget.getWidget(), x, y);

    }


    void Fixed::move(GtkWidget *widget, int x, int y){

        gtk_fixed_move(getFixed(), widget, x, y);

    }

}
