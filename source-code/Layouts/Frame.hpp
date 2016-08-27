#ifndef FRAME_HPP_INCLUDED
#define FRAME_HPP_INCLUDED

#include "../Container.hpp"
#include "../Label.hpp"


namespace GUI{

    class Frame : public Container
    /**
    * \brief A container with a beautiful frame and a label
    * \author jejeleterrible
    */
    {

    public:

        /**
        * \brief Default constructor
        * \param const std::string &label : the text of the frame
        */
        Frame(const std::string &label);


        /**
        * \brief Get the frame as a GtkFrame, from Gtk+
        * \return GtkFrame* : the frame
        */
        GtkFrame *getFrame();


        /**
        * \brief Set the text of the frame
        * \param const std::string &label : the new text of the frame
        */
        void setLabel(const std::string &label);


        /**
        * \brief Get the text of the frame
        * \return std::string : the text of the frame
        */
        std::string getLabel();


        /**
        * \brief Set the alignement of the text
        * \param float xAlign : the alignement on the <i>x</i> axe
        * \param float yAlign : the alignement on the <i>y</i> axe
        */
        void setAlign(float xAlign, float yAlign);


        /**
        * \brief Set the label of the frame
        * \param Label &label : the label
        */
        void setLabelWidget(Label &label);


        /**
        * \brief Get the frame's label as a GtkWidget, from Gtk+
        * \return GtkWidget* : the label
        */
        GtkWidget *getLabelWidget();

    };


};



#endif // FRAME_HPP_INCLUDED
