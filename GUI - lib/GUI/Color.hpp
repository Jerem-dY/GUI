#ifndef COLOR_HPP_INCLUDED
#define COLOR_HPP_INCLUDED

#include <gtk/gtk.h>
#include <iostream>
#include <cmath>


namespace GUI{


    class Color
    /**
    * \brief This class represents colors, for background and foreground
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Default constructor
        * \param uint8_t r : the Red channel
        * \param uint8_t g : the Green channel
        * \param uint8_t b : the Blue channel
        */
        Color(uint8_t r=255, uint8_t g=255, uint8_t b=255);


        /**
        * \brief Get the color as a GdkColor, from the Gdk lib
        * \return GdkColor* : the color
        */
        GdkColor *getGdkColor();


        void setRed(uint8_t r);


        /**
        * \brief Get the red channel
        * \return uint8_t : the value of the channel
        */
        uint8_t getRed() const;


        void setGreen(uint8_t g);


        /**
        * \brief Get the green channel
        * \return uint8_t : the value of the channel
        */
        uint8_t getGreen() const;


        void setBlue(uint8_t b);


        /**
        * \brief Get the blue channel
        * \return uint8_t : the value of the channel
        */
        uint8_t getBlue() const;


        /**
        * \brief The default black color
        */
        static Color Black;


        /**
        * \brief The default green color
        */
        static Color Green;


        /**
        * \brief The default red color
        */
        static Color Red;


        /**
        * \brief The default blue color
        */
        static Color Blue;


    private:

        /**
        * \brief The color as a GdkColor
        */
        GdkColor m_color;



    };


};

#endif // COLOR_HPP_INCLUDED
