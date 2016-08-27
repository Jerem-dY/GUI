#include "ProgressBar.hpp"

namespace GUI{


    ProgressBar::ProgressBar(){

        m_widget = gtk_progress_bar_new();

    }


    GtkProgressBar *ProgressBar::getProgressBar(){

        return GTK_PROGRESS_BAR(m_widget);

    }

    void ProgressBar::setValue(double value){

        gtk_progress_bar_set_fraction(getProgressBar(), value);

    }


    void ProgressBar::setPercent(double value){

        gtk_progress_bar_set_fraction(getProgressBar(), value/100);

    }


    void ProgressBar::add(double value){

        double vl = gtk_progress_bar_get_fraction(getProgressBar());
        vl += value;

        if(value > 1.0 || value < 0.0){
            std::cout << "Out of limit" << std::endl;
            return;
        }

        gtk_progress_bar_set_fraction(getProgressBar(), vl);

    }


}
