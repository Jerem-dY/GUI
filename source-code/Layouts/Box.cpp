#include "Box.hpp"



namespace GUI{

    Box::Box(bool orientation, int spacing){

        if(orientation == 0){
            m_widget = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, spacing);
        }
        else{
            m_widget = gtk_box_new(GTK_ORIENTATION_VERTICAL, spacing);
        }

    }


    GtkBox *Box::getBox(){

        return GTK_BOX(getWidget());

    }


    void Box::pack(Widget &widget, bool expand, bool fill, unsigned int padding){

        gtk_box_pack_start(getBox(), widget.getWidget(), expand, fill, padding);

    }


    void Box::pack(GtkWidget *widget, bool expand, bool fill, unsigned int padding){

        gtk_box_pack_start(getBox(), widget, expand, fill, padding);

    }


    void Box::packEnd(Widget &widget, bool expand, bool fill, unsigned int padding){

        gtk_box_pack_end(getBox(), widget.getWidget(), expand, fill, padding);

    }


    void Box::packEnd(GtkWidget *widget, bool expand, bool fill, unsigned int padding){

        gtk_box_pack_end(getBox(), widget, expand, fill, padding);

    }


}
