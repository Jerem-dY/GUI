#include "Range.hpp"


namespace GUI{


    GtkRange *Range::getRange(){

        return GTK_RANGE(m_widget);

    }

    void Range::setValue(double value){

        gtk_range_set_value(getRange(), value);

    }


    double Range::getValue(){

        return gtk_range_get_value(getRange());

    }

    std::string const Range::VALUE_CHANGED{ "value-changed" };


}
