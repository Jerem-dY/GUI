#include "Color.hpp"


namespace GUI{


    Color::Color(uint8_t r, uint8_t g, uint8_t b){


        m_color.red = pow(r, 2.0);
        m_color.green = pow(g, 2.0);
        m_color.blue = pow(b, 2.0);

    }


    uint8_t Color::getRed() const{

        return std::sqrt(m_color.red);

    }

    uint8_t Color::getGreen() const{

        return std::sqrt(m_color.green);

    }

    uint8_t Color::getBlue() const{

        return std::sqrt(m_color.blue);

    }


    void Color::setRed(uint8_t r){

        m_color.red = pow(r, 2.0);

    }


    void Color::setGreen(uint8_t g){

        m_color.green = pow(g, 2.0);

    }


    void Color::setBlue(uint8_t b){

        m_color.blue = pow(b, 2.0);

    }

    GdkColor *Color::getGdkColor(){

        return (&m_color);

    }



    Color Color::Red(255);
    Color Color::Green(0, 255);
    Color Color::Blue(0, 0, 255);

}
