#include "Container.hpp"


namespace GUI{

    GtkContainer *Container::getContainer() const{

        return GTK_CONTAINER(m_widget);

    }


    void Container::addWidget(Widget &widget){

        gtk_container_add(getContainer(), widget.getWidget());

    }

    void Container::addWidget(GtkWidget *widget){

        gtk_container_add(getContainer(), widget);

    }

    void Container::removeWidget(Widget &widget){

        gtk_container_remove(getContainer(), widget.getWidget());

    }

    void Container::removeWidget(GtkWidget *widget){

        gtk_container_remove(getContainer(), widget);

    }

}
