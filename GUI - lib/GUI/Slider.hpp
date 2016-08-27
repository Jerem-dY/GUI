#ifndef SLIDER_HPP_INCLUDED
#define SLIDER_HPP_INCLUDED

#include "Range.hpp"


namespace GUI{

    class Slider : public Range
    /**
    * \brief Select a value from a range
    * \author jejeleterrible
    */
    {

    public:


        /**
        * \brief Default consqtructor of the class
        * \param bool orientation : slider's orientation (0=horizontal)
        */
        Slider(bool orientation=false);


        /**
        * \brief Default consqtructor of the class
        * \param bool orientation : slider's orientation (0=horizontal)
        *
        * \param double min : minimum value of the scale
        * \param double max : maximum value of the scale
        * \param double step : the step of the slider (how many he will move per step)
        */
        Slider(bool orientation, double min, double max, double step);


        /**
        * \brief Get the slider as a GtkScale, from Gtk+
        * \return GtkScale* : the slider
        */
        GtkScale *getScale();

    };


};



#endif // SLIDER_HPP_INCLUDED
