//
//  Okno.cpp
//  warcaby
//
//  Created by Ola on 01.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Okno.hpp"

void Okno:: utworz_okno(){
    
    oknoAplikacji = new sf::RenderWindow(sf::VideoMode(1700, 1200), "Warcaby, Aleksandra Klein");

}


void Okno::  wyczysc_okno(){
    oknoAplikacji->clear (sf::Color::Black);
}


void Okno :: wyswietl_plansze() {
    oknoAplikacji->display();
}

void Okno :: sprawdzaj_zamkniecie(){
    
    while( oknoAplikacji->pollEvent (zdarzenie) )
    {
        if( zdarzenie.type == sf::Event::Closed ) {
            oknoAplikacji->close();
        petlaGry = false;
        }
        
        if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape ) {
            oknoAplikacji->close();
        petlaGry = false;
        }
        
        if( zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle ) {
            oknoAplikacji->close();
        petlaGry = false;
        }
    }
}

void Okno :: zaladuj_obrazki() {}

//void Okno :: rysuj_obrazki() {}
