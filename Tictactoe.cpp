#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"


    Tictactoe::Tictactoe(){
}

    void Tictactoe::afficheGrille(){
       grilleDeJeu.affiche();
       std::cout << std::endl;
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        grilleDeJeu.setContent(x, y, symboleCourant);

    }

    bool Tictactoe::testeVictoireVerticale(){
        for(int i=0, i<3, i++){
            if(grilleDeJeu.getContent(i,0) != ' ' && grilleDeJeu.getContent(i,0) == grilleDeJeu.getContent(i,1) && grilleDeJeu.getContent(i,0) == grilleDeJeu.getContent(i,2)){
                std::cout << "Gagné" << std::endl; 
                return true;
            }
        }
    }

    bool Tictactoe::testeVictoireHorizontale(){
        for(int i=0, i<3, i++){
            if(grilleDeJeu.getContent(0,i) != ' ' && grilleDeJeu.getContent(0,i) == grilleDeJeu.getContent(1,i ) && grilleDeJeu.getContent(0,i) == grilleDeJeu.getContent(2,i)){
                std::cout << "Gagné" << std::endl; 
                return true;
            }
        }
    }

    bool Tictactoe::testeVictoireDiagonale(){
        for(int i=0, i<3, i++){
            if(grilleDeJeu.getContent(i,i) != ' ' && grilleDeJeu.getContent(i,i) == grilleDeJeu.getContent(i+1,i+1) && grilleDeJeu.getContent(i, i) == grilleDeJeu.getContent(i+2,i+2)){
                std::cout << "Gagné" << std::endl; 
                return true;
            }
        }
    }

    bool Tictactoe::testeJeuNul(){
        if(numeroTour == 9){
            return true;
        }

    }

    void Tictactoe::finTour(){

    }

#endif