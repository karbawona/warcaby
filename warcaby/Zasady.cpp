//
//  Zasady.cpp
//  warcaby
//
//  Created by Ola on 07.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Zasady.hpp"



void Zasady:: zaladuj_plansze() {
    teksturaZasad.loadFromFile(resourcePath() + "tloZasady.png" );
    obrazekZasad.setTexture(teksturaZasad);
}

void Zasady:: rysuj_plansze(Okno &okno){
    okno.oknoAplikacji->draw (obrazekZasad);
}


void Zasady:: zaladuj_obrazek(){
    teksturaWyjscia.loadFromFile(resourcePath() + "wyjscieZasady.png" );
    obrazekWyjscia.setTexture(teksturaWyjscia);
}

void Zasady:: rysuj_obrazek(Okno &okno) {
    okno.oknoAplikacji->draw (obrazekWyjscia);
    obrazekWyjscia.setPosition(sf::Vector2f(1400, 0));
}

bool Zasady:: klikniecie_wyjscie() {
    
    return obrazekWyjscia.getGlobalBounds().contains(zdarzenie.mouseMove.x, zdarzenie.mouseMove.y);
}

bool Zasady :: klikniecie_menu(Okno &okno) {
    
    return obrazekWyjscia.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}
