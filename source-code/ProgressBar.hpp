#ifndef PROGRESSBAR_HPP_INCLUDED
#define PROGRESSBAR_HPP_INCLUDED

#include "Widget.hpp"



namespace GUI{


    class ProgressBar : public Widget
    /**
    * \brief Show the progress of a task
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Default constructor of the class
        */
        ProgressBar();


        /**
        * \brief Get the widget as a GtkProgressBar, from Gtk+
        * \return GtkProgressBar* : the progress bar
        */
        GtkProgressBar *getProgressBar(void);


        /**
        * \brief Set the value of the progress bar (0.0 - 1.0)
        * \param unsigned short int value : absolute value to apply to the progress bar
        */
        void setValue(double value);


        /**
        * \brief Set the percentage of the progress bar (0.0 - 100.0)
        * \param unsigned short int value : absolute value to apply to the progress bar
        */
        void setPercent(double value);


        /**
        * \brief Add the double <i>value</i> to the value of the progressbar
        * \param double value : number to add to the progress bar's value
        */
        void add(double value);


    };



};



#endif // PROGRESSBAR_HPP_INCLUDED
