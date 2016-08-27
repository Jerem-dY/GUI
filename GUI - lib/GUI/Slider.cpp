#include "Slider.hpp"


namespace GUI{


    Slider::Slider(bool orientation){

        if(orientation == false){
            m_widget = gtk_scale_new(GTK_ORIENTATION_HORIZONTAL, NULL);
        }
        else if(orientation){
            m_widget = gtk_scale_new(GTK_ORIENTATION_VERTICAL, NULL);
        }
        else{
            printf("\nError with the orientation of the slider\n");
        }

    }


    Slider::Slider(bool orientation, double min, double max, double step){

        if(orientation == false){
            m_widget = gtk_scale_new_with_range(GTK_ORIENTATION_HORIZONTAL, min, max, step);
        }
        else if(orientation){
            m_widget = gtk_scale_new_with_range(GTK_ORIENTATION_VERTICAL, min, max, step);
        }
        else{
            printf("\nError with the orientation of the slider\n");
        }


    }





}
