//
//  Okno.hpp
//  warcaby
//
//  Created by Ola on 01.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//
/*
 
 Klasa, po której dziedziczą klasy Menu i Glowna_gra.
 Klasa odpowiedzialna za stworzenie samego okna, bez wypełniania go danym tłem.
 
 */
#ifndef Okno_hpp
#define Okno_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"


class Okno {
    
public:
    Okno() {
        petlaGry = true;
    }
    
    ~Okno() {}

    void zaladuj_plansze() {}
    void rysuj_plansze() {}
    void utworz_okno();
    void wyczysc_okno();
    void wyswietl_plansze();
    void sprawdzaj_zamkniecie();
    void zaladuj_obrazki();

  
    //dodac ikone :D
    bool petlaGry;
    sf::RenderWindow* oknoAplikacji;
    sf::Event zdarzenie;
    
};


#endif /* Okno_hpp */
