#ifndef RANGE_HPP_INCLUDED
#define RANGE_HPP_INCLUDED

#include "Widget.hpp"



namespace GUI{


    class Range : public Widget
    /**
    * \brief Base class for widgets which visualize an adjustment
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Get the current value of the widget
        * \return double : the value
        */
        virtual double getValue();


        /**
        * \brief Get the range as a GtkRange, from Gtk+
        * \return GtkRange* : the range
        */
        GtkRange *getRange();


        /**
        * \brief Set the current value of the widget
        * \param double value : the value to set to the widget
        */
        virtual void setValue(double value);

        static const std::string VALUE_CHANGED;

    };


};


#endif // RANGE_HPP_INCLUDED
