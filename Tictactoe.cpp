#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"


    Tictactoe::Tictactoe(){
}

    void Tictactoe::afficheGrille(){
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                std::cout << this-> ajouteSymbole(i,j);
                if(i!=3)  std::cout << " | ";
            }
            std::cout << std::endl;
            if(j!=3)  std::cout << " ------- " << std::endl;
        }
    }

    void Tictactoe::ajouteSymbole(int x, int y){

    }

    bool Tictactoe::testeVictoireVerticale(){

    }

    bool Tictactoe::testeVictoireHorizontale(){

    }

    bool Tictactoe::testeVictoireDiagonale(){

    }

    bool Tictactoe::testeJeuNul(){

    }

    void Tictactoe::finTour(){

    }

#endif