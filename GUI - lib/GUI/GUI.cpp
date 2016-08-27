#include "GUI.hpp"



namespace GUI{


    void init(int *argc, char ***argv){

        gtk_init(argc, argv);

    }


    void mainLoop(){

        gtk_main();

    }


}
