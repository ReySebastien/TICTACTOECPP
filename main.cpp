#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>
#include <stdlib.h>


int main(){

    bool partiegagnee = false;
    Tictactoe jeu = Tictactoe();
    int numeroCase;


    while(!partiegagnee){
        
        jeu.afficheGrille();
        std::cin >> numeroCase;
        jeu.ajouteSymbole(numeroCase%3,numeroCase/3);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale() || jeu.testeJeuNul();
        jeu.finTour();

    }

    system("pause");
    return 0;
}