//
//  Glowna_gra.cpp
//  warcaby
//
//  Created by Ola on 30.11.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Glowna_gra.hpp"



void Glowna_gra :: zaladuj_plansze() {
    teksturaGry.loadFromFile(resourcePath() + "plansza.png" );
    obrazekGry.setTexture(teksturaGry);
}


void Glowna_gra :: rysuj_plansze(Okno & okno){
    okno.oknoAplikacji->draw (obrazekGry);
}

bool Glowna_gra:: klikniecie_menu(Okno &okno){
   return obrazekDoMenu.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}



void Glowna_gra :: zaladuj_omenu() {
    teksturaDoMenu.loadFromFile(resourcePath() + "wyjscieGra.png" );
    obrazekDoMenu.setTexture(teksturaDoMenu);
}


void Glowna_gra :: rysuj_omenu(Okno & okno){
    okno.oknoAplikacji->draw (obrazekDoMenu);
    obrazekDoMenu.setPosition(sf::Vector2f(1350, 20));
}


void Glowna_gra:: zapisz_do_pliku(std::string tekst, long int &ktory ) {
    
   
        plik.open( "plik.txt", std::ios::out | std::ios::app);
    if( ! plik.good())
        throw WyjatekPlik();

    plik << std :: endl << tekst ;
    plik << " po wykonaniu " << ktory << " krokow." << std :: endl;
    
 
    plik.close();
}

void Glowna_gra:: odczytaj_z_pliku(){
    
    std :: string pom;
    
    //WyjatekOtwierania *obj = new WyjatekOtwierania;
    
        plik.open("plik.txt", std::ios::in);
    
    if( ! plik.good())
        throw WyjatekOtwierania();

    
    while (std :: getline(plik, pom)) {
        std :: cout << pom << std :: endl;
    }
    
    
    plik.close();
    
}

