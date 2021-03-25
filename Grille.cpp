#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

    Grille::Grille() { 
        _tableau = std::vector<char>(9, ' ');
        resetContent(); }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ return _tableau[x+(y)*3]; }
    
        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        _tableau[x+(y)*3] = nouveauContenu;
    }
        
    void Grille::affiche(){
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                std::cout << this->getContent(i,j);
                if(i!=3)  std::cout << " | ";
            }
            std::cout << std::endl;
            if(j!=3)  std::cout << " ------- " << std::endl;
    }
    }
    void Grille::resetContent(){for(int i=0;i<9;i++) _tableau[i] = ' ';}


#endif