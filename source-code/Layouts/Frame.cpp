#include "Frame.hpp"



namespace GUI{


    Frame::Frame(const std::string &label){

        m_widget = gtk_frame_new(label.c_str());

    }


    GtkFrame *Frame::getFrame(){

        return GTK_FRAME(m_widget);

    }


    void Frame::setLabel(const std::string &label){

        gtk_frame_set_label(getFrame(), label.c_str());

    }



    std::string Frame::getLabel(){

        std::string temp = gtk_frame_get_label(getFrame());

        return temp;

    }


    void Frame::setAlign(float xAlign, float yAlign){

        gtk_frame_set_label_align(getFrame(), xAlign, yAlign);

    }


    void Frame::setLabelWidget(Label &label){

        gtk_frame_set_label_widget(getFrame(), label.getWidget());

    }


    GtkWidget *Frame::getLabelWidget(){

        GtkWidget *lbl = gtk_frame_get_label_widget(getFrame());
        return lbl;

    }


}
